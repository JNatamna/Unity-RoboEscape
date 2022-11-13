using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public bool onlyDisplayPathGizmos;

    //2D Array to hold nodes to represent Grid
    Node[,] grid;
    public Vector2 size;

    //Layer that defines what is not walkable
    public LayerMask unwalkableMask;

    float nodeDiameter;
    public float nodeRadius;
    int sizeX, sizeY;

    void Awake()
    {
        //Check how many nodes can fit in grid/size
        nodeDiameter = nodeRadius * 2;
        sizeX = Mathf.RoundToInt(size.x / nodeDiameter);
        sizeY = Mathf.RoundToInt(size.y / nodeDiameter);

        MakeGrid();
    }

    void MakeGrid()
    {
        grid = new Node[sizeX, sizeY];
        Vector3 BottumLeftCorner = transform.position - Vector3.right * size.x / 2 - Vector3.forward * size.y / 2;

        //Check what nodes is not or are walkable
        for (int x = 0; x < sizeX; x++)
        {
            for (int y = 0; y < sizeY; y++)
            {
                //Check each node from buttom left to right incrementally for collision
                Vector3 worldPoint = BottumLeftCorner + Vector3.right * (x * nodeDiameter + nodeRadius) + Vector3.forward * (y * nodeDiameter + nodeRadius);
                //Bool returns true if it does not hit a collider
                bool walkable = !(Physics.CheckSphere(worldPoint, nodeRadius, unwalkableMask));
                //Populate grid with nodes
                grid[x, y] = new Node(walkable, worldPoint, x, y);
            }
        }
    }

    //Create a method to find what Node we wish to work with
    public Node SelectionNode(Vector3 worldPosition)
    {
        //Converting position to percent of Grid 
        float percentX = (worldPosition.x + size.x / 2) / size.x;
        float percentY = (worldPosition.z + size.y / 2) / size.y;

        //Get x and y position on 2D grid
        int x =  Mathf.FloorToInt(Mathf.Clamp((sizeX) * percentX, 0, sizeX - 1));
        int y = Mathf.RoundToInt((sizeY) * percentY);

        return grid[x, y];
    }

    //Loops neighbouring nodes 3 by 3 block of current node
    public List<Node> GetNeighbours(Node node)
    {
        List<Node> neighbours = new List<Node>();

        for (int x = -1; x <= 1; x++)
        {
            for (int y = -1; y <= 1; y++)
            {
                if (x == 0 && y == 0)
                {
                    //In this case we are checking currentNode and we will skip this iteration
                    continue;
                }

                int checkX = node.gridX + x;
                int checkY = node.gridY + y;

                //Check if node is inside grid
                if (checkX >= 0 && checkX < sizeX && checkY >= 0 && checkY < sizeY)
                {
                    neighbours.Add(grid[checkX, checkY]);
                }
            }
        }
        return neighbours;
    }

    public List<Node> path;
    
    void OnDrawGizmos()
    {
        //Gizmos to show size of grid in sceneview
        Gizmos.DrawWireCube(transform.position, new Vector3(size.x, 1, size.y));

        //Gizmos.DrawWireCube(transform.position, new Vector3(gridWorldSize.x, 1, gridWorldSize.y));
        /*
        if (onlyDisplayPathGizmos)
        {
            if (path != null)
            {
                foreach (Node n in path)
                {
                    Gizmos.color = Color.black;
                    Gizmos.DrawCube(n.worldPosition, Vector3.one * (nodeDiameter - .1f));
                }
            }
        }*/
        if(onlyDisplayPathGizmos)
        {

            if (grid != null)
            {
                foreach (Node n in grid)
                {
                    Gizmos.color = (n.walkable) ? Color.white : Color.red;
                    if (path != null)
                        if (path.Contains(n))
                            Gizmos.color = Color.black;
                    Gizmos.DrawCube(n.worldPosition, Vector3.one * (nodeDiameter - .1f));
                }
            }
        }

    }
}