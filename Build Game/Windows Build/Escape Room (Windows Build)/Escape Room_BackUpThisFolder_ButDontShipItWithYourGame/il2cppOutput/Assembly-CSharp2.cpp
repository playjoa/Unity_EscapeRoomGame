#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.Color>
struct Action_1_tC747810051096FEC47140D886015F5428DEDDAE2;
// System.Action`1<ITask>
struct Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t0C1F417511439CBAA03909A69138FAF0BD19FA30;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t05923E9D06D867E1AC6A90E2B1B2FE28CA9F910A;
// System.Action`2<System.Single,System.Object>
struct Action_2_tC5EA1BA82797894656DD89A0F3E7B791EC8BD050;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_tCA8676CFBCEAA1EE28321875815FD1767B25E4CB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>
struct Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25;
// System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>
struct Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C;
// System.Collections.Generic.HashSet`1<GameEventListenter>
struct HashSet_1_tAC1724012AE520BBB6896748C14F4B87B4F03B03;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SoundManager/SoundFX>
struct KeyCollection_t55EAA1CC2E0F5BD26C93E1EB12317484860D9D74;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UI_Manager/UI_Item>
struct KeyCollection_t4B52505E3FE69F05094D8AE530869969AD466876;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SoundManager/SoundFX>
struct List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE;
// System.Collections.Generic.List`1<UI_Manager/UI_Item>
struct List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SoundManager/SoundFX>
struct ValueCollection_t3BBF165624459FA8A5DD4FD460A6FE0662EEF2B1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UI_Manager/UI_Item>
struct ValueCollection_t97DB7812B0574F82A9720C54220C2204796D7A81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SoundManager/SoundFX>[]
struct EntryU5BU5D_tF31971560CF4AF98F16BA03998EB5207E7231FA3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UI_Manager/UI_Item>[]
struct EntryU5BU5D_t0E8CBEFF9B5B3EBABFBA6E6E902540EF1287FB89;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// FeedbackLightBulb[]
struct FeedbackLightBulbU5BU5D_t8005FE9EC4BD48C64BE84B0CECDDA9CD57A78690;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// ITask[]
struct ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// ToyGatherTask[]
struct ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// SoundManager/SoundFX[]
struct SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE;
// UI_Manager/UI_Item[]
struct UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// AvailableGameEvents
struct AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// FeedbackPuzzleLights
struct FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameEvent
struct GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038;
// GameEventListenterWithDelay
struct GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ITask
struct ITask_t5B279F7B3504FD9F839FDBD1620EBD1C1DC94489;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InitialLoader
struct InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LTBezierPath
struct LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48;
// LTDescr
struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F;
// LTDescrOptional
struct LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2;
// LTRect
struct LTRect_t021E2200FFDBE6E949B5557CCEE72E8062D2DABD;
// LTSpline
struct LTSpline_t4DE3CFCB0B4DB70C4798ABA88BBFFD46A515C701;
// LeanTester
struct LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297;
// LoadSceneWithLoadingBar
struct LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PickUpObject
struct PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD;
// PuzzleStats
struct PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// SoundtrackManager
struct SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ToyGatherPuzzle
struct ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669;
// ToyGatherTask
struct ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TriggerCutscene
struct TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A;
// TweenerAnimation
struct TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3;
// UI_Manager
struct UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// GameEventListenterWithDelay/<RunDelayedEvent>d__3
struct U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B;
// InitialLoader/<LoadScene>d__7
struct U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179;
// LTDescr/<>c
struct U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF;
// LeanTester/<timeoutCheck>d__2
struct U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6;
// LeanTween/<>c__DisplayClass193_0
struct U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48;
// LeanTween/<>c__DisplayClass194_0
struct U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814;
// LeanTween/<>c__DisplayClass195_0
struct U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4;
// LeanTween/<>c__DisplayClass196_0
struct U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78;
// LoadSceneWithLoadingBar/<LoadScene>d__7
struct U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// SoundManager/SoundFX
struct SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B;
// UI_Manager/UI_Item
struct UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITask_t5B279F7B3504FD9F839FDBD1620EBD1C1DC94489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05139E99F063C14C1A14DB71A3DB519DBC2F8B95;
IL2CPP_EXTERN_C String_t* _stringLiteral2164458A7347B245E9F4F606A444170B2D68EEFB;
IL2CPP_EXTERN_C String_t* _stringLiteral22BA08310FFDFEABB012C50B036FEE7069706B51;
IL2CPP_EXTERN_C String_t* _stringLiteral2325D4C387659F001176551AC884700FB274E1D0;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B;
IL2CPP_EXTERN_C String_t* _stringLiteral46091384BBC973B3E902010807A1D1448CFD51AC;
IL2CPP_EXTERN_C String_t* _stringLiteral47A517A3FBA5265996D5BFDD8B79B1681C19ADCC;
IL2CPP_EXTERN_C String_t* _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722;
IL2CPP_EXTERN_C String_t* _stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F;
IL2CPP_EXTERN_C String_t* _stringLiteral857398E0448EED6548A6043E6E5141693786A574;
IL2CPP_EXTERN_C String_t* _stringLiteral88BECFB0047FAD7F64D6BE3743F6E1D36D4CDAF0;
IL2CPP_EXTERN_C String_t* _stringLiteral88F3A660C31436A80576A84684F76BFCEDA1051C;
IL2CPP_EXTERN_C String_t* _stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B;
IL2CPP_EXTERN_C String_t* _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE168DFE1E95EE937368AFACB31736CF64408F6F3;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1E5B6004C60B9FACD85E3EA731C47F0931F23ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAD8DF48D76EDD4DD311DAB3E46998B2959040D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEC6044AC88907B6C0C80456294480A86DC9EC9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m54D7BBDEAB7A8E3587227F39A5007DBD02D1EEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD1BF1BFD75B4D9A4C2B19FD7C7725F8092B806E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m24F4D04251907D29324B0BE9002A8851A3174D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDFD119161E17F9082AAE7F16AB38378D3F0548E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m237B2DAA2DA72BB89A58EA018DDE02F7024660A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m97663B0BFE38701160A6AE356C7F4D96DE8D200A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B8BFB23E8DB9C520959B213745D8DBF3962B261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76AB72FAE501D10ABA80A66D464C01784906F08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m636E55020B435BF40D080F6ACEDEC62916F45029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD3E7D5A720423FC95C2811D0950065256F81C1D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9933011D5649BA0740DA30514C1F39BFC2FCFBA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA1D55F9D0DCFA045917ED12A557EFB4387D49C11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m60DB8894CEA78B020784686D5DF4BBBEEA1A4E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m101B7AB09A25F1D48906A3D72D1B657AC0E491D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB620C00222C9F3E2689FFCEF6C40792BEA6AC057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SoundtrackManager_OnSceneLoaded_m576ACEE51AE29F08E66AEFD558EFDCD6766CD660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenerAnimation_DesativarDepoisDaAnim_m0E5632DB42AB50CEA2960C38CD29464F8DCB06A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_m489C6BEA04FEEE11D765F9D6453DC8F53E2AB4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_mBE9655BE959227EDB68035FF46042B8C90FFD06D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunDelayedEventU3Ed__3_System_Collections_IEnumerator_Reset_m79CF7F3DD4E051976E041027C7CA195C3542C6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m377EF3F9C3E2B3A09D749A0A347B92595F0D756D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F;
struct ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>
struct Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF31971560CF4AF98F16BA03998EB5207E7231FA3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t55EAA1CC2E0F5BD26C93E1EB12317484860D9D74 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3BBF165624459FA8A5DD4FD460A6FE0662EEF2B1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___entries_1)); }
	inline EntryU5BU5D_tF31971560CF4AF98F16BA03998EB5207E7231FA3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF31971560CF4AF98F16BA03998EB5207E7231FA3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF31971560CF4AF98F16BA03998EB5207E7231FA3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___keys_7)); }
	inline KeyCollection_t55EAA1CC2E0F5BD26C93E1EB12317484860D9D74 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t55EAA1CC2E0F5BD26C93E1EB12317484860D9D74 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t55EAA1CC2E0F5BD26C93E1EB12317484860D9D74 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ___values_8)); }
	inline ValueCollection_t3BBF165624459FA8A5DD4FD460A6FE0662EEF2B1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3BBF165624459FA8A5DD4FD460A6FE0662EEF2B1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3BBF165624459FA8A5DD4FD460A6FE0662EEF2B1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>
struct Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0E8CBEFF9B5B3EBABFBA6E6E902540EF1287FB89* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4B52505E3FE69F05094D8AE530869969AD466876 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t97DB7812B0574F82A9720C54220C2204796D7A81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___entries_1)); }
	inline EntryU5BU5D_t0E8CBEFF9B5B3EBABFBA6E6E902540EF1287FB89* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0E8CBEFF9B5B3EBABFBA6E6E902540EF1287FB89** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0E8CBEFF9B5B3EBABFBA6E6E902540EF1287FB89* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___keys_7)); }
	inline KeyCollection_t4B52505E3FE69F05094D8AE530869969AD466876 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4B52505E3FE69F05094D8AE530869969AD466876 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4B52505E3FE69F05094D8AE530869969AD466876 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ___values_8)); }
	inline ValueCollection_t97DB7812B0574F82A9720C54220C2204796D7A81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t97DB7812B0574F82A9720C54220C2204796D7A81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t97DB7812B0574F82A9720C54220C2204796D7A81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<SoundManager/SoundFX>
struct List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE, ____items_1)); }
	inline SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* get__items_1() const { return ____items_1; }
	inline SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE_StaticFields, ____emptyArray_5)); }
	inline SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SoundFXU5BU5D_tF516F26F1194962F50C44FBD06916726FD6638EE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UI_Manager/UI_Item>
struct List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81, ____items_1)); }
	inline UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* get__items_1() const { return ____items_1; }
	inline UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81_StaticFields, ____emptyArray_5)); }
	inline UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UI_ItemU5BU5D_tB8221CE1D630DB62658892BDA07907FEDE40AB31* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// LeanTest
struct LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F  : public RuntimeObject
{
public:

public:
};

struct LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields
{
public:
	// System.Int32 LeanTest::expected
	int32_t ___expected_0;
	// System.Int32 LeanTest::tests
	int32_t ___tests_1;
	// System.Int32 LeanTest::passes
	int32_t ___passes_2;
	// System.Single LeanTest::timeout
	float ___timeout_3;
	// System.Boolean LeanTest::timeoutStarted
	bool ___timeoutStarted_4;
	// System.Boolean LeanTest::testsFinished
	bool ___testsFinished_5;

public:
	inline static int32_t get_offset_of_expected_0() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___expected_0)); }
	inline int32_t get_expected_0() const { return ___expected_0; }
	inline int32_t* get_address_of_expected_0() { return &___expected_0; }
	inline void set_expected_0(int32_t value)
	{
		___expected_0 = value;
	}

	inline static int32_t get_offset_of_tests_1() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___tests_1)); }
	inline int32_t get_tests_1() const { return ___tests_1; }
	inline int32_t* get_address_of_tests_1() { return &___tests_1; }
	inline void set_tests_1(int32_t value)
	{
		___tests_1 = value;
	}

	inline static int32_t get_offset_of_passes_2() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___passes_2)); }
	inline int32_t get_passes_2() const { return ___passes_2; }
	inline int32_t* get_address_of_passes_2() { return &___passes_2; }
	inline void set_passes_2(int32_t value)
	{
		___passes_2 = value;
	}

	inline static int32_t get_offset_of_timeout_3() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___timeout_3)); }
	inline float get_timeout_3() const { return ___timeout_3; }
	inline float* get_address_of_timeout_3() { return &___timeout_3; }
	inline void set_timeout_3(float value)
	{
		___timeout_3 = value;
	}

	inline static int32_t get_offset_of_timeoutStarted_4() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___timeoutStarted_4)); }
	inline bool get_timeoutStarted_4() const { return ___timeoutStarted_4; }
	inline bool* get_address_of_timeoutStarted_4() { return &___timeoutStarted_4; }
	inline void set_timeoutStarted_4(bool value)
	{
		___timeoutStarted_4 = value;
	}

	inline static int32_t get_offset_of_testsFinished_5() { return static_cast<int32_t>(offsetof(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields, ___testsFinished_5)); }
	inline bool get_testsFinished_5() const { return ___testsFinished_5; }
	inline bool* get_address_of_testsFinished_5() { return &___testsFinished_5; }
	inline void set_testsFinished_5(bool value)
	{
		___testsFinished_5 = value;
	}
};


// PuzzleStats
struct PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B  : public RuntimeObject
{
public:
	// ITask[] PuzzleStats::puzzleTasks
	ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* ___puzzleTasks_0;

public:
	inline static int32_t get_offset_of_puzzleTasks_0() { return static_cast<int32_t>(offsetof(PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B, ___puzzleTasks_0)); }
	inline ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* get_puzzleTasks_0() const { return ___puzzleTasks_0; }
	inline ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F** get_address_of_puzzleTasks_0() { return &___puzzleTasks_0; }
	inline void set_puzzleTasks_0(ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* value)
	{
		___puzzleTasks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleTasks_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameEventListenterWithDelay/<RunDelayedEvent>d__3
struct U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B  : public RuntimeObject
{
public:
	// System.Int32 GameEventListenterWithDelay/<RunDelayedEvent>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameEventListenterWithDelay/<RunDelayedEvent>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameEventListenterWithDelay GameEventListenterWithDelay/<RunDelayedEvent>d__3::<>4__this
	GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B, ___U3CU3E4__this_2)); }
	inline GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// InitialLoader/<LoadScene>d__7
struct U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179  : public RuntimeObject
{
public:
	// System.Int32 InitialLoader/<LoadScene>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InitialLoader/<LoadScene>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InitialLoader InitialLoader/<LoadScene>d__7::<>4__this
	InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation InitialLoader/<LoadScene>d__7::<opperation>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CopperationU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179, ___U3CU3E4__this_2)); }
	inline InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopperationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179, ___U3CopperationU3E5__2_3)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CopperationU3E5__2_3() const { return ___U3CopperationU3E5__2_3; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CopperationU3E5__2_3() { return &___U3CopperationU3E5__2_3; }
	inline void set_U3CopperationU3E5__2_3(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CopperationU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopperationU3E5__2_3), (void*)value);
	}
};


// LTDescr/<>c
struct U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_StaticFields
{
public:
	// LTDescr/<>c LTDescr/<>c::<>9
	U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * ___U3CU3E9_0;
	// LTDescr/ActionMethodDelegate LTDescr/<>c::<>9__113_0
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CU3E9__113_0_1;
	// LTDescr/ActionMethodDelegate LTDescr/<>c::<>9__114_0
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CU3E9__114_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__113_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_StaticFields, ___U3CU3E9__113_0_1)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CU3E9__113_0_1() const { return ___U3CU3E9__113_0_1; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CU3E9__113_0_1() { return &___U3CU3E9__113_0_1; }
	inline void set_U3CU3E9__113_0_1(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CU3E9__113_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__113_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__114_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_StaticFields, ___U3CU3E9__114_0_2)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CU3E9__114_0_2() const { return ___U3CU3E9__114_0_2; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CU3E9__114_0_2() { return &___U3CU3E9__114_0_2; }
	inline void set_U3CU3E9__114_0_2(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CU3E9__114_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__114_0_2), (void*)value);
	}
};


// LeanTester/<timeoutCheck>d__2
struct U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6  : public RuntimeObject
{
public:
	// System.Int32 LeanTester/<timeoutCheck>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeanTester/<timeoutCheck>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LeanTester LeanTester/<timeoutCheck>d__2::<>4__this
	LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * ___U3CU3E4__this_2;
	// System.Single LeanTester/<timeoutCheck>d__2::<pauseEndTime>5__2
	float ___U3CpauseEndTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6, ___U3CU3E4__this_2)); }
	inline LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpauseEndTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6, ___U3CpauseEndTimeU3E5__2_3)); }
	inline float get_U3CpauseEndTimeU3E5__2_3() const { return ___U3CpauseEndTimeU3E5__2_3; }
	inline float* get_address_of_U3CpauseEndTimeU3E5__2_3() { return &___U3CpauseEndTimeU3E5__2_3; }
	inline void set_U3CpauseEndTimeU3E5__2_3(float value)
	{
		___U3CpauseEndTimeU3E5__2_3 = value;
	}
};


// LeanTween/<>c__DisplayClass193_0
struct U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48  : public RuntimeObject
{
public:
	// LTDescr LeanTween/<>c__DisplayClass193_0::d
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___d_0;
	// System.Single LeanTween/<>c__DisplayClass193_0::smoothTime
	float ___smoothTime_1;
	// System.Single LeanTween/<>c__DisplayClass193_0::maxSpeed
	float ___maxSpeed_2;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48, ___d_0)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_d_0() const { return ___d_0; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_smoothTime_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48, ___smoothTime_1)); }
	inline float get_smoothTime_1() const { return ___smoothTime_1; }
	inline float* get_address_of_smoothTime_1() { return &___smoothTime_1; }
	inline void set_smoothTime_1(float value)
	{
		___smoothTime_1 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48, ___maxSpeed_2)); }
	inline float get_maxSpeed_2() const { return ___maxSpeed_2; }
	inline float* get_address_of_maxSpeed_2() { return &___maxSpeed_2; }
	inline void set_maxSpeed_2(float value)
	{
		___maxSpeed_2 = value;
	}
};


// LeanTween/<>c__DisplayClass194_0
struct U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814  : public RuntimeObject
{
public:
	// LTDescr LeanTween/<>c__DisplayClass194_0::d
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___d_0;
	// System.Single LeanTween/<>c__DisplayClass194_0::smoothTime
	float ___smoothTime_1;
	// System.Single LeanTween/<>c__DisplayClass194_0::maxSpeed
	float ___maxSpeed_2;
	// System.Single LeanTween/<>c__DisplayClass194_0::friction
	float ___friction_3;
	// System.Single LeanTween/<>c__DisplayClass194_0::accelRate
	float ___accelRate_4;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814, ___d_0)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_d_0() const { return ___d_0; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_smoothTime_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814, ___smoothTime_1)); }
	inline float get_smoothTime_1() const { return ___smoothTime_1; }
	inline float* get_address_of_smoothTime_1() { return &___smoothTime_1; }
	inline void set_smoothTime_1(float value)
	{
		___smoothTime_1 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814, ___maxSpeed_2)); }
	inline float get_maxSpeed_2() const { return ___maxSpeed_2; }
	inline float* get_address_of_maxSpeed_2() { return &___maxSpeed_2; }
	inline void set_maxSpeed_2(float value)
	{
		___maxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_friction_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814, ___friction_3)); }
	inline float get_friction_3() const { return ___friction_3; }
	inline float* get_address_of_friction_3() { return &___friction_3; }
	inline void set_friction_3(float value)
	{
		___friction_3 = value;
	}

	inline static int32_t get_offset_of_accelRate_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814, ___accelRate_4)); }
	inline float get_accelRate_4() const { return ___accelRate_4; }
	inline float* get_address_of_accelRate_4() { return &___accelRate_4; }
	inline void set_accelRate_4(float value)
	{
		___accelRate_4 = value;
	}
};


// LeanTween/<>c__DisplayClass195_0
struct U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4  : public RuntimeObject
{
public:
	// LTDescr LeanTween/<>c__DisplayClass195_0::d
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___d_0;
	// System.Single LeanTween/<>c__DisplayClass195_0::smoothTime
	float ___smoothTime_1;
	// System.Single LeanTween/<>c__DisplayClass195_0::maxSpeed
	float ___maxSpeed_2;
	// System.Single LeanTween/<>c__DisplayClass195_0::friction
	float ___friction_3;
	// System.Single LeanTween/<>c__DisplayClass195_0::accelRate
	float ___accelRate_4;
	// System.Single LeanTween/<>c__DisplayClass195_0::hitDamping
	float ___hitDamping_5;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___d_0)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_d_0() const { return ___d_0; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_smoothTime_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___smoothTime_1)); }
	inline float get_smoothTime_1() const { return ___smoothTime_1; }
	inline float* get_address_of_smoothTime_1() { return &___smoothTime_1; }
	inline void set_smoothTime_1(float value)
	{
		___smoothTime_1 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___maxSpeed_2)); }
	inline float get_maxSpeed_2() const { return ___maxSpeed_2; }
	inline float* get_address_of_maxSpeed_2() { return &___maxSpeed_2; }
	inline void set_maxSpeed_2(float value)
	{
		___maxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_friction_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___friction_3)); }
	inline float get_friction_3() const { return ___friction_3; }
	inline float* get_address_of_friction_3() { return &___friction_3; }
	inline void set_friction_3(float value)
	{
		___friction_3 = value;
	}

	inline static int32_t get_offset_of_accelRate_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___accelRate_4)); }
	inline float get_accelRate_4() const { return ___accelRate_4; }
	inline float* get_address_of_accelRate_4() { return &___accelRate_4; }
	inline void set_accelRate_4(float value)
	{
		___accelRate_4 = value;
	}

	inline static int32_t get_offset_of_hitDamping_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4, ___hitDamping_5)); }
	inline float get_hitDamping_5() const { return ___hitDamping_5; }
	inline float* get_address_of_hitDamping_5() { return &___hitDamping_5; }
	inline void set_hitDamping_5(float value)
	{
		___hitDamping_5 = value;
	}
};


// LeanTween/<>c__DisplayClass196_0
struct U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78  : public RuntimeObject
{
public:
	// LTDescr LeanTween/<>c__DisplayClass196_0::d
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___d_0;
	// System.Single LeanTween/<>c__DisplayClass196_0::moveSpeed
	float ___moveSpeed_1;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78, ___d_0)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_d_0() const { return ___d_0; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_0), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78, ___moveSpeed_1)); }
	inline float get_moveSpeed_1() const { return ___moveSpeed_1; }
	inline float* get_address_of_moveSpeed_1() { return &___moveSpeed_1; }
	inline void set_moveSpeed_1(float value)
	{
		___moveSpeed_1 = value;
	}
};


// LoadSceneWithLoadingBar/<LoadScene>d__7
struct U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331  : public RuntimeObject
{
public:
	// System.Int32 LoadSceneWithLoadingBar/<LoadScene>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadSceneWithLoadingBar/<LoadScene>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadSceneWithLoadingBar LoadSceneWithLoadingBar/<LoadScene>d__7::<>4__this
	LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation LoadSceneWithLoadingBar/<LoadScene>d__7::<opperation>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CopperationU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331, ___U3CU3E4__this_2)); }
	inline LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CopperationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331, ___U3CopperationU3E5__2_3)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CopperationU3E5__2_3() const { return ___U3CopperationU3E5__2_3; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CopperationU3E5__2_3() { return &___U3CopperationU3E5__2_3; }
	inline void set_U3CopperationU3E5__2_3(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CopperationU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CopperationU3E5__2_3), (void*)value);
	}
};


// SoundManager/SoundFX
struct SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B  : public RuntimeObject
{
public:
	// System.String SoundManager/SoundFX::idSom
	String_t* ___idSom_0;
	// UnityEngine.AudioClip[] SoundManager/SoundFX::clips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips_1;

public:
	inline static int32_t get_offset_of_idSom_0() { return static_cast<int32_t>(offsetof(SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B, ___idSom_0)); }
	inline String_t* get_idSom_0() const { return ___idSom_0; }
	inline String_t** get_address_of_idSom_0() { return &___idSom_0; }
	inline void set_idSom_0(String_t* value)
	{
		___idSom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idSom_0), (void*)value);
	}

	inline static int32_t get_offset_of_clips_1() { return static_cast<int32_t>(offsetof(SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B, ___clips_1)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_clips_1() const { return ___clips_1; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_clips_1() { return &___clips_1; }
	inline void set_clips_1(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___clips_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clips_1), (void*)value);
	}
};


// UI_Manager/UI_Item
struct UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9  : public RuntimeObject
{
public:
	// System.String UI_Manager/UI_Item::idItem
	String_t* ___idItem_0;
	// UnityEngine.GameObject UI_Manager/UI_Item::item
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item_1;

public:
	inline static int32_t get_offset_of_idItem_0() { return static_cast<int32_t>(offsetof(UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9, ___idItem_0)); }
	inline String_t* get_idItem_0() const { return ___idItem_0; }
	inline String_t** get_address_of_idItem_0() { return &___idItem_0; }
	inline void set_idItem_0(String_t* value)
	{
		___idItem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idItem_0), (void*)value);
	}

	inline static int32_t get_offset_of_item_1() { return static_cast<int32_t>(offsetof(UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9, ___item_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_item_1() const { return ___item_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_item_1() { return &___item_1; }
	inline void set_item_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___item_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SoundManager/SoundFX>
struct Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A, ___list_0)); }
	inline List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * get_list_0() const { return ___list_0; }
	inline List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A, ___current_3)); }
	inline SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * get_current_3() const { return ___current_3; }
	inline SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UI_Manager/UI_Item>
struct Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED, ___list_0)); }
	inline List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * get_list_0() const { return ___list_0; }
	inline List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED, ___current_3)); }
	inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * get_current_3() const { return ___current_3; }
	inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UI_Manager/UI_Item>
struct KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D, ___value_1)); }
	inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * get_value_1() const { return ___value_1; }
	inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UI_Manager/UI_Item>
struct Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732, ___dictionary_0)); }
	inline Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732, ___current_3)); }
	inline KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// LTDescrOptional
struct LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2  : public RuntimeObject
{
public:
	// UnityEngine.Transform LTDescrOptional::<toTrans>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtoTransU3Ek__BackingField_0;
	// UnityEngine.Vector3 LTDescrOptional::<point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpointU3Ek__BackingField_1;
	// UnityEngine.Vector3 LTDescrOptional::<axis>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CaxisU3Ek__BackingField_2;
	// System.Single LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_3;
	// UnityEngine.Quaternion LTDescrOptional::<origRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CorigRotationU3Ek__BackingField_4;
	// LTBezierPath LTDescrOptional::<path>k__BackingField
	LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * ___U3CpathU3Ek__BackingField_5;
	// LTSpline LTDescrOptional::<spline>k__BackingField
	LTSpline_t4DE3CFCB0B4DB70C4798ABA88BBFFD46A515C701 * ___U3CsplineU3Ek__BackingField_6;
	// UnityEngine.AnimationCurve LTDescrOptional::animationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve_7;
	// System.Int32 LTDescrOptional::initFrameCount
	int32_t ___initFrameCount_8;
	// UnityEngine.Color LTDescrOptional::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_9;
	// LTRect LTDescrOptional::<ltRect>k__BackingField
	LTRect_t021E2200FFDBE6E949B5557CCEE72E8062D2DABD * ___U3CltRectU3Ek__BackingField_10;
	// System.Action`1<System.Single> LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3ConUpdateFloatU3Ek__BackingField_11;
	// System.Action`2<System.Single,System.Single> LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___U3ConUpdateFloatRatioU3Ek__BackingField_12;
	// System.Action`2<System.Single,System.Object> LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_tC5EA1BA82797894656DD89A0F3E7B791EC8BD050 * ___U3ConUpdateFloatObjectU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector2> LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t0C1F417511439CBAA03909A69138FAF0BD19FA30 * ___U3ConUpdateVector2U3Ek__BackingField_14;
	// System.Action`1<UnityEngine.Vector3> LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * ___U3ConUpdateVector3U3Ek__BackingField_15;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_tCA8676CFBCEAA1EE28321875815FD1767B25E4CB * ___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
	// System.Action`1<UnityEngine.Color> LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_tC747810051096FEC47140D886015F5428DEDDAE2 * ___U3ConUpdateColorU3Ek__BackingField_17;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_t05923E9D06D867E1AC6A90E2B1B2FE28CA9F910A * ___U3ConUpdateColorObjectU3Ek__BackingField_18;
	// System.Action LTDescrOptional::<onComplete>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3ConCompleteU3Ek__BackingField_19;
	// System.Action`1<System.Object> LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3ConCompleteObjectU3Ek__BackingField_20;
	// System.Object LTDescrOptional::<onCompleteParam>k__BackingField
	RuntimeObject * ___U3ConCompleteParamU3Ek__BackingField_21;
	// System.Object LTDescrOptional::<onUpdateParam>k__BackingField
	RuntimeObject * ___U3ConUpdateParamU3Ek__BackingField_22;
	// System.Action LTDescrOptional::<onStart>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3ConStartU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CtoTransU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CtoTransU3Ek__BackingField_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtoTransU3Ek__BackingField_0() const { return ___U3CtoTransU3Ek__BackingField_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtoTransU3Ek__BackingField_0() { return &___U3CtoTransU3Ek__BackingField_0; }
	inline void set_U3CtoTransU3Ek__BackingField_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtoTransU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtoTransU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CpointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpointU3Ek__BackingField_1() const { return ___U3CpointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpointU3Ek__BackingField_1() { return &___U3CpointU3Ek__BackingField_1; }
	inline void set_U3CpointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CaxisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CaxisU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CaxisU3Ek__BackingField_2() const { return ___U3CaxisU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CaxisU3Ek__BackingField_2() { return &___U3CaxisU3Ek__BackingField_2; }
	inline void set_U3CaxisU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CaxisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3ClastValU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ClastValU3Ek__BackingField_3)); }
	inline float get_U3ClastValU3Ek__BackingField_3() const { return ___U3ClastValU3Ek__BackingField_3; }
	inline float* get_address_of_U3ClastValU3Ek__BackingField_3() { return &___U3ClastValU3Ek__BackingField_3; }
	inline void set_U3ClastValU3Ek__BackingField_3(float value)
	{
		___U3ClastValU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CorigRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CorigRotationU3Ek__BackingField_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CorigRotationU3Ek__BackingField_4() const { return ___U3CorigRotationU3Ek__BackingField_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CorigRotationU3Ek__BackingField_4() { return &___U3CorigRotationU3Ek__BackingField_4; }
	inline void set_U3CorigRotationU3Ek__BackingField_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CorigRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CpathU3Ek__BackingField_5)); }
	inline LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * get_U3CpathU3Ek__BackingField_5() const { return ___U3CpathU3Ek__BackingField_5; }
	inline LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 ** get_address_of_U3CpathU3Ek__BackingField_5() { return &___U3CpathU3Ek__BackingField_5; }
	inline void set_U3CpathU3Ek__BackingField_5(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * value)
	{
		___U3CpathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpathU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsplineU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CsplineU3Ek__BackingField_6)); }
	inline LTSpline_t4DE3CFCB0B4DB70C4798ABA88BBFFD46A515C701 * get_U3CsplineU3Ek__BackingField_6() const { return ___U3CsplineU3Ek__BackingField_6; }
	inline LTSpline_t4DE3CFCB0B4DB70C4798ABA88BBFFD46A515C701 ** get_address_of_U3CsplineU3Ek__BackingField_6() { return &___U3CsplineU3Ek__BackingField_6; }
	inline void set_U3CsplineU3Ek__BackingField_6(LTSpline_t4DE3CFCB0B4DB70C4798ABA88BBFFD46A515C701 * value)
	{
		___U3CsplineU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsplineU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_animationCurve_7() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___animationCurve_7)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_animationCurve_7() const { return ___animationCurve_7; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_animationCurve_7() { return &___animationCurve_7; }
	inline void set_animationCurve_7(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___animationCurve_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationCurve_7), (void*)value);
	}

	inline static int32_t get_offset_of_initFrameCount_8() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___initFrameCount_8)); }
	inline int32_t get_initFrameCount_8() const { return ___initFrameCount_8; }
	inline int32_t* get_address_of_initFrameCount_8() { return &___initFrameCount_8; }
	inline void set_initFrameCount_8(int32_t value)
	{
		___initFrameCount_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___color_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_9() const { return ___color_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_U3CltRectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3CltRectU3Ek__BackingField_10)); }
	inline LTRect_t021E2200FFDBE6E949B5557CCEE72E8062D2DABD * get_U3CltRectU3Ek__BackingField_10() const { return ___U3CltRectU3Ek__BackingField_10; }
	inline LTRect_t021E2200FFDBE6E949B5557CCEE72E8062D2DABD ** get_address_of_U3CltRectU3Ek__BackingField_10() { return &___U3CltRectU3Ek__BackingField_10; }
	inline void set_U3CltRectU3Ek__BackingField_10(LTRect_t021E2200FFDBE6E949B5557CCEE72E8062D2DABD * value)
	{
		___U3CltRectU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CltRectU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateFloatU3Ek__BackingField_11)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3ConUpdateFloatU3Ek__BackingField_11() const { return ___U3ConUpdateFloatU3Ek__BackingField_11; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3ConUpdateFloatU3Ek__BackingField_11() { return &___U3ConUpdateFloatU3Ek__BackingField_11; }
	inline void set_U3ConUpdateFloatU3Ek__BackingField_11(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3ConUpdateFloatU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateFloatU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateFloatRatioU3Ek__BackingField_12)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_U3ConUpdateFloatRatioU3Ek__BackingField_12() const { return ___U3ConUpdateFloatRatioU3Ek__BackingField_12; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_U3ConUpdateFloatRatioU3Ek__BackingField_12() { return &___U3ConUpdateFloatRatioU3Ek__BackingField_12; }
	inline void set_U3ConUpdateFloatRatioU3Ek__BackingField_12(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___U3ConUpdateFloatRatioU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateFloatRatioU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateFloatObjectU3Ek__BackingField_13)); }
	inline Action_2_tC5EA1BA82797894656DD89A0F3E7B791EC8BD050 * get_U3ConUpdateFloatObjectU3Ek__BackingField_13() const { return ___U3ConUpdateFloatObjectU3Ek__BackingField_13; }
	inline Action_2_tC5EA1BA82797894656DD89A0F3E7B791EC8BD050 ** get_address_of_U3ConUpdateFloatObjectU3Ek__BackingField_13() { return &___U3ConUpdateFloatObjectU3Ek__BackingField_13; }
	inline void set_U3ConUpdateFloatObjectU3Ek__BackingField_13(Action_2_tC5EA1BA82797894656DD89A0F3E7B791EC8BD050 * value)
	{
		___U3ConUpdateFloatObjectU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateFloatObjectU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector2U3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateVector2U3Ek__BackingField_14)); }
	inline Action_1_t0C1F417511439CBAA03909A69138FAF0BD19FA30 * get_U3ConUpdateVector2U3Ek__BackingField_14() const { return ___U3ConUpdateVector2U3Ek__BackingField_14; }
	inline Action_1_t0C1F417511439CBAA03909A69138FAF0BD19FA30 ** get_address_of_U3ConUpdateVector2U3Ek__BackingField_14() { return &___U3ConUpdateVector2U3Ek__BackingField_14; }
	inline void set_U3ConUpdateVector2U3Ek__BackingField_14(Action_1_t0C1F417511439CBAA03909A69138FAF0BD19FA30 * value)
	{
		___U3ConUpdateVector2U3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateVector2U3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3U3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateVector3U3Ek__BackingField_15)); }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * get_U3ConUpdateVector3U3Ek__BackingField_15() const { return ___U3ConUpdateVector3U3Ek__BackingField_15; }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B ** get_address_of_U3ConUpdateVector3U3Ek__BackingField_15() { return &___U3ConUpdateVector3U3Ek__BackingField_15; }
	inline void set_U3ConUpdateVector3U3Ek__BackingField_15(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * value)
	{
		___U3ConUpdateVector3U3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateVector3U3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateVector3ObjectU3Ek__BackingField_16)); }
	inline Action_2_tCA8676CFBCEAA1EE28321875815FD1767B25E4CB * get_U3ConUpdateVector3ObjectU3Ek__BackingField_16() const { return ___U3ConUpdateVector3ObjectU3Ek__BackingField_16; }
	inline Action_2_tCA8676CFBCEAA1EE28321875815FD1767B25E4CB ** get_address_of_U3ConUpdateVector3ObjectU3Ek__BackingField_16() { return &___U3ConUpdateVector3ObjectU3Ek__BackingField_16; }
	inline void set_U3ConUpdateVector3ObjectU3Ek__BackingField_16(Action_2_tCA8676CFBCEAA1EE28321875815FD1767B25E4CB * value)
	{
		___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateVector3ObjectU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateColorU3Ek__BackingField_17)); }
	inline Action_1_tC747810051096FEC47140D886015F5428DEDDAE2 * get_U3ConUpdateColorU3Ek__BackingField_17() const { return ___U3ConUpdateColorU3Ek__BackingField_17; }
	inline Action_1_tC747810051096FEC47140D886015F5428DEDDAE2 ** get_address_of_U3ConUpdateColorU3Ek__BackingField_17() { return &___U3ConUpdateColorU3Ek__BackingField_17; }
	inline void set_U3ConUpdateColorU3Ek__BackingField_17(Action_1_tC747810051096FEC47140D886015F5428DEDDAE2 * value)
	{
		___U3ConUpdateColorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateColorU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateColorObjectU3Ek__BackingField_18)); }
	inline Action_2_t05923E9D06D867E1AC6A90E2B1B2FE28CA9F910A * get_U3ConUpdateColorObjectU3Ek__BackingField_18() const { return ___U3ConUpdateColorObjectU3Ek__BackingField_18; }
	inline Action_2_t05923E9D06D867E1AC6A90E2B1B2FE28CA9F910A ** get_address_of_U3ConUpdateColorObjectU3Ek__BackingField_18() { return &___U3ConUpdateColorObjectU3Ek__BackingField_18; }
	inline void set_U3ConUpdateColorObjectU3Ek__BackingField_18(Action_2_t05923E9D06D867E1AC6A90E2B1B2FE28CA9F910A * value)
	{
		___U3ConUpdateColorObjectU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateColorObjectU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConCompleteU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConCompleteU3Ek__BackingField_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3ConCompleteU3Ek__BackingField_19() const { return ___U3ConCompleteU3Ek__BackingField_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3ConCompleteU3Ek__BackingField_19() { return &___U3ConCompleteU3Ek__BackingField_19; }
	inline void set_U3ConCompleteU3Ek__BackingField_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3ConCompleteU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConCompleteU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConCompleteObjectU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConCompleteObjectU3Ek__BackingField_20)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3ConCompleteObjectU3Ek__BackingField_20() const { return ___U3ConCompleteObjectU3Ek__BackingField_20; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3ConCompleteObjectU3Ek__BackingField_20() { return &___U3ConCompleteObjectU3Ek__BackingField_20; }
	inline void set_U3ConCompleteObjectU3Ek__BackingField_20(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3ConCompleteObjectU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConCompleteObjectU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConCompleteParamU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConCompleteParamU3Ek__BackingField_21)); }
	inline RuntimeObject * get_U3ConCompleteParamU3Ek__BackingField_21() const { return ___U3ConCompleteParamU3Ek__BackingField_21; }
	inline RuntimeObject ** get_address_of_U3ConCompleteParamU3Ek__BackingField_21() { return &___U3ConCompleteParamU3Ek__BackingField_21; }
	inline void set_U3ConCompleteParamU3Ek__BackingField_21(RuntimeObject * value)
	{
		___U3ConCompleteParamU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConCompleteParamU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConUpdateParamU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConUpdateParamU3Ek__BackingField_22)); }
	inline RuntimeObject * get_U3ConUpdateParamU3Ek__BackingField_22() const { return ___U3ConUpdateParamU3Ek__BackingField_22; }
	inline RuntimeObject ** get_address_of_U3ConUpdateParamU3Ek__BackingField_22() { return &___U3ConUpdateParamU3Ek__BackingField_22; }
	inline void set_U3ConUpdateParamU3Ek__BackingField_22(RuntimeObject * value)
	{
		___U3ConUpdateParamU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConUpdateParamU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConStartU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2, ___U3ConStartU3Ek__BackingField_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3ConStartU3Ek__BackingField_23() const { return ___U3ConStartU3Ek__BackingField_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3ConStartU3Ek__BackingField_23() { return &___U3ConStartU3Ek__BackingField_23; }
	inline void set_U3ConStartU3Ek__BackingField_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3ConStartU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ConStartU3Ek__BackingField_23), (void*)value);
	}
};


// LeanTweenType
struct LeanTweenType_tAE51C34373F1326AC0BB9DB0F7EF1883603D55A9 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeanTweenType_tAE51C34373F1326AC0BB9DB0F7EF1883603D55A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// State
struct State_t8871D715DE443B94835418865B4B8A8F19357EF3 
{
public:
	// System.Int32 State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t8871D715DE443B94835418865B4B8A8F19357EF3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TweenAction
struct TweenAction_tB7B9473B02F7CC04ED4083C3934285274119AE0B 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenAction_tB7B9473B02F7CC04ED4083C3934285274119AE0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UI_Colors
struct UI_Colors_tEC3FD46E75A84F542A0CAA65CCE2A357F755FE41 
{
public:
	// System.Int32 UI_Colors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UI_Colors_tEC3FD46E75A84F542A0CAA65CCE2A357F755FE41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LTGUI/Element_Type
struct Element_Type_tCB9236487D710B365968D3F055C4CCCA555A6BFE 
{
public:
	// System.Int32 LTGUI/Element_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Element_Type_tCB9236487D710B365968D3F055C4CCCA555A6BFE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LeanAudioOptions/LeanAudioWaveStyle
struct LeanAudioWaveStyle_tCFD7C1D135072B754C7CBA8422AE8DA6BE8D6CC2 
{
public:
	// System.Int32 LeanAudioOptions/LeanAudioWaveStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeanAudioWaveStyle_tCFD7C1D135072B754C7CBA8422AE8DA6BE8D6CC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// LTDescr
struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F  : public RuntimeObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * ___easeMethod_35;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * ____optional_44;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_usesNormalDt_4() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___usesNormalDt_4)); }
	inline bool get_usesNormalDt_4() const { return ___usesNormalDt_4; }
	inline bool* get_address_of_usesNormalDt_4() { return &___usesNormalDt_4; }
	inline void set_usesNormalDt_4(bool value)
	{
		___usesNormalDt_4 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_5() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasInitiliazed_5)); }
	inline bool get_hasInitiliazed_5() const { return ___hasInitiliazed_5; }
	inline bool* get_address_of_hasInitiliazed_5() { return &___hasInitiliazed_5; }
	inline void set_hasInitiliazed_5(bool value)
	{
		___hasInitiliazed_5 = value;
	}

	inline static int32_t get_offset_of_hasExtraOnCompletes_6() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasExtraOnCompletes_6)); }
	inline bool get_hasExtraOnCompletes_6() const { return ___hasExtraOnCompletes_6; }
	inline bool* get_address_of_hasExtraOnCompletes_6() { return &___hasExtraOnCompletes_6; }
	inline void set_hasExtraOnCompletes_6(bool value)
	{
		___hasExtraOnCompletes_6 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_7() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasPhysics_7)); }
	inline bool get_hasPhysics_7() const { return ___hasPhysics_7; }
	inline bool* get_address_of_hasPhysics_7() { return &___hasPhysics_7; }
	inline void set_hasPhysics_7(bool value)
	{
		___hasPhysics_7 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_8() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___onCompleteOnRepeat_8)); }
	inline bool get_onCompleteOnRepeat_8() const { return ___onCompleteOnRepeat_8; }
	inline bool* get_address_of_onCompleteOnRepeat_8() { return &___onCompleteOnRepeat_8; }
	inline void set_onCompleteOnRepeat_8(bool value)
	{
		___onCompleteOnRepeat_8 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_9() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___onCompleteOnStart_9)); }
	inline bool get_onCompleteOnStart_9() const { return ___onCompleteOnStart_9; }
	inline bool* get_address_of_onCompleteOnStart_9() { return &___onCompleteOnStart_9; }
	inline void set_onCompleteOnStart_9(bool value)
	{
		___onCompleteOnStart_9 = value;
	}

	inline static int32_t get_offset_of_useRecursion_10() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useRecursion_10)); }
	inline bool get_useRecursion_10() const { return ___useRecursion_10; }
	inline bool* get_address_of_useRecursion_10() { return &___useRecursion_10; }
	inline void set_useRecursion_10(bool value)
	{
		___useRecursion_10 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_11() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___ratioPassed_11)); }
	inline float get_ratioPassed_11() const { return ___ratioPassed_11; }
	inline float* get_address_of_ratioPassed_11() { return &___ratioPassed_11; }
	inline void set_ratioPassed_11(float value)
	{
		___ratioPassed_11 = value;
	}

	inline static int32_t get_offset_of_passed_12() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___passed_12)); }
	inline float get_passed_12() const { return ___passed_12; }
	inline float* get_address_of_passed_12() { return &___passed_12; }
	inline void set_passed_12(float value)
	{
		___passed_12 = value;
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___speed_15)); }
	inline float get_speed_15() const { return ___speed_15; }
	inline float* get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(float value)
	{
		___speed_15 = value;
	}

	inline static int32_t get_offset_of_lastVal_16() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___lastVal_16)); }
	inline float get_lastVal_16() const { return ___lastVal_16; }
	inline float* get_address_of_lastVal_16() { return &___lastVal_16; }
	inline void set_lastVal_16(float value)
	{
		___lastVal_16 = value;
	}

	inline static int32_t get_offset_of__id_17() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ____id_17)); }
	inline uint32_t get__id_17() const { return ____id_17; }
	inline uint32_t* get_address_of__id_17() { return &____id_17; }
	inline void set__id_17(uint32_t value)
	{
		____id_17 = value;
	}

	inline static int32_t get_offset_of_loopCount_18() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___loopCount_18)); }
	inline int32_t get_loopCount_18() const { return ___loopCount_18; }
	inline int32_t* get_address_of_loopCount_18() { return &___loopCount_18; }
	inline void set_loopCount_18(int32_t value)
	{
		___loopCount_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___counter_19)); }
	inline uint32_t get_counter_19() const { return ___counter_19; }
	inline uint32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(uint32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_directionLast_21() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___directionLast_21)); }
	inline float get_directionLast_21() const { return ___directionLast_21; }
	inline float* get_address_of_directionLast_21() { return &___directionLast_21; }
	inline void set_directionLast_21(float value)
	{
		___directionLast_21 = value;
	}

	inline static int32_t get_offset_of_overshoot_22() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___overshoot_22)); }
	inline float get_overshoot_22() const { return ___overshoot_22; }
	inline float* get_address_of_overshoot_22() { return &___overshoot_22; }
	inline void set_overshoot_22(float value)
	{
		___overshoot_22 = value;
	}

	inline static int32_t get_offset_of_period_23() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___period_23)); }
	inline float get_period_23() const { return ___period_23; }
	inline float* get_address_of_period_23() { return &___period_23; }
	inline void set_period_23(float value)
	{
		___period_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_25() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___destroyOnComplete_25)); }
	inline bool get_destroyOnComplete_25() const { return ___destroyOnComplete_25; }
	inline bool* get_address_of_destroyOnComplete_25() { return &___destroyOnComplete_25; }
	inline void set_destroyOnComplete_25(bool value)
	{
		___destroyOnComplete_25 = value;
	}

	inline static int32_t get_offset_of_trans_26() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___trans_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trans_26() const { return ___trans_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trans_26() { return &___trans_26; }
	inline void set_trans_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trans_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trans_26), (void*)value);
	}

	inline static int32_t get_offset_of_fromInternal_27() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___fromInternal_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_fromInternal_27() const { return ___fromInternal_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_fromInternal_27() { return &___fromInternal_27; }
	inline void set_fromInternal_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___fromInternal_27 = value;
	}

	inline static int32_t get_offset_of_toInternal_28() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___toInternal_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_toInternal_28() const { return ___toInternal_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_toInternal_28() { return &___toInternal_28; }
	inline void set_toInternal_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___toInternal_28 = value;
	}

	inline static int32_t get_offset_of_diff_29() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___diff_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diff_29() const { return ___diff_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diff_29() { return &___diff_29; }
	inline void set_diff_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diff_29 = value;
	}

	inline static int32_t get_offset_of_diffDiv2_30() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___diffDiv2_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diffDiv2_30() const { return ___diffDiv2_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diffDiv2_30() { return &___diffDiv2_30; }
	inline void set_diffDiv2_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diffDiv2_30 = value;
	}

	inline static int32_t get_offset_of_type_31() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___type_31)); }
	inline int32_t get_type_31() const { return ___type_31; }
	inline int32_t* get_address_of_type_31() { return &___type_31; }
	inline void set_type_31(int32_t value)
	{
		___type_31 = value;
	}

	inline static int32_t get_offset_of_easeType_32() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___easeType_32)); }
	inline int32_t get_easeType_32() const { return ___easeType_32; }
	inline int32_t* get_address_of_easeType_32() { return &___easeType_32; }
	inline void set_easeType_32(int32_t value)
	{
		___easeType_32 = value;
	}

	inline static int32_t get_offset_of_loopType_33() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___loopType_33)); }
	inline int32_t get_loopType_33() const { return ___loopType_33; }
	inline int32_t* get_address_of_loopType_33() { return &___loopType_33; }
	inline void set_loopType_33(int32_t value)
	{
		___loopType_33 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_34() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasUpdateCallback_34)); }
	inline bool get_hasUpdateCallback_34() const { return ___hasUpdateCallback_34; }
	inline bool* get_address_of_hasUpdateCallback_34() { return &___hasUpdateCallback_34; }
	inline void set_hasUpdateCallback_34(bool value)
	{
		___hasUpdateCallback_34 = value;
	}

	inline static int32_t get_offset_of_easeMethod_35() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___easeMethod_35)); }
	inline EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * get_easeMethod_35() const { return ___easeMethod_35; }
	inline EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF ** get_address_of_easeMethod_35() { return &___easeMethod_35; }
	inline void set_easeMethod_35(EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * value)
	{
		___easeMethod_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___easeMethod_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeaseInternalU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___U3CeaseInternalU3Ek__BackingField_36)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CeaseInternalU3Ek__BackingField_36() const { return ___U3CeaseInternalU3Ek__BackingField_36; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CeaseInternalU3Ek__BackingField_36() { return &___U3CeaseInternalU3Ek__BackingField_36; }
	inline void set_U3CeaseInternalU3Ek__BackingField_36(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CeaseInternalU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeaseInternalU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitInternalU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___U3CinitInternalU3Ek__BackingField_37)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CinitInternalU3Ek__BackingField_37() const { return ___U3CinitInternalU3Ek__BackingField_37; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CinitInternalU3Ek__BackingField_37() { return &___U3CinitInternalU3Ek__BackingField_37; }
	inline void set_U3CinitInternalU3Ek__BackingField_37(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CinitInternalU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinitInternalU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRen_38() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___spriteRen_38)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRen_38() const { return ___spriteRen_38; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRen_38() { return &___spriteRen_38; }
	inline void set_spriteRen_38(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRen_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRen_38), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_39() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___rectTransform_39)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_39() const { return ___rectTransform_39; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_39() { return &___rectTransform_39; }
	inline void set_rectTransform_39(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_39), (void*)value);
	}

	inline static int32_t get_offset_of_uiText_40() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___uiText_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_uiText_40() const { return ___uiText_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_uiText_40() { return &___uiText_40; }
	inline void set_uiText_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___uiText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiText_40), (void*)value);
	}

	inline static int32_t get_offset_of_uiImage_41() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___uiImage_41)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_uiImage_41() const { return ___uiImage_41; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_uiImage_41() { return &___uiImage_41; }
	inline void set_uiImage_41(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___uiImage_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiImage_41), (void*)value);
	}

	inline static int32_t get_offset_of_rawImage_42() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___rawImage_42)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_rawImage_42() const { return ___rawImage_42; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_rawImage_42() { return &___rawImage_42; }
	inline void set_rawImage_42(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___rawImage_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImage_42), (void*)value);
	}

	inline static int32_t get_offset_of_sprites_43() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___sprites_43)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprites_43() const { return ___sprites_43; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprites_43() { return &___sprites_43; }
	inline void set_sprites_43(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprites_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_43), (void*)value);
	}

	inline static int32_t get_offset_of__optional_44() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ____optional_44)); }
	inline LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * get__optional_44() const { return ____optional_44; }
	inline LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 ** get_address_of__optional_44() { return &____optional_44; }
	inline void set__optional_44(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * value)
	{
		____optional_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_44), (void*)value);
	}
};

struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields
{
public:
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newVect_47;

public:
	inline static int32_t get_offset_of_val_45() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___val_45)); }
	inline float get_val_45() const { return ___val_45; }
	inline float* get_address_of_val_45() { return &___val_45; }
	inline void set_val_45(float value)
	{
		___val_45 = value;
	}

	inline static int32_t get_offset_of_dt_46() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___dt_46)); }
	inline float get_dt_46() const { return ___dt_46; }
	inline float* get_address_of_dt_46() { return &___dt_46; }
	inline void set_dt_46(float value)
	{
		___dt_46 = value;
	}

	inline static int32_t get_offset_of_newVect_47() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___newVect_47)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newVect_47() const { return ___newVect_47; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newVect_47() { return &___newVect_47; }
	inline void set_newVect_47(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newVect_47 = value;
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<ITask>
struct Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GameEvent
struct GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.HashSet`1<GameEventListenter> GameEvent::listeners
	HashSet_1_tAC1724012AE520BBB6896748C14F4B87B4F03B03 * ___listeners_4;

public:
	inline static int32_t get_offset_of_listeners_4() { return static_cast<int32_t>(offsetof(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038, ___listeners_4)); }
	inline HashSet_1_tAC1724012AE520BBB6896748C14F4B87B4F03B03 * get_listeners_4() const { return ___listeners_4; }
	inline HashSet_1_tAC1724012AE520BBB6896748C14F4B87B4F03B03 ** get_address_of_listeners_4() { return &___listeners_4; }
	inline void set_listeners_4(HashSet_1_tAC1724012AE520BBB6896748C14F4B87B4F03B03 * value)
	{
		___listeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_4), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05  : public MulticastDelegate_t
{
public:

public:
};


// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// AvailableGameEvents
struct AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameEvent AvailableGameEvents::taskCompleteEvent
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___taskCompleteEvent_4;
	// GameEvent AvailableGameEvents::puzzleComplete
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___puzzleComplete_5;
	// GameEvent AvailableGameEvents::allPuzzlesCompleteEvent
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___allPuzzlesCompleteEvent_6;
	// GameEvent AvailableGameEvents::walkOutSideEvent
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___walkOutSideEvent_7;

public:
	inline static int32_t get_offset_of_taskCompleteEvent_4() { return static_cast<int32_t>(offsetof(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F, ___taskCompleteEvent_4)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_taskCompleteEvent_4() const { return ___taskCompleteEvent_4; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_taskCompleteEvent_4() { return &___taskCompleteEvent_4; }
	inline void set_taskCompleteEvent_4(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___taskCompleteEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskCompleteEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_puzzleComplete_5() { return static_cast<int32_t>(offsetof(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F, ___puzzleComplete_5)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_puzzleComplete_5() const { return ___puzzleComplete_5; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_puzzleComplete_5() { return &___puzzleComplete_5; }
	inline void set_puzzleComplete_5(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___puzzleComplete_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleComplete_5), (void*)value);
	}

	inline static int32_t get_offset_of_allPuzzlesCompleteEvent_6() { return static_cast<int32_t>(offsetof(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F, ___allPuzzlesCompleteEvent_6)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_allPuzzlesCompleteEvent_6() const { return ___allPuzzlesCompleteEvent_6; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_allPuzzlesCompleteEvent_6() { return &___allPuzzlesCompleteEvent_6; }
	inline void set_allPuzzlesCompleteEvent_6(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___allPuzzlesCompleteEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allPuzzlesCompleteEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_walkOutSideEvent_7() { return static_cast<int32_t>(offsetof(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F, ___walkOutSideEvent_7)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_walkOutSideEvent_7() const { return ___walkOutSideEvent_7; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_walkOutSideEvent_7() { return &___walkOutSideEvent_7; }
	inline void set_walkOutSideEvent_7(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___walkOutSideEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkOutSideEvent_7), (void*)value);
	}
};

struct AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_StaticFields
{
public:
	// AvailableGameEvents AvailableGameEvents::Instance
	AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * ___Instance_8;

public:
	inline static int32_t get_offset_of_Instance_8() { return static_cast<int32_t>(offsetof(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_StaticFields, ___Instance_8)); }
	inline AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * get_Instance_8() const { return ___Instance_8; }
	inline AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F ** get_address_of_Instance_8() { return &___Instance_8; }
	inline void set_Instance_8(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * value)
	{
		___Instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_8), (void*)value);
	}
};


// FeedbackPuzzleLights
struct FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// FeedbackLightBulb[] FeedbackPuzzleLights::ligthBulbs
	FeedbackLightBulbU5BU5D_t8005FE9EC4BD48C64BE84B0CECDDA9CD57A78690* ___ligthBulbs_4;

public:
	inline static int32_t get_offset_of_ligthBulbs_4() { return static_cast<int32_t>(offsetof(FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8, ___ligthBulbs_4)); }
	inline FeedbackLightBulbU5BU5D_t8005FE9EC4BD48C64BE84B0CECDDA9CD57A78690* get_ligthBulbs_4() const { return ___ligthBulbs_4; }
	inline FeedbackLightBulbU5BU5D_t8005FE9EC4BD48C64BE84B0CECDDA9CD57A78690** get_address_of_ligthBulbs_4() { return &___ligthBulbs_4; }
	inline void set_ligthBulbs_4(FeedbackLightBulbU5BU5D_t8005FE9EC4BD48C64BE84B0CECDDA9CD57A78690* value)
	{
		___ligthBulbs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ligthBulbs_4), (void*)value);
	}
};


// GameEventListenter
struct GameEventListenter_tEA0EF55311E432A49B8F32D9D01C4160B3ECDF07  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameEvent GameEventListenter::gameEvent
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___gameEvent_4;
	// UnityEngine.Events.UnityEvent GameEventListenter::unityEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___unityEvent_5;

public:
	inline static int32_t get_offset_of_gameEvent_4() { return static_cast<int32_t>(offsetof(GameEventListenter_tEA0EF55311E432A49B8F32D9D01C4160B3ECDF07, ___gameEvent_4)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_gameEvent_4() const { return ___gameEvent_4; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_gameEvent_4() { return &___gameEvent_4; }
	inline void set_gameEvent_4(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___gameEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_unityEvent_5() { return static_cast<int32_t>(offsetof(GameEventListenter_tEA0EF55311E432A49B8F32D9D01C4160B3ECDF07, ___unityEvent_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_unityEvent_5() const { return ___unityEvent_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_unityEvent_5() { return &___unityEvent_5; }
	inline void set_unityEvent_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___unityEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityEvent_5), (void*)value);
	}
};


// InitialLoader
struct InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image InitialLoader::slLoader
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___slLoader_4;
	// UnityEngine.UI.Text InitialLoader::txtPorcent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtPorcent_5;
	// System.String InitialLoader::sceneToLoad
	String_t* ___sceneToLoad_6;

public:
	inline static int32_t get_offset_of_slLoader_4() { return static_cast<int32_t>(offsetof(InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6, ___slLoader_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_slLoader_4() const { return ___slLoader_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_slLoader_4() { return &___slLoader_4; }
	inline void set_slLoader_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___slLoader_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slLoader_4), (void*)value);
	}

	inline static int32_t get_offset_of_txtPorcent_5() { return static_cast<int32_t>(offsetof(InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6, ___txtPorcent_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtPorcent_5() const { return ___txtPorcent_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtPorcent_5() { return &___txtPorcent_5; }
	inline void set_txtPorcent_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtPorcent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtPorcent_5), (void*)value);
	}

	inline static int32_t get_offset_of_sceneToLoad_6() { return static_cast<int32_t>(offsetof(InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6, ___sceneToLoad_6)); }
	inline String_t* get_sceneToLoad_6() const { return ___sceneToLoad_6; }
	inline String_t** get_address_of_sceneToLoad_6() { return &___sceneToLoad_6; }
	inline void set_sceneToLoad_6(String_t* value)
	{
		___sceneToLoad_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToLoad_6), (void*)value);
	}
};


// LeanTester
struct LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LeanTester::timeout
	float ___timeout_4;

public:
	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297, ___timeout_4)); }
	inline float get_timeout_4() const { return ___timeout_4; }
	inline float* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(float value)
	{
		___timeout_4 = value;
	}
};


// LoadSceneWithLoadingBar
struct LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject LoadSceneWithLoadingBar::crdLoader
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___crdLoader_4;
	// UnityEngine.UI.Image LoadSceneWithLoadingBar::slLoader
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___slLoader_5;
	// UnityEngine.UI.Text LoadSceneWithLoadingBar::txtPorcent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtPorcent_6;
	// System.String LoadSceneWithLoadingBar::sceneToLoad
	String_t* ___sceneToLoad_7;

public:
	inline static int32_t get_offset_of_crdLoader_4() { return static_cast<int32_t>(offsetof(LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806, ___crdLoader_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_crdLoader_4() const { return ___crdLoader_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_crdLoader_4() { return &___crdLoader_4; }
	inline void set_crdLoader_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___crdLoader_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crdLoader_4), (void*)value);
	}

	inline static int32_t get_offset_of_slLoader_5() { return static_cast<int32_t>(offsetof(LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806, ___slLoader_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_slLoader_5() const { return ___slLoader_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_slLoader_5() { return &___slLoader_5; }
	inline void set_slLoader_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___slLoader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slLoader_5), (void*)value);
	}

	inline static int32_t get_offset_of_txtPorcent_6() { return static_cast<int32_t>(offsetof(LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806, ___txtPorcent_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtPorcent_6() const { return ___txtPorcent_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtPorcent_6() { return &___txtPorcent_6; }
	inline void set_txtPorcent_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtPorcent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtPorcent_6), (void*)value);
	}

	inline static int32_t get_offset_of_sceneToLoad_7() { return static_cast<int32_t>(offsetof(LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806, ___sceneToLoad_7)); }
	inline String_t* get_sceneToLoad_7() const { return ___sceneToLoad_7; }
	inline String_t** get_address_of_sceneToLoad_7() { return &___sceneToLoad_7; }
	inline void set_sceneToLoad_7(String_t* value)
	{
		___sceneToLoad_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToLoad_7), (void*)value);
	}
};


// MuteSwitch
struct MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image MuteSwitch::imgFXSound
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imgFXSound_4;
	// UnityEngine.UI.Image MuteSwitch::imgMusic
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imgMusic_5;
	// UnityEngine.Sprite[] MuteSwitch::sprFX
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprFX_6;
	// UnityEngine.Sprite[] MuteSwitch::sprMusic
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprMusic_7;

public:
	inline static int32_t get_offset_of_imgFXSound_4() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594, ___imgFXSound_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imgFXSound_4() const { return ___imgFXSound_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imgFXSound_4() { return &___imgFXSound_4; }
	inline void set_imgFXSound_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imgFXSound_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imgFXSound_4), (void*)value);
	}

	inline static int32_t get_offset_of_imgMusic_5() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594, ___imgMusic_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imgMusic_5() const { return ___imgMusic_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imgMusic_5() { return &___imgMusic_5; }
	inline void set_imgMusic_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imgMusic_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imgMusic_5), (void*)value);
	}

	inline static int32_t get_offset_of_sprFX_6() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594, ___sprFX_6)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprFX_6() const { return ___sprFX_6; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprFX_6() { return &___sprFX_6; }
	inline void set_sprFX_6(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprFX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprFX_6), (void*)value);
	}

	inline static int32_t get_offset_of_sprMusic_7() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594, ___sprMusic_7)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprMusic_7() const { return ___sprMusic_7; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprMusic_7() { return &___sprMusic_7; }
	inline void set_sprMusic_7(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprMusic_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprMusic_7), (void*)value);
	}
};

struct MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_StaticFields
{
public:
	// System.Boolean MuteSwitch::isFXMuted
	bool ___isFXMuted_8;
	// System.Boolean MuteSwitch::isMusicMute
	bool ___isMusicMute_9;

public:
	inline static int32_t get_offset_of_isFXMuted_8() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_StaticFields, ___isFXMuted_8)); }
	inline bool get_isFXMuted_8() const { return ___isFXMuted_8; }
	inline bool* get_address_of_isFXMuted_8() { return &___isFXMuted_8; }
	inline void set_isFXMuted_8(bool value)
	{
		___isFXMuted_8 = value;
	}

	inline static int32_t get_offset_of_isMusicMute_9() { return static_cast<int32_t>(offsetof(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_StaticFields, ___isMusicMute_9)); }
	inline bool get_isMusicMute_9() const { return ___isMusicMute_9; }
	inline bool* get_address_of_isMusicMute_9() { return &___isMusicMute_9; }
	inline void set_isMusicMute_9(bool value)
	{
		___isMusicMute_9 = value;
	}
};


// PickUpObject
struct PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String PickUpObject::objectName
	String_t* ___objectName_4;
	// UnityEngine.Transform PickUpObject::pickUpLocation
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pickUpLocation_5;
	// UnityEngine.Rigidbody PickUpObject::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_6;
	// System.Boolean PickUpObject::canPickUp
	bool ___canPickUp_7;
	// System.Boolean PickUpObject::isPickingUp
	bool ___isPickingUp_8;
	// UnityEngine.Transform PickUpObject::previousParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___previousParent_9;

public:
	inline static int32_t get_offset_of_objectName_4() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___objectName_4)); }
	inline String_t* get_objectName_4() const { return ___objectName_4; }
	inline String_t** get_address_of_objectName_4() { return &___objectName_4; }
	inline void set_objectName_4(String_t* value)
	{
		___objectName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_4), (void*)value);
	}

	inline static int32_t get_offset_of_pickUpLocation_5() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___pickUpLocation_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pickUpLocation_5() const { return ___pickUpLocation_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pickUpLocation_5() { return &___pickUpLocation_5; }
	inline void set_pickUpLocation_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pickUpLocation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pickUpLocation_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___rb_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_canPickUp_7() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___canPickUp_7)); }
	inline bool get_canPickUp_7() const { return ___canPickUp_7; }
	inline bool* get_address_of_canPickUp_7() { return &___canPickUp_7; }
	inline void set_canPickUp_7(bool value)
	{
		___canPickUp_7 = value;
	}

	inline static int32_t get_offset_of_isPickingUp_8() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___isPickingUp_8)); }
	inline bool get_isPickingUp_8() const { return ___isPickingUp_8; }
	inline bool* get_address_of_isPickingUp_8() { return &___isPickingUp_8; }
	inline void set_isPickingUp_8(bool value)
	{
		___isPickingUp_8 = value;
	}

	inline static int32_t get_offset_of_previousParent_9() { return static_cast<int32_t>(offsetof(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD, ___previousParent_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_previousParent_9() const { return ___previousParent_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_previousParent_9() { return &___previousParent_9; }
	inline void set_previousParent_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___previousParent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousParent_9), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<SoundManager/SoundFX> SoundManager::sounds
	List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * ___sounds_4;
	// UnityEngine.AudioSource SoundManager::normalEmissor
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___normalEmissor_5;

public:
	inline static int32_t get_offset_of_sounds_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___sounds_4)); }
	inline List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * get_sounds_4() const { return ___sounds_4; }
	inline List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE ** get_address_of_sounds_4() { return &___sounds_4; }
	inline void set_sounds_4(List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * value)
	{
		___sounds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sounds_4), (void*)value);
	}

	inline static int32_t get_offset_of_normalEmissor_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___normalEmissor_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_normalEmissor_5() const { return ___normalEmissor_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_normalEmissor_5() { return &___normalEmissor_5; }
	inline void set_normalEmissor_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___normalEmissor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalEmissor_5), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX> SoundManager::listaSons
	Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * ___listaSons_6;
	// UnityEngine.AudioSource SoundManager::storedNormalEmissor
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___storedNormalEmissor_7;

public:
	inline static int32_t get_offset_of_listaSons_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___listaSons_6)); }
	inline Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * get_listaSons_6() const { return ___listaSons_6; }
	inline Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 ** get_address_of_listaSons_6() { return &___listaSons_6; }
	inline void set_listaSons_6(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * value)
	{
		___listaSons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listaSons_6), (void*)value);
	}

	inline static int32_t get_offset_of_storedNormalEmissor_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___storedNormalEmissor_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_storedNormalEmissor_7() const { return ___storedNormalEmissor_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_storedNormalEmissor_7() { return &___storedNormalEmissor_7; }
	inline void set_storedNormalEmissor_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___storedNormalEmissor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storedNormalEmissor_7), (void*)value);
	}
};


// SoundtrackManager
struct SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip[] SoundtrackManager::playlistMenu
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___playlistMenu_4;
	// UnityEngine.AudioClip[] SoundtrackManager::playlistGameplay
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___playlistGameplay_5;
	// UnityEngine.AudioSource SoundtrackManager::emissor
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___emissor_6;

public:
	inline static int32_t get_offset_of_playlistMenu_4() { return static_cast<int32_t>(offsetof(SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E, ___playlistMenu_4)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_playlistMenu_4() const { return ___playlistMenu_4; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_playlistMenu_4() { return &___playlistMenu_4; }
	inline void set_playlistMenu_4(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___playlistMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playlistMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_playlistGameplay_5() { return static_cast<int32_t>(offsetof(SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E, ___playlistGameplay_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_playlistGameplay_5() const { return ___playlistGameplay_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_playlistGameplay_5() { return &___playlistGameplay_5; }
	inline void set_playlistGameplay_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___playlistGameplay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playlistGameplay_5), (void*)value);
	}

	inline static int32_t get_offset_of_emissor_6() { return static_cast<int32_t>(offsetof(SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E, ___emissor_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_emissor_6() const { return ___emissor_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_emissor_6() { return &___emissor_6; }
	inline void set_emissor_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___emissor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emissor_6), (void*)value);
	}
};


// ToyGatherPuzzle
struct ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ToyGatherTask[] ToyGatherPuzzle::puzzleTasks
	ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4* ___puzzleTasks_4;
	// UnityEngine.Collider ToyGatherPuzzle::targetCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___targetCollider_5;
	// FeedbackPuzzleLights ToyGatherPuzzle::feedBackLights
	FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * ___feedBackLights_6;
	// System.String ToyGatherPuzzle::descPuzzle
	String_t* ___descPuzzle_7;
	// PuzzleStats ToyGatherPuzzle::puzzleStats
	PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * ___puzzleStats_8;

public:
	inline static int32_t get_offset_of_puzzleTasks_4() { return static_cast<int32_t>(offsetof(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669, ___puzzleTasks_4)); }
	inline ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4* get_puzzleTasks_4() const { return ___puzzleTasks_4; }
	inline ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4** get_address_of_puzzleTasks_4() { return &___puzzleTasks_4; }
	inline void set_puzzleTasks_4(ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4* value)
	{
		___puzzleTasks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleTasks_4), (void*)value);
	}

	inline static int32_t get_offset_of_targetCollider_5() { return static_cast<int32_t>(offsetof(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669, ___targetCollider_5)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_targetCollider_5() const { return ___targetCollider_5; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_targetCollider_5() { return &___targetCollider_5; }
	inline void set_targetCollider_5(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___targetCollider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetCollider_5), (void*)value);
	}

	inline static int32_t get_offset_of_feedBackLights_6() { return static_cast<int32_t>(offsetof(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669, ___feedBackLights_6)); }
	inline FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * get_feedBackLights_6() const { return ___feedBackLights_6; }
	inline FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 ** get_address_of_feedBackLights_6() { return &___feedBackLights_6; }
	inline void set_feedBackLights_6(FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * value)
	{
		___feedBackLights_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedBackLights_6), (void*)value);
	}

	inline static int32_t get_offset_of_descPuzzle_7() { return static_cast<int32_t>(offsetof(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669, ___descPuzzle_7)); }
	inline String_t* get_descPuzzle_7() const { return ___descPuzzle_7; }
	inline String_t** get_address_of_descPuzzle_7() { return &___descPuzzle_7; }
	inline void set_descPuzzle_7(String_t* value)
	{
		___descPuzzle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descPuzzle_7), (void*)value);
	}

	inline static int32_t get_offset_of_puzzleStats_8() { return static_cast<int32_t>(offsetof(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669, ___puzzleStats_8)); }
	inline PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * get_puzzleStats_8() const { return ___puzzleStats_8; }
	inline PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B ** get_address_of_puzzleStats_8() { return &___puzzleStats_8; }
	inline void set_puzzleStats_8(PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * value)
	{
		___puzzleStats_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puzzleStats_8), (void*)value);
	}
};


// ToyGatherTask
struct ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ToyGatherPuzzle ToyGatherTask::currentBasketPuzzle
	ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * ___currentBasketPuzzle_4;
	// PickUpObject ToyGatherTask::objectPicker
	PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * ___objectPicker_5;
	// System.Boolean ToyGatherTask::<isTaskComplete>k__BackingField
	bool ___U3CisTaskCompleteU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_currentBasketPuzzle_4() { return static_cast<int32_t>(offsetof(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636, ___currentBasketPuzzle_4)); }
	inline ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * get_currentBasketPuzzle_4() const { return ___currentBasketPuzzle_4; }
	inline ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 ** get_address_of_currentBasketPuzzle_4() { return &___currentBasketPuzzle_4; }
	inline void set_currentBasketPuzzle_4(ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * value)
	{
		___currentBasketPuzzle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBasketPuzzle_4), (void*)value);
	}

	inline static int32_t get_offset_of_objectPicker_5() { return static_cast<int32_t>(offsetof(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636, ___objectPicker_5)); }
	inline PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * get_objectPicker_5() const { return ___objectPicker_5; }
	inline PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD ** get_address_of_objectPicker_5() { return &___objectPicker_5; }
	inline void set_objectPicker_5(PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * value)
	{
		___objectPicker_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPicker_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTaskCompleteU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636, ___U3CisTaskCompleteU3Ek__BackingField_6)); }
	inline bool get_U3CisTaskCompleteU3Ek__BackingField_6() const { return ___U3CisTaskCompleteU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisTaskCompleteU3Ek__BackingField_6() { return &___U3CisTaskCompleteU3Ek__BackingField_6; }
	inline void set_U3CisTaskCompleteU3Ek__BackingField_6(bool value)
	{
		___U3CisTaskCompleteU3Ek__BackingField_6 = value;
	}
};

struct ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields
{
public:
	// System.Action`1<ITask> ToyGatherTask::OnTaskToggled
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * ___OnTaskToggled_7;

public:
	inline static int32_t get_offset_of_OnTaskToggled_7() { return static_cast<int32_t>(offsetof(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields, ___OnTaskToggled_7)); }
	inline Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * get_OnTaskToggled_7() const { return ___OnTaskToggled_7; }
	inline Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 ** get_address_of_OnTaskToggled_7() { return &___OnTaskToggled_7; }
	inline void set_OnTaskToggled_7(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * value)
	{
		___OnTaskToggled_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTaskToggled_7), (void*)value);
	}
};


// TriggerCutscene
struct TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameEvent TriggerCutscene::playerWalkedOutside
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * ___playerWalkedOutside_4;

public:
	inline static int32_t get_offset_of_playerWalkedOutside_4() { return static_cast<int32_t>(offsetof(TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A, ___playerWalkedOutside_4)); }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * get_playerWalkedOutside_4() const { return ___playerWalkedOutside_4; }
	inline GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 ** get_address_of_playerWalkedOutside_4() { return &___playerWalkedOutside_4; }
	inline void set_playerWalkedOutside_4(GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * value)
	{
		___playerWalkedOutside_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerWalkedOutside_4), (void*)value);
	}
};


// TweenerAnimation
struct TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TweenerAnimation::objetoParaDesativar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objetoParaDesativar_4;
	// LeanTweenType TweenerAnimation::tipoAnim
	int32_t ___tipoAnim_5;
	// UnityEngine.AnimationCurve TweenerAnimation::animCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animCurve_6;
	// System.Single TweenerAnimation::delayOfAnim
	float ___delayOfAnim_7;
	// System.Single TweenerAnimation::durationOfAnim
	float ___durationOfAnim_8;
	// System.Boolean TweenerAnimation::switchToFPSAfterClose
	bool ___switchToFPSAfterClose_9;
	// UnityEngine.Vector3 TweenerAnimation::tamanhoInicial
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___tamanhoInicial_10;

public:
	inline static int32_t get_offset_of_objetoParaDesativar_4() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___objetoParaDesativar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objetoParaDesativar_4() const { return ___objetoParaDesativar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objetoParaDesativar_4() { return &___objetoParaDesativar_4; }
	inline void set_objetoParaDesativar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objetoParaDesativar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objetoParaDesativar_4), (void*)value);
	}

	inline static int32_t get_offset_of_tipoAnim_5() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___tipoAnim_5)); }
	inline int32_t get_tipoAnim_5() const { return ___tipoAnim_5; }
	inline int32_t* get_address_of_tipoAnim_5() { return &___tipoAnim_5; }
	inline void set_tipoAnim_5(int32_t value)
	{
		___tipoAnim_5 = value;
	}

	inline static int32_t get_offset_of_animCurve_6() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___animCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_animCurve_6() const { return ___animCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_animCurve_6() { return &___animCurve_6; }
	inline void set_animCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___animCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_delayOfAnim_7() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___delayOfAnim_7)); }
	inline float get_delayOfAnim_7() const { return ___delayOfAnim_7; }
	inline float* get_address_of_delayOfAnim_7() { return &___delayOfAnim_7; }
	inline void set_delayOfAnim_7(float value)
	{
		___delayOfAnim_7 = value;
	}

	inline static int32_t get_offset_of_durationOfAnim_8() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___durationOfAnim_8)); }
	inline float get_durationOfAnim_8() const { return ___durationOfAnim_8; }
	inline float* get_address_of_durationOfAnim_8() { return &___durationOfAnim_8; }
	inline void set_durationOfAnim_8(float value)
	{
		___durationOfAnim_8 = value;
	}

	inline static int32_t get_offset_of_switchToFPSAfterClose_9() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___switchToFPSAfterClose_9)); }
	inline bool get_switchToFPSAfterClose_9() const { return ___switchToFPSAfterClose_9; }
	inline bool* get_address_of_switchToFPSAfterClose_9() { return &___switchToFPSAfterClose_9; }
	inline void set_switchToFPSAfterClose_9(bool value)
	{
		___switchToFPSAfterClose_9 = value;
	}

	inline static int32_t get_offset_of_tamanhoInicial_10() { return static_cast<int32_t>(offsetof(TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3, ___tamanhoInicial_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_tamanhoInicial_10() const { return ___tamanhoInicial_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_tamanhoInicial_10() { return &___tamanhoInicial_10; }
	inline void set_tamanhoInicial_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___tamanhoInicial_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UI_Manager
struct UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UI_Manager/UI_Item> UI_Manager::UI_screens
	List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * ___UI_screens_4;
	// UnityEngine.Color UI_Manager::colorComplete
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorComplete_5;
	// UnityEngine.Color UI_Manager::colorIncomplete
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorIncomplete_6;
	// UnityEngine.GameObject UI_Manager::cardPuzzle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cardPuzzle_7;
	// UnityEngine.UI.Text UI_Manager::txtTip
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtTip_8;
	// UnityEngine.UI.Text UI_Manager::txtCurrentPassword
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtCurrentPassword_9;
	// UnityEngine.UI.Text UI_Manager::txtStatsPuzzle
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtStatsPuzzle_10;
	// UnityEngine.UI.Text UI_Manager::txtDescPuzzle
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtDescPuzzle_11;
	// UnityEngine.UI.Text UI_Manager::txtNote
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtNote_12;
	// UnityEngine.UI.Text UI_Manager::txtTimer
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtTimer_13;
	// UnityEngine.UI.Text UI_Manager::txtGameOverText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txtGameOverText_14;
	// UnityEngine.UI.Image UI_Manager::bgNumericTask
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___bgNumericTask_15;
	// System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item> UI_Manager::ui_Itens
	Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * ___ui_Itens_17;

public:
	inline static int32_t get_offset_of_UI_screens_4() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___UI_screens_4)); }
	inline List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * get_UI_screens_4() const { return ___UI_screens_4; }
	inline List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 ** get_address_of_UI_screens_4() { return &___UI_screens_4; }
	inline void set_UI_screens_4(List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * value)
	{
		___UI_screens_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UI_screens_4), (void*)value);
	}

	inline static int32_t get_offset_of_colorComplete_5() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___colorComplete_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorComplete_5() const { return ___colorComplete_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorComplete_5() { return &___colorComplete_5; }
	inline void set_colorComplete_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorComplete_5 = value;
	}

	inline static int32_t get_offset_of_colorIncomplete_6() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___colorIncomplete_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorIncomplete_6() const { return ___colorIncomplete_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorIncomplete_6() { return &___colorIncomplete_6; }
	inline void set_colorIncomplete_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorIncomplete_6 = value;
	}

	inline static int32_t get_offset_of_cardPuzzle_7() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___cardPuzzle_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cardPuzzle_7() const { return ___cardPuzzle_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cardPuzzle_7() { return &___cardPuzzle_7; }
	inline void set_cardPuzzle_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cardPuzzle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardPuzzle_7), (void*)value);
	}

	inline static int32_t get_offset_of_txtTip_8() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtTip_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtTip_8() const { return ___txtTip_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtTip_8() { return &___txtTip_8; }
	inline void set_txtTip_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtTip_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtTip_8), (void*)value);
	}

	inline static int32_t get_offset_of_txtCurrentPassword_9() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtCurrentPassword_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtCurrentPassword_9() const { return ___txtCurrentPassword_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtCurrentPassword_9() { return &___txtCurrentPassword_9; }
	inline void set_txtCurrentPassword_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtCurrentPassword_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtCurrentPassword_9), (void*)value);
	}

	inline static int32_t get_offset_of_txtStatsPuzzle_10() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtStatsPuzzle_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtStatsPuzzle_10() const { return ___txtStatsPuzzle_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtStatsPuzzle_10() { return &___txtStatsPuzzle_10; }
	inline void set_txtStatsPuzzle_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtStatsPuzzle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtStatsPuzzle_10), (void*)value);
	}

	inline static int32_t get_offset_of_txtDescPuzzle_11() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtDescPuzzle_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtDescPuzzle_11() const { return ___txtDescPuzzle_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtDescPuzzle_11() { return &___txtDescPuzzle_11; }
	inline void set_txtDescPuzzle_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtDescPuzzle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtDescPuzzle_11), (void*)value);
	}

	inline static int32_t get_offset_of_txtNote_12() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtNote_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtNote_12() const { return ___txtNote_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtNote_12() { return &___txtNote_12; }
	inline void set_txtNote_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtNote_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtNote_12), (void*)value);
	}

	inline static int32_t get_offset_of_txtTimer_13() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtTimer_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtTimer_13() const { return ___txtTimer_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtTimer_13() { return &___txtTimer_13; }
	inline void set_txtTimer_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtTimer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtTimer_13), (void*)value);
	}

	inline static int32_t get_offset_of_txtGameOverText_14() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___txtGameOverText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txtGameOverText_14() const { return ___txtGameOverText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txtGameOverText_14() { return &___txtGameOverText_14; }
	inline void set_txtGameOverText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txtGameOverText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtGameOverText_14), (void*)value);
	}

	inline static int32_t get_offset_of_bgNumericTask_15() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___bgNumericTask_15)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_bgNumericTask_15() const { return ___bgNumericTask_15; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_bgNumericTask_15() { return &___bgNumericTask_15; }
	inline void set_bgNumericTask_15(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___bgNumericTask_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgNumericTask_15), (void*)value);
	}

	inline static int32_t get_offset_of_ui_Itens_17() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67, ___ui_Itens_17)); }
	inline Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * get_ui_Itens_17() const { return ___ui_Itens_17; }
	inline Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C ** get_address_of_ui_Itens_17() { return &___ui_Itens_17; }
	inline void set_ui_Itens_17(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * value)
	{
		___ui_Itens_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_Itens_17), (void*)value);
	}
};

struct UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields
{
public:
	// UI_Manager UI_Manager::Instance
	UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields, ___Instance_16)); }
	inline UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * get_Instance_16() const { return ___Instance_16; }
	inline UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// GameEventListenterWithDelay
struct GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275  : public GameEventListenter_tEA0EF55311E432A49B8F32D9D01C4160B3ECDF07
{
public:
	// System.Single GameEventListenterWithDelay::delayForEvent
	float ___delayForEvent_6;
	// UnityEngine.Events.UnityEvent GameEventListenterWithDelay::delayedUnityEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___delayedUnityEvent_7;

public:
	inline static int32_t get_offset_of_delayForEvent_6() { return static_cast<int32_t>(offsetof(GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275, ___delayForEvent_6)); }
	inline float get_delayForEvent_6() const { return ___delayForEvent_6; }
	inline float* get_address_of_delayForEvent_6() { return &___delayForEvent_6; }
	inline void set_delayForEvent_6(float value)
	{
		___delayForEvent_6 = value;
	}

	inline static int32_t get_offset_of_delayedUnityEvent_7() { return static_cast<int32_t>(offsetof(GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275, ___delayedUnityEvent_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_delayedUnityEvent_7() const { return ___delayedUnityEvent_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_delayedUnityEvent_7() { return &___delayedUnityEvent_7; }
	inline void set_delayedUnityEvent_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___delayedUnityEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedUnityEvent_7), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ITask[]
struct ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// ToyGatherTask[]
struct ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * m_Items[1];

public:
	inline ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);

// System.Void SoundManager::PassarValoresSons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PassarValoresSons_m54DD622410DB160AC9FEAF211F3285BD5243A4AC (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void SoundManager::IniciarDicionario()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_IniciarDicionario_mE8A7EF8E39415CC582F00D3C4FF7B4A1D5F4CA94 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>::.ctor()
inline void Dictionary_2__ctor_m24F4D04251907D29324B0BE9002A8851A3174D28 (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SoundManager/SoundFX>::GetEnumerator()
inline Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A  List_1_GetEnumerator_m101B7AB09A25F1D48906A3D72D1B657AC0E491D1 (List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A  (*) (List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SoundManager/SoundFX>::get_Current()
inline SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * Enumerator_get_Current_mA1D55F9D0DCFA045917ED12A557EFB4387D49C11_inline (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A * __this, const RuntimeMethod* method)
{
	return ((  SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * (*) (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>::Add(!0,!1)
inline void Dictionary_2_Add_mAD8DF48D76EDD4DD311DAB3E46998B2959040D4A (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * __this, String_t* ___key0, SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 *, String_t*, SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SoundManager/SoundFX>::MoveNext()
inline bool Enumerator_MoveNext_mD3E7D5A720423FC95C2811D0950065256F81C1D9 (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SoundManager/SoundFX>::Dispose()
inline void Enumerator_Dispose_m4B8BFB23E8DB9C520959B213745D8DBF3962B261 (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SoundManager::PlaySoundInList(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySoundInList_mBBAC1DDCF7C21E7A9565E8F72859A45FBBF75A39 (String_t* ___id0, float ___volume1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m54D7BBDEAB7A8E3587227F39A5007DBD02D1EEA6 (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,SoundManager/SoundFX>::get_Item(!0)
inline SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * Dictionary_2_get_Item_m237B2DAA2DA72BB89A58EA018DDE02F7024660A6 (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * (*) (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// UnityEngine.AudioClip SoundManager/SoundFX::RandomSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundFX_RandomSound_mB3CD7C45714B4CDF4D0E143F4E060BE171F7C5F8 (SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Int32 SoundtrackManager::RetornarAleatorio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundtrackManager_RetornarAleatorio_mE6E706A91B3AB7E72D9BEA718DE5486CBB6B4EF0 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, int32_t ___qtd0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void SoundtrackManager::TocarMusicaAleatoriaMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_TocarMusicaAleatoriaMenu_m8EB1B08117CEDEBD41A442F79DEF6A89608CF1F3 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method);
// System.Void SoundtrackManager::TocarMusicaAleatoriaGameplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_TocarMusicaAleatoriaGameplay_mBEE680E53AD393E62DC976B13B64E70187EA3BB6 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method);
// System.Boolean PuzzleStats::AreTasksComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuzzleStats_AreTasksComplete_m1132B75385B570D193BB313D9C456DA9E0BD36D1 (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * __this, const RuntimeMethod* method);
// System.String PuzzleStats::PuzzleStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PuzzleStats_PuzzleStatus_m34192E696375E9C8DBA20237B82619C769BDF540 (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * __this, const RuntimeMethod* method);
// UI_Colors PuzzleStats::CurrentStatsColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuzzleStats_CurrentStatsColor_mD1E44F45E275BD8B558040F93B0245A20D1FEC34 (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * __this, const RuntimeMethod* method);
// System.Void ToyGatherPuzzle::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_Initialize_m69397D5C4FD754C31C6E5F48657030A99EC4680C (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ITask>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ToyGatherTask::add_OnTaskToggled(System.Action`1<ITask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_add_OnTaskToggled_m32E29B8FF8A22443BB47C5A26C795B3FC6E3AAAC (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * ___value0, const RuntimeMethod* method);
// System.Void PuzzleStats::.ctor(ITask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleStats__ctor_m3FFAC847C90990E9E2ADE2C04B18F4AF6129B375 (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * __this, ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* ___puzzleTasks0, const RuntimeMethod* method);
// System.Void ToyGatherTask::remove_OnTaskToggled(System.Action`1<ITask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_remove_OnTaskToggled_m5B445790F55DD6C4D0573438123B9C7BE0F0F0EB (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * ___value0, const RuntimeMethod* method);
// System.Boolean ToyGatherPuzzle::get_IsPuzzleComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToyGatherPuzzle_get_IsPuzzleComplete_m514D5430C8BEC2471F37A408495988DD306E004E (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String ToyGatherPuzzle::get_PuzzleStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToyGatherPuzzle_get_PuzzleStatus_m88F221883D81BA5A2EC0B6E9624C1D73CB9D81DA (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.String ToyGatherPuzzle::get_PuzzleDesc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToyGatherPuzzle_get_PuzzleDesc_mEB9DAE83313B0F2F26B0EAC1CDDF1FEBC5622B84_inline (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// UI_Colors ToyGatherPuzzle::get_CurrentStatsColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToyGatherPuzzle_get_CurrentStatsColor_mAEBFF2F480025AC61BB7BEFBD0C65BD88697EB7F (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.Void UI_Manager::SetPuzzleDesc(System.String,System.String,UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_SetPuzzleDesc_m87911D2684561D7DF977CE89CA3478C479684264 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___statusPuzzle0, String_t* ___descPuzzle1, int32_t ___statusColor2, const RuntimeMethod* method);
// System.Void UI_Manager::DeactivatePuzzleCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_DeactivatePuzzleCard_m8E575099E93D5FEFE7FF49BC076A4722E686EFA9 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method);
// GameEvent AvailableGameEvents::get_PuzzleComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * AvailableGameEvents_get_PuzzleComplete_m5954C43AA8B172B4C682E4AB3461163EE8C5C78F_inline (AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * __this, const RuntimeMethod* method);
// System.Void GameEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_Invoke_mD6240CC71351D7463E7DFFBB9F68B18E7DCECFEA (GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 PuzzleStats::NumTasksComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PuzzleStats_NumTasksComplete_m773B2CBFE3B74A7AA11DA70629583F44C319C31F (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * __this, const RuntimeMethod* method);
// System.Void FeedbackPuzzleLights::ToggleLights(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackPuzzleLights_ToggleLights_m8905897A69F8C384CAF91045DF36D22B320D2A7C (FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * __this, int32_t ___qtdToLightUp0, const RuntimeMethod* method);
// GameEvent AvailableGameEvents::get_TaskComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * AvailableGameEvents_get_TaskComplete_m406132DB8616925ECA27D5075EB272A5E09C3C52_inline (AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * __this, const RuntimeMethod* method);
// System.Void ToyGatherPuzzle::CheckIfPuzzleComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_CheckIfPuzzleComplete_m3EB16767537502B23F2B67BF3DBFBBF1B67A7754 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject ToyGatherPuzzle::TargetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ToyGatherPuzzle_TargetCollider_mD38028D77BB15861A15DE28A961F377C52D7A618 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void ToyGatherTask::ToggleTaskStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_ToggleTaskStatus_mEE1950745293CFBF4C33AFFE2BC750EAFFA08708 (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ToyGatherTask::set_isTaskComplete(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToyGatherTask_set_isTaskComplete_mC5A9B7052CE0086A007F435391CFD61A8D1B8BEC_inline (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PickUpObject::DeativatePìckUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpObject_DeativatePUECckUp_m7AEAEDADF51AE5700EC26A07E26BEF1D33F0DAC4 (PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * __this, const RuntimeMethod* method);
// System.Void PickUpObject::AllowPickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickUpObject_AllowPickUp_m6804C8B907A36CB7A364A3074280E810415DB521 (PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<ITask>::Invoke(!0)
inline void Action_1_Invoke_m1E5B6004C60B9FACD85E3EA731C47F0931F23ECE (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void TriggerCutscene::PrepareForCutscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerCutscene_PrepareForCutscene_m92075BA3438F9D96DC65E0BB375AF61730C5C764 (TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A * __this, const RuntimeMethod* method);
// System.Void GameState::SwitchToCutscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SwitchToCutscene_mE48F6F5EFFC495552E19B18B1D5002442C52C150 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void TweenerAnimation::Animar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_Animar_m5CD5702066259165F9E78A75409AD5AB33692350 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// LTDescr LeanTween::scale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_scale_m684CBC818ED1F1ED8C50D1BD0F49495CACC0067C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setDelay_m55BD6D8AB740123B2EE42BA1721C7E6E29504110 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, float ___delay0, const RuntimeMethod* method);
// LTDescr LTDescr::setEase(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setEase_m85FF6788C6DD67CB57F667E80E456C7CE86C9E3F (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___easeCurve0, const RuntimeMethod* method);
// LTDescr LTDescr::setEase(LeanTweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setEase_mDE953D5A1E2D1234C5CFD2F0CDB6F32B787ACD0C (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, int32_t ___easeType0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LTDescr LTDescr::setOnComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onComplete0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TweenerAnimation::ProcessFPSSwitcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_ProcessFPSSwitcher_mE72709BD498B490CA8E99F13684E447379182500 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method);
// System.Void GameState::SwitchToPlayingFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SwitchToPlayingFPS_m0F1B11DB0F12B2CC819642291131F7164613C3F4 (const RuntimeMethod* method);
// System.Void UI_Manager::CreateUI_ScreenDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_CreateUI_ScreenDictionary_mB469414DA8B9224EAB22930DFDC1C6CF990DE547 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>::.ctor()
inline void Dictionary_2__ctor_mDFD119161E17F9082AAE7F16AB38378D3F0548E9 (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UI_Manager/UI_Item>::GetEnumerator()
inline Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED  List_1_GetEnumerator_mB620C00222C9F3E2689FFCEF6C40792BEA6AC057 (List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED  (*) (List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UI_Manager/UI_Item>::get_Current()
inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * Enumerator_get_Current_m9933011D5649BA0740DA30514C1F39BFC2FCFBA1_inline (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED * __this, const RuntimeMethod* method)
{
	return ((  UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * (*) (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>::Add(!0,!1)
inline void Dictionary_2_Add_mEC6044AC88907B6C0C80456294480A86DC9EC9EC (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * __this, String_t* ___key0, UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *, String_t*, UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UI_Manager/UI_Item>::MoveNext()
inline bool Enumerator_MoveNext_m636E55020B435BF40D080F6ACEDEC62916F45029 (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UI_Manager/UI_Item>::Dispose()
inline void Enumerator_Dispose_m76AB72FAE501D10ABA80A66D464C01784906F08C (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD1BF1BFD75B4D9A4C2B19FD7C7725F8092B806E3 (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>::GetEnumerator()
inline Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5 (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  (*) (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UI_Manager/UI_Item>::get_Current()
inline KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_inline (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  (*) (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UI_Manager/UI_Item>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m60DB8894CEA78B020784686D5DF4BBBEEA1A4E7E_inline (KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UI_Manager/UI_Item>::get_Value()
inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_inline (KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D * __this, const RuntimeMethod* method)
{
	return ((  UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * (*) (KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UI_Manager/UI_Item::ActivateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_ActivateItem_m9224461270B41A9B544DD0C24747BEC2CAA00FEE (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, const RuntimeMethod* method);
// System.Void UI_Manager/UI_Item::DeactivateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_DeactivateItem_m55B2E2ACDB334BD6F3DBE776E64EA9CF07CE4D15 (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UI_Manager/UI_Item>::MoveNext()
inline bool Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UI_Manager/UI_Item>::Dispose()
inline void Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void UI_Manager::ActivateIndividualScreen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___idScreen0, const RuntimeMethod* method);
// UnityEngine.Color UI_Manager::ColorToSet(UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, int32_t ___color0, const RuntimeMethod* method);
// System.Void UI_Manager::DeactivateAllScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_DeactivateAllScreen_m03C54081E0326FA8B59DFB9D056226737B29B915 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UI_Manager/UI_Item>::get_Item(!0)
inline UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * Dictionary_2_get_Item_m97663B0BFE38701160A6AE356C7F4D96DE8D200A (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * (*) (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UI_Manager/UI_Item::ToggleItem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_ToggleItem_m171B4A8223BD46F8CB266CE6C8662F07E63B5A61 (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single InitialLoader::ProgressClamped(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InitialLoader_ProgressClamped_m205D66F8DA0AF371AE20280DE7713319B135F031 (InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * __this, float ___progress0, const RuntimeMethod* method);
// System.String InitialLoader::Porcent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InitialLoader_Porcent_mE54A914CECCF2FE3D49F129F977768B853A13E23 (InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * __this, float ___progress0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB934C02FF6DB889EA42A5581DCA0B5CEDBCC5903 (U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.String LeanTest::formatB(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeanTest_formatB_mDF309FD724B541A97D931A28FE32B9F3245DA966 (String_t* ___str0, const RuntimeMethod* method);
// System.Void LeanTest::overview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTest_overview_mFBDD0E748CC3DF470B668293185D2637F2ACF17F (const RuntimeMethod* method);
// LTDescrOptional LTDescr::get_optional()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 LTDescrOptional::get_axis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline (LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * __this, const RuntimeMethod* method);
// UnityEngine.Transform LTDescr::get_toTrans()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 LeanSmooth::damp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LeanSmooth_damp_m7CCE1AB623BF22468A59B97CC2D161682476168E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method);
// System.Void LTDescrOptional::set_axis(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline (LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single LeanSmooth::damp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetLocalPosX(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetLocalPosX_m2325658730387BE391CB8FE674FD3FD2D8D3ECDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetLocalPosY(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetLocalPosY_mF14BA20EFA312158AB0FD456EB8762457DB03AE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetLocalPosZ(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetLocalPosZ_m685180D2C04DF7E3417E9EECA9BEBE60F0850790 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetPosX(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetPosX_m82201BB5C9781FA41FB69DDA05471D693E59DF2E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetPosY(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetPosY_mD9DAE6B462055110382822D16B5551854CB68DD7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanSetPosZ(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTweenExt_LeanSetPosZ_m1E17DB053DD69876E163757D053A85B172CAC027 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___val1, const RuntimeMethod* method);
// UnityEngine.Color LeanTweenExt::LeanColor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// UnityEngine.Color LeanSmooth::damp(UnityEngine.Color,UnityEngine.Color,UnityEngine.Color&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LeanSmooth_damp_m9AA68F6F1D20FF61F338BA122A374CB0F10D6EFE (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___current0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___target1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 LeanSmooth::spring(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LeanSmooth_spring_mAC93690E733A39072CB37D5BFF1239414F98E1EF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, const RuntimeMethod* method);
// System.Single LeanSmooth::spring(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, const RuntimeMethod* method);
// UnityEngine.Color LeanSmooth::spring(UnityEngine.Color,UnityEngine.Color,UnityEngine.Color&,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LeanSmooth_spring_mC13A607AA221D50EB1AB72CE0C5D314F2748E946 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___current0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___target1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, const RuntimeMethod* method);
// UnityEngine.Vector3 LeanSmooth::bounceOut(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LeanSmooth_bounceOut_m39C1F55CD36843F594D1C58D067696AD294C4812 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, float ___hitDamping8, const RuntimeMethod* method);
// System.Single LeanSmooth::bounceOut(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, float ___hitDamping8, const RuntimeMethod* method);
// UnityEngine.Color LeanSmooth::bounceOut(UnityEngine.Color,UnityEngine.Color,UnityEngine.Color&,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LeanSmooth_bounceOut_mF3E43703A80AB9D705575A9D803AD2E8AF3722F1 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___current0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___target1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, float ___friction6, float ___accelRate7, float ___hitDamping8, const RuntimeMethod* method);
// UnityEngine.Vector3 LeanSmooth::linear(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LeanSmooth_linear_mE9F99D1FD99A7D58A0F81A3A39EA4D994D55BB6D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___moveSpeed2, float ___deltaTime3, const RuntimeMethod* method);
// System.Single LeanSmooth::linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11 (float ___current0, float ___target1, float ___moveSpeed2, float ___deltaTime3, const RuntimeMethod* method);
// UnityEngine.Color LeanSmooth::linear(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LeanSmooth_linear_mD4AAD42ECD1AFD102F576A52116C57CDEEFB73E7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___current0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___target1, float ___moveSpeed2, const RuntimeMethod* method);
// System.Single LoadSceneWithLoadingBar::ProgressClamped(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LoadSceneWithLoadingBar_ProgressClamped_mF0FBDD13BC8A1AEDA01ABD260939167FA13B0275 (LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * __this, float ___progress0, const RuntimeMethod* method);
// System.String LoadSceneWithLoadingBar::Porcent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadSceneWithLoadingBar_Porcent_mDDA7FCF96BAC8F4C8C5E084834A880670291E211 (LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * __this, float ___progress0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// PassarValoresSons();
		SoundManager_PassarValoresSons_m54DD622410DB160AC9FEAF211F3285BD5243A4AC(__this, /*hidden argument*/NULL);
		// IniciarDicionario();
		SoundManager_IniciarDicionario_mE8A7EF8E39415CC582F00D3C4FF7B4A1D5F4CA94(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::IniciarDicionario()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_IniciarDicionario_mE8A7EF8E39415CC582F00D3C4FF7B4A1D5F4CA94 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAD8DF48D76EDD4DD311DAB3E46998B2959040D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m24F4D04251907D29324B0BE9002A8851A3174D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B8BFB23E8DB9C520959B213745D8DBF3962B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD3E7D5A720423FC95C2811D0950065256F81C1D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA1D55F9D0DCFA045917ED12A557EFB4387D49C11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m101B7AB09A25F1D48906A3D72D1B657AC0E491D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// listaSons = new Dictionary<string, SoundFX>();
		Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * L_0 = (Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 *)il2cpp_codegen_object_new(Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m24F4D04251907D29324B0BE9002A8851A3174D28(L_0, /*hidden argument*/Dictionary_2__ctor_m24F4D04251907D29324B0BE9002A8851A3174D28_RuntimeMethod_var);
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_listaSons_6(L_0);
		// foreach (SoundFX s in sounds)
		List_1_t27C0293DC8809E4CA9BFB7CC5A79EF421F71E4EE * L_1 = __this->get_sounds_4();
		NullCheck(L_1);
		Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A  L_2;
		L_2 = List_1_GetEnumerator_m101B7AB09A25F1D48906A3D72D1B657AC0E491D1(L_1, /*hidden argument*/List_1_GetEnumerator_m101B7AB09A25F1D48906A3D72D1B657AC0E491D1_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0018:
		{
			// foreach (SoundFX s in sounds)
			SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * L_3;
			L_3 = Enumerator_get_Current_mA1D55F9D0DCFA045917ED12A557EFB4387D49C11_inline((Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA1D55F9D0DCFA045917ED12A557EFB4387D49C11_RuntimeMethod_var);
			V_1 = L_3;
			// listaSons.Add(s.idSom, s);
			Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * L_4 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_listaSons_6();
			SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_idSom_0();
			SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * L_7 = V_1;
			NullCheck(L_4);
			Dictionary_2_Add_mAD8DF48D76EDD4DD311DAB3E46998B2959040D4A(L_4, L_6, L_7, /*hidden argument*/Dictionary_2_Add_mAD8DF48D76EDD4DD311DAB3E46998B2959040D4A_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (SoundFX s in sounds)
			bool L_8;
			L_8 = Enumerator_MoveNext_mD3E7D5A720423FC95C2811D0950065256F81C1D9((Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD3E7D5A720423FC95C2811D0950065256F81C1D9_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0018;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B8BFB23E8DB9C520959B213745D8DBF3962B261((Enumerator_t79F04806779D08A81F1B75DC5ED92772F867EA4A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B8BFB23E8DB9C520959B213745D8DBF3962B261_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void SoundManager::PassarValoresSons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PassarValoresSons_m54DD622410DB160AC9FEAF211F3285BD5243A4AC (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storedNormalEmissor = normalEmissor;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_normalEmissor_5();
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_storedNormalEmissor_7(L_0);
		// }
		return;
	}
}
// System.Void SoundManager::ClickUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ClickUI_mCC7356F160B4CAE81E4945D4F3B4F88AE4866A5A (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySoundInList("click", 1);
		SoundManager_PlaySoundInList_mBBAC1DDCF7C21E7A9565E8F72859A45FBBF75A39(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::BackUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BackUI_m8A60C48E439B39B246BEF7DAB3A459D3E617481F (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySoundInList("back", 1);
		SoundManager_PlaySoundInList_mBBAC1DDCF7C21E7A9565E8F72859A45FBBF75A39(_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayASound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayASound_mE842C91252F2FE6900A7DBF09F7AD62D8CABB679 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, String_t* ___idSound0, const RuntimeMethod* method)
{
	{
		// PlaySoundInList(idSound, 1);
		String_t* L_0 = ___idSound0;
		SoundManager_PlaySoundInList_mBBAC1DDCF7C21E7A9565E8F72859A45FBBF75A39(L_0, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySoundInList(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySoundInList_mBBAC1DDCF7C21E7A9565E8F72859A45FBBF75A39 (String_t* ___id0, float ___volume1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m54D7BBDEAB7A8E3587227F39A5007DBD02D1EEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m237B2DAA2DA72BB89A58EA018DDE02F7024660A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A517A3FBA5265996D5BFDD8B79B1681C19ADCC);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (MuteSwitch.isFXMuted)
		IL2CPP_RUNTIME_CLASS_INIT(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_il2cpp_TypeInfo_var);
		bool L_0 = ((MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_StaticFields*)il2cpp_codegen_static_fields_for(MuteSwitch_t91DC2B0A910289D79D8B394ADCD4319973201594_il2cpp_TypeInfo_var))->get_isFXMuted_8();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (!listaSons.ContainsKey(id))
		Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_listaSons_6();
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m54D7BBDEAB7A8E3587227F39A5007DBD02D1EEA6(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m54D7BBDEAB7A8E3587227F39A5007DBD02D1EEA6_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogWarning("Não existe SOM COM TAG: " + id);
		String_t* L_4 = ___id0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral47A517A3FBA5265996D5BFDD8B79B1681C19ADCC, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0026:
	{
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		// storedNormalEmissor.PlayOneShot(listaSons[id].RandomSound(), volume);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_storedNormalEmissor_7();
		Dictionary_2_t7D0A516155EC0102F0CB51AC3D4E7381776A8F25 * L_7 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_listaSons_6();
		String_t* L_8 = ___id0;
		NullCheck(L_7);
		SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * L_9;
		L_9 = Dictionary_2_get_Item_m237B2DAA2DA72BB89A58EA018DDE02F7024660A6(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m237B2DAA2DA72BB89A58EA018DDE02F7024660A6_RuntimeMethod_var);
		NullCheck(L_9);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10;
		L_10 = SoundFX_RandomSound_mB3CD7C45714B4CDF4D0E143F4E060BE171F7C5F8(L_9, /*hidden argument*/NULL);
		float L_11 = ___volume1;
		NullCheck(L_6);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_6, L_10, L_11, /*hidden argument*/NULL);
		// }
		goto IL_0047;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{ // begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0047;
	} // end catch (depth: 1)

IL_0047:
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundtrackManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_Awake_mAB3F5F4E481CBEABF064E1500F845CA402A1D53A (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// emissor = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_emissor_6(L_0);
		// GameObject[] objs = GameObject.FindGameObjectsWithTag("music");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F, /*hidden argument*/NULL);
		// if (objs.Length > 1)
		NullCheck(L_1);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundtrackManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_OnEnable_m109D55373C4C14B3527D0E90F9A02B27B751D878 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundtrackManager_OnSceneLoaded_m576ACEE51AE29F08E66AEFD558EFDCD6766CD660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)SoundtrackManager_OnSceneLoaded_m576ACEE51AE29F08E66AEFD558EFDCD6766CD660_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SoundtrackManager::RetornarAleatorio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoundtrackManager_RetornarAleatorio_mE6E706A91B3AB7E72D9BEA718DE5486CBB6B4EF0 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, int32_t ___qtd0, const RuntimeMethod* method)
{
	{
		// return Random.Range(0, qtd);
		int32_t L_0 = ___qtd0;
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SoundtrackManager::TocarMusicaAleatoriaMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_TocarMusicaAleatoriaMenu_m8EB1B08117CEDEBD41A442F79DEF6A89608CF1F3 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2325D4C387659F001176551AC884700FB274E1D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// emissor.clip = playlistMenu[RetornarAleatorio(playlistMenu.Length)];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_emissor_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_playlistMenu_4();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get_playlistMenu_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SoundtrackManager_RetornarAleatorio_mE6E706A91B3AB7E72D9BEA718DE5486CBB6B4EF0(__this, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_5, /*hidden argument*/NULL);
		// emissor.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_emissor_6();
		NullCheck(L_6);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// Invoke("TocarMusicaAleatoriaMenu", emissor.clip.length);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_emissor_6();
		NullCheck(L_7);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_8, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral2325D4C387659F001176551AC884700FB274E1D0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundtrackManager::TocarMusicaAleatoriaGameplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_TocarMusicaAleatoriaGameplay_mBEE680E53AD393E62DC976B13B64E70187EA3BB6 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05139E99F063C14C1A14DB71A3DB519DBC2F8B95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// emissor.clip = playlistGameplay[RetornarAleatorio(playlistGameplay.Length)];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_emissor_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_playlistGameplay_5();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get_playlistGameplay_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SoundtrackManager_RetornarAleatorio_mE6E706A91B3AB7E72D9BEA718DE5486CBB6B4EF0(__this, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_5, /*hidden argument*/NULL);
		// emissor.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_emissor_6();
		NullCheck(L_6);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// Invoke("TocarMusicaAleatoriaGameplay" , emissor.clip.length);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_emissor_6();
		NullCheck(L_7);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_8, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral05139E99F063C14C1A14DB71A3DB519DBC2F8B95, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundtrackManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager_OnSceneLoaded_m576ACEE51AE29F08E66AEFD558EFDCD6766CD660 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// if (scene.name == "Main")
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// TocarMusicaAleatoriaMenu();
		SoundtrackManager_TocarMusicaAleatoriaMenu_m8EB1B08117CEDEBD41A442F79DEF6A89608CF1F3(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// TocarMusicaAleatoriaGameplay();
		SoundtrackManager_TocarMusicaAleatoriaGameplay_mBEE680E53AD393E62DC976B13B64E70187EA3BB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundtrackManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundtrackManager__ctor_mF2A026A2FFA663D4758AEE7054C6133018075149 (SoundtrackManager_t8BF469B6F456DF09D74C8314028BF573C278109E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ToyGatherPuzzle::get_IsPuzzleComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToyGatherPuzzle_get_IsPuzzleComplete_m514D5430C8BEC2471F37A408495988DD306E004E (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPuzzleComplete => puzzleStats.AreTasksComplete();
		PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * L_0 = __this->get_puzzleStats_8();
		NullCheck(L_0);
		bool L_1;
		L_1 = PuzzleStats_AreTasksComplete_m1132B75385B570D193BB313D9C456DA9E0BD36D1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ToyGatherPuzzle::get_PuzzleStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToyGatherPuzzle_get_PuzzleStatus_m88F221883D81BA5A2EC0B6E9624C1D73CB9D81DA (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// public string PuzzleStatus => puzzleStats.PuzzleStatus();
		PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * L_0 = __this->get_puzzleStats_8();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PuzzleStats_PuzzleStatus_m34192E696375E9C8DBA20237B82619C769BDF540(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ToyGatherPuzzle::get_PuzzleDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToyGatherPuzzle_get_PuzzleDesc_mEB9DAE83313B0F2F26B0EAC1CDDF1FEBC5622B84 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// public string PuzzleDesc => descPuzzle;
		String_t* L_0 = __this->get_descPuzzle_7();
		return L_0;
	}
}
// UI_Colors ToyGatherPuzzle::get_CurrentStatsColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToyGatherPuzzle_get_CurrentStatsColor_mAEBFF2F480025AC61BB7BEFBD0C65BD88697EB7F (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// public UI_Colors CurrentStatsColor => puzzleStats.CurrentStatsColor();
		PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * L_0 = __this->get_puzzleStats_8();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PuzzleStats_CurrentStatsColor_mD1E44F45E275BD8B558040F93B0245A20D1FEC34(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ToyGatherPuzzle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_Awake_m96458FECD4CFE341825A8BEDB1C9B981CE92AFB6 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// Initialize();
		ToyGatherPuzzle_Initialize_m69397D5C4FD754C31C6E5F48657030A99EC4680C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_Initialize_m69397D5C4FD754C31C6E5F48657030A99EC4680C (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* V_0 = NULL;
	{
		// ToyGatherTask.OnTaskToggled += TaskToggled;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_0 = (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)il2cpp_codegen_object_new(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC(L_0, __this, (intptr_t)((intptr_t)ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC_RuntimeMethod_var);
		ToyGatherTask_add_OnTaskToggled_m32E29B8FF8A22443BB47C5A26C795B3FC6E3AAAC(L_0, /*hidden argument*/NULL);
		// puzzleStats = new PuzzleStats(puzzleTasks);
		ToyGatherTaskU5BU5D_t6A970710936F345D3843FD7852E3241EA8BA42B4* L_1 = __this->get_puzzleTasks_4();
		V_0 = (ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F*)L_1;
		ITaskU5BU5D_t0319656A15E2629EE232D96CE7DB486377E3E10F* L_2 = V_0;
		PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * L_3 = (PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B *)il2cpp_codegen_object_new(PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B_il2cpp_TypeInfo_var);
		PuzzleStats__ctor_m3FFAC847C90990E9E2ADE2C04B18F4AF6129B375(L_3, L_2, /*hidden argument*/NULL);
		__this->set_puzzleStats_8(L_3);
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_OnDisable_mA6527BFD4CE7BAA88B8B652E23C4FA004449164D (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToyGatherTask.OnTaskToggled -= TaskToggled;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_0 = (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)il2cpp_codegen_object_new(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC(L_0, __this, (intptr_t)((intptr_t)ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EC7C5B38998BE8EDD807C074BE06399611714FC_RuntimeMethod_var);
		ToyGatherTask_remove_OnTaskToggled_m5B445790F55DD6C4D0573438123B9C7BE0F0F0EB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_Interact_m7E893489A509404BFE03CECA9FD2A650EE78FB24 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral857398E0448EED6548A6043E6E5141693786A574);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsPuzzleComplete)
		bool L_0;
		L_0 = ToyGatherPuzzle_get_IsPuzzleComplete_m514D5430C8BEC2471F37A408495988DD306E004E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.Log("Do stuff after puzzle complete");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral857398E0448EED6548A6043E6E5141693786A574, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::ActivateInteractionFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_ActivateInteractionFeedback_m1CD59BCECD2964E776569FFEE61AACFBE61EDB8A (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UI_Manager.Instance.SetPuzzleDesc(PuzzleStatus, PuzzleDesc, CurrentStatsColor);
		UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * L_0 = ((UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields*)il2cpp_codegen_static_fields_for(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var))->get_Instance_16();
		String_t* L_1;
		L_1 = ToyGatherPuzzle_get_PuzzleStatus_m88F221883D81BA5A2EC0B6E9624C1D73CB9D81DA(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = ToyGatherPuzzle_get_PuzzleDesc_mEB9DAE83313B0F2F26B0EAC1CDDF1FEBC5622B84_inline(__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = ToyGatherPuzzle_get_CurrentStatsColor_mAEBFF2F480025AC61BB7BEFBD0C65BD88697EB7F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UI_Manager_SetPuzzleDesc_m87911D2684561D7DF977CE89CA3478C479684264(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::DeactivateInteractionFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_DeactivateInteractionFeedback_mA02235E022FCAFA2B1F63C0924F8AB63BC02028F (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UI_Manager.Instance.DeactivatePuzzleCard();
		UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * L_0 = ((UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields*)il2cpp_codegen_static_fields_for(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var))->get_Instance_16();
		NullCheck(L_0);
		UI_Manager_DeactivatePuzzleCard_m8E575099E93D5FEFE7FF49BC076A4722E686EFA9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::CheckIfPuzzleComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_CheckIfPuzzleComplete_m3EB16767537502B23F2B67BF3DBFBBF1B67A7754 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F3A660C31436A80576A84684F76BFCEDA1051C);
		s_Il2CppMethodInitialized = true;
	}
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B3_0 = NULL;
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B2_0 = NULL;
	{
		// if (IsPuzzleComplete)
		bool L_0;
		L_0 = ToyGatherPuzzle_get_IsPuzzleComplete_m514D5430C8BEC2471F37A408495988DD306E004E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// AvailableGameEvents.Instance.PuzzleComplete?.Invoke();
		AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * L_1 = ((AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_StaticFields*)il2cpp_codegen_static_fields_for(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_il2cpp_TypeInfo_var))->get_Instance_8();
		NullCheck(L_1);
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_2;
		L_2 = AvailableGameEvents_get_PuzzleComplete_m5954C43AA8B172B4C682E4AB3461163EE8C5C78F_inline(L_1, /*hidden argument*/NULL);
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0018;
		}
	}
	{
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B3_0);
		GameEvent_Invoke_mD6240CC71351D7463E7DFFBB9F68B18E7DCECFEA(G_B3_0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// Debug.Log("PUZZLE IS COMPLETE!!!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral88F3A660C31436A80576A84684F76BFCEDA1051C, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ToyGatherPuzzle::TargetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ToyGatherPuzzle_TargetCollider_mD38028D77BB15861A15DE28A961F377C52D7A618 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// return targetCollider.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_targetCollider_5();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ToyGatherPuzzle::TaskToggled(ITask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle_TaskToggled_m0C47D43C67EE971FE80A5B0801BDF3DDF6E1F998 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, RuntimeObject* ___taskComplete0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITask_t5B279F7B3504FD9F839FDBD1620EBD1C1DC94489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B5_0 = NULL;
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B4_0 = NULL;
	{
		// if (feedBackLights != null)
		FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * L_0 = __this->get_feedBackLights_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// feedBackLights.ToggleLights(puzzleStats.NumTasksComplete());
		FeedbackPuzzleLights_t03A14C9A89548CF949ABD91F3B020E7D841958E8 * L_2 = __this->get_feedBackLights_6();
		PuzzleStats_t1C6B7230BC630C23AFA3A157C602108DCCEFFD8B * L_3 = __this->get_puzzleStats_8();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PuzzleStats_NumTasksComplete_m773B2CBFE3B74A7AA11DA70629583F44C319C31F(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		FeedbackPuzzleLights_ToggleLights_m8905897A69F8C384CAF91045DF36D22B320D2A7C(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if (taskComplete.isTaskComplete)
		RuntimeObject* L_5 = ___taskComplete0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean ITask::get_isTaskComplete() */, ITask_t5B279F7B3504FD9F839FDBD1620EBD1C1DC94489_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// AvailableGameEvents.Instance.TaskComplete?.Invoke();
		AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * L_7 = ((AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_StaticFields*)il2cpp_codegen_static_fields_for(AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F_il2cpp_TypeInfo_var))->get_Instance_8();
		NullCheck(L_7);
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_8;
		L_8 = AvailableGameEvents_get_TaskComplete_m406132DB8616925ECA27D5075EB272A5E09C3C52_inline(L_7, /*hidden argument*/NULL);
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_003c;
		}
	}
	{
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck(G_B5_0);
		GameEvent_Invoke_mD6240CC71351D7463E7DFFBB9F68B18E7DCECFEA(G_B5_0, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// CheckIfPuzzleComplete();
		ToyGatherPuzzle_CheckIfPuzzleComplete_m3EB16767537502B23F2B67BF3DBFBBF1B67A7754(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void ToyGatherPuzzle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherPuzzle__ctor_m589129F2655CAA2377B1125F7C614623175F89F2 (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean ToyGatherTask::get_isTaskComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToyGatherTask_get_isTaskComplete_m65267A02A95D7C1680B52407FBD9FF43E2E5F04C (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, const RuntimeMethod* method)
{
	{
		// public bool isTaskComplete { get; private set; }
		bool L_0 = __this->get_U3CisTaskCompleteU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ToyGatherTask::set_isTaskComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_set_isTaskComplete_mC5A9B7052CE0086A007F435391CFD61A8D1B8BEC (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isTaskComplete { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisTaskCompleteU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void ToyGatherTask::add_OnTaskToggled(System.Action`1<ITask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_add_OnTaskToggled_m32E29B8FF8A22443BB47C5A26C795B3FC6E3AAAC (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_0 = NULL;
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_1 = NULL;
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_2 = NULL;
	{
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_0 = ((ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields*)il2cpp_codegen_static_fields_for(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var))->get_OnTaskToggled_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_2 = V_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var));
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_5 = V_2;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_6 = V_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *>((Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 **)(((ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields*)il2cpp_codegen_static_fields_for(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var))->get_address_of_OnTaskToggled_7()), L_5, L_6);
		V_0 = L_7;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_8 = V_0;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)L_8) == ((RuntimeObject*)(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ToyGatherTask::remove_OnTaskToggled(System.Action`1<ITask>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_remove_OnTaskToggled_m5B445790F55DD6C4D0573438123B9C7BE0F0F0EB (Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_0 = NULL;
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_1 = NULL;
	Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * V_2 = NULL;
	{
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_0 = ((ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields*)il2cpp_codegen_static_fields_for(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var))->get_OnTaskToggled_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_2 = V_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77_il2cpp_TypeInfo_var));
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_5 = V_2;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_6 = V_1;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *>((Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 **)(((ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields*)il2cpp_codegen_static_fields_for(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var))->get_address_of_OnTaskToggled_7()), L_5, L_6);
		V_0 = L_7;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_8 = V_0;
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)L_8) == ((RuntimeObject*)(Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ToyGatherTask::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_OnTriggerEnter_m4137431B3BAAB846093351AA7604639D56CFD321 (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject == currentBasketPuzzle.TargetCollider())
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * L_2 = __this->get_currentBasketPuzzle_4();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = ToyGatherPuzzle_TargetCollider_mD38028D77BB15861A15DE28A961F377C52D7A618(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// ToggleTaskStatus(true);
		ToyGatherTask_ToggleTaskStatus_mEE1950745293CFBF4C33AFFE2BC750EAFFA08708(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ToyGatherTask::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_OnTriggerExit_m25A4A857ADF383C04B219F54B1E5D88A5A77ED33 (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject == currentBasketPuzzle.TargetCollider())
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * L_2 = __this->get_currentBasketPuzzle_4();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = ToyGatherPuzzle_TargetCollider_mD38028D77BB15861A15DE28A961F377C52D7A618(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// ToggleTaskStatus(false);
		ToyGatherTask_ToggleTaskStatus_mEE1950745293CFBF4C33AFFE2BC750EAFFA08708(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ToyGatherTask::ToggleTaskStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask_ToggleTaskStatus_mEE1950745293CFBF4C33AFFE2BC750EAFFA08708 (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m1E5B6004C60B9FACD85E3EA731C47F0931F23ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isTaskComplete = value;
		bool L_0 = ___value0;
		ToyGatherTask_set_isTaskComplete_mC5A9B7052CE0086A007F435391CFD61A8D1B8BEC_inline(__this, L_0, /*hidden argument*/NULL);
		// if (value)
		bool L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// objectPicker.DeativatePìckUp();
		PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * L_2 = __this->get_objectPicker_5();
		NullCheck(L_2);
		PickUpObject_DeativatePUECckUp_m7AEAEDADF51AE5700EC26A07E26BEF1D33F0DAC4(L_2, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0017:
	{
		// objectPicker.AllowPickUp();
		PickUpObject_t7D01269C401185BEF7FC92CA58EDFF29019594DD * L_3 = __this->get_objectPicker_5();
		NullCheck(L_3);
		PickUpObject_AllowPickUp_m6804C8B907A36CB7A364A3074280E810415DB521(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// OnTaskToggled(this);
		Action_1_tB23C9A43EA872896A3388FB8DDD9BABF737D9A77 * L_4 = ((ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_StaticFields*)il2cpp_codegen_static_fields_for(ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636_il2cpp_TypeInfo_var))->get_OnTaskToggled_7();
		NullCheck(L_4);
		Action_1_Invoke_m1E5B6004C60B9FACD85E3EA731C47F0931F23ECE(L_4, __this, /*hidden argument*/Action_1_Invoke_m1E5B6004C60B9FACD85E3EA731C47F0931F23ECE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ToyGatherTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToyGatherTask__ctor_m83A2B2C53DCDC36E292AB0A8252260CED1417F97 (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TriggerCutscene::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerCutscene_OnTriggerEnter_m98351088756E583E464D82A8C0E308130AE0FEF0 (TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// PrepareForCutscene();
		TriggerCutscene_PrepareForCutscene_m92075BA3438F9D96DC65E0BB375AF61730C5C764(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void TriggerCutscene::PrepareForCutscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerCutscene_PrepareForCutscene_m92075BA3438F9D96DC65E0BB375AF61730C5C764 (TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B2_0 = NULL;
	GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * G_B1_0 = NULL;
	{
		// playerWalkedOutside?.Invoke();
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_0 = __this->get_playerWalkedOutside_4();
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GameEvent_Invoke_mD6240CC71351D7463E7DFFBB9F68B18E7DCECFEA(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// GameState.SwitchToCutscene();
		IL2CPP_RUNTIME_CLASS_INIT(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		GameState_SwitchToCutscene_mE48F6F5EFFC495552E19B18B1D5002442C52C150(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriggerCutscene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerCutscene__ctor_mD4D3A4A99B64F52EAB805B248E3A68FA8287BF67 (TriggerCutscene_tB7D2E5EB48941F472D854661B2F290D82B4E9C3A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TweenerAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_Awake_mB96F7A2F142C48CE9384AF3AE2DCC10EBA78A016 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	{
		// tamanhoInicial = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		__this->set_tamanhoInicial_10(L_1);
		// }
		return;
	}
}
// System.Void TweenerAnimation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_OnEnable_m1DF5E2F8A38FD347D41F7EA5A9741B880E4EB8CB (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	{
		// Animar();
		TweenerAnimation_Animar_m5CD5702066259165F9E78A75409AD5AB33692350(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TweenerAnimation::Animar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_Animar_m5CD5702066259165F9E78A75409AD5AB33692350 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.localScale = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// if (tipoAnim == LeanTweenType.animationCurve)
		int32_t L_2 = __this->get_tipoAnim_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0049;
		}
	}
	{
		// LeanTween.scale(gameObject, tamanhoInicial, durationOfAnim).setDelay(delayOfAnim).setEase(animCurve);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_tamanhoInicial_10();
		float L_5 = __this->get_durationOfAnim_8();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6;
		L_6 = LeanTween_scale_m684CBC818ED1F1ED8C50D1BD0F49495CACC0067C(L_3, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_delayOfAnim_7();
		NullCheck(L_6);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8;
		L_8 = LTDescr_setDelay_m55BD6D8AB740123B2EE42BA1721C7E6E29504110(L_6, L_7, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_animCurve_6();
		NullCheck(L_8);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10;
		L_10 = LTDescr_setEase_m85FF6788C6DD67CB57F667E80E456C7CE86C9E3F(L_8, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0049:
	{
		// LeanTween.scale(gameObject, tamanhoInicial, durationOfAnim).setDelay(delayOfAnim).setEase(tipoAnim);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_tamanhoInicial_10();
		float L_13 = __this->get_durationOfAnim_8();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14;
		L_14 = LeanTween_scale_m684CBC818ED1F1ED8C50D1BD0F49495CACC0067C(L_11, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_delayOfAnim_7();
		NullCheck(L_14);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16;
		L_16 = LTDescr_setDelay_m55BD6D8AB740123B2EE42BA1721C7E6E29504110(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_tipoAnim_5();
		NullCheck(L_16);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_18;
		L_18 = LTDescr_setEase_mDE953D5A1E2D1234C5CFD2F0CDB6F32B787ACD0C(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TweenerAnimation::DesativarObjeto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_DesativarObjeto_m532373504410097A97BAADDEC1AAA44E911D4EAA (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenerAnimation_DesativarDepoisDaAnim_m0E5632DB42AB50CEA2960C38CD29464F8DCB06A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTween.scale(gameObject, Vector3.zero, durationOfAnim).setEase(LeanTweenType.easeInOutQuad).setOnComplete(DesativarDepoisDaAnim);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_2 = __this->get_durationOfAnim_8();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3;
		L_3 = LeanTween_scale_m684CBC818ED1F1ED8C50D1BD0F49495CACC0067C(L_0, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_4;
		L_4 = LTDescr_setEase_mDE953D5A1E2D1234C5CFD2F0CDB6F32B787ACD0C(L_3, 4, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)TweenerAnimation_DesativarDepoisDaAnim_m0E5632DB42AB50CEA2960C38CD29464F8DCB06A2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6;
		L_6 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TweenerAnimation::DesativarDepoisDaAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_DesativarDepoisDaAnim_m0E5632DB42AB50CEA2960C38CD29464F8DCB06A2 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject aux = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// if (objetoParaDesativar == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_objetoParaDesativar_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// aux = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0020;
	}

IL_0019:
	{
		// aux = objetoParaDesativar;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_objetoParaDesativar_4();
		V_0 = L_3;
	}

IL_0020:
	{
		// aux.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// transform.localScale = tamanhoInicial;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_tamanhoInicial_10();
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_6, /*hidden argument*/NULL);
		// ProcessFPSSwitcher();
		TweenerAnimation_ProcessFPSSwitcher_mE72709BD498B490CA8E99F13684E447379182500(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TweenerAnimation::ProcessFPSSwitcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation_ProcessFPSSwitcher_mE72709BD498B490CA8E99F13684E447379182500 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (switchToFPSAfterClose)
		bool L_0 = __this->get_switchToFPSAfterClose_9();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// GameState.SwitchToPlayingFPS();
		IL2CPP_RUNTIME_CLASS_INIT(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		GameState_SwitchToPlayingFPS_m0F1B11DB0F12B2CC819642291131F7164613C3F4(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void TweenerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerAnimation__ctor_mAF4C598D455532156204638870CB0BFEEB1F0215 (TweenerAnimation_tF788F1121A18853DCEB287C3E0E7D4430A25EFE3 * __this, const RuntimeMethod* method)
{
	{
		// private LeanTweenType tipoAnim = LeanTweenType.easeOutBack;
		__this->set_tipoAnim_5(((int32_t)27));
		// private float delayOfAnim = 0.05f, durationOfAnim = 0.3f;
		__this->set_delayOfAnim_7((0.0500000007f));
		// private float delayOfAnim = 0.05f, durationOfAnim = 0.3f;
		__this->set_durationOfAnim_8((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI_Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Awake_m0BE1C24EC64AE1DAFF40B88DCD90798115DD0BB3 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * L_0 = ((UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields*)il2cpp_codegen_static_fields_for(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var))->get_Instance_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Instance = this;
		((UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_StaticFields*)il2cpp_codegen_static_fields_for(UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67_il2cpp_TypeInfo_var))->set_Instance_16(__this);
		goto IL_001b;
	}

IL_0015:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// CreateUI_ScreenDictionary();
		UI_Manager_CreateUI_ScreenDictionary_mB469414DA8B9224EAB22930DFDC1C6CF990DE547(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::CreateUI_ScreenDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_CreateUI_ScreenDictionary_mB469414DA8B9224EAB22930DFDC1C6CF990DE547 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEC6044AC88907B6C0C80456294480A86DC9EC9EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDFD119161E17F9082AAE7F16AB38378D3F0548E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76AB72FAE501D10ABA80A66D464C01784906F08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m636E55020B435BF40D080F6ACEDEC62916F45029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9933011D5649BA0740DA30514C1F39BFC2FCFBA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB620C00222C9F3E2689FFCEF6C40792BEA6AC057_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// ui_Itens = new Dictionary<string, UI_Item>();
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_0 = (Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C *)il2cpp_codegen_object_new(Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDFD119161E17F9082AAE7F16AB38378D3F0548E9(L_0, /*hidden argument*/Dictionary_2__ctor_mDFD119161E17F9082AAE7F16AB38378D3F0548E9_RuntimeMethod_var);
		__this->set_ui_Itens_17(L_0);
		// foreach (UI_Item screen in UI_screens)
		List_1_t1175FDE10FD2A68118B72E98DA5301388AA10C81 * L_1 = __this->get_UI_screens_4();
		NullCheck(L_1);
		Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED  L_2;
		L_2 = List_1_GetEnumerator_mB620C00222C9F3E2689FFCEF6C40792BEA6AC057(L_1, /*hidden argument*/List_1_GetEnumerator_mB620C00222C9F3E2689FFCEF6C40792BEA6AC057_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0019:
		{
			// foreach (UI_Item screen in UI_screens)
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_3;
			L_3 = Enumerator_get_Current_m9933011D5649BA0740DA30514C1F39BFC2FCFBA1_inline((Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9933011D5649BA0740DA30514C1F39BFC2FCFBA1_RuntimeMethod_var);
			V_1 = L_3;
			// ui_Itens.Add(screen.idItem, screen);
			Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_4 = __this->get_ui_Itens_17();
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_idItem_0();
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_7 = V_1;
			NullCheck(L_4);
			Dictionary_2_Add_mEC6044AC88907B6C0C80456294480A86DC9EC9EC(L_4, L_6, L_7, /*hidden argument*/Dictionary_2_Add_mEC6044AC88907B6C0C80456294480A86DC9EC9EC_RuntimeMethod_var);
		}

IL_0033:
		{
			// foreach (UI_Item screen in UI_screens)
			bool L_8;
			L_8 = Enumerator_MoveNext_m636E55020B435BF40D080F6ACEDEC62916F45029((Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m636E55020B435BF40D080F6ACEDEC62916F45029_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0019;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76AB72FAE501D10ABA80A66D464C01784906F08C((Enumerator_t5CFEEAAF1DCA9BA4F95DB919E08AC525B88D68ED *)(&V_0), /*hidden argument*/Enumerator_Dispose_m76AB72FAE501D10ABA80A66D464C01784906F08C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::ActivateIndividualScreen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___idScreen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD1BF1BFD75B4D9A4C2B19FD7C7725F8092B806E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m60DB8894CEA78B020784686D5DF4BBBEEA1A4E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BA08310FFDFEABB012C50B036FEE7069706B51);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// if (!ui_Itens.ContainsKey(idScreen))
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_0 = __this->get_ui_Itens_17();
		String_t* L_1 = ___idScreen0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD1BF1BFD75B4D9A4C2B19FD7C7725F8092B806E3(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mD1BF1BFD75B4D9A4C2B19FD7C7725F8092B806E3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogWarning("NO UI_ITEM WITH ID: " + ui_Itens);
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_3 = __this->get_ui_Itens_17();
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = _stringLiteral22BA08310FFDFEABB012C50B036FEE7069706B51;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = _stringLiteral22BA08310FFDFEABB012C50B036FEE7069706B51;
			goto IL_0020;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B3_0);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0030:
	{
		// foreach (var item in ui_Itens)
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_7 = __this->get_ui_Itens_17();
		NullCheck(L_7);
		Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  L_8;
		L_8 = Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_003e:
		{
			// foreach (var item in ui_Itens)
			KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  L_9;
			L_9 = Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_inline((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_RuntimeMethod_var);
			V_1 = L_9;
			// if (item.Key == idScreen)
			String_t* L_10;
			L_10 = KeyValuePair_2_get_Key_m60DB8894CEA78B020784686D5DF4BBBEEA1A4E7E_inline((KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m60DB8894CEA78B020784686D5DF4BBBEEA1A4E7E_RuntimeMethod_var);
			String_t* L_11 = ___idScreen0;
			bool L_12;
			L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0063;
			}
		}

IL_0055:
		{
			// item.Value.ActivateItem();
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_13;
			L_13 = KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_inline((KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var);
			NullCheck(L_13);
			UI_Item_ActivateItem_m9224461270B41A9B544DD0C24747BEC2CAA00FEE(L_13, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}

IL_0063:
		{
			// item.Value.DeactivateItem();
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_14;
			L_14 = KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_inline((KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var);
			NullCheck(L_14);
			UI_Item_DeactivateItem_m55B2E2ACDB334BD6F3DBE776E64EA9CF07CE4D15(L_14, /*hidden argument*/NULL);
		}

IL_006f:
		{
			// foreach (var item in ui_Itens)
			bool L_15;
			L_15 = Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_003e;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::DeactivateAllScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_DeactivateAllScreen_m03C54081E0326FA8B59DFB9D056226737B29B915 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in ui_Itens)
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_0 = __this->get_ui_Itens_17();
		NullCheck(L_0);
		Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732  L_1;
		L_1 = Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m39154F793FCD11B4A3D5A02F150768C3C3D0EAF5_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000e:
		{
			// foreach (var item in ui_Itens)
			KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D  L_2;
			L_2 = Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_inline((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0E07141B74CD306972E12AA5B65114DB1F34268A_RuntimeMethod_var);
			V_1 = L_2;
			// item.Value.DeactivateItem();
			UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_3;
			L_3 = KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_inline((KeyValuePair_2_t0A4753510F3AE522747F39125B25AB0195C0776D *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m7C7E39596D0B2ADE8E4F3BACB6BC88DBAE00707E_RuntimeMethod_var);
			NullCheck(L_3);
			UI_Item_DeactivateItem_m55B2E2ACDB334BD6F3DBE776E64EA9CF07CE4D15(L_3, /*hidden argument*/NULL);
		}

IL_0022:
		{
			// foreach (var item in ui_Itens)
			bool L_4;
			L_4 = Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA35D6C92D938A5CADA2AB21585EC16D73847DD5C_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB((Enumerator_t7417A1824EBF28CCF849B927FB4C81631DFCC732 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m48A781BB313267CEC61036F56A276A02045238DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::Set_TipText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_TipText_m8E9A59D56C45A61EA7B0BB3ED302C94114E14621 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, const RuntimeMethod* method)
{
	{
		// txtTip.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtTip_8();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UI_Manager::Set_Note(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_Note_mA0BD27FF0FF5653C43D2A9E3EFFF80E5EC104E04 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivateIndividualScreen("note");
		UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C(__this, _stringLiteral776029F0AF2443F61702EC69FEB62D9A8FC1FE34, /*hidden argument*/NULL);
		// txtNote.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtNote_12();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UI_Manager::Set_Timer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_Timer_mA0AE3C29D6DDA57F79FCE53D509EA95F08FC92D3 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, const RuntimeMethod* method)
{
	{
		// txtTimer.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtTimer_13();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UI_Manager::Set_GameOverTextAndColor(System.String,UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_GameOverTextAndColor_m3E868D8565656D62414D3668F6E6495B1D6618A2 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, int32_t ___statusColor1, const RuntimeMethod* method)
{
	{
		// txtGameOverText.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtGameOverText_14();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// txtGameOverText.color = ColorToSet(statusColor);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_txtGameOverText_14();
		int32_t L_3 = ___statusColor1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void UI_Manager::Set_TimerWithColor(System.String,UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_TimerWithColor_m06EB7A9B0CC7CC9C894B329C1B53D0E366783F81 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, int32_t ___statusColor1, const RuntimeMethod* method)
{
	{
		// txtTimer.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtTimer_13();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// txtTimer.color = ColorToSet(statusColor);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_txtTimer_13();
		int32_t L_3 = ___statusColor1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void UI_Manager::Set_CurrentPasswordText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Set_CurrentPasswordText_m81F4D2AE95BDE28B66108CE5FD45F6F1CA0B7BC9 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___valueToSet0, const RuntimeMethod* method)
{
	{
		// txtCurrentPassword.text = valueToSet;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txtCurrentPassword_9();
		String_t* L_1 = ___valueToSet0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UI_Manager::ToggleTutorialScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ToggleTutorialScreen_m5759B184833EBD3C4A0C7852EDD06D33F9F1462A (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivateIndividualScreen("tutorial");
		UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C(__this, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::ToggleGamePlayScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ToggleGamePlayScreen_m13D8BBD44FB8EDEAEA0A1A98F33C4E91D9272B08 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE168DFE1E95EE937368AFACB31736CF64408F6F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivateIndividualScreen("gameplay");
		UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C(__this, _stringLiteralE168DFE1E95EE937368AFACB31736CF64408F6F3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::ToggleNumericTaskScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ToggleNumericTaskScreen_m3E8E5354CAEA2A28962726D4D5C4B4EAA50EE49D (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BECFB0047FAD7F64D6BE3743F6E1D36D4CDAF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivateIndividualScreen("numeric");
		UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C(__this, _stringLiteral88BECFB0047FAD7F64D6BE3743F6E1D36D4CDAF0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::ToggleCutscene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ToggleCutscene_m019AD86932FF0D0BA289A77B042628B4D2814750 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	{
		// DeactivateAllScreen();
		UI_Manager_DeactivateAllScreen_m03C54081E0326FA8B59DFB9D056226737B29B915(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::ToggleGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_ToggleGameOverScreen_m4131651FB16197DBEEB7985384CAE0C52A0BF384 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2164458A7347B245E9F4F606A444170B2D68EEFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActivateIndividualScreen("gameover");
		UI_Manager_ActivateIndividualScreen_m5047069CEDCD0D5B8667D8613E545A67CC03B31C(__this, _stringLiteral2164458A7347B245E9F4F606A444170B2D68EEFB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::TogglePauseScreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_TogglePauseScreen_m21A7012DEA3678884135D0D2B7BF85FDA36A5298 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m97663B0BFE38701160A6AE356C7F4D96DE8D200A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ui_Itens["pause"].ToggleItem(value);
		Dictionary_2_t5AD99ED011D9E8756CF537FBA7F37C386F96674C * L_0 = __this->get_ui_Itens_17();
		NullCheck(L_0);
		UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * L_1;
		L_1 = Dictionary_2_get_Item_m97663B0BFE38701160A6AE356C7F4D96DE8D200A(L_0, _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722, /*hidden argument*/Dictionary_2_get_Item_m97663B0BFE38701160A6AE356C7F4D96DE8D200A_RuntimeMethod_var);
		bool L_2 = ___value0;
		NullCheck(L_1);
		UI_Item_ToggleItem_m171B4A8223BD46F8CB266CE6C8662F07E63B5A61(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::SetPuzzleDesc(System.String,System.String,UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_SetPuzzleDesc_m87911D2684561D7DF977CE89CA3478C479684264 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, String_t* ___statusPuzzle0, String_t* ___descPuzzle1, int32_t ___statusColor2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46091384BBC973B3E902010807A1D1448CFD51AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cardPuzzle.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cardPuzzle_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
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
		// cardPuzzle.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_cardPuzzle_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// txtStatsPuzzle.text = "Status: " + statusPuzzle;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_txtStatsPuzzle_10();
		String_t* L_4 = ___statusPuzzle0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral46091384BBC973B3E902010807A1D1448CFD51AC, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// txtStatsPuzzle.color = ColorToSet(statusColor);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_txtStatsPuzzle_10();
		int32_t L_7 = ___statusColor2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D(__this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
		// txtDescPuzzle.text = descPuzzle;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_txtDescPuzzle_11();
		String_t* L_10 = ___descPuzzle1;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void UI_Manager::DeactivatePuzzleCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_DeactivatePuzzleCard_m8E575099E93D5FEFE7FF49BC076A4722E686EFA9 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	{
		// if(cardPuzzle.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cardPuzzle_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// cardPuzzle.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_cardPuzzle_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::SetColorOnNumericTask(UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_SetColorOnNumericTask_mA7CF3B38A6715A912155D0AB003A8A66061C6642 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, int32_t ___colorToSet0, const RuntimeMethod* method)
{
	{
		// bgNumericTask.color = ColorToSet(colorToSet);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_bgNumericTask_15();
		int32_t L_1 = ___colorToSet0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_2);
		// }
		return;
	}
}
// UnityEngine.Color UI_Manager::ColorToSet(UI_Colors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  UI_Manager_ColorToSet_m612050008157DDF08671C3140DF1518ABAE1A68D (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, int32_t ___color0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___color0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___color0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0009:
	{
		// return colorComplete;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_colorComplete_5();
		return L_2;
	}

IL_0010:
	{
		// return colorIncomplete;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_colorIncomplete_6();
		return L_3;
	}

IL_0017:
	{
		// return Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UI_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager__ctor_mA3AECA4B2E7F2506B7C05B72CD2CFE14C8DC2C68 (UI_Manager_t251E4DF3C57244690ED26ED433547C6FAA19EC67 * __this, const RuntimeMethod* method)
{
	{
		// private Color colorComplete = Color.green, colorIncomplete = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_colorComplete_5(L_0);
		// private Color colorComplete = Color.green, colorIncomplete = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_colorIncomplete_6(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameEventListenterWithDelay/<RunDelayedEvent>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunDelayedEventU3Ed__3__ctor_m599E7E9ED846F2111B77FF1BC37A5DD996D8E090 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameEventListenterWithDelay/<RunDelayedEvent>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunDelayedEventU3Ed__3_System_IDisposable_Dispose_mFFB30ECF16DCB75A2F2FC735755CDF616CFB8418 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameEventListenterWithDelay/<RunDelayedEvent>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunDelayedEventU3Ed__3_MoveNext_mAA14A6925F46300C4BBD068C930D01D165B9BA52 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delayForEvent);
		GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delayForEvent_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// delayedUnityEvent.Invoke();
		GameEventListenterWithDelay_t1F41ADDABA6AB6A607E26C15D484E149F7E5F275 * L_7 = V_1;
		NullCheck(L_7);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_8 = L_7->get_delayedUnityEvent_7();
		NullCheck(L_8);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameEventListenterWithDelay/<RunDelayedEvent>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunDelayedEventU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C31A87DD8660234F2C5D5587DB35290501C0725 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameEventListenterWithDelay/<RunDelayedEvent>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunDelayedEventU3Ed__3_System_Collections_IEnumerator_Reset_m79CF7F3DD4E051976E041027C7CA195C3542C6D9 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunDelayedEventU3Ed__3_System_Collections_IEnumerator_Reset_m79CF7F3DD4E051976E041027C7CA195C3542C6D9_RuntimeMethod_var)));
	}
}
// System.Object GameEventListenterWithDelay/<RunDelayedEvent>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunDelayedEventU3Ed__3_System_Collections_IEnumerator_get_Current_m1E5AE881C561FC49173E085F6E8741DEE3AEF096 (U3CRunDelayedEventU3Ed__3_t4A6866D9136C7A5EB0B57F2465E2C1C04084472B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void InitialLoader/<LoadScene>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7__ctor_mE929B46F2F1EA000F42E9C768A5ADC5E25DCA82A (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InitialLoader/<LoadScene>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7_System_IDisposable_Dispose_m63C481357E451863040A51D619FDDA8F9FF95B5D (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InitialLoader/<LoadScene>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneU3Ed__7_MoveNext_m84D03DCD9BCC71842EC27326E82FB805AF8E8457 (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation opperation = SceneManager.LoadSceneAsync(sceneToLoad);
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_sceneToLoad_6();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_6;
		L_6 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(L_5, /*hidden argument*/NULL);
		__this->set_U3CopperationU3E5__2_3(L_6);
		goto IL_00a3;
	}

IL_005c:
	{
		// float progress = ProgressClamped(opperation.progress);
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_7 = V_1;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_8 = __this->get_U3CopperationU3E5__2_3();
		NullCheck(L_8);
		float L_9;
		L_9 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = InitialLoader_ProgressClamped_m205D66F8DA0AF371AE20280DE7713319B135F031(L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// txtPorcent.text = Porcent(progress);
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_11 = V_1;
		NullCheck(L_11);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = L_11->get_txtPorcent_5();
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_13 = V_1;
		float L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = InitialLoader_Porcent_mE54A914CECCF2FE3D49F129F977768B853A13E23(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// slLoader.fillAmount = progress;
		InitialLoader_t604974EACD85464DA40AEEBD42FABF6FE03F55D6 * L_16 = V_1;
		NullCheck(L_16);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = L_16->get_slLoader_4();
		float L_18 = V_2;
		NullCheck(L_17);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_17, L_18, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a3:
	{
		// while (!opperation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_19 = __this->get_U3CopperationU3E5__2_3();
		NullCheck(L_19);
		bool L_20;
		L_20 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_005c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object InitialLoader/<LoadScene>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF51F4B15ECFA8A22E44919D54FA2153A0A46F38D (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InitialLoader/<LoadScene>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_m489C6BEA04FEEE11D765F9D6453DC8F53E2AB4E9 (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_m489C6BEA04FEEE11D765F9D6453DC8F53E2AB4E9_RuntimeMethod_var)));
	}
}
// System.Object InitialLoader/<LoadScene>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_get_Current_m11FD4E31C433A6E9A3DBB81F1C6CCAB99D878AAA (U3CLoadSceneU3Ed__7_t2D5382D2D99E30687B9D3E99504BDA6D7B51A179 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LTDescr/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mACE0E27AEF258161C83D9EA95E78DBD6B559A5EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * L_0 = (U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 *)il2cpp_codegen_object_new(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB934C02FF6DB889EA42A5581DCA0B5CEDBCC5903(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB934C02FF6DB889EA42A5581DCA0B5CEDBCC5903 (U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LTDescr/<>c::<setCallback>b__113_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetCallbackU3Eb__113_0_m7FC51BAA4B25A66AAAE19427E427E31C01E7EF0D (U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * __this, const RuntimeMethod* method)
{
	{
		// this.initInternal = ()=>{};
		return;
	}
}
// System.Void LTDescr/<>c::<setValue3>b__114_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetValue3U3Eb__114_0_mF93F5C6F0B095D8B1EE239BE2A475A16E713A012 (U3CU3Ec_t2A61C4AA2F0D1C194C052F501E3F0ED7D8F67D58 * __this, const RuntimeMethod* method)
{
	{
		// this.initInternal = ()=>{};
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 (ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void LTDescr/ActionMethodDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate__ctor_m86D0105115F69AEC95F9DB9542A3CB52854649E6 (ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LTDescr/ActionMethodDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_Invoke_m4C86E95A515A25BE5ADB85D4889AAEDAA157173A (ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult LTDescr/ActionMethodDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionMethodDelegate_BeginInvoke_m1B3C88E85A1CF2B1CE645AC9594565046D26BE0B (ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void LTDescr/ActionMethodDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_EndInvoke_m7B0A147CA95FB6A16463DFA4C30DE37053C5D72F (ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DelegatePInvokeWrapper_EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF (EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * __this, const RuntimeMethod* method)
{
	typedef Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void LTDescr/EaseTypeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseTypeDelegate__ctor_mCD18183DC7DD02010D779AB3969F9D2B6BDAEA28 (EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  EaseTypeDelegate_Invoke_mC562BC4CD7B5786B26A9D7F780BC43F1B2F601AB (EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LTDescr/EaseTypeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EaseTypeDelegate_BeginInvoke_m8B1407D35ABAD4BA8A49AA4CE44736F90B5D834F (EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  EaseTypeDelegate_EndInvoke_m275A58EADF116EBDD21996509E57703CCC10C75A (EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LeanTester/<timeoutCheck>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2__ctor_mACFA1EA79EDBEA235C7474D1BA3E71804A23FEB8 (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LeanTester/<timeoutCheck>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2_System_IDisposable_Dispose_m0AF241B0BA496E508C41A00A92ACCB507F764F3B (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LeanTester/<timeoutCheck>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtimeoutCheckU3Ed__2_MoveNext_mF2666B91C53937A9B6CFBCDB7E111B6E74685643 (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float pauseEndTime = Time.realtimeSinceStartup + timeout;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		LeanTester_t537C3FE41ED244252241E5B02F6B1BA6DA437297 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_timeout_4();
		__this->set_U3CpauseEndTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_4, (float)L_6)));
		goto IL_004e;
	}

IL_0032:
	{
		// yield return 0;
		int32_t L_7 = 0;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004e:
	{
		// while (Time.realtimeSinceStartup < pauseEndTime)
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_10 = __this->get_U3CpauseEndTimeU3E5__2_3();
		if ((((float)L_9) < ((float)L_10)))
		{
			goto IL_0032;
		}
	}
	{
		// if(LeanTest.testsFinished==false){
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		bool L_11 = ((LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_StaticFields*)il2cpp_codegen_static_fields_for(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var))->get_testsFinished_5();
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		// Debug.Log(LeanTest.formatB("Tests timed out!"));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = LeanTest_formatB_mDF309FD724B541A97D931A28FE32B9F3245DA966(_stringLiteralA894FF40AE84794C68A71D0E10D64E73E4C0E16B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// LeanTest.overview();
		LeanTest_overview_mFBDD0E748CC3DF470B668293185D2637F2ACF17F(/*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return (bool)0;
	}
}
// System.Object LeanTester/<timeoutCheck>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeoutCheckU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1EF5FF8E038CD04BB438F282E437032A52DF973 (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LeanTester/<timeoutCheck>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m377EF3F9C3E2B3A09D749A0A347B92595F0D756D (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_Reset_m377EF3F9C3E2B3A09D749A0A347B92595F0D756D_RuntimeMethod_var)));
	}
}
// System.Object LeanTester/<timeoutCheck>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeoutCheckU3Ed__2_System_Collections_IEnumerator_get_Current_m275B7C4BFE741FFBA1D7CE3E422460E5BD15EFF6 (U3CtimeoutCheckU3Ed__2_t0477BBE86F68913A187266A302E855A27D6286B6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LeanTween/<>c__DisplayClass193_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0__ctor_m42DC73265951A655C0448FF60C880316D9DE1A43 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__0_m191266906DD2277CDC3B46FF109CF35D23BBDAC7 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.damp(d.optional.axis, d.toTrans.localPosition, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = LeanSmooth_damp_m7CCE1AB623BF22468A59B97CC2D161682476168E(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_13, /*hidden argument*/NULL);
		// d.trans.localPosition = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14 = __this->get_d_0();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16 = __this->get_d_0();
		NullCheck(L_16);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_17;
		L_17 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_17, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_19 = __this->get_d_0();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = L_19->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_15, L_21, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__1_m704758A390EF812C25A3A65988859C02AFBED1C4 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.damp(d.optional.axis, d.toTrans.position, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = LeanSmooth_damp_m7CCE1AB623BF22468A59B97CC2D161682476168E(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_13, /*hidden argument*/NULL);
		// d.trans.position = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14 = __this->get_d_0();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16 = __this->get_d_0();
		NullCheck(L_16);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_17;
		L_17 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_17, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_19 = __this->get_d_0();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = L_19->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_21, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__2_mAA06748BE5AB364E8F927A9EE39224B64FD24398 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosX(LeanSmooth.damp(d.trans.localPosition.x, d.toTrans.localPosition.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosX_m2325658730387BE391CB8FE674FD3FD2D8D3ECDE(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__3_mD56CFC8DF59426863F6189980E747D8413AA5CA0 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosY(LeanSmooth.damp(d.trans.localPosition.y, d.toTrans.localPosition.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosY_mF14BA20EFA312158AB0FD456EB8762457DB03AE5(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__4_m6D340E392A6FE3E0389103E0DDB77C9ED361D9ED (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosZ(LeanSmooth.damp(d.trans.localPosition.z, d.toTrans.localPosition.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosZ_m685180D2C04DF7E3417E9EECA9BEBE60F0850790(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__5_m0220EC49C37178D39C26609650CE24AAB28621FE (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosX(LeanSmooth.damp(d.trans.position.x, d.toTrans.position.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosX_m82201BB5C9781FA41FB69DDA05471D693E59DF2E(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__6_m2DC42525AE6AA25C9692CA049C80F6958918DB42 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosY(LeanSmooth.damp(d.trans.position.y, d.toTrans.position.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosY_mD9DAE6B462055110382822D16B5551854CB68DD7(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__7_mE7F490B90125F2A8B3C5B91FF517537313A0FCE0 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosZ(LeanSmooth.damp(d.trans.position.z, d.toTrans.position.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16;
		L_16 = LeanSmooth_damp_mAFCFAA57FEE313048C9AF8C5F16FC2F5E723D0FF(L_5, L_9, (float*)L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosZ_m1E17DB053DD69876E163757D053A85B172CAC027(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__8_m007DC11D196C3911171092A96EFF8588C9CBF947 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.localScale = LeanSmooth.damp(d.trans.localScale, d.toTrans.localScale, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = LeanSmooth_damp_m7CCE1AB623BF22468A59B97CC2D161682476168E(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_13, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass193_0::<followDamp>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass193_0_U3CfollowDampU3Eb__9_m26FE2854DC255FCB17A99976AF3B1C9674AF3DA5 (U3CU3Ec__DisplayClass193_0_tAD697F408BB575C622FD5E018C1F75AB28CBAF48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var col = LeanSmooth.damp(d.trans.LeanColor(), d.toTrans.LeanColor(), ref d.optional.color, smoothTime, maxSpeed, Time.deltaTime);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_1, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3 = __this->get_d_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_4, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_7;
		L_7 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_8 = L_7->get_address_of_color_9();
		float L_9 = __this->get_smoothTime_1();
		float L_10 = __this->get_maxSpeed_2();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = LeanSmooth_damp_m9AA68F6F1D20FF61F338BA122A374CB0F10D6EFE(L_2, L_5, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// d.trans.GetComponent<Renderer>().material.color = col;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_13 = __this->get_d_0();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13->get_trans_26();
		NullCheck(L_14);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_15;
		L_15 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_14, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16;
		L_16 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_15, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = V_0;
		NullCheck(L_16);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_16, L_17, /*hidden argument*/NULL);
		// }; break;
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
// System.Void LeanTween/<>c__DisplayClass194_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0__ctor_m7BE723A2115ACC48F87D807B5AD61D097D7B80CA (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__0_m96E779A4A9A701F3B635CFB3EBCC96458BD3FDC3 (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.spring(d.optional.axis, d.toTrans.localPosition, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_friction_3();
		float L_14 = __this->get_accelRate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = LeanSmooth_spring_mAC93690E733A39072CB37D5BFF1239414F98E1EF(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_15, /*hidden argument*/NULL);
		// d.trans.localPosition = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16 = __this->get_d_0();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = L_16->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_18 = __this->get_d_0();
		NullCheck(L_18);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_19;
		L_19 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_19, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_21 = __this->get_d_0();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = L_21->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_17, L_23, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__1_mACD73E450FC2E3CE551EDDAC93A2F52A45C5054C (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.diff = LeanSmooth.spring(d.diff, d.toTrans.position, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_1 = __this->get_d_0();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_diff_29();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3 = __this->get_d_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = L_6->get_address_of_fromInternal_27();
		float L_8 = __this->get_smoothTime_1();
		float L_9 = __this->get_maxSpeed_2();
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_11 = __this->get_friction_3();
		float L_12 = __this->get_accelRate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = LeanSmooth_spring_mAC93690E733A39072CB37D5BFF1239414F98E1EF(L_2, L_5, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_diff_29(L_13);
		// d.trans.position = d.diff;// + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14 = __this->get_d_0();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16 = __this->get_d_0();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = L_16->get_diff_29();
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_17, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__2_m56BDFF78D7668526967A93EA96C4F427DC600683 (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosX(LeanSmooth.spring(d.trans.localPosition.x, d.toTrans.localPosition.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosX_m2325658730387BE391CB8FE674FD3FD2D8D3ECDE(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__3_m8F19785EA57FC703DDADF403EE7321F94343C995 (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosY(LeanSmooth.spring(d.trans.localPosition.y, d.toTrans.localPosition.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosY_mF14BA20EFA312158AB0FD456EB8762457DB03AE5(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__4_mD7590F09F10CE901B14B9E7C2D59281C17BF6D45 (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosZ(LeanSmooth.spring(d.trans.localPosition.z, d.toTrans.localPosition.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosZ_m685180D2C04DF7E3417E9EECA9BEBE60F0850790(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__5_m0173F460A2260824B38994CCB06B17F86A43BC00 (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosX(LeanSmooth.spring(d.trans.position.x, d.toTrans.position.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosX_m82201BB5C9781FA41FB69DDA05471D693E59DF2E(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__6_mDF693219BF56597185AC7A86A83B41CCAE50995D (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosY(LeanSmooth.spring(d.trans.position.y, d.toTrans.position.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosY_mD9DAE6B462055110382822D16B5551854CB68DD7(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__7_m02E8CAD9D7320D317F1291024AEC66A7BA1DF8BC (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosZ(LeanSmooth.spring(d.trans.position.z, d.toTrans.position.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18;
		L_18 = LeanSmooth_spring_m314389AD151BF197F11CB50DFEC3F05396E189AD(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosZ_m1E17DB053DD69876E163757D053A85B172CAC027(L_1, L_18, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__8_m2815FB0A57623C0A7694BEE29292D36748AF2FEF (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.localScale = LeanSmooth.spring(d.trans.localScale, d.toTrans.localScale, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_friction_3();
		float L_14 = __this->get_accelRate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = LeanSmooth_spring_mAC93690E733A39072CB37D5BFF1239414F98E1EF(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_15, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass194_0::<followSpring>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass194_0_U3CfollowSpringU3Eb__9_m2249E4B791535178AF9B4005460FC55DC089E8CA (U3CU3Ec__DisplayClass194_0_t6FE45F50B4F93FED778E7D54F0EF582EA8252814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var col = LeanSmooth.spring(d.trans.LeanColor(), d.toTrans.LeanColor(), ref d.optional.color, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_1, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3 = __this->get_d_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_4, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_7;
		L_7 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_8 = L_7->get_address_of_color_9();
		float L_9 = __this->get_smoothTime_1();
		float L_10 = __this->get_maxSpeed_2();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_12 = __this->get_friction_3();
		float L_13 = __this->get_accelRate_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = LeanSmooth_spring_mC13A607AA221D50EB1AB72CE0C5D314F2748E946(L_2, L_5, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// d.trans.GetComponent<Renderer>().material.color = col;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_15 = __this->get_d_0();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15->get_trans_26();
		NullCheck(L_16);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_17;
		L_17 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_16, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_17);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_17, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = V_0;
		NullCheck(L_18);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_18, L_19, /*hidden argument*/NULL);
		// }; break;
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
// System.Void LeanTween/<>c__DisplayClass195_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0__ctor_mBBB552F5EA7C92143790A2E28ECAAFA48EC7B4D7 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__0_m85BF6FBF1E6DDC848ED2747320A820E6A16F69A9 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.bounceOut(d.optional.axis, d.toTrans.localPosition, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_friction_3();
		float L_14 = __this->get_accelRate_4();
		float L_15 = __this->get_hitDamping_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = LeanSmooth_bounceOut_m39C1F55CD36843F594D1C58D067696AD294C4812(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_16, /*hidden argument*/NULL);
		// d.trans.localPosition = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_17 = __this->get_d_0();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_19 = __this->get_d_0();
		NullCheck(L_19);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_20;
		L_20 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_20, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_22 = __this->get_d_0();
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_18, L_24, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__1_m8C32BD1F9A6489144955B3C032D8EFB4884F2ED6 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.bounceOut(d.optional.axis, d.toTrans.position, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_friction_3();
		float L_14 = __this->get_accelRate_4();
		float L_15 = __this->get_hitDamping_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = LeanSmooth_bounceOut_m39C1F55CD36843F594D1C58D067696AD294C4812(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_16, /*hidden argument*/NULL);
		// d.trans.position = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_17 = __this->get_d_0();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_19 = __this->get_d_0();
		NullCheck(L_19);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_20;
		L_20 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_20, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_22 = __this->get_d_0();
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_24, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__2_m3ADBC5765839ADC33E591B0E3F86D3BCEDD966D3 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosX(LeanSmooth.bounceOut(d.trans.localPosition.x, d.toTrans.localPosition.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosX_m2325658730387BE391CB8FE674FD3FD2D8D3ECDE(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__3_m7F6DABA8926F943AB02A6C527D916B95331FD3C9 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosY(LeanSmooth.bounceOut(d.trans.localPosition.y, d.toTrans.localPosition.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosY_mF14BA20EFA312158AB0FD456EB8762457DB03AE5(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__4_mB8C14DF64A83794EB497687CD62EB8246F2F3039 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosZ(LeanSmooth.bounceOut(d.trans.localPosition.z, d.toTrans.localPosition.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosZ_m685180D2C04DF7E3417E9EECA9BEBE60F0850790(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__5_mA48C1D48F29E8F11F15E727577E658F0CAC0DD46 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosX(LeanSmooth.bounceOut(d.trans.position.x, d.toTrans.position.x, ref d.fromInternal.x, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_x_2();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosX_m82201BB5C9781FA41FB69DDA05471D693E59DF2E(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__6_m6915716A4F822A502028FEABC63C125E057402CD (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosY(LeanSmooth.bounceOut(d.trans.position.y, d.toTrans.position.y, ref d.fromInternal.y, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_y_3();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosY_mD9DAE6B462055110382822D16B5551854CB68DD7(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__7_mDDD6AF7E2634F4081FD3849FF6C18B87A3235250 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosZ(LeanSmooth.bounceOut(d.trans.position.z, d.toTrans.position.z, ref d.fromInternal.z, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = L_10->get_address_of_fromInternal_27();
		float* L_12 = L_11->get_address_of_z_4();
		float L_13 = __this->get_smoothTime_1();
		float L_14 = __this->get_maxSpeed_2();
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_16 = __this->get_friction_3();
		float L_17 = __this->get_accelRate_4();
		float L_18 = __this->get_hitDamping_5();
		float L_19;
		L_19 = LeanSmooth_bounceOut_mD1B8F20CB910CD8609D9F5988472CCC83B98DE6A(L_5, L_9, (float*)L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosZ_m1E17DB053DD69876E163757D053A85B172CAC027(L_1, L_19, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__8_m90947880CD99C1E7247F57A1AC77692D6FFBFE69 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.localScale = LeanSmooth.bounceOut(d.trans.localScale, d.toTrans.localScale, ref d.fromInternal, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_fromInternal_27();
		float L_10 = __this->get_smoothTime_1();
		float L_11 = __this->get_maxSpeed_2();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13 = __this->get_friction_3();
		float L_14 = __this->get_accelRate_4();
		float L_15 = __this->get_hitDamping_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = LeanSmooth_bounceOut_m39C1F55CD36843F594D1C58D067696AD294C4812(L_4, L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_16, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass195_0::<followBounceOut>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass195_0_U3CfollowBounceOutU3Eb__9_mB5FEE58DA881C5915A000A3B5988C3D58B578E29 (U3CU3Ec__DisplayClass195_0_tF0E800EBCA190980873A4098BBEEFCFBD61950B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var col = LeanSmooth.bounceOut(d.trans.LeanColor(), d.toTrans.LeanColor(), ref d.optional.color, smoothTime, maxSpeed, Time.deltaTime, friction, accelRate, hitDamping);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_1, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3 = __this->get_d_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_4, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_7;
		L_7 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_8 = L_7->get_address_of_color_9();
		float L_9 = __this->get_smoothTime_1();
		float L_10 = __this->get_maxSpeed_2();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_12 = __this->get_friction_3();
		float L_13 = __this->get_accelRate_4();
		float L_14 = __this->get_hitDamping_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = LeanSmooth_bounceOut_mF3E43703A80AB9D705575A9D803AD2E8AF3722F1(L_2, L_5, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_8, L_9, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// d.trans.GetComponent<Renderer>().material.color = col;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_16 = __this->get_d_0();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = L_16->get_trans_26();
		NullCheck(L_17);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_17, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_18, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = V_0;
		NullCheck(L_19);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_19, L_20, /*hidden argument*/NULL);
		// }; break;
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
// System.Void LeanTween/<>c__DisplayClass196_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0__ctor_m53A3A91F675B0FEBE70D8A183F4AEE80BB562132 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__0_mFA5A42D63EE280D45A87226343CAED5E72B4259F (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.optional.axis = LeanSmooth.linear(d.optional.axis, d.toTrans.localPosition, moveSpeed);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_1;
		L_1 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_0, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_3;
		L_3 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_moveSpeed_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = LeanSmooth_linear_mE9F99D1FD99A7D58A0F81A3A39EA4D994D55BB6D(L_4, L_7, L_8, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline(L_1, L_9, /*hidden argument*/NULL);
		// d.trans.localPosition = d.optional.axis + d.toInternal;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10 = __this->get_d_0();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_12 = __this->get_d_0();
		NullCheck(L_12);
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_13;
		L_13 = LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline(L_13, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_15 = __this->get_d_0();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_toInternal_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_17, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__1_mA72FB34A781A70DE472941BE6213DAD4056A4156 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.position = LeanSmooth.linear(d.trans.position, d.toTrans.position,  moveSpeed);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_moveSpeed_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = LeanSmooth_linear_mE9F99D1FD99A7D58A0F81A3A39EA4D994D55BB6D(L_4, L_7, L_8, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_9, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__2_m3FFAD56268BA1B8BA721A870C39B2EB3FED3AFFF (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosX(LeanSmooth.linear(d.trans.localPosition.x, d.toTrans.localPosition.x, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosX_m2325658730387BE391CB8FE674FD3FD2D8D3ECDE(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__3_m95959A86F6834CCBCE7080772F0C215459296987 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosY(LeanSmooth.linear(d.trans.localPosition.y, d.toTrans.localPosition.y, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosY_mF14BA20EFA312158AB0FD456EB8762457DB03AE5(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__4_m17D9CC99AA674FE28A2596BAB8D7AF7EA0AC74F5 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetLocalPosZ(LeanSmooth.linear(d.trans.localPosition.z, d.toTrans.localPosition.z, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetLocalPosZ_m685180D2C04DF7E3417E9EECA9BEBE60F0850790(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__5_m8CAABA8DEEB326B0DFBA45714E4DE40FA69D2FB9 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosX(LeanSmooth.linear(d.trans.position.x, d.toTrans.position.x, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosX_m82201BB5C9781FA41FB69DDA05471D693E59DF2E(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__6_mDF3FFFFEFDD9AFFCA4883B15B5BA1C2C568B5238 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosY(LeanSmooth.linear(d.trans.position.y, d.toTrans.position.y, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosY_mD9DAE6B462055110382822D16B5551854CB68DD7(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__7_mF835E156C518889CC37B7B18196CB66817995693 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.LeanSetPosZ(LeanSmooth.linear(d.trans.position.z, d.toTrans.position.z, moveSpeed));
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_6 = __this->get_d_0();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		float L_10 = __this->get_moveSpeed_1();
		float L_11;
		L_11 = LeanSmooth_linear_mCAA760AD54BCCFD8A3C67631437C528F84806A11(L_5, L_9, L_10, (-1.0f), /*hidden argument*/NULL);
		LeanTweenExt_LeanSetPosZ_m1E17DB053DD69876E163757D053A85B172CAC027(L_1, L_11, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__8_m20A928A64BB76244A147659349B4952FB2AEF119 (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	{
		// d.trans.localScale = LeanSmooth.linear(d.trans.localScale, d.toTrans.localScale, moveSpeed);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_2 = __this->get_d_0();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2->get_trans_26();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_5 = __this->get_d_0();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_moveSpeed_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = LeanSmooth_linear_mE9F99D1FD99A7D58A0F81A3A39EA4D994D55BB6D(L_4, L_7, L_8, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_9, /*hidden argument*/NULL);
		// }; break;
		return;
	}
}
// System.Void LeanTween/<>c__DisplayClass196_0::<followLinear>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass196_0_U3CfollowLinearU3Eb__9_m485F0716E3A701BA24C7BE51462D4081218137BC (U3CU3Ec__DisplayClass196_0_t4FA263E9CE532093F4513F5750D54960760E3F78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var col = LeanSmooth.linear(d.trans.LeanColor(), d.toTrans.LeanColor(), moveSpeed);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_0 = __this->get_d_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_trans_26();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_1, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3 = __this->get_d_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = LTDescr_get_toTrans_m03763D518E68ED5106B72B7DEBBD29765285CB78(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = LeanTweenExt_LeanColor_m2027EB778950A5E71F3DCF398F8A6A77AE32EF35(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveSpeed_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = LeanSmooth_linear_mD4AAD42ECD1AFD102F576A52116C57CDEEFB73E7(L_2, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// d.trans.GetComponent<Renderer>().material.color = col;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_8 = __this->get_d_0();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8->get_trans_26();
		NullCheck(L_9);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10;
		L_10 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_9, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_0;
		NullCheck(L_11);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_11, L_12, /*hidden argument*/NULL);
		// }; break;
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
// System.Void LoadSceneWithLoadingBar/<LoadScene>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7__ctor_mF2D7A5B0F1E565C14C3727BBCDB729B2D86AA31E (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadSceneWithLoadingBar/<LoadScene>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7_System_IDisposable_Dispose_mFE40FEEC6445557F0064F1829991B1D5158C91D3 (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadSceneWithLoadingBar/<LoadScene>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneU3Ed__7_MoveNext_mC0DFCE8202921D87CD62C3F85E84797E2E073897 (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation opperation = SceneManager.LoadSceneAsync(sceneToLoad);
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_sceneToLoad_7();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_6;
		L_6 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(L_5, /*hidden argument*/NULL);
		__this->set_U3CopperationU3E5__2_3(L_6);
		goto IL_00a3;
	}

IL_005c:
	{
		// float progress = ProgressClamped(opperation.progress);
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_7 = V_1;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_8 = __this->get_U3CopperationU3E5__2_3();
		NullCheck(L_8);
		float L_9;
		L_9 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = LoadSceneWithLoadingBar_ProgressClamped_mF0FBDD13BC8A1AEDA01ABD260939167FA13B0275(L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// txtPorcent.text = Porcent(progress);
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_11 = V_1;
		NullCheck(L_11);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = L_11->get_txtPorcent_6();
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_13 = V_1;
		float L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = LoadSceneWithLoadingBar_Porcent_mDDA7FCF96BAC8F4C8C5E084834A880670291E211(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// slLoader.fillAmount = progress;
		LoadSceneWithLoadingBar_t6AC6DE41E5885E7418BF62D70A1583D8BC94C806 * L_16 = V_1;
		NullCheck(L_16);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = L_16->get_slLoader_5();
		float L_18 = V_2;
		NullCheck(L_17);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_17, L_18, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a3:
	{
		// while (!opperation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_19 = __this->get_U3CopperationU3E5__2_3();
		NullCheck(L_19);
		bool L_20;
		L_20 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_005c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadSceneWithLoadingBar/<LoadScene>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m101871BE140C878642045E000C2850E672F22889 (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadSceneWithLoadingBar/<LoadScene>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_mBE9655BE959227EDB68035FF46042B8C90FFD06D (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_Reset_mBE9655BE959227EDB68035FF46042B8C90FFD06D_RuntimeMethod_var)));
	}
}
// System.Object LoadSceneWithLoadingBar/<LoadScene>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__7_System_Collections_IEnumerator_get_Current_m6EA25A052CF2439394536B45F801CFD46473143E (U3CLoadSceneU3Ed__7_tA33AB34397154250CADE4203373FF6BBC6824331 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// UnityEngine.AudioClip SoundManager/SoundFX::RandomSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundFX_RandomSound_mB3CD7C45714B4CDF4D0E143F4E060BE171F7C5F8 (SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * __this, const RuntimeMethod* method)
{
	{
		// return clips[Random.Range(0, clips.Length)];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_clips_1();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_clips_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void SoundManager/SoundFX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundFX__ctor_m95483828EE7A2437E744803DC0B51A3F905B5C35 (SoundFX_t6EA28775AF1B40FC17AD2AF80D44D7126989EF7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string idSom = "click";
		__this->set_idSom_0(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UI_Manager/UI_Item::ActivateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_ActivateItem_m9224461270B41A9B544DD0C24747BEC2CAA00FEE (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, const RuntimeMethod* method)
{
	{
		// if (!item.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_item_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// item.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_item_1();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UI_Manager/UI_Item::DeactivateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_DeactivateItem_m55B2E2ACDB334BD6F3DBE776E64EA9CF07CE4D15 (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, const RuntimeMethod* method)
{
	{
		// if (item.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_item_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// item.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_item_1();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UI_Manager/UI_Item::ToggleItem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item_ToggleItem_m171B4A8223BD46F8CB266CE6C8662F07E63B5A61 (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (item.activeSelf != value)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_item_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		bool L_2 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		// item.SetActive(value);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_item_1();
		bool L_4 = ___value0;
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UI_Manager/UI_Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Item__ctor_mCE081DF24E048F66BAFA791CB40C59811612370B (UI_Item_tDC969F5CB58CAF029277256FDC558E2A1C6038D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE168DFE1E95EE937368AFACB31736CF64408F6F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string idItem = "gameplay";
		__this->set_idItem_0(_stringLiteralE168DFE1E95EE937368AFACB31736CF64408F6F3);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ToyGatherPuzzle_get_PuzzleDesc_mEB9DAE83313B0F2F26B0EAC1CDDF1FEBC5622B84_inline (ToyGatherPuzzle_t03F4A4365D6F05977D5EC76F6E3B75FF2FCFE669 * __this, const RuntimeMethod* method)
{
	{
		// public string PuzzleDesc => descPuzzle;
		String_t* L_0 = __this->get_descPuzzle_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * AvailableGameEvents_get_PuzzleComplete_m5954C43AA8B172B4C682E4AB3461163EE8C5C78F_inline (AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * __this, const RuntimeMethod* method)
{
	{
		// public GameEvent PuzzleComplete => puzzleComplete;
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_0 = __this->get_puzzleComplete_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * AvailableGameEvents_get_TaskComplete_m406132DB8616925ECA27D5075EB272A5E09C3C52_inline (AvailableGameEvents_tF07ECD95813AF10B3F2920A9A63CA80F32AC6E1F * __this, const RuntimeMethod* method)
{
	{
		// public GameEvent TaskComplete => taskCompleteEvent;
		GameEvent_tD6B1DAFE5CFF83893F52042854E27ADA186FD038 * L_0 = __this->get_taskCompleteEvent_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToyGatherTask_set_isTaskComplete_mC5A9B7052CE0086A007F435391CFD61A8D1B8BEC_inline (ToyGatherTask_t174D54876C30E8D21F88528E426FB37AC7829636 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isTaskComplete { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisTaskCompleteU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * LTDescr_get_optional_m0475EBA98D33B8F970E159516CC6BBEC331BE807_inline (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method)
{
	{
		// return _optional;
		LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * L_0 = __this->get__optional_44();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LTDescrOptional_get_axis_m546D8ADD4003D9B69F7EC4A243008064AC42DB20_inline (LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CaxisU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_axis_m17A070B698AFE6D066C10EEF1A86DDEABC0A13B0_inline (LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CaxisU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
