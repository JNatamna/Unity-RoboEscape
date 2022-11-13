#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.HashSet`1<Node>
struct HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<Node>
struct IEqualityComparer_1_tC4B728331A494AC14724650F8B9E8EBA2B842847;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD;
// System.Collections.Generic.List`1<Node>
struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6;
// System.Collections.Generic.HashSet`1/Slot<Node>[]
struct SlotU5BU5D_t5A873210E13CA2503F59F80AF9152B6E954928B5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Node[]
struct NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Node[,]
struct NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DistractionObject
struct DistractionObject_t5946DF5B2E98B629AEF42CA3F7659A0491C0E8CB;
// FollowPath
struct FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// Grid
struct Grid_t37B32D08A1358EBD823A43D75667D21355CE2922;
// HUD
struct HUD_t2B4CACC874B2D963F455E2D523544772E04311D3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// DigitalRuby.LightningBolt.LightningBoltScript
struct LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// MapComplete
struct MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Pathfinding
struct Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RunKyleYouMadeIt
struct RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Search
struct Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// StateMachine
struct StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB;
// Steering
struct Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameOver/<ChangeScene>d__8
struct U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D;
// MapComplete/<WaitForTransition>d__4
struct U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RunKyleYouMadeIt/<WaitForTransition>d__5
struct U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71;
// Steering/<Distracted>d__16
struct U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E;
IL2CPP_EXTERN_C String_t* _stringLiteral23F5E3B4C52B162E198A0857048E0681BB55089F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0918EE60F98A8B89C20CB5252BA71AA4B82488;
IL2CPP_EXTERN_C String_t* _stringLiteral40D974CDE54C074ADF3F524B7351AB03A5FEE612;
IL2CPP_EXTERN_C String_t* _stringLiteral4404E0BBA89CA927E634FA21E24B0FE0CF2FC39F;
IL2CPP_EXTERN_C String_t* _stringLiteral574DD84103EB80290E12F6A814354A0E2D89AC7B;
IL2CPP_EXTERN_C String_t* _stringLiteral674C10830F3A306BE5396778EDEAF6724FCDE919;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1C1A807BDBEEE2CD51762B10FECD15B6A2ACC1;
IL2CPP_EXTERN_C String_t* _stringLiteral99181037C4CA0EA54CA163AFB10319E84559E426;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD89264FA29303C82B9319EE8E2D08175E58C9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB07B4B21254C985B55EEDA7D34EFA4804BD6E5A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC44F23775EB846E5A38E8FF155ED69A258768AEA;
IL2CPP_EXTERN_C String_t* _stringLiteralC5BBFA4716EC233E3B4A37CEFC694363BE7A2E77;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE020BC6ECC701858BA99E83D4E495EC551B5829B;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7BC8C2C794C2D17E63707FD8CD0E86FBCB7CA5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mA4FC9719C9A443B11F64239D87B844747C58C0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrid_t37B32D08A1358EBD823A43D75667D21355CE2922_mB7D54C3601A45782C6C8D98FC8365E257ABF3951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearch_t07745B2D8D3E4E07C877207D91664573AF5CA1B8_mEA0E0A6B9479EB55EDA990AE64D076194B90A3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_mF2EA91FDA0114D2833EFA2416F9C37B3949DC955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSteering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130_m93C643416CAC08FEE51607A8B38F375D107F2215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB4CCC64E1286696B7FECA5A81CB92E8A42FFF6FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m8F2C24A96C292749058FD713F9374E8C1BA3B3CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m5A30ADD137E4DF16B4FA50972F9D84A252EE6DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF9D943A1FEAEA900503510ECF1BDDB9A83B00A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeSceneU3Ed__8_System_Collections_IEnumerator_Reset_mE291EF8CB61DB6787D367ECBEEAA6F47AEE2C732_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDistractedU3Ed__16_System_Collections_IEnumerator_Reset_m7AE6F1CAB81B2817EA7AA565ACAAD2E0D989A8D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForTransitionU3Ed__4_System_Collections_IEnumerator_Reset_mF910DD3ECE877B84E43E3237D8D49A4AD705DD3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m6672304A1C756D6201BD97CA272F3484C5F22EC0_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.HashSet`1<Node>
struct HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5A873210E13CA2503F59F80AF9152B6E954928B5* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>
struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Node>
struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameOver/<ChangeScene>d__8
struct U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D  : public RuntimeObject
{
	// System.Int32 GameOver/<ChangeScene>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOver/<ChangeScene>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// MapComplete/<WaitForTransition>d__4
struct U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A  : public RuntimeObject
{
	// System.Int32 MapComplete/<WaitForTransition>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MapComplete/<WaitForTransition>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MapComplete MapComplete/<WaitForTransition>d__4::<>4__this
	MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* ___U3CU3E4__this_2;
};

// RunKyleYouMadeIt/<WaitForTransition>d__5
struct U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71  : public RuntimeObject
{
	// System.Int32 RunKyleYouMadeIt/<WaitForTransition>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RunKyleYouMadeIt/<WaitForTransition>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RunKyleYouMadeIt RunKyleYouMadeIt/<WaitForTransition>d__5::<>4__this
	RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* ___U3CU3E4__this_2;
};

// Steering/<Distracted>d__16
struct U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68  : public RuntimeObject
{
	// System.Int32 Steering/<Distracted>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Steering/<Distracted>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Steering Steering/<Distracted>d__16::<>4__this
	Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<Node>
struct Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5  : public RuntimeObject
{
	// System.Boolean Node::walkable
	bool ___walkable_0;
	// UnityEngine.Vector3 Node::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_1;
	// System.Int32 Node::gridX
	int32_t ___gridX_2;
	// System.Int32 Node::gridY
	int32_t ___gridY_3;
	// System.Int32 Node::gCost
	int32_t ___gCost_4;
	// System.Int32 Node::hCost
	int32_t ___hCost_5;
	// Node Node::parent
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___parent_6;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Audio
struct Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Audio::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DistractionObject
struct DistractionObject_t5946DF5B2E98B629AEF42CA3F7659A0491C0E8CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DistractionObject::button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button_4;
};

// FollowPath
struct FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Node> FollowPath::pathToFollow
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ___pathToFollow_4;
	// System.Single FollowPath::speed
	float ___speed_5;
	// System.Int32 FollowPath::targetIndex
	int32_t ___targetIndex_6;
	// System.Boolean FollowPath::followPath
	bool ___followPath_7;
	// UnityEngine.Transform FollowPath::pathObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pathObject_8;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameOver::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.GameObject GameOver::fakePlayer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fakePlayer_5;
	// UnityEngine.Animator GameOver::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// UnityEngine.GameObject GameOver::animCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___animCamera_7;
	// UnityEngine.GameObject GameOver::defaultCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___defaultCamera_8;
	// UnityEngine.GameObject GameOver::buttons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttons_9;
};

// Grid
struct Grid_t37B32D08A1358EBD823A43D75667D21355CE2922  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Grid::onlyDisplayPathGizmos
	bool ___onlyDisplayPathGizmos_4;
	// Node[,] Grid::grid
	NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* ___grid_5;
	// UnityEngine.Vector2 Grid::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_6;
	// UnityEngine.LayerMask Grid::unwalkableMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___unwalkableMask_7;
	// System.Single Grid::nodeDiameter
	float ___nodeDiameter_8;
	// System.Single Grid::nodeRadius
	float ___nodeRadius_9;
	// System.Int32 Grid::sizeX
	int32_t ___sizeX_10;
	// System.Int32 Grid::sizeY
	int32_t ___sizeY_11;
	// System.Collections.Generic.List`1<Node> Grid::path
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ___path_12;
};

// HUD
struct HUD_t2B4CACC874B2D963F455E2D523544772E04311D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean HUD::stopTime
	bool ___stopTime_4;
	// UnityEngine.UI.Text HUD::timeButton
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timeButton_5;
	// UnityEngine.GameObject HUD::walkButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkButton_6;
	// UnityEngine.GameObject HUD::IdleMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___IdleMenu_7;
	// UnityEngine.GameObject HUD::triggerButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___triggerButton_8;
	// UnityEngine.GameObject HUD::trigger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trigger_9;
	// UnityEngine.GameObject HUD::stateManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stateManager_10;
};

// DigitalRuby.LightningBolt.LightningBoltScript
struct LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::StartObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StartObject_4;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::StartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___StartPosition_5;
	// UnityEngine.GameObject DigitalRuby.LightningBolt.LightningBoltScript::EndObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EndObject_6;
	// UnityEngine.Vector3 DigitalRuby.LightningBolt.LightningBoltScript::EndPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EndPosition_7;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Generations
	int32_t ___Generations_8;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::Duration
	float ___Duration_9;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::timer
	float ___timer_10;
	// System.Single DigitalRuby.LightningBolt.LightningBoltScript::ChaosFactor
	float ___ChaosFactor_11;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::ManualMode
	bool ___ManualMode_12;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Rows
	int32_t ___Rows_13;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::Columns
	int32_t ___Columns_14;
	// DigitalRuby.LightningBolt.LightningBoltAnimationMode DigitalRuby.LightningBolt.LightningBoltScript::AnimationMode
	int32_t ___AnimationMode_15;
	// System.Random DigitalRuby.LightningBolt.LightningBoltScript::RandomGenerator
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___RandomGenerator_16;
	// UnityEngine.LineRenderer DigitalRuby.LightningBolt.LightningBoltScript::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_17;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>> DigitalRuby.LightningBolt.LightningBoltScript::segments
	List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* ___segments_18;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::startIndex
	int32_t ___startIndex_19;
	// UnityEngine.Vector2 DigitalRuby.LightningBolt.LightningBoltScript::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_20;
	// UnityEngine.Vector2[] DigitalRuby.LightningBolt.LightningBoltScript::offsets
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___offsets_21;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationOffsetIndex
	int32_t ___animationOffsetIndex_22;
	// System.Int32 DigitalRuby.LightningBolt.LightningBoltScript::animationPingPongDirection
	int32_t ___animationPingPongDirection_23;
	// System.Boolean DigitalRuby.LightningBolt.LightningBoltScript::orthographic
	bool ___orthographic_24;
};

// MapComplete
struct MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator MapComplete::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// UnityEngine.AsyncOperation MapComplete::async
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___async_5;
};

// MenuScript
struct MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuScript::mainButtons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainButtons_4;
	// UnityEngine.GameObject MenuScript::aboutSection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___aboutSection_5;
};

// Pathfinding
struct Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Grid Pathfinding::grid
	Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* ___grid_4;
	// UnityEngine.Transform Pathfinding::seeker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___seeker_5;
	// UnityEngine.Transform Pathfinding::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// UnityEngine.LayerMask Pathfinding::layerToIgnore
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerToIgnore_7;
	// FollowPath Pathfinding::followPathScript
	FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* ___followPathScript_8;
	// UnityEngine.GameObject Pathfinding::walkButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkButton_9;
};

// RunKyleYouMadeIt
struct RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 RunKyleYouMadeIt::wayPointIndex
	int32_t ___wayPointIndex_4;
	// UnityEngine.Transform[] RunKyleYouMadeIt::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_5;
	// UnityEngine.Animator RunKyleYouMadeIt::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
};

// Search
struct Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Search::rays
	float ___rays_4;
	// System.Single Search::maxDistance
	float ___maxDistance_5;
	// System.Single Search::angle
	float ___angle_6;
	// UnityEngine.GameObject Search::goalTrigger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goalTrigger_7;
	// StateMachine Search::stateMachine
	StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* ___stateMachine_8;
	// UnityEngine.LayerMask Search::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_9;
};

// StateMachine
struct StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StateMachine/State StateMachine::currentState
	int32_t ___currentState_4;
	// UnityEngine.GameObject StateMachine::AI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AI_5;
	// Steering StateMachine::steeringScript
	Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* ___steeringScript_6;
	// Search StateMachine::searchScript
	Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* ___searchScript_7;
	// GameOver StateMachine::gameOverScript
	GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* ___gameOverScript_8;
};

// Steering
struct Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Steering::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single Steering::speed
	float ___speed_5;
	// UnityEngine.LayerMask Steering::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_6;
	// System.Boolean Steering::foundSomething
	bool ___foundSomething_7;
	// System.Single Steering::maxDistance
	float ___maxDistance_8;
	// UnityEngine.Transform[] Steering::waypoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___waypoints_9;
	// UnityEngine.Transform Steering::distractionWaypoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___distractionWaypoint_10;
	// UnityEngine.GameObject Steering::trigger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trigger_11;
	// System.Int32 Steering::waypointIndex
	int32_t ___waypointIndex_12;
	// System.Int32 Steering::randomWaypointIndex
	int32_t ___randomWaypointIndex_13;
	// System.Boolean Steering::randomPatrol
	bool ___randomPatrol_14;
	// StateMachine Steering::stateMachine
	StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* ___stateMachine_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Node[,]
struct NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* m_Items[1];

	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 m_Items[1];

	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_gshared (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_gshared (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_gshared (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void FollowPath::FollowThePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath_FollowThePath_m5F284F5A8532CEB14C0344624673FD4434752AE8 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Node>::get_Item(System.Int32)
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Node>::get_Count()
inline int32_t List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HUD>()
inline HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator GameOver::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_ChangeScene_m0A925CCBFD4753DA21CAB4BD3A3678979025D178 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameOver/<ChangeScene>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ed__8__ctor_m6E22A635E05E0B412C5FDC2157650325382D8DAD (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void Grid::MakeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_MakeGrid_m935EDA2FB0B68E5694B52255AF82D28762630C8A (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Void Node::.ctor(System.Boolean,UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m9F3EF830A7DF9FD11A93B2EC6D1D21E755F7246C (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, bool ____walkable0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____worldPos1, int32_t ____gridX2, int32_t ____gridY3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Node>::.ctor()
inline void List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Add(T)
inline void List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetUpperBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Node>::Contains(T)
inline bool List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<FollowPath>()
inline FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<StateMachine>()
inline StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* GameObject_GetComponent_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_mF2EA91FDA0114D2833EFA2416F9C37B3949DC955 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MapComplete::WaitForTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapComplete_WaitForTransition_m7B2E143DECD8B35FA2B6022178E8477EA865B8C1 (MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* __this, const RuntimeMethod* method) ;
// System.Void MapComplete/<WaitForTransition>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__4__ctor_m7A4A2979620FC5EFF11A0307E7469E5A2514C92F (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Grid>()
inline Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* Component_GetComponent_TisGrid_t37B32D08A1358EBD823A43D75667D21355CE2922_mB7D54C3601A45782C6C8D98FC8365E257ABF3951 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding::FindPath(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_FindPath_m09702569B04D17D1483CE94A1AA622981CBCAA29 (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Node Grid::SelectionNode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Grid_SelectionNode_mA1C37CFEE89790A647D781B1578E3BEA5E718B47 (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Node>::.ctor()
inline void HashSet_1__ctor_m5A30ADD137E4DF16B4FA50972F9D84A252EE6DE4 (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Int32 Node::get_fCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Node>::Remove(T)
inline bool List_1_Remove_mF9D943A1FEAEA900503510ECF1BDDB9A83B00A40 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Node>::Add(T)
inline bool HashSet_1_Add_mB4CCC64E1286696B7FECA5A81CB92E8A42FFF6FA (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Pathfinding::RetracePath(Node,Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_RetracePath_m3D2FC72EFA8294C7A4668E6C12CDE3609FFAF7BC (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___startNode0, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___endNode1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Node> Grid::GetNeighbours(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Grid_GetNeighbours_mF5A1B40694524E049978C24A360738FEAAE6CB3B (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___node0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Node>::GetEnumerator()
inline Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Node>::Dispose()
inline void Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84 (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Node>::get_Current()
inline Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_inline (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	return ((  Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Node>::Contains(T)
inline bool HashSet_1_Contains_m8F2C24A96C292749058FD713F9374E8C1BA3B3CF (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD*, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Int32 Pathfinding::GetDistance(Node,Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pathfinding_GetDistance_mA24E2C4498C81E9EC7A28486D38959E3812B613A (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___nodeA0, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___nodeB1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Node>::MoveNext()
inline bool Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415 (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Node>::Reverse()
inline void List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3 (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Void FollowPath::GetPath(System.Collections.Generic.List`1<Node>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath_GetPath_mED9196588FA8B38613108AC176F718E33212E196 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ___path0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RunKyleYouMadeIt::WaitForTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunKyleYouMadeIt_WaitForTransition_mE3CE81BF87DE6CB4762ED9032D2DDE3832F6A7CD (RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* __this, const RuntimeMethod* method) ;
// System.Void RunKyleYouMadeIt/<WaitForTransition>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__5__ctor_m7F0268B7F28EFFFCC1AFD27751D62CC0AB9A9C67 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<StateMachine>()
inline StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Steering>()
inline Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* GameObject_GetComponent_TisSteering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130_m93C643416CAC08FEE51607A8B38F375D107F2215 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Search>()
inline Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* GameObject_GetComponent_TisSearch_t07745B2D8D3E4E07C877207D91664573AF5CA1B8_mEA0E0A6B9479EB55EDA990AE64D076194B90A3AB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<GameOver>()
inline GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* Component_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mA4FC9719C9A443B11F64239D87B844747C58C0C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Steering::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Patrol_mAE9FF5344182E7BA6AE8C26709D0B2010635602F (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) ;
// System.Void Search::SearchForPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Search_SearchForPlayer_m3905128A3EC9E3703BFC2CD5C54711E58FB66A9D (Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* __this, const RuntimeMethod* method) ;
// System.Void Steering::Seek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Seek_m7A7009061D433FC480B4C1F25211DCDE605B7034 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) ;
// System.Void Steering::CheckDistraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_CheckDistraction_mE516B4629289F980358CB12C8978B2B01EF7D340 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) ;
// System.Void GameOver::InitializeSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_InitializeSequence_m8314354AD43F992D3150426C171D3F07DCAB6951 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Steering::Distracted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Steering_Distracted_m7BF581740EC29D8A9356E5AD84598A7B085B88F9 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) ;
// System.Void Steering/<Distracted>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistractedU3Ed__16__ctor_m21A82E82E3FA266FD6313012D7DA2650F3800DC4 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60 (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Add(T)
inline void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9, const RuntimeMethod*))List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline)(__this, ___item0, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Count()
inline int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::get_Item(System.Int32)
inline KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, int32_t, const RuntimeMethod*))List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_gshared)(__this, ___index0, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Key()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::RandomVector(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___end1, float ___offsetAmount2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___result3, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GetPerpendicularVector(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___directionNormalized0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___side1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::Clear()
inline void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::SelectOffsetFromAnimationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateFromMaterialChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GenerateLightningBolt(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, int32_t ___generation2, int32_t ___totalGenerations3, float ___offsetAmount4, const RuntimeMethod* method) ;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,UnityEngine.Vector3>>::.ctor()
inline void List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, const RuntimeMethod*))List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Audio::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_Awake_m986C6C6813C794727BB3B0CEA4D1344C1D87E4B0 (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void Audio::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_PlayMusic_m67F2371EC76AF36FC5EA7F5AE1EC6D43ECD455C8 (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	{
		// if (audioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_4;
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void Audio::StopMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio_StopMusic_mB9406EC5D5D3F987AF228DFF205E54FB70D10E1F (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_4;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void Audio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Audio__ctor_m77A1146A37D12C6FE8759416FFCC7B3C4DE470EB (Audio_t5EDE4F3C94E6BAD3E7FCCC3FB7F67C883C5CA5FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DistractionObject::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistractionObject_OnTriggerStay_mCC52E06B746D627DAFFBCF8C17D5DB1FD7176143 (DistractionObject_t5946DF5B2E98B629AEF42CA3F7659A0491C0E8CB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// button.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___button_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DistractionObject::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistractionObject_OnTriggerExit_mFF7A9F8A8BDD0FEF8258E631B08C87F9E57C54BE (DistractionObject_t5946DF5B2E98B629AEF42CA3F7659A0491C0E8CB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// button.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___button_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DistractionObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistractionObject__ctor_mDB717A7FFB1D129FBAB3B60BD41B3336DEEFA339 (DistractionObject_t5946DF5B2E98B629AEF42CA3F7659A0491C0E8CB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowPath::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath_Update_m2DF7630BCDCADFB1043BECD6C29E3C7FBCA8C7E5 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574DD84103EB80290E12F6A814354A0E2D89AC7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (followPath)
		bool L_0 = __this->___followPath_7;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// GetComponentInChildren<Animator>().SetBool("startWalking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral574DD84103EB80290E12F6A814354A0E2D89AC7B, (bool)1, NULL);
		// FollowThePath();
		FollowPath_FollowThePath_m5F284F5A8532CEB14C0344624673FD4434752AE8(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void FollowPath::GetPath(System.Collections.Generic.List`1<Node>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath_GetPath_mED9196588FA8B38613108AC176F718E33212E196 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < pathObject.childCount; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		// pathObject.GetChild(i).position = pathObject.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___pathObject_8;
		int32_t L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___pathObject_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// for (int i = 0; i < pathObject.childCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < pathObject.childCount; i++)
		int32_t L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___pathObject_8;
		int32_t L_8;
		L_8 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// pathToFollow = path;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_9 = ___path0;
		__this->___pathToFollow_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathToFollow_4), (void*)L_9);
		// for (int i = 0; i < path.Count; i++)
		V_1 = 0;
		goto IL_005e;
	}

IL_003d:
	{
		// pathObject.GetChild(i).position = path[i].worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___pathObject_8;
		int32_t L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_13 = ___path0;
		int32_t L_14 = V_1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_15;
		L_15 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_13, L_14, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___worldPosition_1;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_16, NULL);
		// for (int i = 0; i < path.Count; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < path.Count; i++)
		int32_t L_18 = V_1;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_19 = ___path0;
		int32_t L_20;
		L_20 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_19, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FollowPath::FollowThePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath_FollowThePath_m5F284F5A8532CEB14C0344624673FD4434752AE8 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0918EE60F98A8B89C20CB5252BA71AA4B82488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574DD84103EB80290E12F6A814354A0E2D89AC7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE020BC6ECC701858BA99E83D4E495EC551B5829B);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// if (targetIndex <= pathToFollow.Count-1)
		int32_t L_0 = __this->___targetIndex_6;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_1 = __this->___pathToFollow_4;
		int32_t L_2;
		L_2 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_1, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_011c;
		}
	}
	{
		// if (transform.position != pathToFollow[targetIndex].worldPosition)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_5 = __this->___pathToFollow_4;
		int32_t L_6 = __this->___targetIndex_6;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_7;
		L_7 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_5, L_6, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___worldPosition_1;
		bool L_9;
		L_9 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_4, L_8, NULL);
		if (!L_9)
		{
			goto IL_00ec;
		}
	}
	{
		// transform.transform.position = Vector3.MoveTowards(transform.position, pathToFollow[targetIndex].worldPosition, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_14 = __this->___pathToFollow_4;
		int32_t L_15 = __this->___targetIndex_6;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_16;
		L_16 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_14, L_15, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___worldPosition_1;
		float L_18 = __this->___speed_5;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_13, L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_20, NULL);
		// Vector3 direction = (pathToFollow[targetIndex].worldPosition - transform.position).normalized;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_21 = __this->___pathToFollow_4;
		int32_t L_22 = __this->___targetIndex_6;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_23;
		L_23 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_21, L_22, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___worldPosition_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		V_1 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(direction);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_28, NULL);
		V_0 = L_29;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_0;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_35 = __this->___speed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_32, L_33, ((float)il2cpp_codegen_multiply(L_34, L_35)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_36, NULL);
		return;
	}

IL_00ec:
	{
		// pathObject.GetChild(targetIndex).position = pathObject.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___pathObject_8;
		int32_t L_38 = __this->___targetIndex_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_37, L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___pathObject_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_39, L_41, NULL);
		// targetIndex++;
		int32_t L_42 = __this->___targetIndex_6;
		__this->___targetIndex_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return;
	}

IL_011c:
	{
		// targetIndex = 0;
		__this->___targetIndex_6 = 0;
		// followPath = false;
		__this->___followPath_7 = (bool)0;
		// GetComponent<HUD>().IdleMenu.SetActive(true);
		HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* L_43;
		L_43 = Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36(__this, Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___IdleMenu_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
		// GetComponentInChildren<Animator>().SetBool("startWalking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_45;
		L_45 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_45, _stringLiteral574DD84103EB80290E12F6A814354A0E2D89AC7B, (bool)0, NULL);
		// if (GetComponent<HUD>().stopTime == true)
		HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* L_46;
		L_46 = Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36(__this, Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var);
		bool L_47 = L_46->___stopTime_4;
		if (!L_47)
		{
			goto IL_0179;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// GetComponent<HUD>().timeButton.text = "Resume time";
		HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* L_48;
		L_48 = Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36(__this, Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = L_48->___timeButton_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, _stringLiteral3F0918EE60F98A8B89C20CB5252BA71AA4B82488);
		return;
	}

IL_0179:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// GetComponent<HUD>().timeButton.text = "Stop time";
		HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* L_50;
		L_50 = Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36(__this, Component_GetComponent_TisHUD_t2B4CACC874B2D963F455E2D523544772E04311D3_m8D70771CD089C48E681B6EC5D9B7F63EFB0FCA36_RuntimeMethod_var);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = L_50->___timeButton_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, _stringLiteralE020BC6ECC701858BA99E83D4E495EC551B5829B);
		// }
		return;
	}
}
// System.Void FollowPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath__ctor_m687D6BCDB3DAB246D0854CB3E60F2538ACA21DB0 (FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5;
		__this->___speed_5 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m69F2EA72A4C2B7A2292169AECAEE630860C57B89 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = animator.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_0, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void GameOver::InitializeSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_InitializeSequence_m8314354AD43F992D3150426C171D3F07DCAB6951 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5BBFA4716EC233E3B4A37CEFC694363BE7A2E77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttons.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___buttons_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// fakePlayer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fakePlayer_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// animCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___animCamera_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// defaultCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___defaultCamera_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// animator.SetBool("playerCaught", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteralC5BBFA4716EC233E3B4A37CEFC694363BE7A2E77, (bool)1, NULL);
		// StartCoroutine(ChangeScene());
		RuntimeObject* L_6;
		L_6 = GameOver_ChangeScene_m0A925CCBFD4753DA21CAB4BD3A3678979025D178(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameOver::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOver_ChangeScene_m0A925CCBFD4753DA21CAB4BD3A3678979025D178 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* L_0 = (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D*)il2cpp_codegen_object_new(U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D_il2cpp_TypeInfo_var);
		U3CChangeSceneU3Ed__8__ctor_m6E22A635E05E0B412C5FDC2157650325382D8DAD(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOver/<ChangeScene>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ed__8__ctor_m6E22A635E05E0B412C5FDC2157650325382D8DAD (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameOver/<ChangeScene>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ed__8_System_IDisposable_Dispose_m5F62C241B6432967CBA7C006BC5A143FD9E25423 (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameOver/<ChangeScene>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeSceneU3Ed__8_MoveNext_m47CE040E1FE21681D4418CF3C95E8E5D6816976B (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameOver/<ChangeScene>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSceneU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BEB10458B5A190CAE5A08471AB4816CEEE8B4A2 (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameOver/<ChangeScene>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeSceneU3Ed__8_System_Collections_IEnumerator_Reset_mE291EF8CB61DB6787D367ECBEEAA6F47AEE2C732 (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeSceneU3Ed__8_System_Collections_IEnumerator_Reset_mE291EF8CB61DB6787D367ECBEEAA6F47AEE2C732_RuntimeMethod_var)));
	}
}
// System.Object GameOver/<ChangeScene>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeSceneU3Ed__8_System_Collections_IEnumerator_get_Current_mB19F3E421D0984E88D6D881D97BD6D5A80F6539A (U3CChangeSceneU3Ed__8_t98ABAE9C81BBF7B879378B71FB115F2D8B44937D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Grid::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Awake_m2C27DDF07B8789D69CC75EA831063AC7DCDE266F (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, const RuntimeMethod* method) 
{
	{
		// nodeDiameter = nodeRadius * 2;
		float L_0 = __this->___nodeRadius_9;
		__this->___nodeDiameter_8 = ((float)il2cpp_codegen_multiply(L_0, (2.0f)));
		// sizeX = Mathf.RoundToInt(size.x / nodeDiameter);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___size_6);
		float L_2 = L_1->___x_0;
		float L_3 = __this->___nodeDiameter_8;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_2/L_3)), NULL);
		__this->___sizeX_10 = L_4;
		// sizeY = Mathf.RoundToInt(size.y / nodeDiameter);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___size_6);
		float L_6 = L_5->___y_1;
		float L_7 = __this->___nodeDiameter_8;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_6/L_7)), NULL);
		__this->___sizeY_11 = L_8;
		// MakeGrid();
		Grid_MakeGrid_m935EDA2FB0B68E5694B52255AF82D28762630C8A(__this, NULL);
		// }
		return;
	}
}
// System.Void Grid::MakeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_MakeGrid_m935EDA2FB0B68E5694B52255AF82D28762630C8A (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// grid = new Node[sizeX, sizeY];
		int32_t L_0 = __this->___sizeX_10;
		int32_t L_1 = __this->___sizeY_11;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_2 = (NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143*)GenArrayNew(NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143_il2cpp_TypeInfo_var, L_3);
		__this->___grid_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_5), (void*)L_2);
		// Vector3 BottumLeftCorner = transform.position - Vector3.right * size.x / 2 - Vector3.forward * size.y / 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___size_6);
		float L_8 = L_7->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_9, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___size_6);
		float L_14 = L_13->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_15, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_16, NULL);
		V_0 = L_17;
		// for (int x = 0; x < sizeX; x++)
		V_1 = 0;
		goto IL_00fa;
	}

IL_0072:
	{
		// for (int y = 0; y < sizeY; y++)
		V_2 = 0;
		goto IL_00ed;
	}

IL_0076:
	{
		// Vector3 worldPoint = BottumLeftCorner + Vector3.right * (x * nodeDiameter + nodeRadius) + Vector3.forward * (y * nodeDiameter + nodeRadius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		int32_t L_20 = V_1;
		float L_21 = __this->___nodeDiameter_8;
		float L_22 = __this->___nodeRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_20), L_21)), L_22)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		int32_t L_26 = V_2;
		float L_27 = __this->___nodeDiameter_8;
		float L_28 = __this->___nodeRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_26), L_27)), L_28)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_29, NULL);
		V_3 = L_30;
		// bool walkable = !(Physics.CheckSphere(worldPoint, nodeRadius, unwalkableMask));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
		float L_32 = __this->___nodeRadius_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_33 = __this->___unwalkableMask_7;
		int32_t L_34;
		L_34 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_33, NULL);
		bool L_35;
		L_35 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_31, L_32, L_34, NULL);
		V_4 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		// grid[x, y] = new Node(walkable, worldPoint, x, y);
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_36 = __this->___grid_5;
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		bool L_39 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_3;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_43 = (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)il2cpp_codegen_object_new(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5_il2cpp_TypeInfo_var);
		Node__ctor_m9F3EF830A7DF9FD11A93B2EC6D1D21E755F7246C(L_43, L_39, L_40, L_41, L_42, NULL);
		(L_36)->SetAtUnchecked(L_37, L_38, L_43);
		// for (int y = 0; y < sizeY; y++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ed:
	{
		// for (int y = 0; y < sizeY; y++)
		int32_t L_45 = V_2;
		int32_t L_46 = __this->___sizeY_11;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0076;
		}
	}
	{
		// for (int x = 0; x < sizeX; x++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00fa:
	{
		// for (int x = 0; x < sizeX; x++)
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___sizeX_10;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// Node Grid::SelectionNode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* Grid_SelectionNode_mA1C37CFEE89790A647D781B1578E3BEA5E718B47 (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float percentX = (worldPosition.x + size.x / 2) / size.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		float L_1 = L_0.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___size_6);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___size_6);
		float L_5 = L_4->___x_0;
		V_0 = ((float)(((float)il2cpp_codegen_add(L_1, ((float)(L_3/(2.0f)))))/L_5));
		// float percentY = (worldPosition.z + size.y / 2) / size.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldPosition0;
		float L_7 = L_6.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___size_6);
		float L_9 = L_8->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___size_6);
		float L_11 = L_10->___y_1;
		V_1 = ((float)(((float)il2cpp_codegen_add(L_7, ((float)(L_9/(2.0f)))))/L_11));
		// int x =  Mathf.FloorToInt(Mathf.Clamp((sizeX) * percentX, 0, sizeX - 1));
		int32_t L_12 = __this->___sizeX_10;
		float L_13 = V_0;
		int32_t L_14 = __this->___sizeX_10;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((float)L_12), L_13)), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_14, 1))), NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_15, NULL);
		V_2 = L_16;
		// int y = Mathf.RoundToInt((sizeY) * percentY);
		int32_t L_17 = __this->___sizeY_11;
		float L_18 = V_1;
		int32_t L_19;
		L_19 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_17), L_18)), NULL);
		V_3 = L_19;
		// return grid[x, y];
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_20 = __this->___grid_5;
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_23;
		L_23 = (L_20)->GetAtUnchecked(L_21, L_22);
		return L_23;
	}
}
// System.Collections.Generic.List`1<Node> Grid::GetNeighbours(Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* Grid_GetNeighbours_mF5A1B40694524E049978C24A360738FEAAE6CB3B (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// List<Node> neighbours = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_0, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		V_0 = L_0;
		// for (int x = -1; x <= 1; x++)
		V_1 = (-1);
		goto IL_0063;
	}

IL_000a:
	{
		// for (int y = -1; y <= 1; y++)
		V_2 = (-1);
		goto IL_005b;
	}

IL_000e:
	{
		// if (x == 0 && y == 0)
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_0057;
		}
	}

IL_0014:
	{
		// int checkX = node.gridX + x;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_3 = ___node0;
		int32_t L_4 = L_3->___gridX_2;
		int32_t L_5 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// int checkY = node.gridY + y;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = ___node0;
		int32_t L_7 = L_6->___gridY_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// if (checkX >= 0 && checkX < sizeX && checkY >= 0 && checkY < sizeY)
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_10 = V_3;
		int32_t L_11 = __this->___sizeX_10;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14 = __this->___sizeY_11;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0057;
		}
	}
	{
		// neighbours.Add(grid[checkX, checkY]);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_15 = V_0;
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_16 = __this->___grid_5;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_19;
		L_19 = (L_16)->GetAtUnchecked(L_17, L_18);
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_15, L_19, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
	}

IL_0057:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005b:
	{
		// for (int y = -1; y <= 1; y++)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0063:
	{
		// for (int x = -1; x <= 1; x++)
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) <= ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		// return neighbours;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_24 = V_0;
		return L_24;
	}
}
// System.Void Grid::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_OnDrawGizmos_m3F817ACA9B67C0307BDF275E9FBA1EDBA0D6C36C (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_5 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// Gizmos.DrawWireCube(transform.position, new Vector3(size.x, 1, size.y));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___size_6);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___size_6);
		float L_5 = L_4->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, (1.0f), L_5, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_1, L_6, NULL);
		// if(onlyDisplayPathGizmos)
		bool L_7 = __this->___onlyDisplayPathGizmos_4;
		if (!L_7)
		{
			goto IL_00f3;
		}
	}
	{
		// if (grid != null)
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_8 = __this->___grid_5;
		if (!L_8)
		{
			goto IL_00f3;
		}
	}
	{
		// foreach (Node n in grid)
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_9 = __this->___grid_5;
		V_0 = L_9;
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_10 = V_0;
		int32_t L_11;
		L_11 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_10, 0, NULL);
		V_1 = L_11;
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_12 = V_0;
		int32_t L_13;
		L_13 = Array_GetUpperBound_m64006116D5244EB8DA52188A9E49929AA7D08E4E((RuntimeArray*)L_12, 1, NULL);
		V_2 = L_13;
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_14 = V_0;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_14, 0, NULL);
		V_3 = L_15;
		goto IL_00ec;
	}

IL_006a:
	{
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_16 = V_0;
		int32_t L_17;
		L_17 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC((RuntimeArray*)L_16, 1, NULL);
		V_4 = L_17;
		goto IL_00e3;
	}

IL_0075:
	{
		// foreach (Node n in grid)
		NodeU5BU2CU5D_t9A01D7EB9633054CADA60E5DEE6B3ECC20FF2143* L_18 = V_0;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_21;
		L_21 = (L_18)->GetAtUnchecked(L_19, L_20);
		V_5 = L_21;
		// Gizmos.color = (n.walkable) ? Color.white : Color.red;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_22 = V_5;
		bool L_23 = L_22->___walkable_0;
		if (L_23)
		{
			goto IL_0090;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B7_0 = L_24;
		goto IL_0095;
	}

IL_0090:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B7_0 = L_25;
	}

IL_0095:
	{
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(G_B7_0, NULL);
		// if (path != null)
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_26 = __this->___path_12;
		if (!L_26)
		{
			goto IL_00bb;
		}
	}
	{
		// if (path.Contains(n))
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_27 = __this->___path_12;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_28 = V_5;
		bool L_29;
		L_29 = List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14(L_27, L_28, List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00bb;
		}
	}
	{
		// Gizmos.color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_30, NULL);
	}

IL_00bb:
	{
		// Gizmos.DrawCube(n.worldPosition, Vector3.one * (nodeDiameter - .1f));
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_31 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31->___worldPosition_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_34 = __this->___nodeDiameter_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, ((float)il2cpp_codegen_subtract(L_34, (0.100000001f))), NULL);
		Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_32, L_35, NULL);
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00e3:
	{
		// foreach (Node n in grid)
		int32_t L_37 = V_4;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00ec:
	{
		// foreach (Node n in grid)
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) <= ((int32_t)L_41)))
		{
			goto IL_006a;
		}
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void Grid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_m0D659E4BC97ADC3217C7BB8939291F3A367C8F61 (Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HUD::StartWalking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD_StartWalking_mAAF5DEA0D5662D367F66D81FC92C8777067EBE74 (HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<FollowPath>().followPath = true;
		FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* L_0;
		L_0 = Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4(__this, Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4_RuntimeMethod_var);
		L_0->___followPath_7 = (bool)1;
		// walkButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___walkButton_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// IdleMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___IdleMenu_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HUD::ActivateDistraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD_ActivateDistraction_mFECFA72757D6DF9934C9015888020315B866FB94 (HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_mF2EA91FDA0114D2833EFA2416F9C37B3949DC955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// triggerButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___triggerButton_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// trigger.GetComponent<Collider>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___trigger_9;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_1, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)0, NULL);
		// trigger.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___trigger_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// trigger.transform.GetChild(1).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___trigger_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// stateManager.GetComponent<StateMachine>().currentState = StateMachine.State.STATE_DISTRACTED;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___stateManager_10;
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_12;
		L_12 = GameObject_GetComponent_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_mF2EA91FDA0114D2833EFA2416F9C37B3949DC955(L_11, GameObject_GetComponent_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_mF2EA91FDA0114D2833EFA2416F9C37B3949DC955_RuntimeMethod_var);
		L_12->___currentState_4 = 3;
		// }
		return;
	}
}
// System.Void HUD::ResumeOrStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD_ResumeOrStopTime_mA04CAEB2F419EAE45897B40798629EC121CD66CF (HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0918EE60F98A8B89C20CB5252BA71AA4B82488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE020BC6ECC701858BA99E83D4E495EC551B5829B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stopTime = !stopTime;
		bool L_0 = __this->___stopTime_4;
		__this->___stopTime_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (stopTime)
		bool L_1 = __this->___stopTime_4;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// timeButton.text = "Resume time";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___timeButton_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral3F0918EE60F98A8B89C20CB5252BA71AA4B82488);
		return;
	}

IL_0032:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// timeButton.text = "Stop time";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___timeButton_5;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralE020BC6ECC701858BA99E83D4E495EC551B5829B);
		// }
		return;
	}
}
// System.Void HUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD__ctor_m82C674E1C84C730EE37CCDC237D5C45F278AFD23 (HUD_t2B4CACC874B2D963F455E2D523544772E04311D3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapComplete::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapComplete_Awake_m8E53DD699FACA6133DC43F004B31288630901EDE (MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = anim.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_0, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MapComplete::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapComplete_OnTriggerEnter_m8775C59DB59BBCACB4C99B97035A50E8C084ACDB (MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99181037C4CA0EA54CA163AFB10319E84559E426);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// anim.SetBool("startTransition", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral99181037C4CA0EA54CA163AFB10319E84559E426, (bool)1, NULL);
		// async = SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		__this->___async_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___async_5), (void*)L_3);
		// async.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4 = __this->___async_5;
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_4, (bool)0, NULL);
		// StartCoroutine(WaitForTransition());
		RuntimeObject* L_5;
		L_5 = MapComplete_WaitForTransition_m7B2E143DECD8B35FA2B6022178E8477EA865B8C1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MapComplete::WaitForTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapComplete_WaitForTransition_m7B2E143DECD8B35FA2B6022178E8477EA865B8C1 (MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* L_0 = (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A*)il2cpp_codegen_object_new(U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A_il2cpp_TypeInfo_var);
		U3CWaitForTransitionU3Ed__4__ctor_m7A4A2979620FC5EFF11A0307E7469E5A2514C92F(L_0, 0, NULL);
		U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MapComplete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapComplete__ctor_m118426D3C1BBFE2CEF82631C4DD295740E0CB59D (MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapComplete/<WaitForTransition>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__4__ctor_m7A4A2979620FC5EFF11A0307E7469E5A2514C92F (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MapComplete/<WaitForTransition>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__4_System_IDisposable_Dispose_m0603761A8830E013570EE29DB84C17C8FDAA4E9A (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MapComplete/<WaitForTransition>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForTransitionU3Ed__4_MoveNext_m2020BA3668C175442139D7E58760ED9F86D7943D (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// async.allowSceneActivation = true;
		MapComplete_t7AB93F80333A8DBBFBF9620C06B0800AD06E6E7A* L_5 = V_1;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = L_5->___async_5;
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_6, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MapComplete/<WaitForTransition>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForTransitionU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC201D70415DFBDAD1073E096183CA11EAB45165A (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MapComplete/<WaitForTransition>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__4_System_Collections_IEnumerator_Reset_mF910DD3ECE877B84E43E3237D8D49A4AD705DD3D (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForTransitionU3Ed__4_System_Collections_IEnumerator_Reset_mF910DD3ECE877B84E43E3237D8D49A4AD705DD3D_RuntimeMethod_var)));
	}
}
// System.Object MapComplete/<WaitForTransition>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForTransitionU3Ed__4_System_Collections_IEnumerator_get_Current_mFB08DCEBD7ECE2B6BAA7C5C9F57803BB631527CB (U3CWaitForTransitionU3Ed__4_tB6F73EACBF21046C983813A51F7751FCAF707A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuScript::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_StartGame_m4893629FE0121A90FE5ECCF1420905FB8012C86C (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::AboutClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_AboutClick_mAB6937CE9522E2770B52D19B852856C8C97C65AC (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// mainButtons.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainButtons_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// aboutSection.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___aboutSection_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::BackClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_BackClick_m552B422DA4959B1FA5DC1C475356FFEBB49CB21B (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		// mainButtons.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainButtons_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// aboutSection.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___aboutSection_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_mCDAA51C5C929C62E7082872DA581F913C3E66EDC (MenuScript_t0A8469779D2B3056BFAF8AFBF83DDA1932A9E17A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Node::.ctor(System.Boolean,UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m9F3EF830A7DF9FD11A93B2EC6D1D21E755F7246C (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, bool ____walkable0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____worldPos1, int32_t ____gridX2, int32_t ____gridY3, const RuntimeMethod* method) 
{
	{
		// public Node(bool _walkable, Vector3 _worldPos, int _gridX, int _gridY)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// walkable = _walkable;
		bool L_0 = ____walkable0;
		__this->___walkable_0 = L_0;
		// worldPosition = _worldPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ____worldPos1;
		__this->___worldPosition_1 = L_1;
		// gridX = _gridX;
		int32_t L_2 = ____gridX2;
		__this->___gridX_2 = L_2;
		// gridY = _gridY;
		int32_t L_3 = ____gridY3;
		__this->___gridY_3 = L_3;
		// }
		return;
	}
}
// System.Int32 Node::get_fCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	{
		// return gCost + hCost;
		int32_t L_0 = __this->___gCost_4;
		int32_t L_1 = __this->___hCost_5;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_Awake_m2A20867FA4B3C8E0DE056ACAB5FEC82A2042F195 (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrid_t37B32D08A1358EBD823A43D75667D21355CE2922_mB7D54C3601A45782C6C8D98FC8365E257ABF3951_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grid = GetComponent<Grid>();
		Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* L_0;
		L_0 = Component_GetComponent_TisGrid_t37B32D08A1358EBD823A43D75667D21355CE2922_mB7D54C3601A45782C6C8D98FC8365E257ABF3951(__this, Component_GetComponent_TisGrid_t37B32D08A1358EBD823A43D75667D21355CE2922_mB7D54C3601A45782C6C8D98FC8365E257ABF3951_RuntimeMethod_var);
		__this->___grid_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_4), (void*)L_0);
		// followPathScript = followPathScript.GetComponent<FollowPath>();
		FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* L_1 = __this->___followPathScript_8;
		FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* L_2;
		L_2 = Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4(L_1, Component_GetComponent_TisFollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F_m12751593B948908FA53D48D8BEBFD394D8E472E4_RuntimeMethod_var);
		__this->___followPathScript_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followPathScript_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void Pathfinding::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_Update_mDE1B868B6F0027A5B63B3744D2E4FCF6E91CA17C (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4404E0BBA89CA927E634FA21E24B0FE0CF2FC39F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7BC8C2C794C2D17E63707FD8CD0E86FBCB7CA5);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonDown(0) && !followPathScript.followPath) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_00a6;
		}
	}
	{
		FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* L_1 = __this->___followPathScript_8;
		bool L_2 = L_1->___followPath_7;
		if (L_2)
		{
			goto IL_00a6;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_4, NULL);
		// if(Physics.Raycast(ray, out hitInfo, 100, ~layerToIgnore))
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___layerToIgnore_7;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		bool L_8;
		L_8 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_5, (&V_0), (100.0f), ((~L_7)), NULL);
		if (!L_8)
		{
			goto IL_00a6;
		}
	}
	{
		// if (hitInfo.transform.gameObject.layer == LayerMask.NameToLayer("Walkable"))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		int32_t L_11;
		L_11 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_10, NULL);
		int32_t L_12;
		L_12 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral4404E0BBA89CA927E634FA21E24B0FE0CF2FC39F, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_009c;
		}
	}
	{
		// walkButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___walkButton_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// target.position = hitInfo.point;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// FindPath(seeker.position, target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___seeker_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Pathfinding_FindPath_m09702569B04D17D1483CE94A1AA622981CBCAA29(__this, L_17, L_19, NULL);
		return;
	}

IL_009c:
	{
		// Debug.Log("You cant walk here!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA7BC8C2C794C2D17E63707FD8CD0E86FBCB7CA5, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Pathfinding::FindPath(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_FindPath_m09702569B04D17D1483CE94A1AA622981CBCAA29 (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB4CCC64E1286696B7FECA5A81CB92E8A42FFF6FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m8F2C24A96C292749058FD713F9374E8C1BA3B3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m5A30ADD137E4DF16B4FA50972F9D84A252EE6DE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF9D943A1FEAEA900503510ECF1BDDB9A83B00A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_0 = NULL;
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_1 = NULL;
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* V_2 = NULL;
	HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* V_3 = NULL;
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_4 = NULL;
	int32_t V_5 = 0;
	Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_7 = NULL;
	int32_t V_8 = 0;
	{
		// Node startNode = grid.SelectionNode(startPos);
		Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* L_0 = __this->___grid_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___startPos0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_2;
		L_2 = Grid_SelectionNode_mA1C37CFEE89790A647D781B1578E3BEA5E718B47(L_0, L_1, NULL);
		V_0 = L_2;
		// Node targetNode = grid.SelectionNode(targetPos);
		Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* L_3 = __this->___grid_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___targetPos1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5;
		L_5 = Grid_SelectionNode_mA1C37CFEE89790A647D781B1578E3BEA5E718B47(L_3, L_4, NULL);
		V_1 = L_5;
		// List<Node> openSet = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_6 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_6, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		V_2 = L_6;
		// HashSet<Node> closedSet = new HashSet<Node>();
		HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* L_7 = (HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD*)il2cpp_codegen_object_new(HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m5A30ADD137E4DF16B4FA50972F9D84A252EE6DE4(L_7, HashSet_1__ctor_m5A30ADD137E4DF16B4FA50972F9D84A252EE6DE4_RuntimeMethod_var);
		V_3 = L_7;
		// openSet.Add(startNode);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_8 = V_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_9 = V_0;
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_8, L_9, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		goto IL_0167;
	}

IL_0032:
	{
		// Node currentNode = openSet[0];
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_10 = V_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_11;
		L_11 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_10, 0, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		V_4 = L_11;
		// for(int i = 1; i < openSet.Count; i++)
		V_5 = 1;
		goto IL_0092;
	}

IL_0040:
	{
		// if(openSet[i].fCost < currentNode.fCost || (openSet[i].fCost == currentNode.fCost && openSet[i].hCost < currentNode.hCost))
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_12 = V_2;
		int32_t L_13 = V_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_14;
		L_14 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_12, L_13, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639(L_14, NULL);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_16 = V_4;
		int32_t L_17;
		L_17 = Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0082;
		}
	}
	{
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_18 = V_2;
		int32_t L_19 = V_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_20;
		L_20 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_18, L_19, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		int32_t L_21;
		L_21 = Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639(L_20, NULL);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_22 = V_4;
		int32_t L_23;
		L_23 = Node_get_fCost_m5B8177CBC00388AA3ED45EB1EDE5705AC1464639(L_22, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_008c;
		}
	}
	{
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_24 = V_2;
		int32_t L_25 = V_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_26;
		L_26 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_24, L_25, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		int32_t L_27 = L_26->___hCost_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_28 = V_4;
		int32_t L_29 = L_28->___hCost_5;
		if ((((int32_t)L_27) >= ((int32_t)L_29)))
		{
			goto IL_008c;
		}
	}

IL_0082:
	{
		// currentNode = openSet[i];
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_30 = V_2;
		int32_t L_31 = V_5;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_32;
		L_32 = List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA(L_30, L_31, List_1_get_Item_m8DF8D7F1FF09B0934BA68CB9047E85F6D07EB6DA_RuntimeMethod_var);
		V_4 = L_32;
	}

IL_008c:
	{
		// for(int i = 1; i < openSet.Count; i++)
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0092:
	{
		// for(int i = 1; i < openSet.Count; i++)
		int32_t L_34 = V_5;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_35 = V_2;
		int32_t L_36;
		L_36 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_35, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0040;
		}
	}
	{
		// openSet.Remove(currentNode);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_37 = V_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_38 = V_4;
		bool L_39;
		L_39 = List_1_Remove_mF9D943A1FEAEA900503510ECF1BDDB9A83B00A40(L_37, L_38, List_1_Remove_mF9D943A1FEAEA900503510ECF1BDDB9A83B00A40_RuntimeMethod_var);
		// closedSet.Add(currentNode);
		HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* L_40 = V_3;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_41 = V_4;
		bool L_42;
		L_42 = HashSet_1_Add_mB4CCC64E1286696B7FECA5A81CB92E8A42FFF6FA(L_40, L_41, HashSet_1_Add_mB4CCC64E1286696B7FECA5A81CB92E8A42FFF6FA_RuntimeMethod_var);
		// if(currentNode == targetNode)
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_43 = V_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_44 = V_1;
		if ((!(((RuntimeObject*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)L_43) == ((RuntimeObject*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)L_44))))
		{
			goto IL_00bc;
		}
	}
	{
		// RetracePath(startNode, targetNode);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_45 = V_0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_46 = V_1;
		Pathfinding_RetracePath_m3D2FC72EFA8294C7A4668E6C12CDE3609FFAF7BC(__this, L_45, L_46, NULL);
		// return;
		return;
	}

IL_00bc:
	{
		// foreach (Node neighbour in grid.GetNeighbours(currentNode))
		Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* L_47 = __this->___grid_4;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_48 = V_4;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_49;
		L_49 = Grid_GetNeighbours_mF5A1B40694524E049978C24A360738FEAAE6CB3B(L_47, L_48, NULL);
		Enumerator_tBCF320C6C19C647319938D636F58E8E85280CF9D L_50;
		L_50 = List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB(L_49, List_1_GetEnumerator_mAC0F6A209F83D6D259E04A2EBE94A8287904B1DB_RuntimeMethod_var);
		V_6 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84((&V_6), Enumerator_Dispose_m143702E74BD3AE8A73CE15F2734C618CF1944A84_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014b_1;
			}

IL_00d2_1:
			{
				// foreach (Node neighbour in grid.GetNeighbours(currentNode))
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_51;
				L_51 = Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_inline((&V_6), Enumerator_get_Current_mCA6601A3E9915F8CA22AD7DF48AF783585BE27F3_RuntimeMethod_var);
				V_7 = L_51;
				// if(!neighbour.walkable || closedSet.Contains(neighbour))
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_52 = V_7;
				bool L_53 = L_52->___walkable_0;
				if (!L_53)
				{
					goto IL_014b_1;
				}
			}
			{
				HashSet_1_t6D010F26EA596C9049D7F65BCFD083FD4203BFAD* L_54 = V_3;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_55 = V_7;
				bool L_56;
				L_56 = HashSet_1_Contains_m8F2C24A96C292749058FD713F9374E8C1BA3B3CF(L_54, L_55, HashSet_1_Contains_m8F2C24A96C292749058FD713F9374E8C1BA3B3CF_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_014b_1;
				}
			}
			{
				// int costToNeighbour = currentNode.gCost + GetDistance(currentNode, neighbour);
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_57 = V_4;
				int32_t L_58 = L_57->___gCost_4;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_59 = V_4;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_60 = V_7;
				int32_t L_61;
				L_61 = Pathfinding_GetDistance_mA24E2C4498C81E9EC7A28486D38959E3812B613A(__this, L_59, L_60, NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_58, L_61));
				// if(costToNeighbour < neighbour.gCost || !openSet.Contains(neighbour))
				int32_t L_62 = V_8;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_63 = V_7;
				int32_t L_64 = L_63->___gCost_4;
				if ((((int32_t)L_62) < ((int32_t)L_64)))
				{
					goto IL_0117_1;
				}
			}
			{
				List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_65 = V_2;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_66 = V_7;
				bool L_67;
				L_67 = List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14(L_65, L_66, List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var);
				if (L_67)
				{
					goto IL_014b_1;
				}
			}

IL_0117_1:
			{
				// neighbour.gCost = costToNeighbour;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_68 = V_7;
				int32_t L_69 = V_8;
				L_68->___gCost_4 = L_69;
				// neighbour.hCost = GetDistance(neighbour, targetNode);
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_70 = V_7;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_71 = V_7;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_72 = V_1;
				int32_t L_73;
				L_73 = Pathfinding_GetDistance_mA24E2C4498C81E9EC7A28486D38959E3812B613A(__this, L_71, L_72, NULL);
				L_70->___hCost_5 = L_73;
				// neighbour.parent = currentNode;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_74 = V_7;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_75 = V_4;
				L_74->___parent_6 = L_75;
				Il2CppCodeGenWriteBarrier((void**)(&L_74->___parent_6), (void*)L_75);
				// if (!openSet.Contains(neighbour))
				List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_76 = V_2;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_77 = V_7;
				bool L_78;
				L_78 = List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14(L_76, L_77, List_1_Contains_m53E5D40E4A38CAAE6C15D0BD5882BACFF4DBBF14_RuntimeMethod_var);
				if (L_78)
				{
					goto IL_014b_1;
				}
			}
			{
				// openSet.Add(neighbour);
				List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_79 = V_2;
				Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_80 = V_7;
				List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_79, L_80, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
			}

IL_014b_1:
			{
				// foreach (Node neighbour in grid.GetNeighbours(currentNode))
				bool L_81;
				L_81 = Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415((&V_6), Enumerator_MoveNext_m99C5AC2C5F4D018D3A5AF0165C8A0EB74799F415_RuntimeMethod_var);
				if (L_81)
				{
					goto IL_00d2_1;
				}
			}
			{
				goto IL_0167;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0167:
	{
		// while(openSet.Count > 0)
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_82 = V_2;
		int32_t L_83;
		L_83 = List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_inline(L_82, List_1_get_Count_m94BEE6998FF48AC10CEF835DA02AB4674A84E9F4_RuntimeMethod_var);
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Pathfinding::RetracePath(Node,Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding_RetracePath_m3D2FC72EFA8294C7A4668E6C12CDE3609FFAF7BC (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___startNode0, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___endNode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* V_0 = NULL;
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* V_1 = NULL;
	{
		// List<Node> path = new List<Node>();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_0 = (List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11*)il2cpp_codegen_object_new(List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11_il2cpp_TypeInfo_var);
		List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057(L_0, List_1__ctor_m8E19BCF1C52EE6D1F087E227A4876FB035147057_RuntimeMethod_var);
		V_0 = L_0;
		// Node currentNode = endNode;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_1 = ___endNode1;
		V_1 = L_1;
		goto IL_0018;
	}

IL_000a:
	{
		// path.Add(currentNode);
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_2 = V_0;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_3 = V_1;
		List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_inline(L_2, L_3, List_1_Add_m8769195EB51C3C44E5E7074CB2A00FAC4ACDE71A_RuntimeMethod_var);
		// currentNode = currentNode.parent;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = V_1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5 = L_4->___parent_6;
		V_1 = L_5;
	}

IL_0018:
	{
		// while(currentNode != startNode)
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_6 = V_1;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_7 = ___startNode0;
		if ((!(((RuntimeObject*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)L_6) == ((RuntimeObject*)(Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5*)L_7))))
		{
			goto IL_000a;
		}
	}
	{
		// path.Reverse();
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_8 = V_0;
		List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3(L_8, List_1_Reverse_m2557A6A9E186D8C0B4C523304EB253BC018635B3_RuntimeMethod_var);
		// grid.path = path;
		Grid_t37B32D08A1358EBD823A43D75667D21355CE2922* L_9 = __this->___grid_4;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_10 = V_0;
		L_9->___path_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___path_12), (void*)L_10);
		// followPathScript.GetPath(path);
		FollowPath_tFCC93053530936270DB4FF4D88AD43F485FA146F* L_11 = __this->___followPathScript_8;
		List_1_tCA9EBF5291CA827F4D1E44EE63893ED6ABBE1E11* L_12 = V_0;
		FollowPath_GetPath_mED9196588FA8B38613108AC176F718E33212E196(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Int32 Pathfinding::GetDistance(Node,Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pathfinding_GetDistance_mA24E2C4498C81E9EC7A28486D38959E3812B613A (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___nodeA0, Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___nodeB1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int distanceX = Mathf.Abs(nodeA.gridX - nodeB.gridX);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_0 = ___nodeA0;
		int32_t L_1 = L_0->___gridX_2;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_2 = ___nodeB1;
		int32_t L_3 = L_2->___gridX_2;
		int32_t L_4;
		L_4 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), NULL);
		V_0 = L_4;
		// int distanceY = Mathf.Abs(nodeA.gridY - nodeB.gridY);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_5 = ___nodeA0;
		int32_t L_6 = L_5->___gridY_3;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_7 = ___nodeB1;
		int32_t L_8 = L_7->___gridY_3;
		int32_t L_9;
		L_9 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_6, L_8)), NULL);
		V_1 = L_9;
		// if (distanceX > distanceY)
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		// return 14 * distanceY + 10 * (distanceX - distanceY);
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)14), L_12)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), ((int32_t)il2cpp_codegen_subtract(L_13, L_14))))));
	}

IL_0036:
	{
		// return 14 * distanceX + 10 * (distanceY - distanceX);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)14), L_15)), ((int32_t)il2cpp_codegen_multiply(((int32_t)10), ((int32_t)il2cpp_codegen_subtract(L_16, L_17))))));
	}
}
// System.Void Pathfinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinding__ctor_m87C91386E00B4EA25917D5D3965A0BE5E3E51CB6 (Pathfinding_t4B44812FE507E9966ACC55EE0748548417E2A863* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RunKyleYouMadeIt::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunKyleYouMadeIt_Awake_mFB9E25F7BDC8D70489549F433F23E7AF3079873B (RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = anim.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_6;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_0, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void RunKyleYouMadeIt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunKyleYouMadeIt_Update_m53B32E7FCF45D0750424DD5140E43E37C7E7BCA1 (RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (wayPointIndex <= waypoints.Length - 1)
		int32_t L_0 = __this->___wayPointIndex_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___waypoints_5;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_00e5;
		}
	}
	{
		// if (transform.transform.position != waypoints[wayPointIndex].position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___waypoints_5;
		int32_t L_6 = __this->___wayPointIndex_4;
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		bool L_10;
		L_10 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_4, L_9, NULL);
		if (!L_10)
		{
			goto IL_00d7;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[wayPointIndex].position, 3 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___waypoints_5;
		int32_t L_16 = __this->___wayPointIndex_4;
		int32_t L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_14, L_19, ((float)il2cpp_codegen_multiply((3.0f), L_20)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_21, NULL);
		// Vector3 direction = (waypoints[wayPointIndex].position - transform.position).normalized;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = __this->___waypoints_5;
		int32_t L_23 = __this->___wayPointIndex_4;
		int32_t L_24 = L_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		V_1 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(direction);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_30, NULL);
		V_0 = L_31;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_0;
		float L_36;
		L_36 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_34, L_35, ((float)il2cpp_codegen_multiply(L_36, (3.0f))), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_37, NULL);
		goto IL_00e5;
	}

IL_00d7:
	{
		// wayPointIndex++;
		int32_t L_38 = __this->___wayPointIndex_4;
		__this->___wayPointIndex_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00e5:
	{
		// if(wayPointIndex == 2)
		int32_t L_39 = __this->___wayPointIndex_4;
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_00fb;
		}
	}
	{
		// StartCoroutine(WaitForTransition());
		RuntimeObject* L_40;
		L_40 = RunKyleYouMadeIt_WaitForTransition_mE3CE81BF87DE6CB4762ED9032D2DDE3832F6A7CD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_41;
		L_41 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_40, NULL);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator RunKyleYouMadeIt::WaitForTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunKyleYouMadeIt_WaitForTransition_mE3CE81BF87DE6CB4762ED9032D2DDE3832F6A7CD (RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* L_0 = (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71*)il2cpp_codegen_object_new(U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71_il2cpp_TypeInfo_var);
		U3CWaitForTransitionU3Ed__5__ctor_m7F0268B7F28EFFFCC1AFD27751D62CC0AB9A9C67(L_0, 0, NULL);
		U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RunKyleYouMadeIt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunKyleYouMadeIt__ctor_m4BD2A1543F311904C9F9F607497C3D7340560A9C (RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RunKyleYouMadeIt/<WaitForTransition>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__5__ctor_m7F0268B7F28EFFFCC1AFD27751D62CC0AB9A9C67 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RunKyleYouMadeIt/<WaitForTransition>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__5_System_IDisposable_Dispose_mD6C12E40EA4A69DDCE0BA98F556379D8D9F2B885 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RunKyleYouMadeIt/<WaitForTransition>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForTransitionU3Ed__5_MoveNext_m4E2FED97FC0476DE22B9D9D3C95C6D5773C0BA29 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99181037C4CA0EA54CA163AFB10319E84559E426);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetBool("startTransition", true);
		RunKyleYouMadeIt_t8E0561615711D07F8370B9E03D353B3D884E9901* L_4 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___anim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral99181037C4CA0EA54CA163AFB10319E84559E426, (bool)1, NULL);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RunKyleYouMadeIt/<WaitForTransition>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForTransitionU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD26EE9D8FB851EDB5705DBFDA8FF3F674C04250 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RunKyleYouMadeIt/<WaitForTransition>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m6672304A1C756D6201BD97CA272F3484C5F22EC0 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForTransitionU3Ed__5_System_Collections_IEnumerator_Reset_m6672304A1C756D6201BD97CA272F3484C5F22EC0_RuntimeMethod_var)));
	}
}
// System.Object RunKyleYouMadeIt/<WaitForTransition>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForTransitionU3Ed__5_System_Collections_IEnumerator_get_Current_m47598BEC0A0D948E2D09ED97E7C239CC57002E48 (U3CWaitForTransitionU3Ed__5_tC38345B117E078466EEE32D3B8BC36E6EE515A71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Search::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Search_Awake_m2ACAEB1B836EF66860368FBADA5876E8E2CCABB7 (Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateMachine = GetComponentInChildren<StateMachine>();
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_0;
		L_0 = Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F(__this, Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F_RuntimeMethod_var);
		__this->___stateMachine_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateMachine_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Search::SearchForPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Search_SearchForPlayer_m3905128A3EC9E3703BFC2CD5C54711E58FB66A9D (Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23F5E3B4C52B162E198A0857048E0681BB55089F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// for (int i = 0; i < rays; i++)
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		// Quaternion rotation = this.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		// Quaternion rotationMod = Quaternion.AngleAxis((i / rays) * angle * 2 - angle, transform.up);
		int32_t L_2 = V_0;
		float L_3 = __this->___rays_4;
		float L_4 = __this->___angle_6;
		float L_5 = __this->___angle_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(((float)L_2)/L_3)), L_4)), (2.0f))), L_5)), L_7, NULL);
		V_1 = L_8;
		// Vector3 direction = rotation * rotationMod * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		V_2 = L_12;
		// Ray ray = new Ray(transform.position, direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_3), L_14, L_15, NULL);
		// if (Physics.Raycast(ray, out hitInfo, maxDistance))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_3;
		float L_17 = __this->___maxDistance_5;
		bool L_18;
		L_18 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_16, (&V_4), L_17, NULL);
		if (!L_18)
		{
			goto IL_00cf;
		}
	}
	{
		// if (hitInfo.collider.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19;
		L_19 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_4), NULL);
		String_t* L_20;
		L_20 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_21)
		{
			goto IL_00fe;
		}
	}
	{
		// Debug.DrawLine(ray.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_4), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_22, L_23, L_24, NULL);
		// GetComponent<Animator>().SetBool("startRunning", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25;
		L_25 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_25, _stringLiteral23F5E3B4C52B162E198A0857048E0681BB55089F, (bool)1, NULL);
		// goalTrigger.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___goalTrigger_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// stateMachine.currentState = StateMachine.State.STATE_SEEK;
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_27 = __this->___stateMachine_8;
		L_27->___currentState_4 = 2;
		goto IL_00fe;
	}

IL_00cf:
	{
		// Debug.DrawLine(ray.origin, ray.origin + ray.direction * maxDistance, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_3), NULL);
		float L_31 = __this->___maxDistance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_28, L_33, L_34, NULL);
	}

IL_00fe:
	{
		// for (int i = 0; i < rays; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0102:
	{
		// for (int i = 0; i < rays; i++)
		int32_t L_36 = V_0;
		float L_37 = __this->___rays_4;
		if ((((float)((float)L_36)) < ((float)L_37)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Search::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Search__ctor_mEBF41B787B606960E1E52C8D1D3819E528200B42 (Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* __this, const RuntimeMethod* method) 
{
	{
		// public float rays = 20;
		__this->___rays_4 = (20.0f);
		// public float maxDistance = 12;
		__this->___maxDistance_5 = (12.0f);
		// public float angle = 20;
		__this->___angle_6 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StateMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Start_m6D2B6826B4EE8D6CD368C18E77A14D56C3FAAA99 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mA4FC9719C9A443B11F64239D87B844747C58C0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearch_t07745B2D8D3E4E07C877207D91664573AF5CA1B8_mEA0E0A6B9479EB55EDA990AE64D076194B90A3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSteering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130_m93C643416CAC08FEE51607A8B38F375D107F2215_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringScript = AI.GetComponent<Steering>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AI_5;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_1;
		L_1 = GameObject_GetComponent_TisSteering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130_m93C643416CAC08FEE51607A8B38F375D107F2215(L_0, GameObject_GetComponent_TisSteering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130_m93C643416CAC08FEE51607A8B38F375D107F2215_RuntimeMethod_var);
		__this->___steeringScript_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___steeringScript_6), (void*)L_1);
		// searchScript = AI.GetComponent<Search>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AI_5;
		Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* L_3;
		L_3 = GameObject_GetComponent_TisSearch_t07745B2D8D3E4E07C877207D91664573AF5CA1B8_mEA0E0A6B9479EB55EDA990AE64D076194B90A3AB(L_2, GameObject_GetComponent_TisSearch_t07745B2D8D3E4E07C877207D91664573AF5CA1B8_mEA0E0A6B9479EB55EDA990AE64D076194B90A3AB_RuntimeMethod_var);
		__this->___searchScript_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___searchScript_7), (void*)L_3);
		// gameOverScript = GetComponent<GameOver>();
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_4;
		L_4 = Component_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mA4FC9719C9A443B11F64239D87B844747C58C0C7(__this, Component_GetComponent_TisGameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D_mA4FC9719C9A443B11F64239D87B844747C58C0C7_RuntimeMethod_var);
		__this->___gameOverScript_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameOverScript_8), (void*)L_4);
		// currentState = State.STATE_PATROL;
		__this->___currentState_4 = 1;
		// }
		return;
	}
}
// System.Void StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_mC3FE8A6A50417CD8A0C9F7A7676C4F4479C609CD (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40D974CDE54C074ADF3F524B7351AB03A5FEE612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674C10830F3A306BE5396778EDEAF6724FCDE919);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD89264FA29303C82B9319EE8E2D08175E58C9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07B4B21254C985B55EEDA7D34EFA4804BD6E5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC44F23775EB846E5A38E8FF155ED69A258768AEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_4;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_007a;
			}
			case 3:
			{
				goto IL_009a;
			}
			case 4:
			{
				goto IL_00b0;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// AI.GetComponent<Animator>().SetBool("idle", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AI_5;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, (bool)1, NULL);
		// Debug.Log("IDLE");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral674C10830F3A306BE5396778EDEAF6724FCDE919, NULL);
		// break;
		return;
	}

IL_0043:
	{
		// AI.GetComponent<Animator>().SetBool("idle", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___AI_5;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, (bool)0, NULL);
		// steeringScript.Patrol();
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_6 = __this->___steeringScript_6;
		Steering_Patrol_mAE9FF5344182E7BA6AE8C26709D0B2010635602F(L_6, NULL);
		// searchScript.SearchForPlayer();
		Search_t07745B2D8D3E4E07C877207D91664573AF5CA1B8* L_7 = __this->___searchScript_7;
		Search_SearchForPlayer_m3905128A3EC9E3703BFC2CD5C54711E58FB66A9D(L_7, NULL);
		// Debug.Log("PATROLING");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9CD89264FA29303C82B9319EE8E2D08175E58C9D, NULL);
		// break;
		return;
	}

IL_007a:
	{
		// steeringScript.Seek();
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_8 = __this->___steeringScript_6;
		Steering_Seek_m7A7009061D433FC480B4C1F25211DCDE605B7034(L_8, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Debug.Log("SEEKING");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral40D974CDE54C074ADF3F524B7351AB03A5FEE612, NULL);
		// break;
		return;
	}

IL_009a:
	{
		// steeringScript.CheckDistraction();
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_9 = __this->___steeringScript_6;
		Steering_CheckDistraction_mE516B4629289F980358CB12C8978B2B01EF7D340(L_9, NULL);
		// Debug.Log("DISTRACTED");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC44F23775EB846E5A38E8FF155ED69A258768AEA, NULL);
		// break;
		return;
	}

IL_00b0:
	{
		// gameOverScript.InitializeSequence();
		GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* L_10 = __this->___gameOverScript_8;
		GameOver_InitializeSequence_m8314354AD43F992D3150426C171D3F07DCAB6951(L_10, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Debug.Log("CAUGHT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB07B4B21254C985B55EEDA7D34EFA4804BD6E5A2, NULL);
		// }
		return;
	}
}
// System.Void StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mD02F107E96CE9A55AB0563A3254479A997CBF341 (StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Steering::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Start_mE6E90614AE55839AB83FD6B95DA9BEDC21D161DF (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randomWaypointIndex = Random.Range(0, waypoints.Length);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___waypoints_9;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		__this->___randomWaypointIndex_13 = L_1;
		// stateMachine = GetComponentInChildren<StateMachine>();
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_2;
		L_2 = Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F(__this, Component_GetComponentInChildren_TisStateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB_m96110FB3FCD70C83D9E22C4467AAE3D55022375F_RuntimeMethod_var);
		__this->___stateMachine_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateMachine_15), (void*)L_2);
		// }
		return;
	}
}
// System.Void Steering::Patrol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Patrol_mAE9FF5344182E7BA6AE8C26709D0B2010635602F (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!randomPatrol)
		bool L_0 = __this->___randomPatrol_14;
		if (L_0)
		{
			goto IL_00fb;
		}
	}
	{
		// if (waypointIndex <= waypoints.Length - 1)
		int32_t L_1 = __this->___waypointIndex_12;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___waypoints_9;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (transform.transform.position != waypoints[waypointIndex].position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___waypoints_9;
		int32_t L_7 = __this->___waypointIndex_12;
		int32_t L_8 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		bool L_11;
		L_11 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_5, L_10, NULL);
		if (!L_11)
		{
			goto IL_00e4;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[waypointIndex].position, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16 = __this->___waypoints_9;
		int32_t L_17 = __this->___waypointIndex_12;
		int32_t L_18 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = __this->___speed_5;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_15, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_23, NULL);
		// Vector3 direction = (waypoints[waypointIndex].position - transform.position).normalized;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___waypoints_9;
		int32_t L_25 = __this->___waypointIndex_12;
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_30, NULL);
		V_1 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(direction);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_32, NULL);
		V_0 = L_33;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39 = __this->___speed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_36, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_34, L_40, NULL);
		goto IL_00fb;
	}

IL_00e4:
	{
		// waypointIndex++;
		int32_t L_41 = __this->___waypointIndex_12;
		__this->___waypointIndex_12 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_00fb;
	}

IL_00f4:
	{
		// waypointIndex = 0;
		__this->___waypointIndex_12 = 0;
	}

IL_00fb:
	{
		// if (randomPatrol)
		bool L_42 = __this->___randomPatrol_14;
		if (!L_42)
		{
			goto IL_01dd;
		}
	}
	{
		// if (transform.transform.position != waypoints[randomWaypointIndex].position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_46 = __this->___waypoints_9;
		int32_t L_47 = __this->___randomWaypointIndex_13;
		int32_t L_48 = L_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		bool L_51;
		L_51 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_45, L_50, NULL);
		if (!L_51)
		{
			goto IL_01c9;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[randomWaypointIndex].position, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_56 = __this->___waypoints_9;
		int32_t L_57 = __this->___randomWaypointIndex_13;
		int32_t L_58 = L_57;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = __this->___speed_5;
		float L_62;
		L_62 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_55, L_60, ((float)il2cpp_codegen_multiply(L_61, L_62)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_52, L_63, NULL);
		// Vector3 direction = (waypoints[randomWaypointIndex].position - transform.position).normalized;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_64 = __this->___waypoints_9;
		int32_t L_65 = __this->___randomWaypointIndex_13;
		int32_t L_66 = L_65;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_68, L_70, NULL);
		V_1 = L_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(direction);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_73;
		L_73 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_72, NULL);
		V_2 = L_73;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_75, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77 = V_2;
		float L_78;
		L_78 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_79 = __this->___speed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80;
		L_80 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_76, L_77, ((float)il2cpp_codegen_multiply(L_78, L_79)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_74, L_80, NULL);
		return;
	}

IL_01c9:
	{
		// randomWaypointIndex = Random.Range(0, waypoints.Length);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_81 = __this->___waypoints_9;
		int32_t L_82;
		L_82 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_81)->max_length)), NULL);
		__this->___randomWaypointIndex_13 = L_82;
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Void Steering::Seek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Seek_m7A7009061D433FC480B4C1F25211DCDE605B7034 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1C1A807BDBEEE2CD51762B10FECD15B6A2ACC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// Vector3 angleMin15Deg = Quaternion.AngleAxis(-15, new Vector3(0, 1, 0)) * transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((-15.0f), L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_3, NULL);
		V_0 = L_4;
		// Vector3 anglePos15Deg = Quaternion.AngleAxis(15, new Vector3(0, 1, 0)) * transform.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((15.0f), L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_8, NULL);
		V_1 = L_9;
		// Ray ray = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_2), L_11, L_13, NULL);
		// Ray leftRay = new Ray(transform.position, angleMin15Deg);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_3), L_15, L_16, NULL);
		// Ray rightRay = new Ray(transform.position, anglePos15Deg);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_4), L_18, L_19, NULL);
		// Ray rightBackRay = new Ray(transform.position - (transform.forward), transform.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_25, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_5), L_24, L_26, NULL);
		// Ray leftBackRay = new Ray(transform.position - (transform.forward), -transform.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_33, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_6), L_31, L_34, NULL);
		// bool frontRayHit = false;
		V_8 = (bool)0;
		// if (!foundSomething)
		bool L_35 = __this->___foundSomething_7;
		if (L_35)
		{
			goto IL_015a;
		}
	}
	{
		// Vector3 relativePos = target.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___target_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_40, NULL);
		// Quaternion rotation = Quaternion.LookRotation(relativePos);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_41, NULL);
		V_9 = L_42;
		// transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_44, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = V_9;
		float L_47;
		L_47 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_45, L_46, ((float)il2cpp_codegen_multiply(L_47, (4.0f))), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_43, L_48, NULL);
	}

IL_015a:
	{
		// transform.Translate(Vector3.forward * Time.deltaTime * 4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_51;
		L_51 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_50, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_52, (4.0f), NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_49, L_53, NULL);
		// if (Physics.Raycast(ray, out hitInfo, 2))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_54 = V_2;
		bool L_55;
		L_55 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_54, (&V_7), (2.0f), NULL);
		if (!L_55)
		{
			goto IL_01d5;
		}
	}
	{
		// if (hitInfo.collider.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_56;
		L_56 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_7), NULL);
		String_t* L_57;
		L_57 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_56, NULL);
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_58)
		{
			goto IL_0224;
		}
	}
	{
		// Debug.DrawLine(ray.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		L_61 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_59, L_60, L_61, NULL);
		// Debug.Log("Player has been caught!");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6A1C1A807BDBEEE2CD51762B10FECD15B6A2ACC1, NULL);
		// stateMachine.currentState = StateMachine.State.STATE_CAUGHT;
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_62 = __this->___stateMachine_15;
		L_62->___currentState_4 = 4;
		goto IL_0224;
	}

IL_01d5:
	{
		// if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore) ||
		// Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_63 = V_4;
		float L_64 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_65 = __this->___mask_6;
		int32_t L_66;
		L_66 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_65, NULL);
		bool L_67;
		L_67 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_63, (&V_7), L_64, L_66, 1, NULL);
		if (L_67)
		{
			goto IL_020e;
		}
	}
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_68 = V_3;
		float L_69 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_70 = __this->___mask_6;
		int32_t L_71;
		L_71 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_70, NULL);
		bool L_72;
		L_72 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_68, (&V_7), L_69, L_71, 1, NULL);
		if (!L_72)
		{
			goto IL_021a;
		}
	}

IL_020e:
	{
		// frontRayHit = true;
		V_8 = (bool)1;
		// foundSomething = true;
		__this->___foundSomething_7 = (bool)1;
		goto IL_0224;
	}

IL_021a:
	{
		// frontRayHit = false;
		V_8 = (bool)0;
		// foundSomething = false;
		__this->___foundSomething_7 = (bool)0;
	}

IL_0224:
	{
		// if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore) &&
		// Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_73 = V_4;
		float L_74 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_75 = __this->___mask_6;
		int32_t L_76;
		L_76 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_75, NULL);
		bool L_77;
		L_77 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_73, (&V_7), L_74, L_76, 1, NULL);
		if (!L_77)
		{
			goto IL_02c8;
		}
	}
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_78 = V_3;
		float L_79 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_80 = __this->___mask_6;
		int32_t L_81;
		L_81 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_80, NULL);
		bool L_82;
		L_82 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_78, (&V_7), L_79, L_81, 1, NULL);
		if (!L_82)
		{
			goto IL_02c8;
		}
	}
	{
		// if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_83 = V_4;
		float L_84 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_85 = __this->___mask_6;
		int32_t L_86;
		L_86 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_85, NULL);
		bool L_87;
		L_87 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_83, (&V_7), L_84, L_86, 1, NULL);
		if (!L_87)
		{
			goto IL_03e9;
		}
	}
	{
		// Debug.DrawLine(rightRay.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
		L_90 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_88, L_89, L_90, NULL);
		// foundSomething = true;
		__this->___foundSomething_7 = (bool)1;
		// transform.Rotate(Vector3.down * Time.deltaTime * 80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_93;
		L_93 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, (80.0f), NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_91, L_95, NULL);
		goto IL_03e9;
	}

IL_02c8:
	{
		// if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_96 = V_4;
		float L_97 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_98 = __this->___mask_6;
		int32_t L_99;
		L_99 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_98, NULL);
		bool L_100;
		L_100 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_96, (&V_7), L_97, L_99, 1, NULL);
		if (!L_100)
		{
			goto IL_032a;
		}
	}
	{
		// Debug.DrawLine(rightRay.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_103;
		L_103 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_101, L_102, L_103, NULL);
		// foundSomething = true;
		__this->___foundSomething_7 = (bool)1;
		// transform.Rotate(Vector3.down * Time.deltaTime * 80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_106;
		L_106 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_105, L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_107, (80.0f), NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_104, L_108, NULL);
		goto IL_0359;
	}

IL_032a:
	{
		// Debug.DrawLine(rightRay.origin, rightRay.origin + rightRay.direction * maxDistance, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_4), NULL);
		float L_112 = __this->___maxDistance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_111, L_112, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_110, L_113, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_115;
		L_115 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_109, L_114, L_115, NULL);
	}

IL_0359:
	{
		// if (Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_116 = V_3;
		float L_117 = __this->___maxDistance_8;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_118 = __this->___mask_6;
		int32_t L_119;
		L_119 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_118, NULL);
		bool L_120;
		L_120 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_116, (&V_7), L_117, L_119, 1, NULL);
		if (!L_120)
		{
			goto IL_03ba;
		}
	}
	{
		// Debug.DrawLine(leftRay.origin, hitInfo.point, Color.green); ;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123;
		L_123 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_121, L_122, L_123, NULL);
		// foundSomething = true;
		__this->___foundSomething_7 = (bool)1;
		// transform.Rotate(Vector3.up * Time.deltaTime * 80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_126;
		L_126 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_125, L_126, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_127, (80.0f), NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_124, L_128, NULL);
		goto IL_03e9;
	}

IL_03ba:
	{
		// Debug.DrawLine(leftRay.origin, leftRay.origin + leftRay.direction * maxDistance, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_3), NULL);
		float L_132 = __this->___maxDistance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_131, L_132, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_130, L_133, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_135;
		L_135 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_129, L_134, L_135, NULL);
	}

IL_03e9:
	{
		// if (!frontRayHit)
		bool L_136 = V_8;
		if (L_136)
		{
			goto IL_04bc;
		}
	}
	{
		// if (Physics.Raycast(rightBackRay, out hitInfo, 2, mask, QueryTriggerInteraction.Ignore)||
		//     (Physics.Raycast(leftBackRay, out hitInfo, 2, mask, QueryTriggerInteraction.Ignore)))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_137 = V_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_138 = __this->___mask_6;
		int32_t L_139;
		L_139 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_138, NULL);
		bool L_140;
		L_140 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_137, (&V_7), (2.0f), L_139, 1, NULL);
		if (L_140)
		{
			goto IL_0428;
		}
	}
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_141 = V_6;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_142 = __this->___mask_6;
		int32_t L_143;
		L_143 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_142, NULL);
		bool L_144;
		L_144 = Physics_Raycast_mCCD2542138D11E665A5D4F413C1547EE7D794DEB(L_141, (&V_7), (2.0f), L_143, 1, NULL);
		if (!L_144)
		{
			goto IL_0460;
		}
	}

IL_0428:
	{
		// foundSomething = false;
		__this->___foundSomething_7 = (bool)0;
		// Debug.DrawLine(rightBackRay.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_147;
		L_147 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_145, L_146, L_147, NULL);
		// Debug.DrawLine(leftBackRay.origin, hitInfo.point, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_150;
		L_150 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_148, L_149, L_150, NULL);
		return;
	}

IL_0460:
	{
		// Debug.DrawLine(rightBackRay.origin, rightBackRay.origin + rightBackRay.direction * 2, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_153, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_152, L_154, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156;
		L_156 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_151, L_155, L_156, NULL);
		// Debug.DrawLine(leftBackRay.origin, leftBackRay.origin + leftBackRay.direction * 2, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_159, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_158, L_160, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_162;
		L_162 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_157, L_161, L_162, NULL);
	}

IL_04bc:
	{
		// }
		return;
	}
}
// System.Void Steering::CheckDistraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_CheckDistraction_mE516B4629289F980358CB12C8978B2B01EF7D340 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (transform.transform.position != distractionWaypoint.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___distractionWaypoint_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5;
		L_5 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_00ae;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.transform.position, distractionWaypoint.position, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___distractionWaypoint_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = __this->___speed_5;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_9, L_11, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_14, NULL);
		// Vector3 direction = (distractionWaypoint.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___distractionWaypoint_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		V_1 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(direction);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_20, NULL);
		V_0 = L_21;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_0;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_27 = __this->___speed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_24, L_25, ((float)il2cpp_codegen_multiply(L_26, L_27)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_28, NULL);
		return;
	}

IL_00ae:
	{
		// StartCoroutine(Distracted());
		RuntimeObject* L_29;
		L_29 = Steering_Distracted_m7BF581740EC29D8A9356E5AD84598A7B085B88F9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Steering::Distracted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Steering_Distracted_m7BF581740EC29D8A9356E5AD84598A7B085B88F9 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* L_0 = (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68*)il2cpp_codegen_object_new(U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68_il2cpp_TypeInfo_var);
		U3CDistractedU3Ed__16__ctor_m21A82E82E3FA266FD6313012D7DA2650F3800DC4(L_0, 0, NULL);
		U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Steering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering__ctor_m45810120F1555E781149EF0FA0278D3EF11777D0 (Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f;
		__this->___speed_5 = (5.0f);
		// public float maxDistance = 2;
		__this->___maxDistance_8 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Steering/<Distracted>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistractedU3Ed__16__ctor_m21A82E82E3FA266FD6313012D7DA2650F3800DC4 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Steering/<Distracted>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistractedU3Ed__16_System_IDisposable_Dispose_m8C7C2CACCF4832C0DFCA7728E2AE0D26065625FA (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Steering/<Distracted>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistractedU3Ed__16_MoveNext_m11A7BDDDBF0D6D3E6A84858DE3F5EE808FEC5030 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// stateMachine.currentState = StateMachine.State.STATE_IDLE;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_4 = V_1;
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_5 = L_4->___stateMachine_15;
		L_5->___currentState_4 = 0;
		// speed = 0;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_6 = V_1;
		L_6->___speed_5 = (0.0f);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// stateMachine.currentState = StateMachine.State.STATE_PATROL;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_8 = V_1;
		StateMachine_tAF6DB96F038DEE14284C0C0AE342050A544B20EB* L_9 = L_8->___stateMachine_15;
		L_9->___currentState_4 = 1;
		// speed = 2;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_10 = V_1;
		L_10->___speed_5 = (2.0f);
		// trigger.GetComponent<Collider>().enabled = true;
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_11 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___trigger_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_12, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_13, (bool)1, NULL);
		// trigger.transform.GetChild(0).gameObject.SetActive(false);
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___trigger_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// trigger.transform.GetChild(1).gameObject.SetActive(false);
		Steering_t8DB6D67C5EBB07AA7060AF5CBE423ABF0FD65130* L_19 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___trigger_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Steering/<Distracted>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistractedU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9901B6513D2B0D26471906823BF5E2AC05BD2941 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Steering/<Distracted>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistractedU3Ed__16_System_Collections_IEnumerator_Reset_m7AE6F1CAB81B2817EA7AA565ACAAD2E0D989A8D8 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDistractedU3Ed__16_System_Collections_IEnumerator_Reset_m7AE6F1CAB81B2817EA7AA565ACAAD2E0D989A8D8_RuntimeMethod_var)));
	}
}
// System.Object Steering/<Distracted>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistractedU3Ed__16_System_Collections_IEnumerator_get_Current_m831D40DA1DF78EEA186A7FB067B21379C114EDF9 (U3CDistractedU3Ed__16_tE3A526AA9A80754F027199788F983FB2DAB94E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GetPerpendicularVector(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___directionNormalized0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___side1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (directionNormalized == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___directionNormalized0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// side = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___side1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_5;
		return;
	}

IL_001e:
	{
		// float x = directionNormalized.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___directionNormalized0;
		float L_7 = L_6->___x_2;
		V_0 = L_7;
		// float y = directionNormalized.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___directionNormalized0;
		float L_9 = L_8->___y_3;
		V_1 = L_9;
		// float z = directionNormalized.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___directionNormalized0;
		float L_11 = L_10->___z_4;
		V_2 = L_11;
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_12 = V_0;
		float L_13;
		L_13 = fabsf(L_12);
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_14 = V_1;
		float L_15;
		L_15 = fabsf(L_14);
		V_6 = L_15;
		// float ax = Mathf.Abs(x), ay = Mathf.Abs(y), az = Mathf.Abs(z);
		float L_16 = V_2;
		float L_17;
		L_17 = fabsf(L_16);
		V_7 = L_17;
		// if (ax >= ay && ay >= az)
		float L_18 = V_6;
		if ((!(((float)L_13) >= ((float)L_18))))
		{
			goto IL_0070;
		}
	}
	{
		float L_19 = V_6;
		float L_20 = V_7;
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_0070;
		}
	}
	{
		// py = 1.0f;
		V_4 = (1.0f);
		// pz = 1.0f;
		V_5 = (1.0f);
		// px = -(y * py + z * pz) / x;
		float L_21 = V_1;
		float L_22 = V_4;
		float L_23 = V_2;
		float L_24 = V_5;
		float L_25 = V_0;
		V_3 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24))))))/L_25));
		goto IL_00ac;
	}

IL_0070:
	{
		// else if (ay >= az)
		float L_26 = V_6;
		float L_27 = V_7;
		if ((!(((float)L_26) >= ((float)L_27))))
		{
			goto IL_0092;
		}
	}
	{
		// px = 1.0f;
		V_3 = (1.0f);
		// pz = 1.0f;
		V_5 = (1.0f);
		// py = -(x * px + z * pz) / y;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30 = V_2;
		float L_31 = V_5;
		float L_32 = V_1;
		V_4 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31))))))/L_32));
		goto IL_00ac;
	}

IL_0092:
	{
		// px = 1.0f;
		V_3 = (1.0f);
		// py = 1.0f;
		V_4 = (1.0f);
		// pz = -(x * px + y * py) / z;
		float L_33 = V_0;
		float L_34 = V_3;
		float L_35 = V_1;
		float L_36 = V_4;
		float L_37 = V_2;
		V_5 = ((float)(((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_34)), ((float)il2cpp_codegen_multiply(L_35, L_36))))))/L_37));
	}

IL_00ac:
	{
		// side = new Vector3(px, py, pz).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = ___side1;
		float L_39 = V_3;
		float L_40 = V_4;
		float L_41 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_39, L_40, L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38 = L_43;
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GenerateLightningBolt(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, int32_t ___generation2, int32_t ___totalGenerations3, float ___offsetAmount4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (generation < 0 || generation > 8)
		int32_t L_0 = ___generation2;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___generation2;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_0009;
		}
	}

IL_0008:
	{
		// return;
		return;
	}

IL_0009:
	{
		// else if (orthographic)
		bool L_2 = __this->___orthographic_24;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// start.z = end.z = Mathf.Min(start.z, end.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___start0;
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___end1;
		float L_6 = L_5.___z_4;
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_4, L_6, NULL);
		float L_8 = L_7;
		V_1 = L_8;
		(&___end1)->___z_4 = L_8;
		float L_9 = V_1;
		(&___start0)->___z_4 = L_9;
	}

IL_0033:
	{
		// segments.Add(new KeyValuePair<Vector3, Vector3>(start, end));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_10 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___end1;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_13;
		memset((&L_13), 0, sizeof(L_13));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_13), L_11, L_12, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_10, L_13, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// if (generation == 0)
		int32_t L_14 = ___generation2;
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (offsetAmount <= 0.0f)
		float L_15 = ___offsetAmount4;
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		// offsetAmount = (end - start).magnitude * ChaosFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_17, NULL);
		V_2 = L_18;
		float L_19;
		L_19 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_20 = __this->___ChaosFactor_11;
		___offsetAmount4 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		goto IL_0128;
	}

IL_0072:
	{
		// int previousStartIndex = startIndex;
		int32_t L_21 = __this->___startIndex_19;
		// startIndex = segments.Count;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_22 = __this->___segments_18;
		int32_t L_23;
		L_23 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_22, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		__this->___startIndex_19 = L_23;
		// for (int i = previousStartIndex; i < startIndex; i++)
		V_3 = L_21;
		goto IL_0112;
	}

IL_008f:
	{
		// start = segments[i].Key;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_24 = __this->___segments_18;
		int32_t L_25 = V_3;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_26;
		L_26 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_24, L_25, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_5 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline((&V_5), KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		___start0 = L_27;
		// end = segments[i].Value;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_28 = __this->___segments_18;
		int32_t L_29 = V_3;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_30;
		L_30 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_28, L_29, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_5 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline((&V_5), KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		___end1 = L_31;
		// Vector3 midPoint = (start + end) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, (0.5f), NULL);
		V_4 = L_35;
		// RandomVector(ref start, ref end, offsetAmount, out randomVector);
		float L_36 = ___offsetAmount4;
		LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA(__this, (&___start0), (&___end1), L_36, (&V_0), NULL);
		// midPoint += randomVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_38, NULL);
		V_4 = L_39;
		// segments.Add(new KeyValuePair<Vector3, Vector3>(start, midPoint));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_40 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_4;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_43;
		memset((&L_43), 0, sizeof(L_43));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_43), L_41, L_42, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_40, L_43, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// segments.Add(new KeyValuePair<Vector3, Vector3>(midPoint, end));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_44 = __this->___segments_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___end1;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_47;
		memset((&L_47), 0, sizeof(L_47));
		KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60((&L_47), L_45, L_46, /*hidden argument*/KeyValuePair_2__ctor_mE52486B3D5A44FA0EFC572975A61AC870A37FB60_RuntimeMethod_var);
		List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_inline(L_44, L_47, List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_RuntimeMethod_var);
		// for (int i = previousStartIndex; i < startIndex; i++)
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0112:
	{
		// for (int i = previousStartIndex; i < startIndex; i++)
		int32_t L_49 = V_3;
		int32_t L_50 = __this->___startIndex_19;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_008f;
		}
	}
	{
		// offsetAmount *= 0.5f;
		float L_51 = ___offsetAmount4;
		___offsetAmount4 = ((float)il2cpp_codegen_multiply(L_51, (0.5f)));
	}

IL_0128:
	{
		// while (generation-- > 0)
		int32_t L_52 = ___generation2;
		int32_t L_53 = L_52;
		___generation2 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
		if ((((int32_t)L_53) > ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::RandomVector(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_RandomVector_m8D5CB399D3CE0038571D41DE824CE673E766B4FA (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___end1, float ___offsetAmount2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___result3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// if (orthographic)
		bool L_0 = __this->___orthographic_24;
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// Vector3 directionNormalized = (end - start).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_3 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_0 = L_6;
		// Vector3 side = new Vector3(-directionNormalized.y, directionNormalized.x, directionNormalized.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((-L_8)), L_10, L_12, NULL);
		// float distance = ((float)RandomGenerator.NextDouble() * offsetAmount * 2.0f) - offsetAmount;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_13 = __this->___RandomGenerator_16;
		double L_14;
		L_14 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_13);
		float L_15 = ___offsetAmount2;
		float L_16 = ___offsetAmount2;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_14), L_15)), (2.0f))), L_16));
		// result = side * distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___result3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_17 = L_20;
		return;
	}

IL_0062:
	{
		// Vector3 directionNormalized = (end - start).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___end1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_24, NULL);
		V_3 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_4 = L_26;
		// GetPerpendicularVector(ref directionNormalized, out side);
		LightningBoltScript_GetPerpendicularVector_m6E14CE8B174161B94706CE092FF3BE4049C53983(__this, (&V_4), (&V_5), NULL);
		// float distance = (((float)RandomGenerator.NextDouble() + 0.1f) * offsetAmount);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_27 = __this->___RandomGenerator_16;
		double L_28;
		L_28 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_27);
		float L_29 = ___offsetAmount2;
		V_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)L_28), (0.100000001f))), L_29));
		// float rotationAngle = ((float)RandomGenerator.NextDouble() * 360.0f);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_30 = __this->___RandomGenerator_16;
		double L_31;
		L_31 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_30);
		V_7 = ((float)il2cpp_codegen_multiply(((float)L_31), (360.0f)));
		// result = Quaternion.AngleAxis(rotationAngle, directionNormalized) * side * distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___result3;
		float L_33 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_35, L_36, NULL);
		float L_38 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_32 = L_39;
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::SelectOffsetFromAnimationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (AnimationMode == LightningBoltAnimationMode.None)
		int32_t L_0 = __this->___AnimationMode_15;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		// lineRenderer.material.mainTextureOffset = offsets[0];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___lineRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = __this->___offsets_21;
		int32_t L_4 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_2, L_5, NULL);
		// return;
		return;
	}

IL_0025:
	{
		// else if (AnimationMode == LightningBoltAnimationMode.PingPong)
		int32_t L_6 = __this->___AnimationMode_15;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_008a;
		}
	}
	{
		// index = animationOffsetIndex;
		int32_t L_7 = __this->___animationOffsetIndex_22;
		V_0 = L_7;
		// animationOffsetIndex += animationPingPongDirection;
		int32_t L_8 = __this->___animationOffsetIndex_22;
		int32_t L_9 = __this->___animationPingPongDirection_23;
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		// if (animationOffsetIndex >= offsets.Length)
		int32_t L_10 = __this->___animationOffsetIndex_22;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = __this->___offsets_21;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0071;
		}
	}
	{
		// animationOffsetIndex = offsets.Length - 2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = __this->___offsets_21;
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), 2));
		// animationPingPongDirection = -1;
		__this->___animationPingPongDirection_23 = (-1);
		goto IL_00d3;
	}

IL_0071:
	{
		// else if (animationOffsetIndex < 0)
		int32_t L_13 = __this->___animationOffsetIndex_22;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_00d3;
		}
	}
	{
		// animationOffsetIndex = 1;
		__this->___animationOffsetIndex_22 = 1;
		// animationPingPongDirection = 1;
		__this->___animationPingPongDirection_23 = 1;
		goto IL_00d3;
	}

IL_008a:
	{
		// else if (AnimationMode == LightningBoltAnimationMode.Loop)
		int32_t L_14 = __this->___AnimationMode_15;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_00be;
		}
	}
	{
		// index = animationOffsetIndex++;
		int32_t L_15 = __this->___animationOffsetIndex_22;
		V_1 = L_15;
		int32_t L_16 = V_1;
		__this->___animationOffsetIndex_22 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_1;
		V_0 = L_17;
		// if (animationOffsetIndex >= offsets.Length)
		int32_t L_18 = __this->___animationOffsetIndex_22;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = __this->___offsets_21;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_00d3;
		}
	}
	{
		// animationOffsetIndex = 0;
		__this->___animationOffsetIndex_22 = 0;
		goto IL_00d3;
	}

IL_00be:
	{
		// index = RandomGenerator.Next(0, offsets.Length);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_20 = __this->___RandomGenerator_16;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = __this->___offsets_21;
		int32_t L_22;
		L_22 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		V_0 = L_22;
	}

IL_00d3:
	{
		// if (index >= 0 && index < offsets.Length)
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_24 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = __this->___offsets_21;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_00ff;
		}
	}
	{
		// lineRenderer.material.mainTextureOffset = offsets[index];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_26 = __this->___lineRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_26, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_28 = __this->___offsets_21;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_27, L_31, NULL);
		return;
	}

IL_00ff:
	{
		// lineRenderer.material.mainTextureOffset = offsets[0];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_32 = __this->___lineRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_32, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = __this->___offsets_21;
		int32_t L_35 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_33, L_36, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// int segmentCount = (segments.Count - startIndex) + 1;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_0 = __this->___segments_18;
		int32_t L_1;
		L_1 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_0, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		int32_t L_2 = __this->___startIndex_19;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), 1));
		// lineRenderer.positionCount = segmentCount;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_17;
		int32_t L_4 = V_0;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, L_4, NULL);
		// if (segmentCount < 1)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// int index = 0;
		V_1 = 0;
		// lineRenderer.SetPosition(index++, segments[startIndex].Key);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->___lineRenderer_17;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_9 = __this->___segments_18;
		int32_t L_10 = __this->___startIndex_19;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_11;
		L_11 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_9, L_10, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_2 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_inline((&V_2), KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_RuntimeMethod_var);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_6, L_8, L_12, NULL);
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_13 = __this->___startIndex_19;
		V_3 = L_13;
		goto IL_0082;
	}

IL_005a:
	{
		// lineRenderer.SetPosition(index++, segments[i].Value);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___lineRenderer_17;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_17 = __this->___segments_18;
		int32_t L_18 = V_3;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_19;
		L_19 = List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C(L_17, L_18, List_1_get_Item_mA9F943F6F8AA7C48569A5189904AE122CFB97A5C_RuntimeMethod_var);
		V_2 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_inline((&V_2), KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_RuntimeMethod_var);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_14, L_16, L_20, NULL);
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0082:
	{
		// for (int i = startIndex; i < segments.Count; i++)
		int32_t L_22 = V_3;
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_23 = __this->___segments_18;
		int32_t L_24;
		L_24 = List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_inline(L_23, List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_005a;
		}
	}
	{
		// segments.Clear();
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_25 = __this->___segments_18;
		List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_inline(L_25, List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_RuntimeMethod_var);
		// SelectOffsetFromAnimationMode();
		LightningBoltScript_SelectOffsetFromAnimationMode_m98F0C804C05EFB6BC3283AC50D654D5A672B6199(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Start_m980C378E5754957B1F4DE221515969B6A328240E (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B2_0 = NULL;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B3_1 = NULL;
	{
		// orthographic = (Camera.main != null && Camera.main.orthographic);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->___orthographic_24 = (bool)G_B3_0;
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4;
		L_4 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_17), (void*)L_4);
		// lineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_17;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_5, 0, NULL);
		// UpdateFromMaterialChange();
		LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Update_m0BE2BF4FB4CD027E8C78FE58991FFF103836AF31 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B2_0 = NULL;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* G_B3_1 = NULL;
	{
		// orthographic = (Camera.main != null && Camera.main.orthographic);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001a;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		bool L_3;
		L_3 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->___orthographic_24 = (bool)G_B3_0;
		// if (timer <= 0.0f)
		float L_4 = __this->___timer_10;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// if (ManualMode)
		bool L_5 = __this->___ManualMode_12;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// timer = Duration;
		float L_6 = __this->___Duration_9;
		__this->___timer_10 = L_6;
		// lineRenderer.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lineRenderer_17;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_7, 0, NULL);
		goto IL_0055;
	}

IL_004f:
	{
		// Trigger();
		LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284(__this, NULL);
	}

IL_0055:
	{
		// timer -= Time.deltaTime;
		float L_8 = __this->___timer_10;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_Trigger_mA1EDB81D4D9001D2B19FFBACB0A36BAFEE96C284 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// timer = Duration + Mathf.Min(0.0f, timer);
		float L_0 = __this->___Duration_9;
		float L_1 = __this->___timer_10;
		float L_2;
		L_2 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), L_1, NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_add(L_0, L_2));
		// if (StartObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___StartObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// start = StartPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___StartPosition_5;
		V_0 = L_5;
		goto IL_0050;
	}

IL_0034:
	{
		// start = StartObject.transform.position + StartPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___StartObject_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___StartPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		V_0 = L_10;
	}

IL_0050:
	{
		// if (EndObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___EndObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		// end = EndPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___EndPosition_7;
		V_1 = L_13;
		goto IL_0083;
	}

IL_0067:
	{
		// end = EndObject.transform.position + EndPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___EndObject_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___EndPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_17, NULL);
		V_1 = L_18;
	}

IL_0083:
	{
		// startIndex = 0;
		__this->___startIndex_19 = 0;
		// GenerateLightningBolt(start, end, Generations, Generations, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		int32_t L_21 = __this->___Generations_8;
		int32_t L_22 = __this->___Generations_8;
		LightningBoltScript_GenerateLightningBolt_m6F45F784BE0610F9E9B519C5E290D3515DE0BA49(__this, L_19, L_20, L_21, L_22, (0.0f), NULL);
		// UpdateLineRenderer();
		LightningBoltScript_UpdateLineRenderer_mC709724D71E0E95242108C4B9D6F7DA6BAB71F65(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateFromMaterialChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript_UpdateFromMaterialChange_m977EBCF7F3B1B47A777F34B0305C7FC8A04E1EF5 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// size = new Vector2(1.0f / (float)Columns, 1.0f / (float)Rows);
		int32_t L_0 = __this->___Columns_14;
		int32_t L_1 = __this->___Rows_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)((1.0f)/((float)L_0))), ((float)((1.0f)/((float)L_1))), /*hidden argument*/NULL);
		__this->___size_20 = L_2;
		// lineRenderer.material.mainTextureScale = size;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___size_20;
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_4, L_5, NULL);
		// offsets = new Vector2[Rows * Columns];
		int32_t L_6 = __this->___Rows_13;
		int32_t L_7 = __this->___Columns_14;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, L_7)));
		__this->___offsets_21 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___offsets_21), (void*)L_8);
		// for (int y = 0; y < Rows; y++)
		V_0 = 0;
		goto IL_009a;
	}

IL_0057:
	{
		// for (int x = 0; x < Columns; x++)
		V_1 = 0;
		goto IL_008d;
	}

IL_005b:
	{
		// offsets[x + (y * Columns)] = new Vector2((float)x / Columns, (float)y / Rows);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = __this->___offsets_21;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___Columns_14;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Columns_14;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___Rows_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)(((float)L_13)/((float)L_14))), ((float)(((float)L_15)/((float)L_16))), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		// for (int x = 0; x < Columns; x++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_008d:
	{
		// for (int x = 0; x < Columns; x++)
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___Columns_14;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// for (int y = 0; y < Rows; y++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009a:
	{
		// for (int y = 0; y < Rows; y++)
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___Rows_13;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightningBoltScript__ctor_m6B404ACF4FA73DFC000CE86270A4409AA1BBDD42 (LightningBoltScript_t363DA8D036F5FEB5CFDE1B5853207BE64D95B3E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Generations = 6;
		__this->___Generations_8 = 6;
		// public float Duration = 0.05f;
		__this->___Duration_9 = (0.0500000007f);
		// public float ChaosFactor = 0.15f;
		__this->___ChaosFactor_11 = (0.150000006f);
		// public int Rows = 1;
		__this->___Rows_13 = 1;
		// public int Columns = 1;
		__this->___Columns_14 = 1;
		// public LightningBoltAnimationMode AnimationMode = LightningBoltAnimationMode.PingPong;
		__this->___AnimationMode_15 = 3;
		// public System.Random RandomGenerator = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___RandomGenerator_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RandomGenerator_16), (void*)L_0);
		// private List<KeyValuePair<Vector3, Vector3>> segments = new List<KeyValuePair<Vector3, Vector3>>();
		List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* L_1 = (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*)il2cpp_codegen_object_new(List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD_il2cpp_TypeInfo_var);
		List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C(L_1, List_1__ctor_m01FB66CBC7881CD4F65D3FBEA76E99F61514EA4C_RuntimeMethod_var);
		__this->___segments_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___segments_18), (void*)L_1);
		// private int animationPingPongDirection = 1;
		__this->___animationPingPongDirection_23 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9CED266626971FEC318C8D53551FE3A869B5BBE3_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 ___item0, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_1 = (KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9 L_9 = ___item0;
		((  void (*) (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD*, KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5113D6971DE3E663A92DE2A75AA71D310A109B96_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Key_mF399A3A7FAACB97999A1026ECCBD96221DB55FB4_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 KeyValuePair_2_get_Value_m7F76F30DBA8B3746B5385BA903DC8B8925C04343_gshared_inline (KeyValuePair_2_tB5A0F336358066F860560EA84B5ABBDC9EB30FB9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF8CCA57B4BFDC96ED00E7FA3A999859EDECF661A_gshared_inline (List_1_tE42C171DDE369F2B5D0ED6707D9FE519FA1F48BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6* L_3 = (KeyValuePair_2U5BU5D_tD19FD8998F50EFAF97DF0532DA0913A611386AE6*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
