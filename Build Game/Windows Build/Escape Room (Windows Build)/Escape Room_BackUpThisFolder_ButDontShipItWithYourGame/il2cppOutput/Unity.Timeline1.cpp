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

// System.Action`1<UnityEngine.Timeline.SignalAsset>
struct Action_1_t3F04DDD8FAB7DA9AC819CCC24CE0B5D18FDB3A2F;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41;
// System.Comparison`1<UnityEngine.Timeline.TimelineClip>
struct Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C;
// System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry>
struct Comparison_1_tA93ACF05FD25391EF1D321EE97AB0B5AFC2D2870;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D;
// System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour>
struct IEnumerator_1_tDDEEF9B075BBCA8C570B476009C2B00FB98AFA4A;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerator_1_t83FC1ABBDBD022F14C164E6C51B4EDD08B38CA03;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerator_1_t0288A12A2D205DFFE771A659BD13AA8F95ED003D;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct KeyCollection_tD702A5B9EDDFA0F83F40A0672FB4143854BCABFF;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>
struct List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>
struct List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct ValueCollection_tB7E8070108A33D3CB65B0CCBD80AA182F33FAF92;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>[]
struct EntryU5BU5D_t47762A28C35244307964DF9AADDF161A1B58CA41;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Timeline.IMarker[]
struct IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
// UnityEngine.Timeline.SignalAsset[]
struct SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Events.UnityEvent[]
struct UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Timeline.AnimationPlayableAsset
struct AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E;
// UnityEngine.Timeline.AnimationTrack
struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Timeline.AudioClipProperties
struct AudioClipProperties_t87B9771BCD8C7917353C33C43C7A173FAFCF7833;
// UnityEngine.Timeline.AudioMixerProperties
struct AudioMixerProperties_t3EBDE54547AC600F7EFFE0C24AFA10E0779068EA;
// UnityEngine.Timeline.AudioPlayableAsset
struct AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D;
// UnityEngine.Timeline.AudioTrack
struct AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5;
// UnityEngine.AvatarMask
struct AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Timeline.GroupTrack
struct GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Playables.INotification
struct INotification_tFB7646E6B1EA37ECE9D39374A3BD74B278E19C56;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Timeline.MarkerTrack
struct MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Timeline.SignalAsset
struct SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82;
// System.String
struct String_t;
// UnityEngine.Timeline.TimelineAsset
struct TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628;
// UnityEngine.Timeline.TrackBindingTypeAttribute
struct TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780;
// UnityEngine.Timeline.TrackClipTypeAttribute
struct TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59;
// UnityEngine.Timeline.TrackColorAttribute
struct TrackColorAttribute_t6EAC4E29A7C89815E16DD0735D129B7C3DCF6BF1;
// UnityEngine.Timeline.TrackMediaType
struct TrackMediaType_tEEA6E261CA121D473A1A9E06BCC2F7846CD48A98;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45
struct U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60;
// UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
struct U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1;
// UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
struct U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840;
// UnityEngine.Timeline.AudioTrack/<get_outputs>d__4
struct U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9;
// UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39
struct U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168;
// UnityEngine.Timeline.Extrapolation/<>c
struct U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// UnityEngine.Timeline.SignalReceiver/EventKeyValue
struct EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A;
// UnityEngine.Timeline.TimeNotificationBehaviour/<>c
struct U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82;
// UnityEngine.Timeline.TimeUtility/<>c
struct U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A;
// UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27
struct U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD;
// UnityEngine.Timeline.TimelineAsset/EditorSettings
struct EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B;
// UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tCD4BCCD14D5D44653E7A8303330AA0D710568CF7;
// UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t57765B3FF6BD48016068D30508D5A2CBAE9DB5DB;
// UnityEngine.Timeline.TrackAsset/<>c
struct U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B;
// UnityEngine.Timeline.TrackAsset/<get_outputs>d__65
struct U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD7496573580AE787CDDC33F24EBBACF6AC0831FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0288A12A2D205DFFE771A659BD13AA8F95ED003D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t83FC1ABBDBD022F14C164E6C51B4EDD08B38CA03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITimeControl_t5C5A7FD4F8C7444653D81359F541100F74BFC239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral429BE84E79591B7B51080378E62F525EE124A696;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m51F88EBE372781AD61DDFF12ED10C82FC9D72283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4592B3A698ED3D11B895E2FEFB83AAD76AD4B104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C3D02018B86D04DA3185FB512F1B286D9157BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6975538FCE399C36FA04A735EA064CF30564DFFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m94B97993228CEB0FAA98A544403D75403C7098FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1861B4ACCC5DDEE221297B5B2DCD05C43F560D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m888F98AE0555A9FCC822CDC31FBFD0022AF237F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mADC94667531FD8C958ED7B94E621EEDB61EA0C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m41318575D6E5460AA9AA681443C6E4B12685017E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E0FA19A1D7E35F84DC927F9630F0212C0C8383A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B824AABAB3775DE1FD2A9490197732E0A08CAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAA77092CBECA1DCA604D577ED1219ADA1C3CC142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC1EE79EAB4FF8660B2250AB48EF4E04285D9B0B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m09C9DEE62662FC58E331F93EAB8C703397CE8A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackAssetExtensions_SetGroup_m38A6F2C502D0555F3B22943B4C234ADF9D5EFF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetControlableScriptsU3Ed__39_System_Collections_IEnumerator_Reset_m2228263CF03F82FA0DA805FE9FC34986CD426152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__16_System_Collections_IEnumerator_Reset_mF073D8D200A1051F04CBCEFF145288129BA0848A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__27_System_Collections_IEnumerator_Reset_m2FBDBE509102516DEF4C04DEAE7F2CA8F07EBC5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__45_System_Collections_IEnumerator_Reset_mD5504856C0BC2A12424B865C4F0DBD84458D2653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__49_System_Collections_IEnumerator_Reset_mF9B1CDEF62344863013AE9DCF1E589868F5C293C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__4_System_Collections_IEnumerator_Reset_mDE4E4AE8E19BFCC8EBEDC25883B3A222A78744C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_outputsU3Ed__65_System_Collections_IEnumerator_Reset_m971310E319CBBC37F70572408F0837702405DEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;

struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t47762A28C35244307964DF9AADDF161A1B58CA41* ___entries_1;
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
	KeyCollection_tD702A5B9EDDFA0F83F40A0672FB4143854BCABFF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB7E8070108A33D3CB65B0CCBD80AA182F33FAF92 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___entries_1)); }
	inline EntryU5BU5D_t47762A28C35244307964DF9AADDF161A1B58CA41* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t47762A28C35244307964DF9AADDF161A1B58CA41** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t47762A28C35244307964DF9AADDF161A1B58CA41* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___keys_7)); }
	inline KeyCollection_tD702A5B9EDDFA0F83F40A0672FB4143854BCABFF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD702A5B9EDDFA0F83F40A0672FB4143854BCABFF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD702A5B9EDDFA0F83F40A0672FB4143854BCABFF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ___values_8)); }
	inline ValueCollection_tB7E8070108A33D3CB65B0CCBD80AA182F33FAF92 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB7E8070108A33D3CB65B0CCBD80AA182F33FAF92 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB7E8070108A33D3CB65B0CCBD80AA182F33FAF92 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1, ____items_1)); }
	inline IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* get__items_1() const { return ____items_1; }
	inline IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1_StaticFields, ____emptyArray_5)); }
	inline IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMarkerU5BU5D_t9438539D8FD5FBCFC571B883A7B17736B39DD5FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>
struct List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE, ____items_1)); }
	inline SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* get__items_1() const { return ____items_1; }
	inline SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE_StaticFields, ____emptyArray_5)); }
	inline SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SignalAssetU5BU5D_t056D19566FC3D915BD6808A04D40049DC3F10427* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C, ____items_1)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get__items_1() const { return ____items_1; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C_StaticFields, ____emptyArray_5)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4, ____items_1)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get__items_1() const { return ____items_1; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4_StaticFields, ____emptyArray_5)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>
struct List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42, ____items_1)); }
	inline UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* get__items_1() const { return ____items_1; }
	inline UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42_StaticFields, ____emptyArray_5)); }
	inline UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UnityEventU5BU5D_t7E39855AC9BB55C2F1D5353A2086F8DBB21394C0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Timeline.TimeUtility
struct TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982  : public RuntimeObject
{
public:

public:
};

struct TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_StaticFields
{
public:
	// System.Double UnityEngine.Timeline.TimeUtility::kTimeEpsilon
	double ___kTimeEpsilon_0;
	// System.Double UnityEngine.Timeline.TimeUtility::kFrameRateEpsilon
	double ___kFrameRateEpsilon_1;
	// System.Double UnityEngine.Timeline.TimeUtility::k_MaxTimelineDurationInSeconds
	double ___k_MaxTimelineDurationInSeconds_2;

public:
	inline static int32_t get_offset_of_kTimeEpsilon_0() { return static_cast<int32_t>(offsetof(TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_StaticFields, ___kTimeEpsilon_0)); }
	inline double get_kTimeEpsilon_0() const { return ___kTimeEpsilon_0; }
	inline double* get_address_of_kTimeEpsilon_0() { return &___kTimeEpsilon_0; }
	inline void set_kTimeEpsilon_0(double value)
	{
		___kTimeEpsilon_0 = value;
	}

	inline static int32_t get_offset_of_kFrameRateEpsilon_1() { return static_cast<int32_t>(offsetof(TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_StaticFields, ___kFrameRateEpsilon_1)); }
	inline double get_kFrameRateEpsilon_1() const { return ___kFrameRateEpsilon_1; }
	inline double* get_address_of_kFrameRateEpsilon_1() { return &___kFrameRateEpsilon_1; }
	inline void set_kFrameRateEpsilon_1(double value)
	{
		___kFrameRateEpsilon_1 = value;
	}

	inline static int32_t get_offset_of_k_MaxTimelineDurationInSeconds_2() { return static_cast<int32_t>(offsetof(TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_StaticFields, ___k_MaxTimelineDurationInSeconds_2)); }
	inline double get_k_MaxTimelineDurationInSeconds_2() const { return ___k_MaxTimelineDurationInSeconds_2; }
	inline double* get_address_of_k_MaxTimelineDurationInSeconds_2() { return &___k_MaxTimelineDurationInSeconds_2; }
	inline void set_k_MaxTimelineDurationInSeconds_2(double value)
	{
		___k_MaxTimelineDurationInSeconds_2 = value;
	}
};


// UnityEngine.Timeline.TrackAssetExtensions
struct TrackAssetExtensions_tD189A538EB7BBF10F926E3B9D214B6110EFE978E  : public RuntimeObject
{
public:

public:
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

// UnityEngine.Timeline.WeightUtility
struct WeightUtility_tC09DD065E8EB5885A8CDB036D1A9DEA5ABA16F68  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Timeline.AnimationPlayableAsset/AnimationPlayableAssetUpgrade
struct AnimationPlayableAssetUpgrade_t039022156368E273A2587D6EB5EF6DA68FAF5328  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade
struct AnimationTrackUpgrade_t40DE180EBCC23E0FD46C3784D0C69B46251D8774  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39
struct U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.MonoBehaviour UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>2__current
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.GameObject UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::root
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root_3;
	// UnityEngine.GameObject UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>3__root
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CU3E3__root_4;
	// UnityEngine.MonoBehaviour[] UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>7__wrap1
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___U3CU3E7__wrap1_5;
	// System.Int32 UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3E2__current_1)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___root_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_root_3() const { return ___root_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3E3__root_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3E7__wrap1_5)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168, ___U3CU3E7__wrap2_6)); }
	inline int32_t get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(int32_t value)
	{
		___U3CU3E7__wrap2_6 = value;
	}
};


// UnityEngine.Timeline.Extrapolation/<>c
struct U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_StaticFields
{
public:
	// UnityEngine.Timeline.Extrapolation/<>c UnityEngine.Timeline.Extrapolation/<>c::<>9
	U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.Extrapolation/<>c::<>9__2_0
	Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// UnityEngine.Timeline.SignalReceiver/EventKeyValue
struct EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> UnityEngine.Timeline.SignalReceiver/EventKeyValue::m_Signals
	List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * ___m_Signals_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> UnityEngine.Timeline.SignalReceiver/EventKeyValue::m_Events
	List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * ___m_Events_1;

public:
	inline static int32_t get_offset_of_m_Signals_0() { return static_cast<int32_t>(offsetof(EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A, ___m_Signals_0)); }
	inline List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * get_m_Signals_0() const { return ___m_Signals_0; }
	inline List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE ** get_address_of_m_Signals_0() { return &___m_Signals_0; }
	inline void set_m_Signals_0(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * value)
	{
		___m_Signals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Signals_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Events_1() { return static_cast<int32_t>(offsetof(EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A, ___m_Events_1)); }
	inline List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * get_m_Events_1() const { return ___m_Events_1; }
	inline List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 ** get_address_of_m_Events_1() { return &___m_Events_1; }
	inline void set_m_Events_1(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * value)
	{
		___m_Events_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Events_1), (void*)value);
	}
};


// UnityEngine.Timeline.TimeNotificationBehaviour/<>c
struct U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_StaticFields
{
public:
	// UnityEngine.Timeline.TimeNotificationBehaviour/<>c UnityEngine.Timeline.TimeNotificationBehaviour/<>c::<>9
	U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry> UnityEngine.Timeline.TimeNotificationBehaviour/<>c::<>9__12_0
	Comparison_1_tA93ACF05FD25391EF1D321EE97AB0B5AFC2D2870 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Comparison_1_tA93ACF05FD25391EF1D321EE97AB0B5AFC2D2870 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Comparison_1_tA93ACF05FD25391EF1D321EE97AB0B5AFC2D2870 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Comparison_1_tA93ACF05FD25391EF1D321EE97AB0B5AFC2D2870 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// UnityEngine.Timeline.TimeUtility/<>c
struct U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_StaticFields
{
public:
	// UnityEngine.Timeline.TimeUtility/<>c UnityEngine.Timeline.TimeUtility/<>c::<>9
	U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * ___U3CU3E9_0;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.Timeline.TimeUtility/<>c::<>9__14_0
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.Timeline.TimeUtility/<>c::<>9__14_1
	Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t12237805D7B3E966E36DB4327BA1F80B724C4B9A * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// UnityEngine.Timeline.TimelineAsset/EditorSettings
struct EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B  : public RuntimeObject
{
public:
	// System.Single UnityEngine.Timeline.TimelineAsset/EditorSettings::m_Framerate
	float ___m_Framerate_3;
	// System.Boolean UnityEngine.Timeline.TimelineAsset/EditorSettings::m_ScenePreview
	bool ___m_ScenePreview_4;

public:
	inline static int32_t get_offset_of_m_Framerate_3() { return static_cast<int32_t>(offsetof(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B, ___m_Framerate_3)); }
	inline float get_m_Framerate_3() const { return ___m_Framerate_3; }
	inline float* get_address_of_m_Framerate_3() { return &___m_Framerate_3; }
	inline void set_m_Framerate_3(float value)
	{
		___m_Framerate_3 = value;
	}

	inline static int32_t get_offset_of_m_ScenePreview_4() { return static_cast<int32_t>(offsetof(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B, ___m_ScenePreview_4)); }
	inline bool get_m_ScenePreview_4() const { return ___m_ScenePreview_4; }
	inline bool* get_address_of_m_ScenePreview_4() { return &___m_ScenePreview_4; }
	inline void set_m_ScenePreview_4(bool value)
	{
		___m_ScenePreview_4 = value;
	}
};

struct EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields
{
public:
	// System.Single UnityEngine.Timeline.TimelineAsset/EditorSettings::kMinFps
	float ___kMinFps_0;
	// System.Single UnityEngine.Timeline.TimelineAsset/EditorSettings::kMaxFps
	float ___kMaxFps_1;
	// System.Single UnityEngine.Timeline.TimelineAsset/EditorSettings::kDefaultFps
	float ___kDefaultFps_2;

public:
	inline static int32_t get_offset_of_kMinFps_0() { return static_cast<int32_t>(offsetof(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields, ___kMinFps_0)); }
	inline float get_kMinFps_0() const { return ___kMinFps_0; }
	inline float* get_address_of_kMinFps_0() { return &___kMinFps_0; }
	inline void set_kMinFps_0(float value)
	{
		___kMinFps_0 = value;
	}

	inline static int32_t get_offset_of_kMaxFps_1() { return static_cast<int32_t>(offsetof(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields, ___kMaxFps_1)); }
	inline float get_kMaxFps_1() const { return ___kMaxFps_1; }
	inline float* get_address_of_kMaxFps_1() { return &___kMaxFps_1; }
	inline void set_kMaxFps_1(float value)
	{
		___kMaxFps_1 = value;
	}

	inline static int32_t get_offset_of_kDefaultFps_2() { return static_cast<int32_t>(offsetof(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields, ___kDefaultFps_2)); }
	inline float get_kDefaultFps_2() const { return ___kDefaultFps_2; }
	inline float* get_address_of_kDefaultFps_2() { return &___kDefaultFps_2; }
	inline void set_kDefaultFps_2(float value)
	{
		___kDefaultFps_2 = value;
	}
};


// UnityEngine.Timeline.TimelineAsset/TimelineAssetUpgrade
struct TimelineAssetUpgrade_t81321E02A71EB4972BD2DC245A54A3C62C53637F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Timeline.TimelineClip/TimelineClipUpgrade
struct TimelineClipUpgrade_tA2D1D2E398BCE48CB85793915A88A61BB8B1BEF0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tCD4BCCD14D5D44653E7A8303330AA0D710568CF7  : public RuntimeObject
{
public:
	// System.String UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tCD4BCCD14D5D44653E7A8303330AA0D710568CF7, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_t57765B3FF6BD48016068D30508D5A2CBAE9DB5DB  : public RuntimeObject
{
public:
	// System.String UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_1::result
	String_t* ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_1_t57765B3FF6BD48016068D30508D5A2CBAE9DB5DB, ___result_0)); }
	inline String_t* get_result_0() const { return ___result_0; }
	inline String_t** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(String_t* value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset/<>c
struct U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/<>c UnityEngine.Timeline.TrackAsset/<>c::<>9
	U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/<>c::<>9__121_0
	Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * ___U3CU3E9__121_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__121_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_StaticFields, ___U3CU3E9__121_0_1)); }
	inline Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * get_U3CU3E9__121_0_1() const { return ___U3CU3E9__121_0_1; }
	inline Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C ** get_address_of_U3CU3E9__121_0_1() { return &___U3CU3E9__121_0_1; }
	inline void set_U3CU3E9__121_0_1(Comparison_1_t2522326CFAA1518CF3457DBA1B9C9BA457D4C24C * value)
	{
		___U3CU3E9__121_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__121_0_1), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset/TrackAssetUpgrade
struct TrackAssetUpgrade_t06DF0F0AB1A37EB4BFE6D6DB5C4F3A639E217726  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.Timeline.DiscreteTime
struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___kMaxTime_1 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Objects_0)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Cache_1)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_pinvoke
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_com
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
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


// UnityEngine.Timeline.TrackClipTypeAttribute
struct TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type UnityEngine.Timeline.TrackClipTypeAttribute::inspectedType
	Type_t * ___inspectedType_0;
	// System.Boolean UnityEngine.Timeline.TrackClipTypeAttribute::allowAutoCreate
	bool ___allowAutoCreate_1;

public:
	inline static int32_t get_offset_of_inspectedType_0() { return static_cast<int32_t>(offsetof(TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59, ___inspectedType_0)); }
	inline Type_t * get_inspectedType_0() const { return ___inspectedType_0; }
	inline Type_t ** get_address_of_inspectedType_0() { return &___inspectedType_0; }
	inline void set_inspectedType_0(Type_t * value)
	{
		___inspectedType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inspectedType_0), (void*)value);
	}

	inline static int32_t get_offset_of_allowAutoCreate_1() { return static_cast<int32_t>(offsetof(TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59, ___allowAutoCreate_1)); }
	inline bool get_allowAutoCreate_1() const { return ___allowAutoCreate_1; }
	inline bool* get_address_of_allowAutoCreate_1() { return &___allowAutoCreate_1; }
	inline void set_allowAutoCreate_1(bool value)
	{
		___allowAutoCreate_1 = value;
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


// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___trackList_0)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___clipList_1)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___markerList_2)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};

// UnityEngine.Timeline.AppliedOffsetMode
struct AppliedOffsetMode_tE120CE423FA536641A92D970DF3654D47330F7E7 
{
public:
	// System.Int32 UnityEngine.Timeline.AppliedOffsetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppliedOffsetMode_tE120CE423FA536641A92D970DF3654D47330F7E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.ClipCaps
struct ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Timeline.MatchTargetFields
struct MatchTargetFields_t535271993DC8D708057D5011D01784ECF14B6BBF 
{
public:
	// System.Int32 UnityEngine.Timeline.MatchTargetFields::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchTargetFields_t535271993DC8D708057D5011D01784ECF14B6BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.NotificationFlags
struct NotificationFlags_t9E7C2E414C0875C0904404193D925F03BF65D981 
{
public:
	// System.Int16 UnityEngine.Timeline.NotificationFlags::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationFlags_t9E7C2E414C0875C0904404193D925F03BF65D981, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
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

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Timeline.TrackBindingFlags
struct TrackBindingFlags_t934F14348EB76C252C02391539711C45063B40E5 
{
public:
	// System.Int32 UnityEngine.Timeline.TrackBindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackBindingFlags_t934F14348EB76C252C02391539711C45063B40E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TrackColorAttribute
struct TrackColorAttribute_t6EAC4E29A7C89815E16DD0735D129B7C3DCF6BF1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// UnityEngine.Color UnityEngine.Timeline.TrackColorAttribute::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_0;

public:
	inline static int32_t get_offset_of_m_Color_0() { return static_cast<int32_t>(offsetof(TrackColorAttribute_t6EAC4E29A7C89815E16DD0735D129B7C3DCF6BF1, ___m_Color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_0() const { return ___m_Color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_0() { return &___m_Color_0; }
	inline void set_m_Color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_0 = value;
	}
};


// UnityEngine.Timeline.TrackOffset
struct TrackOffset_t56232BDA14656AA4B17C7B26E5FE8C763E2175FE 
{
public:
	// System.Int32 UnityEngine.Timeline.TrackOffset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackOffset_t56232BDA14656AA4B17C7B26E5FE8C763E2175FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.ActivationControlPlayable/InitialState
struct InitialState_t5779FC83130211922E4E14C64AAB07E1A3373D03 
{
public:
	// System.Int32 UnityEngine.Timeline.ActivationControlPlayable/InitialState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitialState_t5779FC83130211922E4E14C64AAB07E1A3373D03, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
struct PostPlaybackState_t029A097831804FE69C2E2DB77AA7BAEF0A50AA73 
{
public:
	// System.Int32 UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PostPlaybackState_t029A097831804FE69C2E2DB77AA7BAEF0A50AA73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.ActivationTrack/PostPlaybackState
struct PostPlaybackState_tB043A7130E642A84196E4C09DDA09D58101F5A0E 
{
public:
	// System.Int32 UnityEngine.Timeline.ActivationTrack/PostPlaybackState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PostPlaybackState_tB043A7130E642A84196E4C09DDA09D58101F5A0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.AnimationPlayableAsset/LoopMode
struct LoopMode_tEBA3378CB3F5E9A2B1023829A293E4A15DA9FE6A 
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset/LoopMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopMode_tEBA3378CB3F5E9A2B1023829A293E4A15DA9FE6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.AnimationPlayableAsset/Versions
struct Versions_t2F5AFD1DC3E29D930B1E45E9E743D166A6175636 
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset/Versions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Versions_t2F5AFD1DC3E29D930B1E45E9E743D166A6175636, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
struct UseEditMode_t1B5F803CD9D8C5312895A24C62C3E719C3D93285 
{
public:
	// System.Int32 UnityEngine.Timeline.TimeFieldAttribute/UseEditMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseEditMode_t1B5F803CD9D8C5312895A24C62C3E719C3D93285, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineAsset/DurationMode
struct DurationMode_tD4E793917FFAB0CC97CA830D8040A696900D7472 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset/DurationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DurationMode_tD4E793917FFAB0CC97CA830D8040A696900D7472, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineAsset/MediaType
struct MediaType_tE7A321E15DDE5CAE8A25235B757B10F3C505FC98 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset/MediaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaType_tE7A321E15DDE5CAE8A25235B757B10F3C505FC98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineAsset/Versions
struct Versions_t434A1B363CAE3C644BA5CF034E76DC5957CF3950 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset/Versions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Versions_t434A1B363CAE3C644BA5CF034E76DC5957CF3950, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/BlendCurveMode
struct BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/Versions
struct Versions_t616422C54DF1D1877E36167D0C2CB01C6FCB13B2 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/Versions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Versions_t616422C54DF1D1877E36167D0C2CB01C6FCB13B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TrackAsset/Versions
struct Versions_t1696FB2876FBE7D53DE4139E922AF9769CED01CB 
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset/Versions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Versions_t1696FB2876FBE7D53DE4139E922AF9769CED01CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Playables.Playable
struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceObject_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
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


// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Asset_11)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ParentTrack_14)); }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixInCurve_19)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixOutCurve_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ExposedParameterNames_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_AnimationCurves_24)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}
};

struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
};


// UnityEngine.Timeline.TrackBindingTypeAttribute
struct TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type UnityEngine.Timeline.TrackBindingTypeAttribute::type
	Type_t * ___type_0;
	// UnityEngine.Timeline.TrackBindingFlags UnityEngine.Timeline.TrackBindingTypeAttribute::flags
	int32_t ___flags_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780, ___flags_1)); }
	inline int32_t get_flags_1() const { return ___flags_1; }
	inline int32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(int32_t value)
	{
		___flags_1 = value;
	}
};


// UnityEngine.Timeline.TrackMediaType
struct TrackMediaType_tEEA6E261CA121D473A1A9E06BCC2F7846CD48A98  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// UnityEngine.Timeline.TimelineAsset/MediaType UnityEngine.Timeline.TrackMediaType::m_MediaType
	int32_t ___m_MediaType_0;

public:
	inline static int32_t get_offset_of_m_MediaType_0() { return static_cast<int32_t>(offsetof(TrackMediaType_tEEA6E261CA121D473A1A9E06BCC2F7846CD48A98, ___m_MediaType_0)); }
	inline int32_t get_m_MediaType_0() const { return ___m_MediaType_0; }
	inline int32_t* get_address_of_m_MediaType_0() { return &___m_MediaType_0; }
	inline void set_m_MediaType_0(int32_t value)
	{
		___m_MediaType_0 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 
{
public:
	// System.Double UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::time
	double ___time_0;
	// UnityEngine.Playables.INotification UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::payload
	RuntimeObject* ___payload_1;
	// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::notificationFired
	bool ___notificationFired_2;
	// UnityEngine.Timeline.NotificationFlags UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::flags
	int16_t ___flags_3;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___time_0)); }
	inline double get_time_0() const { return ___time_0; }
	inline double* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(double value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___payload_1)); }
	inline RuntimeObject* get_payload_1() const { return ___payload_1; }
	inline RuntimeObject** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(RuntimeObject* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}

	inline static int32_t get_offset_of_notificationFired_2() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___notificationFired_2)); }
	inline bool get_notificationFired_2() const { return ___notificationFired_2; }
	inline bool* get_address_of_notificationFired_2() { return &___notificationFired_2; }
	inline void set_notificationFired_2(bool value)
	{
		___notificationFired_2 = value;
	}

	inline static int32_t get_offset_of_flags_3() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___flags_3)); }
	inline int16_t get_flags_3() const { return ___flags_3; }
	inline int16_t* get_address_of_flags_3() { return &___flags_3; }
	inline void set_flags_3(int16_t value)
	{
		___flags_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_pinvoke
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_com
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};

// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Timeline.SignalAsset
struct SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};

struct SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82_StaticFields
{
public:
	// System.Action`1<UnityEngine.Timeline.SignalAsset> UnityEngine.Timeline.SignalAsset::OnEnableCallback
	Action_1_t3F04DDD8FAB7DA9AC819CCC24CE0B5D18FDB3A2F * ___OnEnableCallback_4;

public:
	inline static int32_t get_offset_of_OnEnableCallback_4() { return static_cast<int32_t>(offsetof(SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82_StaticFields, ___OnEnableCallback_4)); }
	inline Action_1_t3F04DDD8FAB7DA9AC819CCC24CE0B5D18FDB3A2F * get_OnEnableCallback_4() const { return ___OnEnableCallback_4; }
	inline Action_1_t3F04DDD8FAB7DA9AC819CCC24CE0B5D18FDB3A2F ** get_address_of_OnEnableCallback_4() { return &___OnEnableCallback_4; }
	inline void set_OnEnableCallback_4(Action_1_t3F04DDD8FAB7DA9AC819CCC24CE0B5D18FDB3A2F * value)
	{
		___OnEnableCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnableCallback_4), (void*)value);
	}
};


// UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA 
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::mixer
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___mixer_0;
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::parentMixer
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___parentMixer_1;
	// System.Int32 UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_mixer_0() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___mixer_0)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_mixer_0() const { return ___mixer_0; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_mixer_0() { return &___mixer_0; }
	inline void set_mixer_0(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___mixer_0 = value;
	}

	inline static int32_t get_offset_of_parentMixer_1() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___parentMixer_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_parentMixer_1() const { return ___parentMixer_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_parentMixer_1() { return &___parentMixer_1; }
	inline void set_parentMixer_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___parentMixer_1 = value;
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};


// UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45
struct U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.AnimationPlayableAsset UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::<>4__this
	AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60, ___U3CU3E4__this_3)); }
	inline AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
struct U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.AnimationTrack UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::<>4__this
	AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1, ___U3CU3E4__this_3)); }
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
struct U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.AudioPlayableAsset UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::<>4__this
	AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840, ___U3CU3E4__this_3)); }
	inline AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.Timeline.AudioTrack/<get_outputs>d__4
struct U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.AudioTrack UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::<>4__this
	AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9, ___U3CU3E4__this_3)); }
	inline AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27
struct U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.TimelineAsset UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>4__this
	TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3E4__this_3)); }
	inline TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD, ___U3CU3E7__wrap2_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset/<get_outputs>d__65
struct U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::<>2__current
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::<>4__this
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F, ___U3CU3E2__current_1)); }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F, ___U3CU3E4__this_3)); }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.Timeline.AnimationPlayableAsset
struct AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// UnityEngine.AnimationClip UnityEngine.Timeline.AnimationPlayableAsset::m_Clip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_Clip_4;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationPlayableAsset::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_5;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationPlayableAsset::m_EulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_EulerAngles_6;
	// System.Boolean UnityEngine.Timeline.AnimationPlayableAsset::m_UseTrackMatchFields
	bool ___m_UseTrackMatchFields_7;
	// UnityEngine.Timeline.MatchTargetFields UnityEngine.Timeline.AnimationPlayableAsset::m_MatchTargetFields
	int32_t ___m_MatchTargetFields_8;
	// System.Boolean UnityEngine.Timeline.AnimationPlayableAsset::m_RemoveStartOffset
	bool ___m_RemoveStartOffset_9;
	// System.Boolean UnityEngine.Timeline.AnimationPlayableAsset::m_ApplyFootIK
	bool ___m_ApplyFootIK_10;
	// UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UnityEngine.Timeline.AnimationPlayableAsset::m_Loop
	int32_t ___m_Loop_11;
	// UnityEngine.Timeline.AppliedOffsetMode UnityEngine.Timeline.AnimationPlayableAsset::<appliedOffsetMode>k__BackingField
	int32_t ___U3CappliedOffsetModeU3Ek__BackingField_12;
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset::m_Version
	int32_t ___m_Version_14;
	// UnityEngine.Quaternion UnityEngine.Timeline.AnimationPlayableAsset::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_15;

public:
	inline static int32_t get_offset_of_m_Clip_4() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_Clip_4)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_Clip_4() const { return ___m_Clip_4; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_Clip_4() { return &___m_Clip_4; }
	inline void set_m_Clip_4(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_Clip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clip_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Position_5() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_Position_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_5() const { return ___m_Position_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_5() { return &___m_Position_5; }
	inline void set_m_Position_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_5 = value;
	}

	inline static int32_t get_offset_of_m_EulerAngles_6() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_EulerAngles_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_EulerAngles_6() const { return ___m_EulerAngles_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_EulerAngles_6() { return &___m_EulerAngles_6; }
	inline void set_m_EulerAngles_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_EulerAngles_6 = value;
	}

	inline static int32_t get_offset_of_m_UseTrackMatchFields_7() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_UseTrackMatchFields_7)); }
	inline bool get_m_UseTrackMatchFields_7() const { return ___m_UseTrackMatchFields_7; }
	inline bool* get_address_of_m_UseTrackMatchFields_7() { return &___m_UseTrackMatchFields_7; }
	inline void set_m_UseTrackMatchFields_7(bool value)
	{
		___m_UseTrackMatchFields_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchTargetFields_8() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_MatchTargetFields_8)); }
	inline int32_t get_m_MatchTargetFields_8() const { return ___m_MatchTargetFields_8; }
	inline int32_t* get_address_of_m_MatchTargetFields_8() { return &___m_MatchTargetFields_8; }
	inline void set_m_MatchTargetFields_8(int32_t value)
	{
		___m_MatchTargetFields_8 = value;
	}

	inline static int32_t get_offset_of_m_RemoveStartOffset_9() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_RemoveStartOffset_9)); }
	inline bool get_m_RemoveStartOffset_9() const { return ___m_RemoveStartOffset_9; }
	inline bool* get_address_of_m_RemoveStartOffset_9() { return &___m_RemoveStartOffset_9; }
	inline void set_m_RemoveStartOffset_9(bool value)
	{
		___m_RemoveStartOffset_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyFootIK_10() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_ApplyFootIK_10)); }
	inline bool get_m_ApplyFootIK_10() const { return ___m_ApplyFootIK_10; }
	inline bool* get_address_of_m_ApplyFootIK_10() { return &___m_ApplyFootIK_10; }
	inline void set_m_ApplyFootIK_10(bool value)
	{
		___m_ApplyFootIK_10 = value;
	}

	inline static int32_t get_offset_of_m_Loop_11() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_Loop_11)); }
	inline int32_t get_m_Loop_11() const { return ___m_Loop_11; }
	inline int32_t* get_address_of_m_Loop_11() { return &___m_Loop_11; }
	inline void set_m_Loop_11(int32_t value)
	{
		___m_Loop_11 = value;
	}

	inline static int32_t get_offset_of_U3CappliedOffsetModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___U3CappliedOffsetModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CappliedOffsetModeU3Ek__BackingField_12() const { return ___U3CappliedOffsetModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CappliedOffsetModeU3Ek__BackingField_12() { return &___U3CappliedOffsetModeU3Ek__BackingField_12; }
	inline void set_U3CappliedOffsetModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CappliedOffsetModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_Version_14() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_Version_14)); }
	inline int32_t get_m_Version_14() const { return ___m_Version_14; }
	inline int32_t* get_address_of_m_Version_14() { return &___m_Version_14; }
	inline void set_m_Version_14(int32_t value)
	{
		___m_Version_14 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_15() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E, ___m_Rotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_15() const { return ___m_Rotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_15() { return &___m_Rotation_15; }
	inline void set_m_Rotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_15 = value;
	}
};

struct AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E_StaticFields
{
public:
	// System.Int32 UnityEngine.Timeline.AnimationPlayableAsset::k_LatestVersion
	int32_t ___k_LatestVersion_13;

public:
	inline static int32_t get_offset_of_k_LatestVersion_13() { return static_cast<int32_t>(offsetof(AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E_StaticFields, ___k_LatestVersion_13)); }
	inline int32_t get_k_LatestVersion_13() const { return ___k_LatestVersion_13; }
	inline int32_t* get_address_of_k_LatestVersion_13() { return &___k_LatestVersion_13; }
	inline void set_k_LatestVersion_13(int32_t value)
	{
		___k_LatestVersion_13 = value;
	}
};


// UnityEngine.Timeline.AudioPlayableAsset
struct AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// UnityEngine.AudioClip UnityEngine.Timeline.AudioPlayableAsset::m_Clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_Clip_4;
	// System.Boolean UnityEngine.Timeline.AudioPlayableAsset::m_Loop
	bool ___m_Loop_5;
	// System.Single UnityEngine.Timeline.AudioPlayableAsset::m_bufferingTime
	float ___m_bufferingTime_6;
	// UnityEngine.Timeline.AudioClipProperties UnityEngine.Timeline.AudioPlayableAsset::m_ClipProperties
	AudioClipProperties_t87B9771BCD8C7917353C33C43C7A173FAFCF7833 * ___m_ClipProperties_7;

public:
	inline static int32_t get_offset_of_m_Clip_4() { return static_cast<int32_t>(offsetof(AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D, ___m_Clip_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_Clip_4() const { return ___m_Clip_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_Clip_4() { return &___m_Clip_4; }
	inline void set_m_Clip_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_Clip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clip_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Loop_5() { return static_cast<int32_t>(offsetof(AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D, ___m_Loop_5)); }
	inline bool get_m_Loop_5() const { return ___m_Loop_5; }
	inline bool* get_address_of_m_Loop_5() { return &___m_Loop_5; }
	inline void set_m_Loop_5(bool value)
	{
		___m_Loop_5 = value;
	}

	inline static int32_t get_offset_of_m_bufferingTime_6() { return static_cast<int32_t>(offsetof(AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D, ___m_bufferingTime_6)); }
	inline float get_m_bufferingTime_6() const { return ___m_bufferingTime_6; }
	inline float* get_address_of_m_bufferingTime_6() { return &___m_bufferingTime_6; }
	inline void set_m_bufferingTime_6(float value)
	{
		___m_bufferingTime_6 = value;
	}

	inline static int32_t get_offset_of_m_ClipProperties_7() { return static_cast<int32_t>(offsetof(AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D, ___m_ClipProperties_7)); }
	inline AudioClipProperties_t87B9771BCD8C7917353C33C43C7A173FAFCF7833 * get_m_ClipProperties_7() const { return ___m_ClipProperties_7; }
	inline AudioClipProperties_t87B9771BCD8C7917353C33C43C7A173FAFCF7833 ** get_address_of_m_ClipProperties_7() { return &___m_ClipProperties_7; }
	inline void set_m_ClipProperties_7(AudioClipProperties_t87B9771BCD8C7917353C33C43C7A173FAFCF7833 * value)
	{
		___m_ClipProperties_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipProperties_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Timeline.TimelineAsset
struct TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset::m_Version
	int32_t ___m_Version_5;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TimelineAsset::m_Tracks
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Tracks_6;
	// System.Double UnityEngine.Timeline.TimelineAsset::m_FixedDuration
	double ___m_FixedDuration_7;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TimelineAsset::m_CacheOutputTracks
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___m_CacheOutputTracks_8;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset::m_CacheRootTracks
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___m_CacheRootTracks_9;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset::m_CacheFlattenedTracks
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___m_CacheFlattenedTracks_10;
	// UnityEngine.Timeline.TimelineAsset/EditorSettings UnityEngine.Timeline.TimelineAsset::m_EditorSettings
	EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * ___m_EditorSettings_11;
	// UnityEngine.Timeline.TimelineAsset/DurationMode UnityEngine.Timeline.TimelineAsset::m_DurationMode
	int32_t ___m_DurationMode_12;
	// UnityEngine.Timeline.MarkerTrack UnityEngine.Timeline.TimelineAsset::m_MarkerTrack
	MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * ___m_MarkerTrack_13;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracks_6() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_Tracks_6)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Tracks_6() const { return ___m_Tracks_6; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Tracks_6() { return &___m_Tracks_6; }
	inline void set_m_Tracks_6(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Tracks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tracks_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_FixedDuration_7() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_FixedDuration_7)); }
	inline double get_m_FixedDuration_7() const { return ___m_FixedDuration_7; }
	inline double* get_address_of_m_FixedDuration_7() { return &___m_FixedDuration_7; }
	inline void set_m_FixedDuration_7(double value)
	{
		___m_FixedDuration_7 = value;
	}

	inline static int32_t get_offset_of_m_CacheOutputTracks_8() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheOutputTracks_8)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_m_CacheOutputTracks_8() const { return ___m_CacheOutputTracks_8; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_m_CacheOutputTracks_8() { return &___m_CacheOutputTracks_8; }
	inline void set_m_CacheOutputTracks_8(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___m_CacheOutputTracks_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheOutputTracks_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheRootTracks_9() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheRootTracks_9)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_m_CacheRootTracks_9() const { return ___m_CacheRootTracks_9; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_m_CacheRootTracks_9() { return &___m_CacheRootTracks_9; }
	inline void set_m_CacheRootTracks_9(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___m_CacheRootTracks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheRootTracks_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheFlattenedTracks_10() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheFlattenedTracks_10)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_m_CacheFlattenedTracks_10() const { return ___m_CacheFlattenedTracks_10; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_m_CacheFlattenedTracks_10() { return &___m_CacheFlattenedTracks_10; }
	inline void set_m_CacheFlattenedTracks_10(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___m_CacheFlattenedTracks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheFlattenedTracks_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_EditorSettings_11() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_EditorSettings_11)); }
	inline EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * get_m_EditorSettings_11() const { return ___m_EditorSettings_11; }
	inline EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B ** get_address_of_m_EditorSettings_11() { return &___m_EditorSettings_11; }
	inline void set_m_EditorSettings_11(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * value)
	{
		___m_EditorSettings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EditorSettings_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DurationMode_12() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_DurationMode_12)); }
	inline int32_t get_m_DurationMode_12() const { return ___m_DurationMode_12; }
	inline int32_t* get_address_of_m_DurationMode_12() { return &___m_DurationMode_12; }
	inline void set_m_DurationMode_12(int32_t value)
	{
		___m_DurationMode_12 = value;
	}

	inline static int32_t get_offset_of_m_MarkerTrack_13() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_MarkerTrack_13)); }
	inline MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * get_m_MarkerTrack_13() const { return ___m_MarkerTrack_13; }
	inline MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 ** get_address_of_m_MarkerTrack_13() { return &___m_MarkerTrack_13; }
	inline void set_m_MarkerTrack_13(MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * value)
	{
		___m_MarkerTrack_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MarkerTrack_13), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_AnimClip_6)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Curves_14)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Parent_15)); }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Children_16)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Start_19)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_End_20)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Clips_26)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Markers_27)); }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// UnityEngine.Timeline.AnimationTrack
struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4  : public TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628
{
public:
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.AnimationTrack::m_InfiniteClipPreExtrapolation
	int32_t ___m_InfiniteClipPreExtrapolation_30;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.AnimationTrack::m_InfiniteClipPostExtrapolation
	int32_t ___m_InfiniteClipPostExtrapolation_31;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_InfiniteClipOffsetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InfiniteClipOffsetPosition_32;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_InfiniteClipOffsetEulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InfiniteClipOffsetEulerAngles_33;
	// System.Double UnityEngine.Timeline.AnimationTrack::m_InfiniteClipTimeOffset
	double ___m_InfiniteClipTimeOffset_34;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_InfiniteClipRemoveOffset
	bool ___m_InfiniteClipRemoveOffset_35;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_InfiniteClipApplyFootIK
	bool ___m_InfiniteClipApplyFootIK_36;
	// UnityEngine.Timeline.AnimationPlayableAsset/LoopMode UnityEngine.Timeline.AnimationTrack::mInfiniteClipLoop
	int32_t ___mInfiniteClipLoop_37;
	// UnityEngine.Timeline.MatchTargetFields UnityEngine.Timeline.AnimationTrack::m_MatchTargetFields
	int32_t ___m_MatchTargetFields_38;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_39;
	// UnityEngine.Vector3 UnityEngine.Timeline.AnimationTrack::m_EulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_EulerAngles_40;
	// UnityEngine.AvatarMask UnityEngine.Timeline.AnimationTrack::m_AvatarMask
	AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * ___m_AvatarMask_41;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_ApplyAvatarMask
	bool ___m_ApplyAvatarMask_42;
	// UnityEngine.Timeline.TrackOffset UnityEngine.Timeline.AnimationTrack::m_TrackOffset
	int32_t ___m_TrackOffset_43;
	// UnityEngine.AnimationClip UnityEngine.Timeline.AnimationTrack::m_InfiniteClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_InfiniteClip_44;
	// UnityEngine.Quaternion UnityEngine.Timeline.AnimationTrack::m_OpenClipOffsetRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_OpenClipOffsetRotation_46;
	// UnityEngine.Quaternion UnityEngine.Timeline.AnimationTrack::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_47;
	// System.Boolean UnityEngine.Timeline.AnimationTrack::m_ApplyOffsets
	bool ___m_ApplyOffsets_48;

public:
	inline static int32_t get_offset_of_m_InfiniteClipPreExtrapolation_30() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipPreExtrapolation_30)); }
	inline int32_t get_m_InfiniteClipPreExtrapolation_30() const { return ___m_InfiniteClipPreExtrapolation_30; }
	inline int32_t* get_address_of_m_InfiniteClipPreExtrapolation_30() { return &___m_InfiniteClipPreExtrapolation_30; }
	inline void set_m_InfiniteClipPreExtrapolation_30(int32_t value)
	{
		___m_InfiniteClipPreExtrapolation_30 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipPostExtrapolation_31() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipPostExtrapolation_31)); }
	inline int32_t get_m_InfiniteClipPostExtrapolation_31() const { return ___m_InfiniteClipPostExtrapolation_31; }
	inline int32_t* get_address_of_m_InfiniteClipPostExtrapolation_31() { return &___m_InfiniteClipPostExtrapolation_31; }
	inline void set_m_InfiniteClipPostExtrapolation_31(int32_t value)
	{
		___m_InfiniteClipPostExtrapolation_31 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipOffsetPosition_32() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipOffsetPosition_32)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InfiniteClipOffsetPosition_32() const { return ___m_InfiniteClipOffsetPosition_32; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InfiniteClipOffsetPosition_32() { return &___m_InfiniteClipOffsetPosition_32; }
	inline void set_m_InfiniteClipOffsetPosition_32(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InfiniteClipOffsetPosition_32 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipOffsetEulerAngles_33() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipOffsetEulerAngles_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InfiniteClipOffsetEulerAngles_33() const { return ___m_InfiniteClipOffsetEulerAngles_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InfiniteClipOffsetEulerAngles_33() { return &___m_InfiniteClipOffsetEulerAngles_33; }
	inline void set_m_InfiniteClipOffsetEulerAngles_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InfiniteClipOffsetEulerAngles_33 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipTimeOffset_34() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipTimeOffset_34)); }
	inline double get_m_InfiniteClipTimeOffset_34() const { return ___m_InfiniteClipTimeOffset_34; }
	inline double* get_address_of_m_InfiniteClipTimeOffset_34() { return &___m_InfiniteClipTimeOffset_34; }
	inline void set_m_InfiniteClipTimeOffset_34(double value)
	{
		___m_InfiniteClipTimeOffset_34 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipRemoveOffset_35() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipRemoveOffset_35)); }
	inline bool get_m_InfiniteClipRemoveOffset_35() const { return ___m_InfiniteClipRemoveOffset_35; }
	inline bool* get_address_of_m_InfiniteClipRemoveOffset_35() { return &___m_InfiniteClipRemoveOffset_35; }
	inline void set_m_InfiniteClipRemoveOffset_35(bool value)
	{
		___m_InfiniteClipRemoveOffset_35 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClipApplyFootIK_36() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClipApplyFootIK_36)); }
	inline bool get_m_InfiniteClipApplyFootIK_36() const { return ___m_InfiniteClipApplyFootIK_36; }
	inline bool* get_address_of_m_InfiniteClipApplyFootIK_36() { return &___m_InfiniteClipApplyFootIK_36; }
	inline void set_m_InfiniteClipApplyFootIK_36(bool value)
	{
		___m_InfiniteClipApplyFootIK_36 = value;
	}

	inline static int32_t get_offset_of_mInfiniteClipLoop_37() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___mInfiniteClipLoop_37)); }
	inline int32_t get_mInfiniteClipLoop_37() const { return ___mInfiniteClipLoop_37; }
	inline int32_t* get_address_of_mInfiniteClipLoop_37() { return &___mInfiniteClipLoop_37; }
	inline void set_mInfiniteClipLoop_37(int32_t value)
	{
		___mInfiniteClipLoop_37 = value;
	}

	inline static int32_t get_offset_of_m_MatchTargetFields_38() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_MatchTargetFields_38)); }
	inline int32_t get_m_MatchTargetFields_38() const { return ___m_MatchTargetFields_38; }
	inline int32_t* get_address_of_m_MatchTargetFields_38() { return &___m_MatchTargetFields_38; }
	inline void set_m_MatchTargetFields_38(int32_t value)
	{
		___m_MatchTargetFields_38 = value;
	}

	inline static int32_t get_offset_of_m_Position_39() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_Position_39)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_39() const { return ___m_Position_39; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_39() { return &___m_Position_39; }
	inline void set_m_Position_39(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_39 = value;
	}

	inline static int32_t get_offset_of_m_EulerAngles_40() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_EulerAngles_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_EulerAngles_40() const { return ___m_EulerAngles_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_EulerAngles_40() { return &___m_EulerAngles_40; }
	inline void set_m_EulerAngles_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_EulerAngles_40 = value;
	}

	inline static int32_t get_offset_of_m_AvatarMask_41() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_AvatarMask_41)); }
	inline AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * get_m_AvatarMask_41() const { return ___m_AvatarMask_41; }
	inline AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE ** get_address_of_m_AvatarMask_41() { return &___m_AvatarMask_41; }
	inline void set_m_AvatarMask_41(AvatarMask_t121FF9294A9B0C496C909313D9B146177BD6C8BE * value)
	{
		___m_AvatarMask_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AvatarMask_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplyAvatarMask_42() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_ApplyAvatarMask_42)); }
	inline bool get_m_ApplyAvatarMask_42() const { return ___m_ApplyAvatarMask_42; }
	inline bool* get_address_of_m_ApplyAvatarMask_42() { return &___m_ApplyAvatarMask_42; }
	inline void set_m_ApplyAvatarMask_42(bool value)
	{
		___m_ApplyAvatarMask_42 = value;
	}

	inline static int32_t get_offset_of_m_TrackOffset_43() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_TrackOffset_43)); }
	inline int32_t get_m_TrackOffset_43() const { return ___m_TrackOffset_43; }
	inline int32_t* get_address_of_m_TrackOffset_43() { return &___m_TrackOffset_43; }
	inline void set_m_TrackOffset_43(int32_t value)
	{
		___m_TrackOffset_43 = value;
	}

	inline static int32_t get_offset_of_m_InfiniteClip_44() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_InfiniteClip_44)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_InfiniteClip_44() const { return ___m_InfiniteClip_44; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_InfiniteClip_44() { return &___m_InfiniteClip_44; }
	inline void set_m_InfiniteClip_44(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_InfiniteClip_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InfiniteClip_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_OpenClipOffsetRotation_46() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_OpenClipOffsetRotation_46)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_OpenClipOffsetRotation_46() const { return ___m_OpenClipOffsetRotation_46; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_OpenClipOffsetRotation_46() { return &___m_OpenClipOffsetRotation_46; }
	inline void set_m_OpenClipOffsetRotation_46(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_OpenClipOffsetRotation_46 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_47() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_Rotation_47)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_47() const { return ___m_Rotation_47; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_47() { return &___m_Rotation_47; }
	inline void set_m_Rotation_47(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_47 = value;
	}

	inline static int32_t get_offset_of_m_ApplyOffsets_48() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4, ___m_ApplyOffsets_48)); }
	inline bool get_m_ApplyOffsets_48() const { return ___m_ApplyOffsets_48; }
	inline bool* get_address_of_m_ApplyOffsets_48() { return &___m_ApplyOffsets_48; }
	inline void set_m_ApplyOffsets_48(bool value)
	{
		___m_ApplyOffsets_48 = value;
	}
};

struct AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> UnityEngine.Timeline.AnimationTrack::s_CachedQueue
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___s_CachedQueue_45;

public:
	inline static int32_t get_offset_of_s_CachedQueue_45() { return static_cast<int32_t>(offsetof(AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4_StaticFields, ___s_CachedQueue_45)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_s_CachedQueue_45() const { return ___s_CachedQueue_45; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_s_CachedQueue_45() { return &___s_CachedQueue_45; }
	inline void set_s_CachedQueue_45(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___s_CachedQueue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CachedQueue_45), (void*)value);
	}
};


// UnityEngine.Timeline.AudioTrack
struct AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5  : public TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628
{
public:
	// UnityEngine.Timeline.AudioMixerProperties UnityEngine.Timeline.AudioTrack::m_TrackProperties
	AudioMixerProperties_t3EBDE54547AC600F7EFFE0C24AFA10E0779068EA * ___m_TrackProperties_28;

public:
	inline static int32_t get_offset_of_m_TrackProperties_28() { return static_cast<int32_t>(offsetof(AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5, ___m_TrackProperties_28)); }
	inline AudioMixerProperties_t3EBDE54547AC600F7EFFE0C24AFA10E0779068EA * get_m_TrackProperties_28() const { return ___m_TrackProperties_28; }
	inline AudioMixerProperties_t3EBDE54547AC600F7EFFE0C24AFA10E0779068EA ** get_address_of_m_TrackProperties_28() { return &___m_TrackProperties_28; }
	inline void set_m_TrackProperties_28(AudioMixerProperties_t3EBDE54547AC600F7EFFE0C24AFA10E0779068EA * value)
	{
		___m_TrackProperties_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackProperties_28), (void*)value);
	}
};


// UnityEngine.Timeline.GroupTrack
struct GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185  : public TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * m_Items[1];

public:
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean UnityEngine.Playables.PlayableExtensions::IsValid<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Timeline.TimelineAsset UnityEngine.Timeline.TrackAsset::get_timelineAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * TrackAsset_get_timelineAsset_m431EB59954330BCB3A1978E535E816AB17C2E0F9 (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset::RemoveTrack(UnityEngine.Timeline.TrackAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineAsset_RemoveTrack_mA9C62C0BF6211C4438914D17D06BBE9ACC6526F4 (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___track0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Timeline.TrackAsset::RemoveSubTrack(UnityEngine.Timeline.TrackAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackAsset_RemoveSubTrack_mC1B91F46A5A1A699F056B562BE22C3634948EB35 (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___child0, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TrackAsset::set_parent(UnityEngine.Playables.PlayableAsset)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackAsset_set_parent_m5F4D45A3392934B161CAB4A6EF80DDFCABD942F2_inline (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset::AddTrackInternal(UnityEngine.Timeline.TrackAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineAsset_AddTrackInternal_mD9899C7FA81E7BBC429BBCF7B3472B6A74B8AEA9 (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___track0, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TrackAsset::AddChild(UnityEngine.Timeline.TrackAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset_AddChild_m65C4BDFAC66E427415CA4B8B337DB98D7E43BE38 (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___child0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableExtensions::IsValid<UnityEngine.Playables.Playable>(!!0)
inline bool PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	return ((  bool (*) (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , const RuntimeMethod*))PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_gshared)(___playable0, method);
}
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_gshared)(___playable0, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_gshared)(___playable0, ___inputIndex1, method);
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32,System.Single)
inline void PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	((  void (*) (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, float, const RuntimeMethod*))PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_gshared)(___playable0, ___inputIndex1, ___weight2, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableBinding UnityEngine.Animations.AnimationPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  AnimationPlayableBinding_Create_m2624B49FBCC9B306B0D2C8608CDAD6A96A165DF4 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___key1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__45__ctor_mF7CC587C62188EEF08968A27427D3B21BA76218F (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mE3DE7BEFA163CEBC34F71BF42646F712BB92381D (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__49__ctor_m722545F04B96B2D87A146E6DF006D44932ADC9EA (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mC178719F5120F22B42E031F23ACC39AA886A619E (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableBinding UnityEngine.Audio.AudioPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  AudioPlayableBinding_Create_mC19AD18375E1CE8EE7092AB97C8652DDF6DD9228 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___key1, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__16__ctor_m2741E88E3CBC8E2EF3D1FF17B9D093EC3FA7CECE (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__16_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m59B1333D6AE2813EC1F1432C9E222CCF8F484837 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__4__ctor_m91FD8564B6EB9ED62A780D05768A6D508F9C1734 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m04EEB7F8C75D774F41105BD8CD5669DE607E7F3A (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* GameObject_GetComponentsInChildren_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C3D02018B86D04DA3185FB512F1B286D9157BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetControlableScriptsU3Ed__39__ctor_m6C7CD0B61AE6081F5EC31861ED9E3071B2898EE5 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour> UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetControlableScriptsU3Ed__39_System_Collections_Generic_IEnumerableU3CUnityEngine_MonoBehaviourU3E_GetEnumerator_mD3D87FAFD4EA3D8449241E645484BEFC046EE2B7 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.Extrapolation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC6E71DB1CFD2185C6FB0B58E0756F074E87EB60F (U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Timeline.TimelineClip::get_start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method);
// System.Int32 System.Double::CompareTo(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE (double* __this, double ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>::IndexOf(!0)
inline int32_t List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * __this, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE *, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::get_Item(System.Int32)
inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * List_1_get_Item_m09C9DEE62662FC58E331F93EAB8C703397CE8A52_inline (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * (*) (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>::Add(!0)
inline void List_1_Add_m94B97993228CEB0FAA98A544403D75403C7098FB (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * __this, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE *, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::Add(!0)
inline void List_1_Add_m6975538FCE399C36FA04A735EA064CF30564DFFB (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 *, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9 (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset>::.ctor()
inline void List_1__ctor_mC1EE79EAB4FF8660B2250AB48EF4E04285D9B0B1 (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent>::.ctor()
inline void List_1__ctor_m9B824AABAB3775DE1FD2A9490197732E0A08CAF5 (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Timeline.TimeNotificationBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBE2A0B90CEB3A896D0BD656B68397641539E83B (U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_triggerInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_triggerInEditor_m6698229A7C46430F06F2903EEC391D00D3726232 (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_prewarm_m617DEB8E7EA0F45BE034940050CB2CB8A56490B4 (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_triggerOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_triggerOnce_mAE24C0655330FD8F4DD6702A999D7A59BFFFB60E (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimeUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m555AD22EAA2F12C425BBFAD6294C1DBD93537284 (U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_U3CU3Em__Finally2_m82D0CD0F06F0A03F9F2A9B017F522DD73BD6FB0E (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_U3CU3Em__Finally1_m5AC10A522583DD9F21C0891CEA3CEBFA15744007 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset::GetOutputTracks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimelineAsset_GetOutputTracks_mBAE1A3EF9E508AC8B642C390C1AEA436F702C753 (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_System_IDisposable_Dispose_m9BBDBE73F1CE7EE9A4196661C0230A98A823BC6F (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27__ctor_m9C7020B9F262952DDBFD3CDCAD3C16E65BADB5C3 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__27_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m9309BB49E87B2AA564A6790BCB0D914AAD632A27 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Timeline.TimelineAsset::GetValidFramerate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimelineAsset_GetValidFramerate_m025889E2E70594A32DA925A534D97B78A43C5916 (float ___framerate0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TrackAsset/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20889FF26C1846F427AB00E04F8AD4A1A67FC8EA (U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4592B3A698ED3D11B895E2FEFB83AAD76AD4B104 (Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * __this, Type_t * ___key0, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 *, Type_t *, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25 (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>::Add(!0,!1)
inline void Dictionary_2_Add_m51F88EBE372781AD61DDFF12ED10C82FC9D72283 (Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * __this, Type_t * ___key0, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 *, Type_t *, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.ScriptPlayableBinding::Create(System.String,UnityEngine.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  ScriptPlayableBinding_Create_mAAA74560713BDBC2C99DE67383B7AA062666A7E9 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___key1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__65__ctor_mC3A51971E84B4CB65E8D8F556ECA11A7C9F8AD0B (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__65_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m38D2FDC907FE2F4653266CA6812C5F77A4B4D78A (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>::.ctor(System.Int32)
inline void List_1__ctor_m41318575D6E5460AA9AA681443C6E4B12685017E (List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>::.ctor(System.Int32)
inline void List_1__ctor_m7E0FA19A1D7E35F84DC927F9630F0212C0C8383A (List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>::.ctor(System.Int32)
inline void List_1__ctor_mAA77092CBECA1DCA604D577ED1219ADA1C3CC142 (List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>::Clear()
inline void List_1_Clear_m1861B4ACCC5DDEE221297B5B2DCD05C43F560D99 (List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>::Clear()
inline void List_1_Clear_m888F98AE0555A9FCC822CDC31FBFD0022AF237F2 (List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>::Clear()
inline void List_1_Clear_mADC94667531FD8C958ED7B94E621EEDB61EA0C93 (List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.Timeline.TrackAsset/TransientBuildData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransientBuildData_Clear_m5188D938B3688BC2FA68BDDBF7A6D493DDA9299B (TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Timeline.GroupTrack UnityEngine.Timeline.TrackAssetExtensions::GetGroup(UnityEngine.Timeline.TrackAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * TrackAssetExtensions_GetGroup_m8B4E4707BA7D3286AC9EC296B513FB92F4428B2B (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___asset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (asset == null)
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_0 = ___asset0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 *)NULL;
	}

IL_000b:
	{
		// return asset.parent as GroupTrack;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_2 = ___asset0;
		NullCheck(L_2);
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_3;
		L_3 = TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline(L_2, /*hidden argument*/NULL);
		return ((GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 *)IsInstClass((RuntimeObject*)L_3, GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.Timeline.TrackAssetExtensions::SetGroup(UnityEngine.Timeline.TrackAsset,UnityEngine.Timeline.GroupTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAssetExtensions_SetGroup_m38A6F2C502D0555F3B22943B4C234ADF9D5EFF2E (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___asset0, GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * ___group1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * V_0 = NULL;
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * V_1 = NULL;
	TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * V_2 = NULL;
	{
		// if (asset == null || asset == group || asset.parent == group)
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_0 = ___asset0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_2 = ___asset0;
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_3 = ___group1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_5 = ___asset0;
		NullCheck(L_5);
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_6;
		L_6 = TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline(L_5, /*hidden argument*/NULL);
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_7 = ___group1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// if (group != null && asset.timelineAsset != group.timelineAsset)
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_9 = ___group1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_11 = ___asset0;
		NullCheck(L_11);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_12;
		L_12 = TrackAsset_get_timelineAsset_m431EB59954330BCB3A1978E535E816AB17C2E0F9(L_11, /*hidden argument*/NULL);
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_13 = ___group1;
		NullCheck(L_13);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_14;
		L_14 = TrackAsset_get_timelineAsset_m431EB59954330BCB3A1978E535E816AB17C2E0F9(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0048;
		}
	}
	{
		// throw new InvalidOperationException("Cannot assign to a group in a different timeline");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral429BE84E79591B7B51080378E62F525EE124A696)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackAssetExtensions_SetGroup_m38A6F2C502D0555F3B22943B4C234ADF9D5EFF2E_RuntimeMethod_var)));
	}

IL_0048:
	{
		// var timeline = asset.timelineAsset;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_17 = ___asset0;
		NullCheck(L_17);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_18;
		L_18 = TrackAsset_get_timelineAsset_m431EB59954330BCB3A1978E535E816AB17C2E0F9(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// var parentTrack = asset.parent as TrackAsset;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_19 = ___asset0;
		NullCheck(L_19);
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_20;
		L_20 = TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline(L_19, /*hidden argument*/NULL);
		V_1 = ((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)IsInstClass((RuntimeObject*)L_20, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var));
		// var parentTimeline = asset.parent as TimelineAsset;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_21 = ___asset0;
		NullCheck(L_21);
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_22;
		L_22 = TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline(L_21, /*hidden argument*/NULL);
		V_2 = ((TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF *)IsInstClass((RuntimeObject*)L_22, TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF_il2cpp_TypeInfo_var));
		// if (parentTrack != null || parentTimeline != null)
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0079;
		}
	}
	{
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0093;
		}
	}

IL_0079:
	{
		// if (parentTimeline != null)
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_008b;
		}
	}
	{
		// parentTimeline.RemoveTrack(asset);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_29 = V_2;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_30 = ___asset0;
		NullCheck(L_29);
		TimelineAsset_RemoveTrack_mA9C62C0BF6211C4438914D17D06BBE9ACC6526F4(L_29, L_30, /*hidden argument*/NULL);
		// }
		goto IL_0093;
	}

IL_008b:
	{
		// parentTrack.RemoveSubTrack(asset);
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_31 = V_1;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_32 = ___asset0;
		NullCheck(L_31);
		bool L_33;
		L_33 = TrackAsset_RemoveSubTrack_mC1B91F46A5A1A699F056B562BE22C3634948EB35(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// if (group == null)
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_34 = ___group1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b0;
		}
	}
	{
		// asset.parent = asset.timelineAsset;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_36 = ___asset0;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_37 = ___asset0;
		NullCheck(L_37);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_38;
		L_38 = TrackAsset_get_timelineAsset_m431EB59954330BCB3A1978E535E816AB17C2E0F9(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		TrackAsset_set_parent_m5F4D45A3392934B161CAB4A6EF80DDFCABD942F2_inline(L_36, L_38, /*hidden argument*/NULL);
		// timeline.AddTrackInternal(asset);
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_39 = V_0;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_40 = ___asset0;
		NullCheck(L_39);
		TimelineAsset_AddTrackInternal_mD9899C7FA81E7BBC429BBCF7B3472B6A74B8AEA9(L_39, L_40, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b0:
	{
		// group.AddChild(asset);
		GroupTrack_t10A0FD299155E0DF489BBDF977D97E686CE16185 * L_41 = ___group1;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_42 = ___asset0;
		NullCheck(L_41);
		TrackAsset_AddChild_m65C4BDFAC66E427415CA4B8B337DB98D7E43BE38(L_41, L_42, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.Timeline.TrackBindingTypeAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackBindingTypeAttribute__ctor_mCA0817AAD11C2E4EC5FA6FF048FCA3E3D959D35A (TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// public TrackBindingTypeAttribute(Type type)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.type = type;
		Type_t * L_0 = ___type0;
		__this->set_type_0(L_0);
		// this.flags = TrackBindingFlags.All;
		__this->set_flags_1(1);
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.TrackBindingTypeAttribute::.ctor(System.Type,UnityEngine.Timeline.TrackBindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackBindingTypeAttribute__ctor_mB894A9CBF249EAAA36AF4DFA75B4815642FE6B61 (TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * __this, Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	{
		// public TrackBindingTypeAttribute(Type type, TrackBindingFlags flags)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.type = type;
		Type_t * L_0 = ___type0;
		__this->set_type_0(L_0);
		// this.flags = flags;
		int32_t L_1 = ___flags1;
		__this->set_flags_1(L_1);
		// }
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
// System.Void UnityEngine.Timeline.TrackClipTypeAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackClipTypeAttribute__ctor_m566BB9E77976D140DCB8CC176CB1D4398875B7D1 (TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59 * __this, Type_t * ___clipClass0, const RuntimeMethod* method)
{
	{
		// public TrackClipTypeAttribute(Type clipClass)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// inspectedType = clipClass;
		Type_t * L_0 = ___clipClass0;
		__this->set_inspectedType_0(L_0);
		// allowAutoCreate = true;
		__this->set_allowAutoCreate_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.TrackClipTypeAttribute::.ctor(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackClipTypeAttribute__ctor_mC8902C102FD7709D826A82C0FE01EF4B0A2CEB28 (TrackClipTypeAttribute_t2802C3E113456E193F0FA077805F87B7F8C99F59 * __this, Type_t * ___clipClass0, bool ___allowAutoCreate1, const RuntimeMethod* method)
{
	{
		// public TrackClipTypeAttribute(Type clipClass, bool allowAutoCreate)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// inspectedType = clipClass;
		Type_t * L_0 = ___clipClass0;
		__this->set_inspectedType_0(L_0);
		// allowAutoCreate = false;
		___allowAutoCreate1 = (bool)0;
		// }
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
// UnityEngine.Color UnityEngine.Timeline.TrackColorAttribute::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  TrackColorAttribute_get_color_mBC29E5F5C74136A05BDF1A7706375A84A8606AAF (TrackColorAttribute_t6EAC4E29A7C89815E16DD0735D129B7C3DCF6BF1 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Color; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_Color_0();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.TrackColorAttribute::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackColorAttribute__ctor_mE8F8BF09B3A86CA8FE2E3CC50CCBE823EFFB3BE0 (TrackColorAttribute_t6EAC4E29A7C89815E16DD0735D129B7C3DCF6BF1 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method)
{
	{
		// public TrackColorAttribute(float r, float g, float b)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// m_Color = new Color(r, g, b);
		float L_0 = ___r0;
		float L_1 = ___g1;
		float L_2 = ___b2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_Color_0(L_3);
		// }
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
// System.Void UnityEngine.Timeline.TrackMediaType::.ctor(UnityEngine.Timeline.TimelineAsset/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackMediaType__ctor_mD167F77E9E2CC8587B25D569D3A015E55302F6C5 (TrackMediaType_tEEA6E261CA121D473A1A9E06BCC2F7846CD48A98 * __this, int32_t ___mt0, const RuntimeMethod* method)
{
	{
		// public TrackMediaType(TimelineAsset.MediaType mt)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// m_MediaType = mt;
		int32_t L_0 = ___mt0;
		__this->set_m_MediaType_0(L_0);
		// }
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
// System.Single UnityEngine.Timeline.WeightUtility::NormalizeMixer(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightUtility_NormalizeMixer_m8DE9BD030EA4D8F0789FF212CCA774D08CF081B1 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___mixer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!mixer.IsValid())
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_0 = ___mixer0;
		bool L_1;
		L_1 = PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99(L_0, /*hidden argument*/PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_000e:
	{
		// int count = mixer.GetInputCount();
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2 = ___mixer0;
		int32_t L_3;
		L_3 = PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF(L_2, /*hidden argument*/PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_RuntimeMethod_var);
		V_0 = L_3;
		// float weight = 0.0f;
		V_1 = (0.0f);
		// for (int c = 0; c < count; c++)
		V_2 = 0;
		goto IL_002d;
	}

IL_001f:
	{
		// weight += mixer.GetInputWeight(c);
		float L_4 = V_1;
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_5 = ___mixer0;
		int32_t L_6 = V_2;
		float L_7;
		L_7 = PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E(L_5, L_6, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_RuntimeMethod_var);
		V_1 = ((float)il2cpp_codegen_add((float)L_4, (float)L_7));
		// for (int c = 0; c < count; c++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002d:
	{
		// for (int c = 0; c < count; c++)
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		// if (weight > Mathf.Epsilon && weight < 1)
		float L_11 = V_1;
		float L_12 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_005d;
		}
	}
	{
		float L_13 = V_1;
		if ((!(((float)L_13) < ((float)(1.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// for (int c = 0; c < count; c++)
		V_3 = 0;
		goto IL_0059;
	}

IL_0045:
	{
		// mixer.SetInputWeight(c, mixer.GetInputWeight(c) / weight);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_14 = ___mixer0;
		int32_t L_15 = V_3;
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_16 = ___mixer0;
		int32_t L_17 = V_3;
		float L_18;
		L_18 = PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E(L_16, L_17, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_RuntimeMethod_var);
		float L_19 = V_1;
		PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA(L_14, L_15, ((float)((float)L_18/(float)L_19)), /*hidden argument*/PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_RuntimeMethod_var);
		// for (int c = 0; c < count; c++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0059:
	{
		// for (int c = 0; c < count; c++)
		int32_t L_21 = V_3;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0045;
		}
	}

IL_005d:
	{
		// return Mathf.Clamp01(weight);
		float L_23 = V_1;
		float L_24;
		L_24 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_23, /*hidden argument*/NULL);
		return L_24;
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
// System.Void UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__45__ctor_mF7CC587C62188EEF08968A27427D3B21BA76218F (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__45_System_IDisposable_Dispose_mA8FD8C2FF4E36304C169F1160F5FA70194638560 (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__45_MoveNext_m733F7246AF8AB73795C55E1E48D09DE88BFEF7C9 (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AnimationPlayableBinding.Create(name, this); }
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_6 = V_1;
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_7;
		L_7 = AnimationPlayableBinding_Create_m2624B49FBCC9B306B0D2C8608CDAD6A96A165DF4(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AnimationPlayableBinding.Create(name, this); }
		return (bool)0;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__45_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_m95704E1CE084CC20C489B5F73BB5EB3BDC9C2357 (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__45_System_Collections_IEnumerator_Reset_mD5504856C0BC2A12424B865C4F0DBD84458D2653 (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__45_System_Collections_IEnumerator_Reset_mD5504856C0BC2A12424B865C4F0DBD84458D2653_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__45_System_Collections_IEnumerator_get_Current_m39BE09D85DC19496053FD2A39A7087FECD59AD10 (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mE3DE7BEFA163CEBC34F71BF42646F712BB92381D (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * L_3 = (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__45__ctor_mF7CC587C62188EEF08968A27427D3B21BA76218F(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * L_4 = V_0;
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__45_System_Collections_IEnumerable_GetEnumerator_m42A0FF20F97A78BD38CED42E3D46B1D5334875EC (U3Cget_outputsU3Ed__45_tFF580812E518B541F825FF9366834AA1399A8F60 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mE3DE7BEFA163CEBC34F71BF42646F712BB92381D(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Timeline.AnimationPlayableAsset/AnimationPlayableAssetUpgrade::ConvertRotationToEuler(UnityEngine.Timeline.AnimationPlayableAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableAssetUpgrade_ConvertRotationToEuler_m22C5F8E47A3F0945EBE3AD9635B1551D58B038B4 (AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * ___asset0, const RuntimeMethod* method)
{
	{
		// asset.m_EulerAngles = asset.m_Rotation.eulerAngles;
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_0 = ___asset0;
		AnimationPlayableAsset_t3BCE00D695D1DA60BE1EE4207CCA50FD5B5D609E * L_1 = ___asset0;
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = L_1->get_address_of_m_Rotation_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_m_EulerAngles_6(L_3);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__49__ctor_m722545F04B96B2D87A146E6DF006D44932ADC9EA (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__49_System_IDisposable_Dispose_mEB06BD8FF3361F17E138ECA19B1A9DA2C6469F16 (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__49_MoveNext_m42CBF555DD75681C3D93FA928BFA295FCA134749 (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AnimationPlayableBinding.Create(name, this); }
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_6 = V_1;
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_7;
		L_7 = AnimationPlayableBinding_Create_m2624B49FBCC9B306B0D2C8608CDAD6A96A165DF4(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AnimationPlayableBinding.Create(name, this); }
		return (bool)0;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__49_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_mD62E6F64B2828E3DF92A7B64248C28FD938C89A0 (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__49_System_Collections_IEnumerator_Reset_mF9B1CDEF62344863013AE9DCF1E589868F5C293C (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__49_System_Collections_IEnumerator_Reset_mF9B1CDEF62344863013AE9DCF1E589868F5C293C_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__49_System_Collections_IEnumerator_get_Current_m25E0506B561BBA14674DEDE13AF75DF52FCAC997 (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mC178719F5120F22B42E031F23ACC39AA886A619E (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * L_3 = (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__49__ctor_m722545F04B96B2D87A146E6DF006D44932ADC9EA(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * L_4 = V_0;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__49_System_Collections_IEnumerable_GetEnumerator_mF8EC958D8F336C04B9298626E46E9A08661518FA (U3Cget_outputsU3Ed__49_tA7041CD8BC6817E1A88274A283B533174DDCADB1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_mC178719F5120F22B42E031F23ACC39AA886A619E(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade::ConvertRotationsToEuler(UnityEngine.Timeline.AnimationTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTrackUpgrade_ConvertRotationsToEuler_mDA82B316756085D07B9BF4CD16CA508633F7CB3C (AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * ___track0, const RuntimeMethod* method)
{
	{
		// track.m_EulerAngles = track.m_Rotation.eulerAngles;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_0 = ___track0;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_1 = ___track0;
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = L_1->get_address_of_m_Rotation_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_m_EulerAngles_40(L_3);
		// track.m_InfiniteClipOffsetEulerAngles = track.m_OpenClipOffsetRotation.eulerAngles;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_4 = ___track0;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_5 = ___track0;
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_6 = L_5->get_address_of_m_OpenClipOffsetRotation_46();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_m_InfiniteClipOffsetEulerAngles_33(L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade::ConvertRootMotion(UnityEngine.Timeline.AnimationTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTrackUpgrade_ConvertRootMotion_m9E030EFDDA91DDF57A1E97CC027DDB2D2B05AABF (AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * ___track0, const RuntimeMethod* method)
{
	{
		// track.m_TrackOffset = TrackOffset.Auto; // loaded tracks should use legacy mode
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_0 = ___track0;
		NullCheck(L_0);
		L_0->set_m_TrackOffset_43(2);
		// if (!track.m_ApplyOffsets)
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_1 = ___track0;
		NullCheck(L_1);
		bool L_2 = L_1->get_m_ApplyOffsets_48();
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// track.m_Position = Vector3.zero;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_3 = ___track0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_m_Position_39(L_4);
		// track.m_EulerAngles = Vector3.zero;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_5 = ___track0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_m_EulerAngles_40(L_6);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.AnimationTrack/AnimationTrackUpgrade::ConvertInfiniteTrack(UnityEngine.Timeline.AnimationTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTrackUpgrade_ConvertInfiniteTrack_mE14041ED71A28792840D992F4A77BD276BB11F7A (AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * ___track0, const RuntimeMethod* method)
{
	{
		// track.m_InfiniteClip = track.m_AnimClip;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_0 = ___track0;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_1 = ___track0;
		NullCheck(L_1);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_2 = ((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)L_1)->get_m_AnimClip_6();
		NullCheck(L_0);
		L_0->set_m_InfiniteClip_44(L_2);
		// track.m_AnimClip = null;
		AnimationTrack_t084E3566BF303D0111A609A5499175C4A46281B4 * L_3 = ___track0;
		NullCheck(L_3);
		((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)L_3)->set_m_AnimClip_6((AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 *)NULL);
		// }
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
// System.Void UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__16__ctor_m2741E88E3CBC8E2EF3D1FF17B9D093EC3FA7CECE (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__16_System_IDisposable_Dispose_m9749596384BB2F7DB029ABDE234B8125144F65F6 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__16_MoveNext_mEE89CB8758F57D52532EFA1E1A7A2BD8DD9B1EF7 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AudioPlayableBinding.Create(name, this); }
		AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * L_6 = V_1;
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_7;
		L_7 = AudioPlayableBinding_Create_mC19AD18375E1CE8EE7092AB97C8652DDF6DD9228(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AudioPlayableBinding.Create(name, this); }
		return (bool)0;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__16_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_m8D552CC1D615D680FC87BE3A84DF399C418C0438 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__16_System_Collections_IEnumerator_Reset_mF073D8D200A1051F04CBCEFF145288129BA0848A (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__16_System_Collections_IEnumerator_Reset_mF073D8D200A1051F04CBCEFF145288129BA0848A_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__16_System_Collections_IEnumerator_get_Current_mEF6D8A013EFF1E52023304E1DC6522137779F344 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__16_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m59B1333D6AE2813EC1F1432C9E222CCF8F484837 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * L_3 = (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__16__ctor_m2741E88E3CBC8E2EF3D1FF17B9D093EC3FA7CECE(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * L_4 = V_0;
		AudioPlayableAsset_t0791084181F09B273947F7CF237F8883454CFA7D * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__16_System_Collections_IEnumerable_GetEnumerator_m34832A2C60E9E14371ED568541CC861C5B2F9396 (U3Cget_outputsU3Ed__16_tF56B205DA0112B52E3CE5B81A73B2D73708A8840 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__16_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m59B1333D6AE2813EC1F1432C9E222CCF8F484837(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__4__ctor_m91FD8564B6EB9ED62A780D05768A6D508F9C1734 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__4_System_IDisposable_Dispose_m1647BF61A1B1794BC9A9B05F8D8BDCEC5F55B465 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__4_MoveNext_m63B17497B2C521AE17E8DB753F5300E4CCCB3CF7 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AudioPlayableBinding.Create(name, this); }
		AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * L_6 = V_1;
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_7;
		L_7 = AudioPlayableBinding_Create_mC19AD18375E1CE8EE7092AB97C8652DDF6DD9228(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// get { yield return AudioPlayableBinding.Create(name, this); }
		return (bool)0;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_m95C76BD4D2A7645C1193C840F2D56447DCAF2956 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__4_System_Collections_IEnumerator_Reset_mDE4E4AE8E19BFCC8EBEDC25883B3A222A78744C8 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__4_System_Collections_IEnumerator_Reset_mDE4E4AE8E19BFCC8EBEDC25883B3A222A78744C8_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__4_System_Collections_IEnumerator_get_Current_m850F368B34C8C75D07F45A8D3374E84F9DA5399B (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m04EEB7F8C75D774F41105BD8CD5669DE607E7F3A (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * L_3 = (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__4__ctor_m91FD8564B6EB9ED62A780D05768A6D508F9C1734(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * L_4 = V_0;
		AudioTrack_tA4F03C9ADFAB00A93B22CA4B02F2298B5FBC97C5 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.AudioTrack/<get_outputs>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mADD465F4C6DFF5DC27C9ACA88963AC20D0BC0243 (U3Cget_outputsU3Ed__4_tC1BCF21AFFC1A41D89FB2C06BB2C03BD0F91CDE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m04EEB7F8C75D774F41105BD8CD5669DE607E7F3A(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetControlableScriptsU3Ed__39__ctor_m6C7CD0B61AE6081F5EC31861ED9E3071B2898EE5 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetControlableScriptsU3Ed__39_System_IDisposable_Dispose_m6275C7D72468BEB5C8CE0FCB84E6719A6E2DB31B (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetControlableScriptsU3Ed__39_MoveNext_m89872F4BC3F82B88945DD14E906AC2B29DAB6037 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C3D02018B86D04DA3185FB512F1B286D9157BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITimeControl_t5C5A7FD4F8C7444653D81359F541100F74BFC239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (root == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_root_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0027:
	{
		// foreach (var script in root.GetComponentsInChildren<MonoBehaviour>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_root_3();
		NullCheck(L_5);
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C3D02018B86D04DA3185FB512F1B286D9157BE7(L_5, /*hidden argument*/GameObject_GetComponentsInChildren_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C3D02018B86D04DA3185FB512F1B286D9157BE7_RuntimeMethod_var);
		__this->set_U3CU3E7__wrap1_5(L_6);
		__this->set_U3CU3E7__wrap2_6(0);
		goto IL_007c;
	}

IL_0041:
	{
		// foreach (var script in root.GetComponentsInChildren<MonoBehaviour>())
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_7 = __this->get_U3CU3E7__wrap1_5();
		int32_t L_8 = __this->get_U3CU3E7__wrap2_6();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// if (script is ITimeControl)
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_11 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_11, ITimeControl_t5C5A7FD4F8C7444653D81359F541100F74BFC239_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		// yield return script;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_12 = V_1;
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0067:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006e:
	{
		int32_t L_13 = __this->get_U3CU3E7__wrap2_6();
		__this->set_U3CU3E7__wrap2_6(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_007c:
	{
		// foreach (var script in root.GetComponentsInChildren<MonoBehaviour>())
		int32_t L_14 = __this->get_U3CU3E7__wrap2_6();
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_15 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_5((MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.MonoBehaviour UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * U3CGetControlableScriptsU3Ed__39_System_Collections_Generic_IEnumeratorU3CUnityEngine_MonoBehaviourU3E_get_Current_m3AB512F70B765D948C1AE5F1BB1D33B97B6780B2 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetControlableScriptsU3Ed__39_System_Collections_IEnumerator_Reset_m2228263CF03F82FA0DA805FE9FC34986CD426152 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetControlableScriptsU3Ed__39_System_Collections_IEnumerator_Reset_m2228263CF03F82FA0DA805FE9FC34986CD426152_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetControlableScriptsU3Ed__39_System_Collections_IEnumerator_get_Current_m5425AC3B235029354C382AF998AF079079D55365 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour> UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetControlableScriptsU3Ed__39_System_Collections_Generic_IEnumerableU3CUnityEngine_MonoBehaviourU3E_GetEnumerator_mD3D87FAFD4EA3D8449241E645484BEFC046EE2B7 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * L_3 = (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 *)il2cpp_codegen_object_new(U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168_il2cpp_TypeInfo_var);
		U3CGetControlableScriptsU3Ed__39__ctor_m6C7CD0B61AE6081F5EC31861ED9E3071B2898EE5(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * L_4 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetControlableScriptsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_mBE89F8F560ABA22E966D54166F647B4FB181A3D3 (U3CGetControlableScriptsU3Ed__39_tAD6EBED65E0F5D6C74FF9F1C1A76229481DD4168 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetControlableScriptsU3Ed__39_System_Collections_Generic_IEnumerableU3CUnityEngine_MonoBehaviourU3E_GetEnumerator_mD3D87FAFD4EA3D8449241E645484BEFC046EE2B7(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Timeline.Extrapolation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m21B88A586800619E86D20E57043F374E13FE888C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * L_0 = (U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B *)il2cpp_codegen_object_new(U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC6E71DB1CFD2185C6FB0B58E0756F074E87EB60F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.Extrapolation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC6E71DB1CFD2185C6FB0B58E0756F074E87EB60F (U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Timeline.Extrapolation/<>c::<SortClipsByStartTime>b__2_0(UnityEngine.Timeline.TimelineClip,UnityEngine.Timeline.TimelineClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortClipsByStartTimeU3Eb__2_0_mE799A55C8A9FA2BDD5701DDFFE6FA266954BB29B (U3CU3Ec_tC3CD6EA5F6338470E9FA04A495E4F99EDDDED98B * __this, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * ___clip10, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * ___clip21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// Array.Sort(orderedClips, (clip1, clip2) => clip1.start.CompareTo(clip2.start));
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_0 = ___clip10;
		NullCheck(L_0);
		double L_1;
		L_1 = TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_2 = ___clip21;
		NullCheck(L_2);
		double L_3;
		L_3 = TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE((double*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Boolean UnityEngine.Timeline.SignalReceiver/EventKeyValue::TryGetValue(UnityEngine.Timeline.SignalAsset,UnityEngine.Events.UnityEvent&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventKeyValue_TryGetValue_m302DF1C249E28FBF97D09940DBD324817CAEB776 (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * ___key0, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m09C9DEE62662FC58E331F93EAB8C703397CE8A52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var index = m_Signals.IndexOf(key);
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_0 = __this->get_m_Signals_0();
		SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * L_1 = ___key0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F(L_0, L_1, /*hidden argument*/List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F_RuntimeMethod_var);
		V_0 = L_2;
		// if (index != -1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// value = m_Events[index];
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** L_4 = ___value1;
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_5 = __this->get_m_Events_1();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7;
		L_7 = List_1_get_Item_m09C9DEE62662FC58E331F93EAB8C703397CE8A52_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m09C9DEE62662FC58E331F93EAB8C703397CE8A52_RuntimeMethod_var);
		*((RuntimeObject **)L_4) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)L_7);
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// value = null;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** L_8 = ___value1;
		*((RuntimeObject **)L_8) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Timeline.SignalReceiver/EventKeyValue::Append(UnityEngine.Timeline.SignalAsset,UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventKeyValue_Append_m98EA408FF910AC9B52DC0CDE344763B8113AF6C4 (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * ___key0, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6975538FCE399C36FA04A735EA064CF30564DFFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94B97993228CEB0FAA98A544403D75403C7098FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Signals.Add(key);
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_0 = __this->get_m_Signals_0();
		SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * L_1 = ___key0;
		NullCheck(L_0);
		List_1_Add_m94B97993228CEB0FAA98A544403D75403C7098FB(L_0, L_1, /*hidden argument*/List_1_Add_m94B97993228CEB0FAA98A544403D75403C7098FB_RuntimeMethod_var);
		// m_Events.Add(value);
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_2 = __this->get_m_Events_1();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = ___value1;
		NullCheck(L_2);
		List_1_Add_m6975538FCE399C36FA04A735EA064CF30564DFFB(L_2, L_3, /*hidden argument*/List_1_Add_m6975538FCE399C36FA04A735EA064CF30564DFFB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.SignalReceiver/EventKeyValue::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventKeyValue_Remove_m517FB51B4D64EBDDDA5873D3B4221C05DF3DF5B7 (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (idx != -1)
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		// m_Signals.RemoveAt(idx);
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_1 = __this->get_m_Signals_0();
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9(L_1, L_2, /*hidden argument*/List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9_RuntimeMethod_var);
		// m_Events.RemoveAt(idx);
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_3 = __this->get_m_Events_1();
		int32_t L_4 = ___idx0;
		NullCheck(L_3);
		List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA(L_3, L_4, /*hidden argument*/List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.SignalReceiver/EventKeyValue::Remove(UnityEngine.Timeline.SignalAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventKeyValue_Remove_m9FB4914866D3855EAE5428A4C8C08ABCF48BF20D (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var idx = m_Signals.IndexOf(key);
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_0 = __this->get_m_Signals_0();
		SignalAsset_tDE6B642B2AFE5930E9628AE372FB961309A18F82 * L_1 = ___key0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F(L_0, L_1, /*hidden argument*/List_1_IndexOf_m30D37AD7F0406367A74FD1B4B95B5A12C528559F_RuntimeMethod_var);
		V_0 = L_2;
		// if (idx != -1)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		// m_Signals.RemoveAt(idx);
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_4 = __this->get_m_Signals_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9(L_4, L_5, /*hidden argument*/List_1_RemoveAt_mA8CEC98EA4B4DBA6C3968B845CFC73B98021FBC9_RuntimeMethod_var);
		// m_Events.RemoveAt(idx);
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_6 = __this->get_m_Events_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m40B1774C5E72BD8A2AF918D2B0A3BA4B1A90EADA_RuntimeMethod_var);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Timeline.SignalAsset> UnityEngine.Timeline.SignalReceiver/EventKeyValue::get_signals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * EventKeyValue_get_signals_mB7ADB21FDB269ADBB7E376D7D3D2A5F82A560E97 (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Signals; }
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_0 = __this->get_m_Signals_0();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.UnityEvent> UnityEngine.Timeline.SignalReceiver/EventKeyValue::get_events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * EventKeyValue_get_events_m962ED26FDEEBA97A123340D00DA45F8308C92C1D (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Events; }
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_0 = __this->get_m_Events_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.SignalReceiver/EventKeyValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventKeyValue__ctor_m7756D22B5E9EBB570B26990B92F35FFCE71F37BB (EventKeyValue_t784224A19510B6C630227414CCBB4D450929035A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9B824AABAB3775DE1FD2A9490197732E0A08CAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC1EE79EAB4FF8660B2250AB48EF4E04285D9B0B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SignalAsset> m_Signals = new List<SignalAsset>();
		List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE * L_0 = (List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE *)il2cpp_codegen_object_new(List_1_tB5B1DBB48E991326740D171B346F2AFEE54E37BE_il2cpp_TypeInfo_var);
		List_1__ctor_mC1EE79EAB4FF8660B2250AB48EF4E04285D9B0B1(L_0, /*hidden argument*/List_1__ctor_mC1EE79EAB4FF8660B2250AB48EF4E04285D9B0B1_RuntimeMethod_var);
		__this->set_m_Signals_0(L_0);
		// List<UnityEvent> m_Events = new List<UnityEvent>();
		List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 * L_1 = (List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42 *)il2cpp_codegen_object_new(List_1_t6BA9741ADF873387BF0AE32ABEEC00FF38623D42_il2cpp_TypeInfo_var);
		List_1__ctor_m9B824AABAB3775DE1FD2A9490197732E0A08CAF5(L_1, /*hidden argument*/List_1__ctor_m9B824AABAB3775DE1FD2A9490197732E0A08CAF5_RuntimeMethod_var);
		__this->set_m_Events_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Timeline.TimeNotificationBehaviour/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB1B63B41C036B0663566ED4A4A338EA4DD316F2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * L_0 = (U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 *)il2cpp_codegen_object_new(U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFBE2A0B90CEB3A896D0BD656B68397641539E83B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.TimeNotificationBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFBE2A0B90CEB3A896D0BD656B68397641539E83B (U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Timeline.TimeNotificationBehaviour/<>c::<SortNotifications>b__12_0(UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry,UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortNotificationsU3Eb__12_0_mEC5EA8B22A42D01BA7BFBEC22866FEB1592D2AD3 (U3CU3Ec_t7901B69636C5617372236ED0E46068C32DE03D82 * __this, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50  ___x0, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50  ___y1, const RuntimeMethod* method)
{
	{
		// m_Notifications.Sort((x, y) => x.time.CompareTo(y.time));
		double* L_0 = (&___x0)->get_address_of_time_0();
		NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50  L_1 = ___y1;
		double L_2 = L_1.get_time_0();
		int32_t L_3;
		L_3 = Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE((double*)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
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
// Conversion methods for marshalling of: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_pinvoke(const NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50& unmarshaled, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_pinvoke& marshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'NotificationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_pinvoke_back(const NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_pinvoke& marshaled, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50& unmarshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'NotificationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_pinvoke_cleanup(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_com(const NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50& unmarshaled, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_com& marshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'NotificationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_com_back(const NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_com& marshaled, NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50& unmarshaled)
{
	Exception_t* ___payload_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'payload' of type 'NotificationEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___payload_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
IL2CPP_EXTERN_C void NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshal_com_cleanup(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_triggerInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_triggerInEditor_m6698229A7C46430F06F2903EEC391D00D3726232 (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method)
{
	{
		// get { return (flags & NotificationFlags.TriggerInEditMode) != 0; }
		int16_t L_0 = __this->get_flags_3();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NotificationEntry_get_triggerInEditor_m6698229A7C46430F06F2903EEC391D00D3726232_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * _thisAdjusted = reinterpret_cast<NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NotificationEntry_get_triggerInEditor_m6698229A7C46430F06F2903EEC391D00D3726232(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_prewarm_m617DEB8E7EA0F45BE034940050CB2CB8A56490B4 (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method)
{
	{
		// get { return (flags & NotificationFlags.Retroactive) != 0; }
		int16_t L_0 = __this->get_flags_3();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NotificationEntry_get_prewarm_m617DEB8E7EA0F45BE034940050CB2CB8A56490B4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * _thisAdjusted = reinterpret_cast<NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NotificationEntry_get_prewarm_m617DEB8E7EA0F45BE034940050CB2CB8A56490B4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::get_triggerOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotificationEntry_get_triggerOnce_mAE24C0655330FD8F4DD6702A999D7A59BFFFB60E (NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * __this, const RuntimeMethod* method)
{
	{
		// get { return (flags & NotificationFlags.TriggerOnce) != 0; }
		int16_t L_0 = __this->get_flags_3();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NotificationEntry_get_triggerOnce_mAE24C0655330FD8F4DD6702A999D7A59BFFFB60E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 * _thisAdjusted = reinterpret_cast<NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NotificationEntry_get_triggerOnce_mAE24C0655330FD8F4DD6702A999D7A59BFFFB60E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Timeline.TimeUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA5B947E84BA46AA9C9F086C4C1E70B02A0E4B157 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * L_0 = (U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A *)il2cpp_codegen_object_new(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m555AD22EAA2F12C425BBFAD6294C1DBD93537284(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.TimeUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m555AD22EAA2F12C425BBFAD6294C1DBD93537284 (U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TimeUtility/<>c::<ParseTimeCode>b__14_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CParseTimeCodeU3Eb__14_0_m846A36DFC998916AAC8A7E02E41BE5AF0690E2BA (U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeCode = RemoveChar(timeCode, c => char.IsWhiteSpace(c));
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Timeline.TimeUtility/<>c::<ParseTimeCode>b__14_1(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CParseTimeCodeU3Eb__14_1_mD686DDC0A1E53CFDDF5906CCD0C7D96C8380E531 (U3CU3Ec_tA003B02D0D92E31C8781D1F1BD942A4030D6C57A * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		// string stripped = RemoveChar(lastSection, c => c == '[' || c == ']');
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)91))))
		{
			goto IL_000b;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)93)))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
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
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27__ctor_m9C7020B9F262952DDBFD3CDCAD3C16E65BADB5C3 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_System_IDisposable_Dispose_m9BBDBE73F1CE7EE9A4196661C0230A98A823BC6F (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3Cget_outputsU3Ed__27_U3CU3Em__Finally2_m82D0CD0F06F0A03F9F2A9B017F522DD73BD6FB0E(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3Cget_outputsU3Ed__27_U3CU3Em__Finally1_m5AC10A522583DD9F21C0891CEA3CEBFA15744007(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__27_MoveNext_mBC83DD5719187C060279D0D609F70BE3FE9FC7AA (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD7496573580AE787CDDC33F24EBBACF6AC0831FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0288A12A2D205DFFE771A659BD13AA8F95ED003D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t83FC1ABBDBD022F14C164E6C51B4EDD08B38CA03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * V_2 = NULL;
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * V_3 = NULL;
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0085;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00cc;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var outputTracks in GetOutputTracks())
			TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = TimelineAsset_GetOutputTracks_mBAE1A3EF9E508AC8B642C390C1AEA436F702C753(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>::GetEnumerator() */, IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a7;
		}

IL_003e:
		{
			// foreach (var outputTracks in GetOutputTracks())
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_7);
			TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_8;
			L_8 = InterfaceFuncInvoker0< TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Timeline.TrackAsset>::get_Current() */, IEnumerator_1_t0288A12A2D205DFFE771A659BD13AA8F95ED003D_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			// foreach (var output in outputTracks.outputs)
			TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs() */, L_9);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>::GetEnumerator() */, IEnumerable_1_tD7496573580AE787CDDC33F24EBBACF6AC0831FD_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_5(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_008d;
		}

IL_0065:
		{
			// foreach (var output in outputTracks.outputs)
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_12);
			PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_13;
			L_13 = InterfaceFuncInvoker0< PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding>::get_Current() */, IEnumerator_1_t83FC1ABBDBD022F14C164E6C51B4EDD08B38CA03_il2cpp_TypeInfo_var, L_12);
			V_4 = L_13;
			// yield return output;
			PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_14 = V_4;
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00cc;
		}

IL_0085:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_008d:
		{
			// foreach (var output in outputTracks.outputs)
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0065;
			}
		}

IL_009a:
		{
			U3Cget_outputsU3Ed__27_U3CU3Em__Finally2_m82D0CD0F06F0A03F9F2A9B017F522DD73BD6FB0E(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_5((RuntimeObject*)NULL);
		}

IL_00a7:
		{
			// foreach (var outputTracks in GetOutputTracks())
			RuntimeObject* L_17 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00b4:
		{
			U3Cget_outputsU3Ed__27_U3CU3Em__Finally1_m5AC10A522583DD9F21C0891CEA3CEBFA15744007(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00cc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c5;
	}

FAULT_00c5:
	{ // begin fault (depth: 1)
		U3Cget_outputsU3Ed__27_System_IDisposable_Dispose_m9BBDBE73F1CE7EE9A4196661C0230A98A823BC6F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(197)
	} // end fault
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_U3CU3Em__Finally1_m5AC10A522583DD9F21C0891CEA3CEBFA15744007 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_U3CU3Em__Finally2_m82D0CD0F06F0A03F9F2A9B017F522DD73BD6FB0E (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__27_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_mCCE24B3EAE880C8ED192E8B3BC272152491E1E9A (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__27_System_Collections_IEnumerator_Reset_m2FBDBE509102516DEF4C04DEAE7F2CA8F07EBC5B (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__27_System_Collections_IEnumerator_Reset_m2FBDBE509102516DEF4C04DEAE7F2CA8F07EBC5B_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__27_System_Collections_IEnumerator_get_Current_m0E876848146D8F3FB95E3F80539C28FEE6F36C55 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__27_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m9309BB49E87B2AA564A6790BCB0D914AAD632A27 (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * L_3 = (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__27__ctor_m9C7020B9F262952DDBFD3CDCAD3C16E65BADB5C3(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * L_4 = V_0;
		TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__27_System_Collections_IEnumerable_GetEnumerator_mCCF51C2F894CAA534376D835BFCF70D6D99CB4DB (U3Cget_outputsU3Ed__27_t2088BC36C3D34E9C5BB445228666A34EC4CCAEAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__27_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m9309BB49E87B2AA564A6790BCB0D914AAD632A27(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Timeline.TimelineAsset/EditorSettings::get_fps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EditorSettings_get_fps_mE2DEF80FD36EE2E46CF81B381334E2313E0514A4 (EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * __this, const RuntimeMethod* method)
{
	{
		// return m_Framerate;
		float L_0 = __this->get_m_Framerate_3();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/EditorSettings::set_fps(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSettings_set_fps_m69382750A7B21A8B0B09CA130D66DCA8A94D0C02 (EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Framerate = GetValidFramerate(value);
		float L_0 = ___value0;
		float L_1;
		L_1 = TimelineAsset_GetValidFramerate_m025889E2E70594A32DA925A534D97B78A43C5916(L_0, /*hidden argument*/NULL);
		__this->set_m_Framerate_3(L_1);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TimelineAsset/EditorSettings::get_scenePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorSettings_get_scenePreview_mF6FBD2A1A99233EC4B50F53B7D4183BB34F02FFD (EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * __this, const RuntimeMethod* method)
{
	{
		// get => m_ScenePreview;
		bool L_0 = __this->get_m_ScenePreview_4();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/EditorSettings::set_scenePreview(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSettings_set_scenePreview_mB4328ECFC3DE27486CE2A9D9E6E0420A73367572 (EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScenePreview = value;
		bool L_0 = ___value0;
		__this->set_m_ScenePreview_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/EditorSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSettings__ctor_m9A0117E5124BEFC9999BDAC28AD3DBD35A635642 (EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector, SerializeField] float m_Framerate = kDefaultFps;
		IL2CPP_RUNTIME_CLASS_INIT(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var);
		float L_0 = ((EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields*)il2cpp_codegen_static_fields_for(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var))->get_kDefaultFps_2();
		__this->set_m_Framerate_3(L_0);
		// [HideInInspector, SerializeField] bool m_ScenePreview = true;
		__this->set_m_ScenePreview_4((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Timeline.TimelineAsset/EditorSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSettings__cctor_m76338C813A1E546D02AD65B9ABA1264D8B27ACB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly float kMinFps = (float)TimeUtility.kFrameRateEpsilon;
		IL2CPP_RUNTIME_CLASS_INIT(TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_il2cpp_TypeInfo_var);
		double L_0 = ((TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_StaticFields*)il2cpp_codegen_static_fields_for(TimeUtility_t533BDAD416F243B1BF9B028765D2E085F028B982_il2cpp_TypeInfo_var))->get_kFrameRateEpsilon_1();
		((EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields*)il2cpp_codegen_static_fields_for(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var))->set_kMinFps_0(((float)((float)L_0)));
		// internal static readonly float kMaxFps = 1000.0f;
		((EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields*)il2cpp_codegen_static_fields_for(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var))->set_kMaxFps_1((1000.0f));
		// internal static readonly float kDefaultFps = 60.0f;
		((EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_StaticFields*)il2cpp_codegen_static_fields_for(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B_il2cpp_TypeInfo_var))->set_kDefaultFps_2((60.0f));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Timeline.TimelineClip/TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal(UnityEngine.Timeline.TimelineClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineClipUpgrade_UpgradeClipInFromGlobalToLocal_m3A11A7F9E5BF6CAAD47EEFE92E9ED23B152EB36E (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * ___clip0, const RuntimeMethod* method)
{
	{
		// if (clip.m_ClipIn > 0 && clip.m_TimeScale > float.Epsilon)
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_0 = ___clip0;
		NullCheck(L_0);
		double L_1 = L_0->get_m_ClipIn_10();
		if ((!(((double)L_1) > ((double)(0.0)))))
		{
			goto IL_0035;
		}
	}
	{
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_2 = ___clip0;
		NullCheck(L_2);
		double L_3 = L_2->get_m_TimeScale_13();
		if ((!(((double)L_3) > ((double)(1.4012984643248171E-45)))))
		{
			goto IL_0035;
		}
	}
	{
		// clip.m_ClipIn *= clip.m_TimeScale;
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_4 = ___clip0;
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_5 = L_4;
		NullCheck(L_5);
		double L_6 = L_5->get_m_ClipIn_10();
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_7 = ___clip0;
		NullCheck(L_7);
		double L_8 = L_7->get_m_TimeScale_13();
		NullCheck(L_5);
		L_5->set_m_ClipIn_10(((double)il2cpp_codegen_multiply((double)L_6, (double)L_8)));
	}

IL_0035:
	{
		// }
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
// System.Void UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC390D69666AFC986CF35B09D8ECC0BDF167DB5A1 (U3CU3Ec__DisplayClass0_0_tCD4BCCD14D5D44653E7A8303330AA0D710568CF7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0::<GenerateUniqueActorName>b__0(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CGenerateUniqueActorNameU3Eb__0_m7F9A8F8D12B6239F55B1B062EFE6AB69CEF474F7 (U3CU3Ec__DisplayClass0_0_tCD4BCCD14D5D44653E7A8303330AA0D710568CF7 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___x0, const RuntimeMethod* method)
{
	{
		// if (!tracks.Exists(x => ((object)x) != null && x.name == name))
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = ___x0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_1 = ___x0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_name_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m95D89E6088329E822ABBBC6D48AAA105F921DAD1 (U3CU3Ec__DisplayClass0_1_t57765B3FF6BD48016068D30508D5A2CBAE9DB5DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_1::<GenerateUniqueActorName>b__1(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_1_U3CGenerateUniqueActorNameU3Eb__1_mE7F81B7429124CA5C777DDCE3944C8CA85FC3869 (U3CU3Ec__DisplayClass0_1_t57765B3FF6BD48016068D30508D5A2CBAE9DB5DB * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___x0, const RuntimeMethod* method)
{
	{
		// if (!tracks.Exists(x => ((object)x) != null && x.name == result))
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = ___x0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_1 = ___x0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_result_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void UnityEngine.Timeline.TrackAsset/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m77D099DCDC88C76AFD400B4BA7C92AC738F539D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * L_0 = (U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B *)il2cpp_codegen_object_new(U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m20889FF26C1846F427AB00E04F8AD4A1A67FC8EA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.TrackAsset/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20889FF26C1846F427AB00E04F8AD4A1A67FC8EA (U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Timeline.TrackAsset/<>c::<SortClips>b__121_0(UnityEngine.Timeline.TimelineClip,UnityEngine.Timeline.TimelineClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortClipsU3Eb__121_0_m9D9CF274C2A52EDBB3B44244A11846B23BC4E7B9 (U3CU3Ec_tDF2920D60FD87F7E2BA462C15FEF6A6BC177AD8B * __this, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * ___clip10, TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * ___clip21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// Array.Sort(clips, (clip1, clip2) => clip1.start.CompareTo(clip2.start));
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_0 = ___clip10;
		NullCheck(L_0);
		double L_1;
		L_1 = TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_2 = ___clip21;
		NullCheck(L_2);
		double L_3;
		L_3 = TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE((double*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__65__ctor_mC3A51971E84B4CB65E8D8F556ECA11A7C9F8AD0B (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__65_System_IDisposable_Dispose_m8D9E13E4EE2D483CAF11045CACC65015AD39B657 (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_outputsU3Ed__65_MoveNext_m6167A0122045B95666AECE70441020A4645EDAD4 (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m51F88EBE372781AD61DDFF12ED10C82FC9D72283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4592B3A698ED3D11B895E2FEFB83AAD76AD4B104_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * V_1 = NULL;
	TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * V_2 = NULL;
	Type_t * V_3 = NULL;
	Type_t * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!s_TrackBindingTypeAttributeCache.TryGetValue(GetType(), out attribute))
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * L_4 = ((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields*)il2cpp_codegen_static_fields_for(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var))->get_s_TrackBindingTypeAttributeCache_25();
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_5 = V_1;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m4592B3A698ED3D11B895E2FEFB83AAD76AD4B104(L_4, L_6, (TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m4592B3A698ED3D11B895E2FEFB83AAD76AD4B104_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// attribute = (TrackBindingTypeAttribute)Attribute.GetCustomAttribute(GetType(), typeof(TrackBindingTypeAttribute));
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_8 = V_1;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_8, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_12;
		L_12 = Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25(L_9, L_11, /*hidden argument*/NULL);
		V_2 = ((TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 *)CastclassClass((RuntimeObject*)L_12, TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780_il2cpp_TypeInfo_var));
		// s_TrackBindingTypeAttributeCache.Add(GetType(), attribute);
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var);
		Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * L_13 = ((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields*)il2cpp_codegen_static_fields_for(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_il2cpp_TypeInfo_var))->get_s_TrackBindingTypeAttributeCache_25();
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_14 = V_1;
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_14, /*hidden argument*/NULL);
		TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * L_16 = V_2;
		NullCheck(L_13);
		Dictionary_2_Add_m51F88EBE372781AD61DDFF12ED10C82FC9D72283(L_13, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m51F88EBE372781AD61DDFF12ED10C82FC9D72283_RuntimeMethod_var);
	}

IL_005e:
	{
		// var trackBindingType = attribute != null ? attribute.type : null;
		TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * L_17 = V_2;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		G_B8_0 = ((Type_t *)(NULL));
		goto IL_006a;
	}

IL_0064:
	{
		TrackBindingTypeAttribute_t79AF88B1D799883A54208F08FB36D25582E1D780 * L_18 = V_2;
		NullCheck(L_18);
		Type_t * L_19 = L_18->get_type_0();
		G_B8_0 = L_19;
	}

IL_006a:
	{
		V_3 = G_B8_0;
		// yield return ScriptPlayableBinding.Create(name, this, trackBindingType);
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_22 = V_1;
		Type_t * L_23 = V_3;
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_24;
		L_24 = ScriptPlayableBinding_Create_mAAA74560713BDBC2C99DE67383B7AA062666A7E9(L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0087:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  U3Cget_outputsU3Ed__65_System_Collections_Generic_IEnumeratorU3CUnityEngine_Playables_PlayableBindingU3E_get_Current_mC5ABA75C05AFED33C5EC2BDCAFC7BF8161C3FD9E (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_outputsU3Ed__65_System_Collections_IEnumerator_Reset_m971310E319CBBC37F70572408F0837702405DEE5 (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_outputsU3Ed__65_System_Collections_IEnumerator_Reset_m971310E319CBBC37F70572408F0837702405DEE5_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_outputsU3Ed__65_System_Collections_IEnumerator_get_Current_m893B6BAC79B73B87A2DE0192ADFAE7AE95CAEFBB (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_0 = __this->get_U3CU3E2__current_1();
		PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__65_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m38D2FDC907FE2F4653266CA6812C5F77A4B4D78A (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * L_3 = (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F *)il2cpp_codegen_object_new(U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F_il2cpp_TypeInfo_var);
		U3Cget_outputsU3Ed__65__ctor_mC3A51971E84B4CB65E8D8F556ECA11A7C9F8AD0B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * L_4 = V_0;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.Timeline.TrackAsset/<get_outputs>d__65::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_outputsU3Ed__65_System_Collections_IEnumerable_GetEnumerator_mA84D7D1909FAD0739FEFA542262606C0271B1EE1 (U3Cget_outputsU3Ed__65_t18C98C173CEAA4AE051D63678142CC6BEF453F8F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_outputsU3Ed__65_System_Collections_Generic_IEnumerableU3CUnityEngine_Playables_PlayableBindingU3E_GetEnumerator_m38D2FDC907FE2F4653266CA6812C5F77A4B4D78A(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Timeline.TrackAsset/TransientBuildData
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_pinvoke(const TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F& unmarshaled, TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___trackList_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'trackList' of type 'TransientBuildData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___trackList_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_pinvoke_back(const TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke& marshaled, TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F& unmarshaled)
{
	Exception_t* ___trackList_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'trackList' of type 'TransientBuildData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___trackList_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Timeline.TrackAsset/TransientBuildData
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_pinvoke_cleanup(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Timeline.TrackAsset/TransientBuildData
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_com(const TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F& unmarshaled, TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com& marshaled)
{
	Exception_t* ___trackList_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'trackList' of type 'TransientBuildData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___trackList_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_com_back(const TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com& marshaled, TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F& unmarshaled)
{
	Exception_t* ___trackList_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'trackList' of type 'TransientBuildData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___trackList_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Timeline.TrackAsset/TransientBuildData
IL2CPP_EXTERN_C void TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshal_com_cleanup(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com& marshaled)
{
}
// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset/TransientBuildData::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  TransientBuildData_Create_mCB3367A8802126084116044EC0812DD9FDF8FB66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m41318575D6E5460AA9AA681443C6E4B12685017E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E0FA19A1D7E35F84DC927F9630F0212C0C8383A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAA77092CBECA1DCA604D577ED1219ADA1C3CC142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TransientBuildData()
		// {
		//     trackList = new List<TrackAsset>(20),
		//     clipList = new List<TimelineClip>(500),
		//     markerList = new List<IMarker>(100),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F ));
		List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * L_0 = (List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 *)il2cpp_codegen_object_new(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4_il2cpp_TypeInfo_var);
		List_1__ctor_m41318575D6E5460AA9AA681443C6E4B12685017E(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m41318575D6E5460AA9AA681443C6E4B12685017E_RuntimeMethod_var);
		(&V_0)->set_trackList_0(L_0);
		List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * L_1 = (List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C *)il2cpp_codegen_object_new(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C_il2cpp_TypeInfo_var);
		List_1__ctor_m7E0FA19A1D7E35F84DC927F9630F0212C0C8383A(L_1, ((int32_t)500), /*hidden argument*/List_1__ctor_m7E0FA19A1D7E35F84DC927F9630F0212C0C8383A_RuntimeMethod_var);
		(&V_0)->set_clipList_1(L_1);
		List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * L_2 = (List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 *)il2cpp_codegen_object_new(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1_il2cpp_TypeInfo_var);
		List_1__ctor_mAA77092CBECA1DCA604D577ED1219ADA1C3CC142(L_2, ((int32_t)100), /*hidden argument*/List_1__ctor_mAA77092CBECA1DCA604D577ED1219ADA1C3CC142_RuntimeMethod_var);
		(&V_0)->set_markerList_2(L_2);
		TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Timeline.TrackAsset/TransientBuildData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransientBuildData_Clear_m5188D938B3688BC2FA68BDDBF7A6D493DDA9299B (TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1861B4ACCC5DDEE221297B5B2DCD05C43F560D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m888F98AE0555A9FCC822CDC31FBFD0022AF237F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mADC94667531FD8C958ED7B94E621EEDB61EA0C93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackList.Clear();
		List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * L_0 = __this->get_trackList_0();
		NullCheck(L_0);
		List_1_Clear_m1861B4ACCC5DDEE221297B5B2DCD05C43F560D99(L_0, /*hidden argument*/List_1_Clear_m1861B4ACCC5DDEE221297B5B2DCD05C43F560D99_RuntimeMethod_var);
		// clipList.Clear();
		List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * L_1 = __this->get_clipList_1();
		NullCheck(L_1);
		List_1_Clear_m888F98AE0555A9FCC822CDC31FBFD0022AF237F2(L_1, /*hidden argument*/List_1_Clear_m888F98AE0555A9FCC822CDC31FBFD0022AF237F2_RuntimeMethod_var);
		// markerList.Clear();
		List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * L_2 = __this->get_markerList_2();
		NullCheck(L_2);
		List_1_Clear_mADC94667531FD8C958ED7B94E621EEDB61EA0C93(L_2, /*hidden argument*/List_1_Clear_mADC94667531FD8C958ED7B94E621EEDB61EA0C93_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransientBuildData_Clear_m5188D938B3688BC2FA68BDDBF7A6D493DDA9299B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * _thisAdjusted = reinterpret_cast<TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F *>(__this + _offset);
	TransientBuildData_Clear_m5188D938B3688BC2FA68BDDBF7A6D493DDA9299B(_thisAdjusted, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * TrackAsset_get_parent_m6216AB562493285878BE07A6BE61C94AF768218C_inline (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Parent; }
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_0 = __this->get_m_Parent_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackAsset_set_parent_m5F4D45A3392934B161CAB4A6EF80DDFCABD942F2_inline (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_Parent = value; }
		PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * L_0 = ___value0;
		__this->set_m_Parent_15(L_0);
		// internal set { m_Parent = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TimelineClip_get_start_m401E739C569F735977B190F73BCBD4F10FD76ABD_inline (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Start; }
		double L_0 = __this->get_m_Start_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
