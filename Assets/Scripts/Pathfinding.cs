using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Pathfinding : MonoBehaviour
{
    Grid grid;

    public Transform seeker, target;

    public LayerMask layerToIgnore;

    public FollowPath followPathScript;

    public GameObject walkButton;

    private void Awake()
    {
        grid = GetComponent<Grid>();
        followPathScript = followPathScript.GetComponent<FollowPath>();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && !followPathScript.followPath) {
            RaycastHit hitInfo;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if(Physics.Raycast(ray, out hitInfo, 100, ~layerToIgnore))
            {
                if (hitInfo.transform.gameObject.layer == LayerMask.NameToLayer("Walkable"))
                {
                    walkButton.SetActive(true);
                    target.position = hitInfo.point;
                    FindPath(seeker.position, target.position);
                }
                else
                {
                    Debug.Log("You cant walk here!");
                }
            }
        }
    }

    void FindPath(Vector3 startPos, Vector3 targetPos)
    {
        Node startNode = grid.SelectionNode(startPos);
        Node targetNode = grid.SelectionNode(targetPos);

        List<Node> openSet = new List<Node>();
        HashSet<Node> closedSet = new HashSet<Node>();

        openSet.Add(startNode);

        //Find node with lowest F cost
        while(openSet.Count > 0)
        {
            Node currentNode = openSet[0];

            for(int i = 1; i < openSet.Count; i++)
            {
                if(openSet[i].fCost < currentNode.fCost || (openSet[i].fCost == currentNode.fCost && openSet[i].hCost < currentNode.hCost))
                {
                    currentNode = openSet[i];
                }
            }

            //Remove node from open set and add to closed set
            openSet.Remove(currentNode);
            closedSet.Add(currentNode);

            //If looped all the way to last node (targetNode) then we are done looping and we've found a path
            if(currentNode == targetNode)
            {
                RetracePath(startNode, targetNode);
                return;
            }

            foreach (Node neighbour in grid.GetNeighbours(currentNode))
            {
                //Check if node is not walkable or is in closed list -> skip to next neighbour
                if(!neighbour.walkable || closedSet.Contains(neighbour))
                {
                    continue;
                }

                int costToNeighbour = currentNode.gCost + GetDistance(currentNode, neighbour);
                if(costToNeighbour < neighbour.gCost || !openSet.Contains(neighbour))
                {
                    neighbour.gCost = costToNeighbour;
                    neighbour.hCost = GetDistance(neighbour, targetNode);
                    neighbour.parent = currentNode;

                    if (!openSet.Contains(neighbour))
                    {
                        openSet.Add(neighbour);
                    }
                }
            }
        }
    }

    void RetracePath(Node startNode, Node endNode)
    {
        List<Node> path = new List<Node>();
        Node currentNode = endNode;

        while(currentNode != startNode)
        {
            path.Add(currentNode);
            currentNode = currentNode.parent;
        }

        path.Reverse();
        grid.path = path;
        followPathScript.GetPath(path);
        //walkButton.SetActive(true);
    }

    int GetDistance(Node nodeA, Node nodeB)
    {
        int distanceX = Mathf.Abs(nodeA.gridX - nodeB.gridX);
        int distanceY = Mathf.Abs(nodeA.gridY - nodeB.gridY);

        if (distanceX > distanceY)
        {
            return 14 * distanceY + 10 * (distanceX - distanceY);
        }
        else
        {
            return 14 * distanceX + 10 * (distanceY - distanceX);
        }
    }
}
