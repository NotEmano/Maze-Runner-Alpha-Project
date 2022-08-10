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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Yodo1.MAS.Yodo1U3dAdError>
struct Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,Yodo1.MAS.Yodo1U3dAdError>
struct Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// YodoAdsManager[]
struct YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
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
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Yodo1.MAS.Yodo1AdBuildConfig
struct Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285;
// Yodo1.MAS.Yodo1MasUserPrivacyConfig
struct Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030;
// Yodo1.MAS.Yodo1U3dAdError
struct Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01;
// YodoAdsManager
struct YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380;
// InterstitialAtTimer/<Invokee>d__18
struct U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B;
// Yodo1.MAS.Yodo1JSON/Parser
struct Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8;
// Yodo1.MAS.Yodo1JSON/Serializer
struct Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7;
// Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate
struct BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54;
// Yodo1.MAS.Yodo1U3dMas/InitializeDelegate
struct InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15;
// Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate
struct InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C;
// Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate
struct RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA;
// Yodo1.MAS.Yodo1U3dMasCallback/Banner
struct Banner_t51DC5A08BB512DB4898911A32832616C8E531F9B;
// Yodo1.MAS.Yodo1U3dMasCallback/Interstitial
struct Interstitial_tCAAF4D2DD305B9560B7D4F5A13226F7E6FBA25E0;
// Yodo1.MAS.Yodo1U3dMasCallback/Rewarded
struct Rewarded_t9CBF04C9A7DCB77AFC4B5353D9DB1C31026FD2F0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteralA589DF8522206801D34CE266D57DB5EB139222AF;
IL2CPP_EXTERN_C String_t* _stringLiteralA7256EFBCC2523BEAA5BDE09E8C28300EA06078A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF380E6DFF2073B2FAC3890A2E1BFECD262BC43E6;
IL2CPP_EXTERN_C String_t* _stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mADCBF29E9871AA80D34028C9DC2BB06E10D7839C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisYodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_mFDF4AAAE07CAB6EB1736D8D421BE73897AA04DA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvokeeU3Ed__18_System_Collections_IEnumerator_Reset_m500E87579F7AB39582ED339553792BE1EBF850CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YodoAdsManager_U3CStartU3Eb__15_0_mFF5E4669E12643CD7B0C976BB0C5A4B346EEDED3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Yodo1.MAS.Yodo1AdBuildConfig
struct  Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285  : public RuntimeObject
{
public:
	// System.Boolean Yodo1.MAS.Yodo1AdBuildConfig::_enableAdaptiveBanner
	bool ____enableAdaptiveBanner_0;
	// System.Boolean Yodo1.MAS.Yodo1AdBuildConfig::_enableUserPrivacyDialog
	bool ____enableUserPrivacyDialog_1;
	// System.String Yodo1.MAS.Yodo1AdBuildConfig::_userAgreementUrl
	String_t* ____userAgreementUrl_2;
	// System.String Yodo1.MAS.Yodo1AdBuildConfig::_privacyPolicyUrl
	String_t* ____privacyPolicyUrl_3;
	// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1AdBuildConfig::_agePopBuildConfig
	Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * ____agePopBuildConfig_4;

public:
	inline static int32_t get_offset_of__enableAdaptiveBanner_0() { return static_cast<int32_t>(offsetof(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285, ____enableAdaptiveBanner_0)); }
	inline bool get__enableAdaptiveBanner_0() const { return ____enableAdaptiveBanner_0; }
	inline bool* get_address_of__enableAdaptiveBanner_0() { return &____enableAdaptiveBanner_0; }
	inline void set__enableAdaptiveBanner_0(bool value)
	{
		____enableAdaptiveBanner_0 = value;
	}

	inline static int32_t get_offset_of__enableUserPrivacyDialog_1() { return static_cast<int32_t>(offsetof(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285, ____enableUserPrivacyDialog_1)); }
	inline bool get__enableUserPrivacyDialog_1() const { return ____enableUserPrivacyDialog_1; }
	inline bool* get_address_of__enableUserPrivacyDialog_1() { return &____enableUserPrivacyDialog_1; }
	inline void set__enableUserPrivacyDialog_1(bool value)
	{
		____enableUserPrivacyDialog_1 = value;
	}

	inline static int32_t get_offset_of__userAgreementUrl_2() { return static_cast<int32_t>(offsetof(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285, ____userAgreementUrl_2)); }
	inline String_t* get__userAgreementUrl_2() const { return ____userAgreementUrl_2; }
	inline String_t** get_address_of__userAgreementUrl_2() { return &____userAgreementUrl_2; }
	inline void set__userAgreementUrl_2(String_t* value)
	{
		____userAgreementUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userAgreementUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of__privacyPolicyUrl_3() { return static_cast<int32_t>(offsetof(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285, ____privacyPolicyUrl_3)); }
	inline String_t* get__privacyPolicyUrl_3() const { return ____privacyPolicyUrl_3; }
	inline String_t** get_address_of__privacyPolicyUrl_3() { return &____privacyPolicyUrl_3; }
	inline void set__privacyPolicyUrl_3(String_t* value)
	{
		____privacyPolicyUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____privacyPolicyUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of__agePopBuildConfig_4() { return static_cast<int32_t>(offsetof(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285, ____agePopBuildConfig_4)); }
	inline Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * get__agePopBuildConfig_4() const { return ____agePopBuildConfig_4; }
	inline Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 ** get_address_of__agePopBuildConfig_4() { return &____agePopBuildConfig_4; }
	inline void set__agePopBuildConfig_4(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * value)
	{
		____agePopBuildConfig_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____agePopBuildConfig_4), (void*)value);
	}
};


// Yodo1.MAS.Yodo1U3dAdError
struct  Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01  : public RuntimeObject
{
public:
	// System.Int32 Yodo1.MAS.Yodo1U3dAdError::code
	int32_t ___code_0;
	// System.String Yodo1.MAS.Yodo1U3dAdError::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01, ___code_0)); }
	inline int32_t get_code_0() const { return ___code_0; }
	inline int32_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(int32_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// Yodo1.MAS.Yodo1U3dMas
struct  Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B  : public RuntimeObject
{
public:

public:
};

struct Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_StaticFields
{
public:
	// System.String Yodo1.MAS.Yodo1U3dMas::TAG
	String_t* ___TAG_0;

public:
	inline static int32_t get_offset_of_TAG_0() { return static_cast<int32_t>(offsetof(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_StaticFields, ___TAG_0)); }
	inline String_t* get_TAG_0() const { return ___TAG_0; }
	inline String_t** get_address_of_TAG_0() { return &___TAG_0; }
	inline void set_TAG_0(String_t* value)
	{
		___TAG_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TAG_0), (void*)value);
	}
};


// InterstitialAtTimer/<Invokee>d__18
struct  U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B  : public RuntimeObject
{
public:
	// System.Int32 InterstitialAtTimer/<Invokee>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InterstitialAtTimer/<Invokee>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single InterstitialAtTimer/<Invokee>d__18::Delay
	float ___Delay_2;
	// System.Action InterstitialAtTimer/<Invokee>d__18::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_Delay_2() { return static_cast<int32_t>(offsetof(U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B, ___Delay_2)); }
	inline float get_Delay_2() const { return ___Delay_2; }
	inline float* get_address_of_Delay_2() { return &___Delay_2; }
	inline void set_Delay_2(float value)
	{
		___Delay_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}
};


// Yodo1.MAS.Yodo1JSON/Parser
struct  Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8  : public RuntimeObject
{
public:
	// System.IO.StringReader Yodo1.MAS.Yodo1JSON/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_2;

public:
	inline static int32_t get_offset_of_json_2() { return static_cast<int32_t>(offsetof(Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8, ___json_2)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_2() const { return ___json_2; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_2() { return &___json_2; }
	inline void set_json_2(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_2), (void*)value);
	}
};


// Yodo1.MAS.Yodo1JSON/Serializer
struct  Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Yodo1.MAS.Yodo1JSON/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// Yodo1.MAS.Yodo1U3dMasCallback/Banner
struct  Banner_t51DC5A08BB512DB4898911A32832616C8E531F9B  : public RuntimeObject
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMasCallback/Interstitial
struct  Interstitial_tCAAF4D2DD305B9560B7D4F5A13226F7E6FBA25E0  : public RuntimeObject
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMasCallback/Rewarded
struct  Rewarded_t9CBF04C9A7DCB77AFC4B5353D9DB1C31026FD2F0  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// Yodo1.MAS.Yodo1MasUserPrivacyConfig
struct  Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030  : public RuntimeObject
{
public:
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::defaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___defaultColor_0;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_titleBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____titleBackgroundColor_1;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_titleTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____titleTextColor_2;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_contentBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____contentBackgroundColor_3;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_contentTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____contentTextColor_4;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_buttonBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonBackgroundColor_5;
	// UnityEngine.Color Yodo1.MAS.Yodo1MasUserPrivacyConfig::_buttonTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____buttonTextColor_6;

public:
	inline static int32_t get_offset_of_defaultColor_0() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ___defaultColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_defaultColor_0() const { return ___defaultColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_defaultColor_0() { return &___defaultColor_0; }
	inline void set_defaultColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___defaultColor_0 = value;
	}

	inline static int32_t get_offset_of__titleBackgroundColor_1() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____titleBackgroundColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__titleBackgroundColor_1() const { return ____titleBackgroundColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__titleBackgroundColor_1() { return &____titleBackgroundColor_1; }
	inline void set__titleBackgroundColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____titleBackgroundColor_1 = value;
	}

	inline static int32_t get_offset_of__titleTextColor_2() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____titleTextColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__titleTextColor_2() const { return ____titleTextColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__titleTextColor_2() { return &____titleTextColor_2; }
	inline void set__titleTextColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____titleTextColor_2 = value;
	}

	inline static int32_t get_offset_of__contentBackgroundColor_3() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____contentBackgroundColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__contentBackgroundColor_3() const { return ____contentBackgroundColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__contentBackgroundColor_3() { return &____contentBackgroundColor_3; }
	inline void set__contentBackgroundColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____contentBackgroundColor_3 = value;
	}

	inline static int32_t get_offset_of__contentTextColor_4() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____contentTextColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__contentTextColor_4() const { return ____contentTextColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__contentTextColor_4() { return &____contentTextColor_4; }
	inline void set__contentTextColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____contentTextColor_4 = value;
	}

	inline static int32_t get_offset_of__buttonBackgroundColor_5() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____buttonBackgroundColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonBackgroundColor_5() const { return ____buttonBackgroundColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonBackgroundColor_5() { return &____buttonBackgroundColor_5; }
	inline void set__buttonBackgroundColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonBackgroundColor_5 = value;
	}

	inline static int32_t get_offset_of__buttonTextColor_6() { return static_cast<int32_t>(offsetof(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030, ____buttonTextColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__buttonTextColor_6() const { return ____buttonTextColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__buttonTextColor_6() { return &____buttonTextColor_6; }
	inline void set__buttonTextColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____buttonTextColor_6 = value;
	}
};


// Yodo1.MAS.Yodo1U3dAdEvent
struct  Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0 
{
public:
	// System.Int32 Yodo1.MAS.Yodo1U3dAdEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Banner/BannerSize
struct  BannerSize_t9917304131404F4EA7C8E2D05F2533D1B8157696 
{
public:
	// System.Int32 Banner/BannerSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerSize_t9917304131404F4EA7C8E2D05F2533D1B8157696, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Banner/Horizontal
struct  Horizontal_t8B7355FDE9FD95FBDD2D2FB45DF467C16946E9AB 
{
public:
	// System.Int32 Banner/Horizontal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Horizontal_t8B7355FDE9FD95FBDD2D2FB45DF467C16946E9AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Banner/Vertical
struct  Vertical_tDE15BE9B37AFCB9449BE8D456A41DE64519EE4D3 
{
public:
	// System.Int32 Banner/Vertical::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Vertical_tDE15BE9B37AFCB9449BE8D456A41DE64519EE4D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TemplateNativeAd/Horizontal
struct  Horizontal_t954BD6B19157072C67855D51B48664A82A367A42 
{
public:
	// System.Int32 TemplateNativeAd/Horizontal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Horizontal_t954BD6B19157072C67855D51B48664A82A367A42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TemplateNativeAd/Vertical
struct  Vertical_t5FE0D847BBC93A77E8B3C3ECFDF0D2EF5B198C2E 
{
public:
	// System.Int32 TemplateNativeAd/Vertical::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Vertical_t5FE0D847BBC93A77E8B3C3ECFDF0D2EF5B198C2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Yodo1.MAS.Yodo1U3dBannerAdSize/Type
struct  Type_tE1413FB24C63DD228560F5C19893E19D522AD6C4 
{
public:
	// System.Int32 Yodo1.MAS.Yodo1U3dBannerAdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tE1413FB24C63DD228560F5C19893E19D522AD6C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Yodo1.MAS.Yodo1U3dMasCallback/AdType
struct  AdType_t97C8F96FCBE1D817935E3ED1B7526EFBEF10C57C 
{
public:
	// System.Int32 Yodo1.MAS.Yodo1U3dMasCallback/AdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdType_t97C8F96FCBE1D817935E3ED1B7526EFBEF10C57C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Yodo1.MAS.Yodo1JSON/Parser/TOKEN
struct  TOKEN_tE0D98CB56AC0E2A9DE3BD1B492261F1403A2B2CE 
{
public:
	// System.Int32 Yodo1.MAS.Yodo1JSON/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tE0D98CB56AC0E2A9DE3BD1B492261F1403A2B2CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<Yodo1.MAS.Yodo1U3dAdError>
struct  Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,Yodo1.MAS.Yodo1U3dAdError>
struct  Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate
struct  BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54  : public MulticastDelegate_t
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMas/InitializeDelegate
struct  InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15  : public MulticastDelegate_t
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate
struct  InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C  : public MulticastDelegate_t
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate
struct  RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Yodo1.MAS.Yodo1U3dMasCallback
struct  Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields
{
public:
	// System.Boolean Yodo1.MAS.Yodo1U3dMasCallback::_initialized
	bool ____initialized_8;
	// Yodo1.MAS.Yodo1U3dMasCallback Yodo1.MAS.Yodo1U3dMasCallback::<Instance>k__BackingField
	Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F * ___U3CInstanceU3Ek__BackingField_9;
	// Yodo1.MAS.Yodo1U3dMas/InitializeDelegate Yodo1.MAS.Yodo1U3dMasCallback::_initializeDelegate
	InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * ____initializeDelegate_10;
	// Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate Yodo1.MAS.Yodo1U3dMasCallback::_interstitialAdDelegate
	InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * ____interstitialAdDelegate_11;
	// Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate Yodo1.MAS.Yodo1U3dMasCallback::_bannerDelegate
	BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * ____bannerDelegate_12;
	// Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate Yodo1.MAS.Yodo1U3dMasCallback::_rewardedAdDelegate
	RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * ____rewardedAdDelegate_13;
	// System.Action`2<System.Boolean,Yodo1.MAS.Yodo1U3dAdError> Yodo1.MAS.Yodo1U3dMasCallback::_onSdkInitializedEvent
	Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * ____onSdkInitializedEvent_14;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onBannerAdOpenedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onBannerAdOpenedEvent_15;
	// System.Action`1<Yodo1.MAS.Yodo1U3dAdError> Yodo1.MAS.Yodo1U3dMasCallback::_onBannerAdErrorEvent
	Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ____onBannerAdErrorEvent_16;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onBannerAdClosedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onBannerAdClosedEvent_17;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onInterstitialAdOpenedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onInterstitialAdOpenedEvent_18;
	// System.Action`1<Yodo1.MAS.Yodo1U3dAdError> Yodo1.MAS.Yodo1U3dMasCallback::_onInterstitialAdErrorEvent
	Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ____onInterstitialAdErrorEvent_19;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onInterstitialAdClosedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onInterstitialAdClosedEvent_20;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onRewardedAdOpenedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onRewardedAdOpenedEvent_21;
	// System.Action`1<Yodo1.MAS.Yodo1U3dAdError> Yodo1.MAS.Yodo1U3dMasCallback::_onRewardedAdErrorEvent
	Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ____onRewardedAdErrorEvent_22;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onRewardedAdReceivedRewardEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onRewardedAdReceivedRewardEvent_23;
	// System.Action Yodo1.MAS.Yodo1U3dMasCallback::_onRewardedAdClosedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onRewardedAdClosedEvent_24;
	// System.Boolean Yodo1.MAS.Yodo1U3dMasCallback::_autoPauseGame
	bool ____autoPauseGame_25;

public:
	inline static int32_t get_offset_of__initialized_8() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____initialized_8)); }
	inline bool get__initialized_8() const { return ____initialized_8; }
	inline bool* get_address_of__initialized_8() { return &____initialized_8; }
	inline void set__initialized_8(bool value)
	{
		____initialized_8 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ___U3CInstanceU3Ek__BackingField_9)); }
	inline Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F * get_U3CInstanceU3Ek__BackingField_9() const { return ___U3CInstanceU3Ek__BackingField_9; }
	inline Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F ** get_address_of_U3CInstanceU3Ek__BackingField_9() { return &___U3CInstanceU3Ek__BackingField_9; }
	inline void set_U3CInstanceU3Ek__BackingField_9(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F * value)
	{
		___U3CInstanceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__initializeDelegate_10() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____initializeDelegate_10)); }
	inline InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * get__initializeDelegate_10() const { return ____initializeDelegate_10; }
	inline InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 ** get_address_of__initializeDelegate_10() { return &____initializeDelegate_10; }
	inline void set__initializeDelegate_10(InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * value)
	{
		____initializeDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initializeDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of__interstitialAdDelegate_11() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____interstitialAdDelegate_11)); }
	inline InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * get__interstitialAdDelegate_11() const { return ____interstitialAdDelegate_11; }
	inline InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C ** get_address_of__interstitialAdDelegate_11() { return &____interstitialAdDelegate_11; }
	inline void set__interstitialAdDelegate_11(InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * value)
	{
		____interstitialAdDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interstitialAdDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of__bannerDelegate_12() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____bannerDelegate_12)); }
	inline BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * get__bannerDelegate_12() const { return ____bannerDelegate_12; }
	inline BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 ** get_address_of__bannerDelegate_12() { return &____bannerDelegate_12; }
	inline void set__bannerDelegate_12(BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * value)
	{
		____bannerDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bannerDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of__rewardedAdDelegate_13() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____rewardedAdDelegate_13)); }
	inline RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * get__rewardedAdDelegate_13() const { return ____rewardedAdDelegate_13; }
	inline RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA ** get_address_of__rewardedAdDelegate_13() { return &____rewardedAdDelegate_13; }
	inline void set__rewardedAdDelegate_13(RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * value)
	{
		____rewardedAdDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rewardedAdDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of__onSdkInitializedEvent_14() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onSdkInitializedEvent_14)); }
	inline Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * get__onSdkInitializedEvent_14() const { return ____onSdkInitializedEvent_14; }
	inline Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 ** get_address_of__onSdkInitializedEvent_14() { return &____onSdkInitializedEvent_14; }
	inline void set__onSdkInitializedEvent_14(Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * value)
	{
		____onSdkInitializedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onSdkInitializedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of__onBannerAdOpenedEvent_15() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onBannerAdOpenedEvent_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onBannerAdOpenedEvent_15() const { return ____onBannerAdOpenedEvent_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onBannerAdOpenedEvent_15() { return &____onBannerAdOpenedEvent_15; }
	inline void set__onBannerAdOpenedEvent_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onBannerAdOpenedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onBannerAdOpenedEvent_15), (void*)value);
	}

	inline static int32_t get_offset_of__onBannerAdErrorEvent_16() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onBannerAdErrorEvent_16)); }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * get__onBannerAdErrorEvent_16() const { return ____onBannerAdErrorEvent_16; }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 ** get_address_of__onBannerAdErrorEvent_16() { return &____onBannerAdErrorEvent_16; }
	inline void set__onBannerAdErrorEvent_16(Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * value)
	{
		____onBannerAdErrorEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onBannerAdErrorEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of__onBannerAdClosedEvent_17() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onBannerAdClosedEvent_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onBannerAdClosedEvent_17() const { return ____onBannerAdClosedEvent_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onBannerAdClosedEvent_17() { return &____onBannerAdClosedEvent_17; }
	inline void set__onBannerAdClosedEvent_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onBannerAdClosedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onBannerAdClosedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of__onInterstitialAdOpenedEvent_18() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onInterstitialAdOpenedEvent_18)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onInterstitialAdOpenedEvent_18() const { return ____onInterstitialAdOpenedEvent_18; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onInterstitialAdOpenedEvent_18() { return &____onInterstitialAdOpenedEvent_18; }
	inline void set__onInterstitialAdOpenedEvent_18(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onInterstitialAdOpenedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInterstitialAdOpenedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of__onInterstitialAdErrorEvent_19() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onInterstitialAdErrorEvent_19)); }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * get__onInterstitialAdErrorEvent_19() const { return ____onInterstitialAdErrorEvent_19; }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 ** get_address_of__onInterstitialAdErrorEvent_19() { return &____onInterstitialAdErrorEvent_19; }
	inline void set__onInterstitialAdErrorEvent_19(Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * value)
	{
		____onInterstitialAdErrorEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInterstitialAdErrorEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of__onInterstitialAdClosedEvent_20() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onInterstitialAdClosedEvent_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onInterstitialAdClosedEvent_20() const { return ____onInterstitialAdClosedEvent_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onInterstitialAdClosedEvent_20() { return &____onInterstitialAdClosedEvent_20; }
	inline void set__onInterstitialAdClosedEvent_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onInterstitialAdClosedEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onInterstitialAdClosedEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of__onRewardedAdOpenedEvent_21() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onRewardedAdOpenedEvent_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onRewardedAdOpenedEvent_21() const { return ____onRewardedAdOpenedEvent_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onRewardedAdOpenedEvent_21() { return &____onRewardedAdOpenedEvent_21; }
	inline void set__onRewardedAdOpenedEvent_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onRewardedAdOpenedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRewardedAdOpenedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of__onRewardedAdErrorEvent_22() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onRewardedAdErrorEvent_22)); }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * get__onRewardedAdErrorEvent_22() const { return ____onRewardedAdErrorEvent_22; }
	inline Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 ** get_address_of__onRewardedAdErrorEvent_22() { return &____onRewardedAdErrorEvent_22; }
	inline void set__onRewardedAdErrorEvent_22(Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * value)
	{
		____onRewardedAdErrorEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRewardedAdErrorEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of__onRewardedAdReceivedRewardEvent_23() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onRewardedAdReceivedRewardEvent_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onRewardedAdReceivedRewardEvent_23() const { return ____onRewardedAdReceivedRewardEvent_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onRewardedAdReceivedRewardEvent_23() { return &____onRewardedAdReceivedRewardEvent_23; }
	inline void set__onRewardedAdReceivedRewardEvent_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onRewardedAdReceivedRewardEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRewardedAdReceivedRewardEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of__onRewardedAdClosedEvent_24() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____onRewardedAdClosedEvent_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onRewardedAdClosedEvent_24() const { return ____onRewardedAdClosedEvent_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onRewardedAdClosedEvent_24() { return &____onRewardedAdClosedEvent_24; }
	inline void set__onRewardedAdClosedEvent_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onRewardedAdClosedEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRewardedAdClosedEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of__autoPauseGame_25() { return static_cast<int32_t>(offsetof(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields, ____autoPauseGame_25)); }
	inline bool get__autoPauseGame_25() const { return ____autoPauseGame_25; }
	inline bool* get_address_of__autoPauseGame_25() { return &____autoPauseGame_25; }
	inline void set__autoPauseGame_25(bool value)
	{
		____autoPauseGame_25 = value;
	}
};


// YodoAdsManager
struct  YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean YodoAdsManager::privacyPopup
	bool ___privacyPopup_5;
	// System.String YodoAdsManager::privacyPolicyLink
	String_t* ___privacyPolicyLink_6;
	// System.String YodoAdsManager::termOfServiceLink
	String_t* ___termOfServiceLink_7;
	// System.Boolean YodoAdsManager::enabledCustomizeColors
	bool ___enabledCustomizeColors_8;
	// UnityEngine.Color YodoAdsManager::titleBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___titleBackgroundColor_9;
	// UnityEngine.Color YodoAdsManager::titleTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___titleTextColor_10;
	// UnityEngine.Color YodoAdsManager::contentBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___contentBackgroundColor_11;
	// UnityEngine.Color YodoAdsManager::contentTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___contentTextColor_12;
	// UnityEngine.Color YodoAdsManager::buttonBackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___buttonBackgroundColor_13;
	// UnityEngine.Color YodoAdsManager::buttonTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___buttonTextColor_14;
	// UnityEngine.Events.UnityEvent YodoAdsManager::OnSDKIntialized
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnSDKIntialized_15;
	// UnityEngine.Events.UnityEvent YodoAdsManager::OnSDKInitializationFailed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnSDKInitializationFailed_16;
	// System.Boolean YodoAdsManager::isInitialized
	bool ___isInitialized_17;

public:
	inline static int32_t get_offset_of_privacyPopup_5() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___privacyPopup_5)); }
	inline bool get_privacyPopup_5() const { return ___privacyPopup_5; }
	inline bool* get_address_of_privacyPopup_5() { return &___privacyPopup_5; }
	inline void set_privacyPopup_5(bool value)
	{
		___privacyPopup_5 = value;
	}

	inline static int32_t get_offset_of_privacyPolicyLink_6() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___privacyPolicyLink_6)); }
	inline String_t* get_privacyPolicyLink_6() const { return ___privacyPolicyLink_6; }
	inline String_t** get_address_of_privacyPolicyLink_6() { return &___privacyPolicyLink_6; }
	inline void set_privacyPolicyLink_6(String_t* value)
	{
		___privacyPolicyLink_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___privacyPolicyLink_6), (void*)value);
	}

	inline static int32_t get_offset_of_termOfServiceLink_7() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___termOfServiceLink_7)); }
	inline String_t* get_termOfServiceLink_7() const { return ___termOfServiceLink_7; }
	inline String_t** get_address_of_termOfServiceLink_7() { return &___termOfServiceLink_7; }
	inline void set_termOfServiceLink_7(String_t* value)
	{
		___termOfServiceLink_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___termOfServiceLink_7), (void*)value);
	}

	inline static int32_t get_offset_of_enabledCustomizeColors_8() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___enabledCustomizeColors_8)); }
	inline bool get_enabledCustomizeColors_8() const { return ___enabledCustomizeColors_8; }
	inline bool* get_address_of_enabledCustomizeColors_8() { return &___enabledCustomizeColors_8; }
	inline void set_enabledCustomizeColors_8(bool value)
	{
		___enabledCustomizeColors_8 = value;
	}

	inline static int32_t get_offset_of_titleBackgroundColor_9() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___titleBackgroundColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_titleBackgroundColor_9() const { return ___titleBackgroundColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_titleBackgroundColor_9() { return &___titleBackgroundColor_9; }
	inline void set_titleBackgroundColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___titleBackgroundColor_9 = value;
	}

	inline static int32_t get_offset_of_titleTextColor_10() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___titleTextColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_titleTextColor_10() const { return ___titleTextColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_titleTextColor_10() { return &___titleTextColor_10; }
	inline void set_titleTextColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___titleTextColor_10 = value;
	}

	inline static int32_t get_offset_of_contentBackgroundColor_11() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___contentBackgroundColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_contentBackgroundColor_11() const { return ___contentBackgroundColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_contentBackgroundColor_11() { return &___contentBackgroundColor_11; }
	inline void set_contentBackgroundColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___contentBackgroundColor_11 = value;
	}

	inline static int32_t get_offset_of_contentTextColor_12() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___contentTextColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_contentTextColor_12() const { return ___contentTextColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_contentTextColor_12() { return &___contentTextColor_12; }
	inline void set_contentTextColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___contentTextColor_12 = value;
	}

	inline static int32_t get_offset_of_buttonBackgroundColor_13() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___buttonBackgroundColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_buttonBackgroundColor_13() const { return ___buttonBackgroundColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_buttonBackgroundColor_13() { return &___buttonBackgroundColor_13; }
	inline void set_buttonBackgroundColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___buttonBackgroundColor_13 = value;
	}

	inline static int32_t get_offset_of_buttonTextColor_14() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___buttonTextColor_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_buttonTextColor_14() const { return ___buttonTextColor_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_buttonTextColor_14() { return &___buttonTextColor_14; }
	inline void set_buttonTextColor_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___buttonTextColor_14 = value;
	}

	inline static int32_t get_offset_of_OnSDKIntialized_15() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___OnSDKIntialized_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnSDKIntialized_15() const { return ___OnSDKIntialized_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnSDKIntialized_15() { return &___OnSDKIntialized_15; }
	inline void set_OnSDKIntialized_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnSDKIntialized_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSDKIntialized_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnSDKInitializationFailed_16() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___OnSDKInitializationFailed_16)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnSDKInitializationFailed_16() const { return ___OnSDKInitializationFailed_16; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnSDKInitializationFailed_16() { return &___OnSDKInitializationFailed_16; }
	inline void set_OnSDKInitializationFailed_16(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnSDKInitializationFailed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSDKInitializationFailed_16), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_17() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380, ___isInitialized_17)); }
	inline bool get_isInitialized_17() const { return ___isInitialized_17; }
	inline bool* get_address_of_isInitialized_17() { return &___isInitialized_17; }
	inline void set_isInitialized_17(bool value)
	{
		___isInitialized_17 = value;
	}
};

struct YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_StaticFields
{
public:
	// YodoAdsManager YodoAdsManager::instance
	YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_StaticFields, ___instance_4)); }
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * get_instance_4() const { return ___instance_4; }
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// YodoAdsManager[]
struct YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * m_Items[1];

public:
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// !!0[] UnityEngine.Object::FindObjectsOfType<YodoAdsManager>()
inline YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9* Object_FindObjectsOfType_TisYodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_mFDF4AAAE07CAB6EB1736D8D421BE73897AA04DA1 (const RuntimeMethod* method)
{
	return ((  YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,Yodo1.MAS.Yodo1U3dAdError>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mADCBF29E9871AA80D34028C9DC2BB06E10D7839C (Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback::add_OnSdkInitializedEvent(System.Action`2<System.Boolean,Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Yodo1U3dMasCallback_add_OnSdkInitializedEvent_m55653A511D30F193CA6C9E8500ECEC5C0B53014B (Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * ___value0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1AdBuildConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Yodo1AdBuildConfig__ctor_m96C21ADB1B34ADFFD1BB2C768DFCC2A2C06CFF07 (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1AdBuildConfig Yodo1.MAS.Yodo1AdBuildConfig::enableUserPrivacyDialog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * Yodo1AdBuildConfig_enableUserPrivacyDialog_m805791391720D88C39B7C6C92651CFCF68DC34C7 (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * __this, bool ___userPrivacyDialog0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1AdBuildConfig Yodo1.MAS.Yodo1AdBuildConfig::privacyPolicyUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * Yodo1AdBuildConfig_privacyPolicyUrl_m406EF9B5EC36632D77092BDA829781F1C984C7C5 (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * __this, String_t* ___url0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1AdBuildConfig Yodo1.MAS.Yodo1AdBuildConfig::userAgreementUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * Yodo1AdBuildConfig_userAgreementUrl_m4AFA4BDCCC9FCAD90EC39F2BCC964386A8B103FB (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1MasUserPrivacyConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Yodo1MasUserPrivacyConfig__ctor_m81A453E3073465649B17AD33DF78B21CC0E384E2 (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::titleBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_titleBackgroundColor_m18F874C8D6F483E7FC2488A358A3C989B527F90D (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::titleTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_titleTextColor_m5F128F71A67A987D6B069BDC8F61DE9254EFED9C (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::contentBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_contentBackgroundColor_mBB20CA27C6BC6FF909040A3456A6C0C543CB8664 (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::contentTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_contentTextColor_m16C93518BB7C412136B8B32792570BAA5A7B9607 (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::buttonBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_buttonBackgroundColor_m4FBDC7FEBC3F395928CF9B1C401D6F37DE881762 (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1MasUserPrivacyConfig Yodo1.MAS.Yodo1MasUserPrivacyConfig::buttonTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * Yodo1MasUserPrivacyConfig_buttonTextColor_mF978454C85E3551B12A5E3513140D91857E67845 (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// Yodo1.MAS.Yodo1AdBuildConfig Yodo1.MAS.Yodo1AdBuildConfig::userPrivacyConfig(Yodo1.MAS.Yodo1MasUserPrivacyConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * Yodo1AdBuildConfig_userPrivacyConfig_mB97457F1977B5C493EFEA6AF2C2F373FE798211F (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * __this, Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * ___agePopBuildConfig0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1U3dMas::SetAdBuildConfig(Yodo1.MAS.Yodo1AdBuildConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Yodo1U3dMas_SetAdBuildConfig_m8DBC03EB3D344CB89E458B7B5E7A7346D6EC41FD (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * ___yodo1AdBuildConfig0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1U3dMas::InitializeSdk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Yodo1U3dMas_InitializeSdk_mE3CDD3BFCDEA6D498B6C047B157CB3C114C51A57 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mC9DBFB52EFCD935B3D030D5B5DBE8CE51B3CDBB2 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m37FC294252821E83516EC52FE681D44A2F147221 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Yodo1.MAS.Yodo1JSON/Parser/TOKEN Yodo1.MAS.Yodo1JSON/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.String Yodo1.MAS.Yodo1JSON/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m03BFFCC8EC7D25AAB104860B32EFAF89D649E31A (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseByToken(Yodo1.MAS.Yodo1JSON/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m4CEF8271BB952044852FBBB8C9BAD5329E6185AF (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m7282B19905F68B6BF260477909113E3238FB9CA1 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Yodo1.MAS.Yodo1JSON/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m57AC1E8EF9B306AB364FE31995EA3AF95696B56D (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> Yodo1.MAS.Yodo1JSON/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m3C459CDA88EE20A0B9147274D77BCA157668E067 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char Yodo1.MAS.Yodo1JSON/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String Yodo1.MAS.Yodo1JSON/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7FDB5AEECA1D269BECDF58C1E14E7E009FDBEB0C (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Char Yodo1.MAS.Yodo1JSON/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mE9B1DE708A2B5B9019D9DD7F4DB2040A6B7484CA (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mC7E523390015B74768D501111813E7353B3CBB39 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mD990FE03C0E8322402466CAF864EACAB30458339 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m1588F66B2891D716072849B97E84674CD5B5A011 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mB06CF9397C2166647ED5DC68F2EA0B261965DB23 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m672EF3F0F6F22775D8453D0D19FB14DBBE3A6868 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m000B1CE1015BD43EC3845B28425A7F44A6EFE80C (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YodoAdsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YodoAdsManager_Awake_m213FE0600D1B93100C27EC307ABFEAD3EDEE0B25 (YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisYodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_mFDF4AAAE07CAB6EB1736D8D421BE73897AA04DA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FindObjectsOfType<YodoAdsManager>().Length > 1)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		YodoAdsManagerU5BU5D_t8282CD876C93A9C8C0E04ED304800B19F79A54C9* L_0;
		L_0 = Object_FindObjectsOfType_TisYodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_mFDF4AAAE07CAB6EB1736D8D421BE73897AA04DA1(/*hidden argument*/Object_FindObjectsOfType_TisYodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_mFDF4AAAE07CAB6EB1736D8D421BE73897AA04DA1_RuntimeMethod_var);
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// instance = this;
		((YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_StaticFields*)il2cpp_codegen_static_fields_for(YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YodoAdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YodoAdsManager_Start_mA752C6691E77BE6E15C1995F278C346BD48534EA (YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mADCBF29E9871AA80D34028C9DC2BB06E10D7839C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YodoAdsManager_U3CStartU3Eb__15_0_mFF5E4669E12643CD7B0C976BB0C5A4B346EEDED3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * V_0 = NULL;
	Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * V_1 = NULL;
	{
		// Yodo1U3dMasCallback.OnSdkInitializedEvent += (success, error) =>
		// {
		//     Debug.Log(Yodo1U3dMas.TAG + "NoCode OnSdkInitializedEvent, success:" + success + ", error: " + error.ToString());
		//     if (success)
		//     {
		//         Debug.Log(Yodo1U3dMas.TAG + "NoCode The initialization has succeeded");
		//         OnSDKIntialized.Invoke();
		//         isInitialized = true;
		//     }
		//     else
		//     {
		//         OnSDKInitializationFailed.Invoke();
		//         Debug.Log(Yodo1U3dMas.TAG + "NoCode The initialization has failed");
		//     }
		// };
		Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 * L_0 = (Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3 *)il2cpp_codegen_object_new(Action_2_t73A99E6892F9F23047C8B6B5F8975C29F74A11F3_il2cpp_TypeInfo_var);
		Action_2__ctor_mADCBF29E9871AA80D34028C9DC2BB06E10D7839C(L_0, __this, (intptr_t)((intptr_t)YodoAdsManager_U3CStartU3Eb__15_0_mFF5E4669E12643CD7B0C976BB0C5A4B346EEDED3_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mADCBF29E9871AA80D34028C9DC2BB06E10D7839C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Yodo1U3dMasCallback_add_OnSdkInitializedEvent_m55653A511D30F193CA6C9E8500ECEC5C0B53014B(L_0, /*hidden argument*/NULL);
		// if (privacyPopup)
		bool L_1 = __this->get_privacyPopup_5();
		if (!L_1)
		{
			goto IL_012c;
		}
	}
	{
		// Yodo1AdBuildConfig buildConfig = new Yodo1AdBuildConfig();
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_2 = (Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 *)il2cpp_codegen_object_new(Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285_il2cpp_TypeInfo_var);
		Yodo1AdBuildConfig__ctor_m96C21ADB1B34ADFFD1BB2C768DFCC2A2C06CFF07(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(privacyPolicyLink) && !string.IsNullOrEmpty(termOfServiceLink))
		String_t* L_3 = __this->get_privacyPolicyLink_6();
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = __this->get_termOfServiceLink_7();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// buildConfig.enableUserPrivacyDialog(true);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_7 = V_0;
		NullCheck(L_7);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_8;
		L_8 = Yodo1AdBuildConfig_enableUserPrivacyDialog_m805791391720D88C39B7C6C92651CFCF68DC34C7(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00c2;
	}

IL_0046:
	{
		// else if (!string.IsNullOrEmpty(privacyPolicyLink) && !string.IsNullOrEmpty(termOfServiceLink))
		String_t* L_9 = __this->get_privacyPolicyLink_6();
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_11 = __this->get_termOfServiceLink_7();
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0075;
		}
	}
	{
		// buildConfig.enableUserPrivacyDialog(true)
		//     .privacyPolicyUrl(privacyPolicyLink);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_13 = V_0;
		NullCheck(L_13);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_14;
		L_14 = Yodo1AdBuildConfig_enableUserPrivacyDialog_m805791391720D88C39B7C6C92651CFCF68DC34C7(L_13, (bool)1, /*hidden argument*/NULL);
		String_t* L_15 = __this->get_privacyPolicyLink_6();
		NullCheck(L_14);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_16;
		L_16 = Yodo1AdBuildConfig_privacyPolicyUrl_m406EF9B5EC36632D77092BDA829781F1C984C7C5(L_14, L_15, /*hidden argument*/NULL);
		// }
		goto IL_00c2;
	}

IL_0075:
	{
		// else if (!string.IsNullOrEmpty(privacyPolicyLink) && !string.IsNullOrEmpty(termOfServiceLink))
		String_t* L_17 = __this->get_privacyPolicyLink_6();
		bool L_18;
		L_18 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_19 = __this->get_termOfServiceLink_7();
		bool L_20;
		L_20 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// buildConfig.enableUserPrivacyDialog(true)
		//     .userAgreementUrl(termOfServiceLink);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_21 = V_0;
		NullCheck(L_21);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_22;
		L_22 = Yodo1AdBuildConfig_enableUserPrivacyDialog_m805791391720D88C39B7C6C92651CFCF68DC34C7(L_21, (bool)1, /*hidden argument*/NULL);
		String_t* L_23 = __this->get_termOfServiceLink_7();
		NullCheck(L_22);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_24;
		L_24 = Yodo1AdBuildConfig_userAgreementUrl_m4AFA4BDCCC9FCAD90EC39F2BCC964386A8B103FB(L_22, L_23, /*hidden argument*/NULL);
		// }
		goto IL_00c2;
	}

IL_00a4:
	{
		// buildConfig.enableUserPrivacyDialog(true)
		//     .privacyPolicyUrl(privacyPolicyLink)
		//     .userAgreementUrl(termOfServiceLink);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_25 = V_0;
		NullCheck(L_25);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_26;
		L_26 = Yodo1AdBuildConfig_enableUserPrivacyDialog_m805791391720D88C39B7C6C92651CFCF68DC34C7(L_25, (bool)1, /*hidden argument*/NULL);
		String_t* L_27 = __this->get_privacyPolicyLink_6();
		NullCheck(L_26);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_28;
		L_28 = Yodo1AdBuildConfig_privacyPolicyUrl_m406EF9B5EC36632D77092BDA829781F1C984C7C5(L_26, L_27, /*hidden argument*/NULL);
		String_t* L_29 = __this->get_termOfServiceLink_7();
		NullCheck(L_28);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_30;
		L_30 = Yodo1AdBuildConfig_userAgreementUrl_m4AFA4BDCCC9FCAD90EC39F2BCC964386A8B103FB(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// if (enabledCustomizeColors)
		bool L_31 = __this->get_enabledCustomizeColors_8();
		if (!L_31)
		{
			goto IL_0126;
		}
	}
	{
		// Yodo1MasUserPrivacyConfig userPrivacyConfig = new Yodo1MasUserPrivacyConfig();
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_32 = (Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 *)il2cpp_codegen_object_new(Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030_il2cpp_TypeInfo_var);
		Yodo1MasUserPrivacyConfig__ctor_m81A453E3073465649B17AD33DF78B21CC0E384E2(L_32, /*hidden argument*/NULL);
		V_1 = L_32;
		// userPrivacyConfig.titleBackgroundColor(titleBackgroundColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_33 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = __this->get_titleBackgroundColor_9();
		NullCheck(L_33);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_35;
		L_35 = Yodo1MasUserPrivacyConfig_titleBackgroundColor_m18F874C8D6F483E7FC2488A358A3C989B527F90D(L_33, L_34, /*hidden argument*/NULL);
		// userPrivacyConfig.titleTextColor(titleTextColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_36 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = __this->get_titleTextColor_10();
		NullCheck(L_36);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_38;
		L_38 = Yodo1MasUserPrivacyConfig_titleTextColor_m5F128F71A67A987D6B069BDC8F61DE9254EFED9C(L_36, L_37, /*hidden argument*/NULL);
		// userPrivacyConfig.contentBackgroundColor(contentBackgroundColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_39 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40 = __this->get_contentBackgroundColor_11();
		NullCheck(L_39);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_41;
		L_41 = Yodo1MasUserPrivacyConfig_contentBackgroundColor_mBB20CA27C6BC6FF909040A3456A6C0C543CB8664(L_39, L_40, /*hidden argument*/NULL);
		// userPrivacyConfig.contentTextColor(contentTextColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_42 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = __this->get_contentTextColor_12();
		NullCheck(L_42);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_44;
		L_44 = Yodo1MasUserPrivacyConfig_contentTextColor_m16C93518BB7C412136B8B32792570BAA5A7B9607(L_42, L_43, /*hidden argument*/NULL);
		// userPrivacyConfig.buttonBackgroundColor(buttonBackgroundColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_45 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = __this->get_buttonBackgroundColor_13();
		NullCheck(L_45);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_47;
		L_47 = Yodo1MasUserPrivacyConfig_buttonBackgroundColor_m4FBDC7FEBC3F395928CF9B1C401D6F37DE881762(L_45, L_46, /*hidden argument*/NULL);
		// userPrivacyConfig.buttonTextColor(buttonTextColor);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_48 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = __this->get_buttonTextColor_14();
		NullCheck(L_48);
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_50;
		L_50 = Yodo1MasUserPrivacyConfig_buttonTextColor_mF978454C85E3551B12A5E3513140D91857E67845(L_48, L_49, /*hidden argument*/NULL);
		// buildConfig.userPrivacyConfig(userPrivacyConfig);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_51 = V_0;
		Yodo1MasUserPrivacyConfig_t4A64BB344B8BF75087D75B7ED34151BC9DF3A030 * L_52 = V_1;
		NullCheck(L_51);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_53;
		L_53 = Yodo1AdBuildConfig_userPrivacyConfig_mB97457F1977B5C493EFEA6AF2C2F373FE798211F(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0126:
	{
		// Yodo1U3dMas.SetAdBuildConfig(buildConfig);
		Yodo1AdBuildConfig_t05C9FEE1119E627549F1019C63601236F6455285 * L_54 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		Yodo1U3dMas_SetAdBuildConfig_m8DBC03EB3D344CB89E458B7B5E7A7346D6EC41FD(L_54, /*hidden argument*/NULL);
	}

IL_012c:
	{
		// if (!isInitialized)
		bool L_55 = __this->get_isInitialized_17();
		if (L_55)
		{
			goto IL_0139;
		}
	}
	{
		// Yodo1U3dMas.InitializeSdk();
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		Yodo1U3dMas_InitializeSdk_mE3CDD3BFCDEA6D498B6C047B157CB3C114C51A57(/*hidden argument*/NULL);
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Void YodoAdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YodoAdsManager__ctor_mE9C35EEB4D1115C8711DBFE46CB25A1F26018C9E (YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * __this, const RuntimeMethod* method)
{
	{
		// private bool privacyPopup = true;
		__this->set_privacyPopup_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void YodoAdsManager::<Start>b__15_0(System.Boolean,Yodo1.MAS.Yodo1U3dAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YodoAdsManager_U3CStartU3Eb__15_0_mFF5E4669E12643CD7B0C976BB0C5A4B346EEDED3 (YodoAdsManager_tFD7C61D5EA48EC5BE71D92EB9FB6E4843A94A380 * __this, bool ___success0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA589DF8522206801D34CE266D57DB5EB139222AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7256EFBCC2523BEAA5BDE09E8C28300EA06078A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF380E6DFF2073B2FAC3890A2E1BFECD262BC43E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Yodo1U3dMas.TAG + "NoCode OnSdkInitializedEvent, success:" + success + ", error: " + error.ToString());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var))->get_TAG_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA7256EFBCC2523BEAA5BDE09E8C28300EA06078A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA7256EFBCC2523BEAA5BDE09E8C28300EA06078A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___success0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * L_8 = ___error1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// if (success)
		bool L_11 = ___success0;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log(Yodo1U3dMas.TAG + "NoCode The initialization has succeeded");
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		String_t* L_12 = ((Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var))->get_TAG_0();
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, _stringLiteralA589DF8522206801D34CE266D57DB5EB139222AF, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// OnSDKIntialized.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_14 = __this->get_OnSDKIntialized_15();
		NullCheck(L_14);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_14, /*hidden argument*/NULL);
		// isInitialized = true;
		__this->set_isInitialized_17((bool)1);
		// }
		return;
	}

IL_0065:
	{
		// OnSDKInitializationFailed.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_15 = __this->get_OnSDKInitializationFailed_16();
		NullCheck(L_15);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_15, /*hidden argument*/NULL);
		// Debug.Log(Yodo1U3dMas.TAG + "NoCode The initialization has failed");
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var);
		String_t* L_16 = ((Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMas_tDE559E06696D96CACCB2B7179CD586690B56DB6B_il2cpp_TypeInfo_var))->get_TAG_0();
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_16, _stringLiteralF380E6DFF2073B2FAC3890A2E1BFECD262BC43E6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// };
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
// System.Void InterstitialAtTimer/<Invokee>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeeU3Ed__18__ctor_mE7EE177785B93522B9CF59A8CACF4D3E4FF1B6BB (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InterstitialAtTimer/<Invokee>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeeU3Ed__18_System_IDisposable_Dispose_m7B8F5F926AFB975DC0E2E2F3C616127953500C72 (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InterstitialAtTimer/<Invokee>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInvokeeU3Ed__18_MoveNext_m1DB492AFD71311AEED4700EBB0138D5C602CFE8F (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(Delay);
		float L_3 = __this->get_Delay_2();
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_4 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (action != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_action_3();
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_action_3();
		NullCheck(L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return (bool)0;
	}
}
// System.Object InterstitialAtTimer/<Invokee>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvokeeU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m268F779992877A87020C5DFC4E2107EC3D629BEA (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InterstitialAtTimer/<Invokee>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeeU3Ed__18_System_Collections_IEnumerator_Reset_m500E87579F7AB39582ED339553792BE1EBF850CA (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInvokeeU3Ed__18_System_Collections_IEnumerator_Reset_m500E87579F7AB39582ED339553792BE1EBF850CA_RuntimeMethod_var)));
	}
}
// System.Object InterstitialAtTimer/<Invokee>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInvokeeU3Ed__18_System_Collections_IEnumerator_get_Current_m463F5615DC813C8237803DC0B7A21AEF794FFB65 (U3CInvokeeU3Ed__18_t7E78CF2C72303AD37898027E03D400A7005E2F7B * __this, const RuntimeMethod* method)
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
// System.Void Yodo1.MAS.Yodo1JSON/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mC9DBFB52EFCD935B3D030D5B5DBE8CE51B3CDBB2 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_2(L_1);
		// }
		return;
	}
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m79AC9D13888778F1463668745129A7C7FD5EE346 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___jsonString0;
		Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * L_1 = (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 *)il2cpp_codegen_object_new(Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8_il2cpp_TypeInfo_var);
		Parser__ctor_mC9DBFB52EFCD935B3D030D5B5DBE8CE51B3CDBB2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_m37FC294252821E83516EC52FE681D44A2F147221(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m3A7B91AE31AFFCA6755750BE074B6CA80B1278A5 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_2();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_2((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Yodo1.MAS.Yodo1JSON/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m57AC1E8EF9B306AB364FE31995EA3AF95696B56D (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_3;
		L_3 = Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_m03BFFCC8EC7D25AAB104860B32EFAF89D649E31A(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (string.IsNullOrEmpty(name))
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_003b:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_11;
		L_11 = Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)5)))
		{
			goto IL_0046;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0046:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_12 = __this->get_json_2();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_12);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = V_0;
		String_t* L_15 = V_1;
		RuntimeObject * L_16;
		L_16 = Parser_ParseValue_m37FC294252821E83516EC52FE681D44A2F147221(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Yodo1.MAS.Yodo1JSON/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m3C459CDA88EE20A0B9147274D77BCA157668E067 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_m4CEF8271BB952044852FBBB8C9BAD5329E6185AF(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_9, L_10, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m37FC294252821E83516EC52FE681D44A2F147221 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m4CEF8271BB952044852FBBB8C9BAD5329E6185AF(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseByToken(Yodo1.MAS.Yodo1JSON/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m4CEF8271BB952044852FBBB8C9BAD5329E6185AF (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_m03BFFCC8EC7D25AAB104860B32EFAF89D649E31A(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_m7282B19905F68B6BF260477909113E3238FB9CA1(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_m57AC1E8EF9B306AB364FE31995EA3AF95696B56D(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_m3C459CDA88EE20A0B9147274D77BCA157668E067(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String Yodo1.MAS.Yodo1JSON/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m03BFFCC8EC7D25AAB104860B32EFAF89D649E31A (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0139;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_2();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013f;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0131;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_004b:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_2();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0139;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0139;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_00f7:
	{
		// var hex = new StringBuilder();
		StringBuilder_t * L_33 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_33, /*hidden argument*/NULL);
		V_3 = L_33;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_0115;
	}

IL_0102:
	{
		// hex.Append(NextChar);
		StringBuilder_t * L_34 = V_3;
		Il2CppChar L_35;
		L_35 = Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0115:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		// s.Append((char)Convert.ToInt32(hex.ToString(), 16));
		StringBuilder_t * L_39 = V_0;
		StringBuilder_t * L_40 = V_3;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_41, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		// break;
		goto IL_0139;
	}

IL_0131:
	{
		// s.Append(c);
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0139:
	{
		// while (parsing)
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013f:
	{
		// return s.ToString();
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object Yodo1.MAS.Yodo1JSON/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m7282B19905F68B6BF260477909113E3238FB9CA1 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m7FDB5AEECA1D269BECDF58C1E14E7E009FDBEB0C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_3, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_8, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mC7E523390015B74768D501111813E7353B3CBB39 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_001c:
	{
		// while (WHITE_SPACE.IndexOf(PeekChar) != -1)
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mE9B1DE708A2B5B9019D9DD7F4DB2040A6B7484CA(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Char Yodo1.MAS.Yodo1JSON/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mE9B1DE708A2B5B9019D9DD7F4DB2040A6B7484CA (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Yodo1.MAS.Yodo1JSON/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24 (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Yodo1.MAS.Yodo1JSON/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7FDB5AEECA1D269BECDF58C1E14E7E009FDBEB0C (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m22EDA52E0EECF35FC4BB10D22DF3834C11869A24(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_2();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}

IL_0023:
	{
		// while (WORD_BREAK.IndexOf(PeekChar) == -1)
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mE9B1DE708A2B5B9019D9DD7F4DB2040A6B7484CA(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952, L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0008;
		}
	}

IL_0036:
	{
		// return word.ToString();
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// Yodo1.MAS.Yodo1JSON/Parser/TOKEN Yodo1.MAS.Yodo1JSON/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mEE8CFFF3C1C79CD30169C9985344B313549EB14C (Parser_t28F20FF4AC7D8DB0323C2786FE8B6E4AC9A5FDE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mC7E523390015B74768D501111813E7353B3CBB39(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// char c = PeekChar;
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mE9B1DE708A2B5B9019D9DD7F4DB2040A6B7484CA(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_2();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_2();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_2();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// string word = NextWord;
		String_t* L_15;
		L_15 = Parser_get_NextWord_m7FDB5AEECA1D269BECDF58C1E14E7E009FDBEB0C(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mD990FE03C0E8322402466CAF864EACAB30458339 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String Yodo1.MAS.Yodo1JSON/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mAB1C3B9551869DEF6C78B00BDDF1EC653050F143 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * L_0 = (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 *)il2cpp_codegen_object_new(Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7_il2cpp_TypeInfo_var);
		Serializer__ctor_mD990FE03C0E8322402466CAF864EACAB30458339(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m1588F66B2891D716072849B97E84674CD5B5A011(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m1588F66B2891D716072849B97E84674CD5B5A011 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (value == null)
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		// builder.Append(value.ToString().ToLower());
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject * L_12 = ___value0;
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_mB06CF9397C2166647ED5DC68F2EA0B261965DB23(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject * L_15 = ___value0;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_16;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_17 = V_1;
		Serializer_SerializeObject_m672EF3F0F6F22775D8453D0D19FB14DBBE3A6868(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006b:
	{
		// else if (value is char)
		RuntimeObject * L_18 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_19 = ___value0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0080:
	{
		// SerializeOther(value);
		RuntimeObject * L_21 = ___value0;
		Serializer_SerializeOther_m000B1CE1015BD43EC3845B28425A7F44A6EFE80C(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m672EF3F0F6F22775D8453D0D19FB14DBBE3A6868 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// if (!first)
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F(__this, L_11, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_12 = __this->get_builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_m1588F66B2891D716072849B97E84674CD5B5A011(__this, L_16, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mB06CF9397C2166647ED5DC68F2EA0B261965DB23 (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_m1588F66B2891D716072849B97E84674CD5B5A011(__this, L_9, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		// foreach (var c in charArray)
		V_0 = L_3;
		V_1 = 0;
		goto IL_0127;
	}

IL_001c:
	{
		// foreach (var c in charArray)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00b7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00dd;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_00a4:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_00b7:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_00ca:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0123;
	}

IL_00dd:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_00fd;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		// }
		goto IL_0123;
	}

IL_00fd:
	{
		// builder.Append("\\u" + Convert.ToString(codepoint, 16).PadLeft(4, '0'));
		StringBuilder_t * L_32 = __this->get_builder_0();
		int32_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906(L_33, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_34, 4, ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, L_36, /*hidden argument*/NULL);
	}

IL_0123:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0127:
	{
		// foreach (var c in charArray)
		int32_t L_39 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_41 = __this->get_builder_0();
		NullCheck(L_41);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_41, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1JSON/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m000B1CE1015BD43EC3845B28425A7F44A6EFE80C (Serializer_tE0B024D642668A0142A5D05E0493FCDA10FAA4A7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is float
		//     || value is int
		//     || value is uint
		//     || value is long
		//     || value is double
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong
		//     || value is decimal)
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}

IL_0058:
	{
		// builder.Append(value.ToString());
		StringBuilder_t * L_11 = __this->get_builder_0();
		RuntimeObject * L_12 = ___value0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006b:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		Serializer_SerializeString_m012FCB83AE3AEC246AF262595FAA635E2565958F(__this, L_16, /*hidden argument*/NULL);
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
// System.Void Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerdAdDelegate__ctor_mD4A91990E5011CC02DB03989B8C8B9EBBDDED8BE (BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate::Invoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerdAdDelegate_Invoke_mBB8A78649B1DF279371F1EF5C7AEC456099141BA (BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___adEvent0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___error1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___error1);
					else
						GenericVirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___adEvent0, ___error1);
					else
						VirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___adEvent0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___adEvent0) - 1), ___error1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___error1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate::BeginInvoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerdAdDelegate_BeginInvoke_mBD1467137161B2A7E184C09A913FD82ECFC54FCD (BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var, &___adEvent0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Yodo1.MAS.Yodo1U3dMas/BannerdAdDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerdAdDelegate_EndInvoke_mB8C83282D215C205E651D33F41147DE8EFEE1FD8 (BannerdAdDelegate_tEBD5D2117301A3C3A1D7FA3F22977F5DBF209F54 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Yodo1.MAS.Yodo1U3dMas/InitializeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegate__ctor_m0EA6B57A311CCA54465C32992ACBD59E121A0076 (InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Yodo1.MAS.Yodo1U3dMas/InitializeDelegate::Invoke(System.Boolean,Yodo1.MAS.Yodo1U3dAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegate_Invoke_mA7B521EB296A7EF4B1589011B511BEB71B1C6A2B (InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * __this, bool ___success0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___error1, targetMethod);
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
						GenericInterfaceActionInvoker2< bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___success0, ___error1);
					else
						GenericVirtActionInvoker2< bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___success0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___error1);
					else
						VirtActionInvoker2< bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Yodo1.MAS.Yodo1U3dMas/InitializeDelegate::BeginInvoke(System.Boolean,Yodo1.MAS.Yodo1U3dAdError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitializeDelegate_BeginInvoke_m8CF13DC3AB60681281CE5EFB5F6A44C11B6DFDE2 (InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * __this, bool ___success0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Yodo1.MAS.Yodo1U3dMas/InitializeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegate_EndInvoke_m857FB894CDA94F3CEDCA6BCC47D89FB2935D85AF (InitializeDelegate_t14CF507B5566E5AD7BF505B57D2873A7B8578B15 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdDelegate__ctor_m26ADCCA7BD01BC5EAA62C97CC66452B1D26FC641 (InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate::Invoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdDelegate_Invoke_m722C763EA16C2C03927C49651961AD1349E609CE (InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___adError1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___adEvent0, ___adError1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___adError1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___adError1);
					else
						GenericVirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___adError1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___adEvent0, ___adError1);
					else
						VirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___adEvent0, ___adError1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___adEvent0) - 1), ___adError1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___adError1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate::BeginInvoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdDelegate_BeginInvoke_m4940571718499665CE74D76EFEF6A732E9E1F87B (InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___adError1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var, &___adEvent0);
	__d_args[1] = ___adError1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Yodo1.MAS.Yodo1U3dMas/InterstitialAdDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdDelegate_EndInvoke_mCBA0D1BC708A7A53DD1F0A07E4711373CBA60755 (InterstitialAdDelegate_tCEF7A1ED20BA0B0DB0CE773916BC9D964E5F3C9C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDelegate__ctor_m4EE8F84DBE4A4FF8EE3FC64B99CFDFA3DDF60688 (RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate::Invoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDelegate_Invoke_m28D3B051F7940F90E1E7A0FE1FD65117E03E04E2 (RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___adEvent0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___error1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___error1);
					else
						GenericVirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(targetMethod, targetThis, ___adEvent0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___adEvent0, ___error1);
					else
						VirtActionInvoker2< int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___adEvent0, ___error1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___adEvent0) - 1), ___error1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___adEvent0, ___error1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate::BeginInvoke(Yodo1.MAS.Yodo1U3dAdEvent,Yodo1.MAS.Yodo1U3dAdError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedAdDelegate_BeginInvoke_mDB73BD89C23F460FF16B5FD79B51983ECAB03FBC (RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * __this, int32_t ___adEvent0, Yodo1U3dAdError_tC79023A271F69363BF52DA2C5A62CD5A0FC76E01 * ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Yodo1U3dAdEvent_t0050C8D8206C73C38BB04E5BC6BF90D350C48AD0_il2cpp_TypeInfo_var, &___adEvent0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Yodo1.MAS.Yodo1U3dMas/RewardedAdDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDelegate_EndInvoke_m90FD89463D850B83CD0C17B90906874A75D4BFDF (RewardedAdDelegate_t7DB66A9C3E710CDA5DF3A7ECF38157543F5022BA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::add_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnAdOpenedEvent_m4721BA8C711B8A46630E445781B176FF6C8D2A2B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdOpenedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdOpenedEvent_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdOpenedEvent_15(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::remove_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnAdOpenedEvent_m7A5E54D517D2042729B972FB1ADC1728A2EC8DEA (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdOpenedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdOpenedEvent_15();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdOpenedEvent_15(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::add_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnAdErrorEvent_mAE0EAA538A205DE87DC6556539C4F9F1A7E64FC3 (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdErrorEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdErrorEvent_16();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdErrorEvent_16(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::remove_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnAdErrorEvent_m30D0C2E863BE2B364AF6AC8BCAB5D20CEE4287CA (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdErrorEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdErrorEvent_16();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdErrorEvent_16(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::add_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_add_OnAdClosedEvent_m01D6B2864D9F128F318BF45F681E960F3C9A098A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdClosedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdClosedEvent_17();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdClosedEvent_17(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::remove_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_remove_OnAdClosedEvent_m3B1EAB703226E2D0D0D9DE014329E4A1D3CDB0FD (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onBannerAdClosedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onBannerAdClosedEvent_17();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onBannerAdClosedEvent_17(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Banner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m526BA43D5608F08B3C0BE2AA7C9102FD3548D799 (Banner_t51DC5A08BB512DB4898911A32832616C8E531F9B * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::add_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnAdOpenedEvent_mA14626038F1B85777935662F689829B5F7124C9E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdOpenedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdOpenedEvent_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdOpenedEvent_18(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::remove_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnAdOpenedEvent_mB39F15E92104D25AC10AF10FBF4D9BE764D6ACB6 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdOpenedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdOpenedEvent_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdOpenedEvent_18(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::add_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnAdErrorEvent_mC406ECDC3999990203937B58A6F329882089380B (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdErrorEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdErrorEvent_19();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdErrorEvent_19(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::remove_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnAdErrorEvent_m939C5E3596E6D42AA7E799556888F19B21E3D278 (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdErrorEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdErrorEvent_19();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdErrorEvent_19(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::add_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_add_OnAdClosedEvent_m692EE31757613CD7422E380FC0CCA0616E9F8DD1 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdClosedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdClosedEvent_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdClosedEvent_20(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::remove_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_remove_OnAdClosedEvent_m0C7922DD4FE0DFF15F007C8FBD7F5700788A9384 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onInterstitialAdClosedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onInterstitialAdClosedEvent_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onInterstitialAdClosedEvent_20(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Interstitial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial__ctor_m9E189D18DE94F6C5763B6C688B6D95E714F74FA8 (Interstitial_tCAAF4D2DD305B9560B7D4F5A13226F7E6FBA25E0 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::add_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_add_OnAdOpenedEvent_m6BD97E0893179BB579C9B27D7041442CFFBACAB6 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdOpenedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdOpenedEvent_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdOpenedEvent_21(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::remove_OnAdOpenedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_remove_OnAdOpenedEvent_m0C7EB6C5B91E774796463248435A74BDD478DA42 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdOpenedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdOpenedEvent_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdOpenedEvent_21(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::add_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_add_OnAdErrorEvent_m07BD93175DCFBA4EE3476D77DCB3DD0C1B076FBB (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdErrorEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdErrorEvent_22();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdErrorEvent_22(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::remove_OnAdErrorEvent(System.Action`1<Yodo1.MAS.Yodo1U3dAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_remove_OnAdErrorEvent_mC71E6A5B33855CE239B50994F56F086CB652D46A (Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdErrorEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdErrorEvent_22();
		Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdErrorEvent_22(((Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722 *)CastclassSealed((RuntimeObject*)L_2, Action_1_tFEDF8FE0F004F36AF8D808CD396D78046882C722_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::add_OnAdReceivedRewardEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_add_OnAdReceivedRewardEvent_mFB3FE6DF10665ADAC7803FC5F11E55F234E3D9FA (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdReceivedRewardEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdReceivedRewardEvent_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdReceivedRewardEvent_23(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::remove_OnAdReceivedRewardEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_remove_OnAdReceivedRewardEvent_mE35037377676EB77BA04198109792F9EF942166E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdReceivedRewardEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdReceivedRewardEvent_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdReceivedRewardEvent_23(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::add_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_add_OnAdClosedEvent_mD7B91414E4544A3CDB37161B9730391951396FFC (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdClosedEvent += value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdClosedEvent_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdClosedEvent_24(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::remove_OnAdClosedEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_remove_OnAdClosedEvent_mD31EB70D6D3E697E18C4E3525B0C0DE4F0DF75B8 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _onRewardedAdClosedEvent -= value;
		IL2CPP_RUNTIME_CLASS_INIT(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->get__onRewardedAdClosedEvent_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_StaticFields*)il2cpp_codegen_static_fields_for(Yodo1U3dMasCallback_t267B65898E8BC28F3D0DC2D7D8EEDA099588D32F_il2cpp_TypeInfo_var))->set__onRewardedAdClosedEvent_24(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Yodo1.MAS.Yodo1U3dMasCallback/Rewarded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded__ctor_mB34357B30A3DAF79B9123993EFAA02DEC995B81F (Rewarded_t9CBF04C9A7DCB77AFC4B5353D9DB1C31026FD2F0 * __this, const RuntimeMethod* method)
{
	{
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
