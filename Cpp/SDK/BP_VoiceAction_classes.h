#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VoiceAction.BP_VoiceAction_C
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_02DD - 0x0000 // Minimum to subtract -> (0000)
class UBP_VoiceAction_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02DD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02DD, struct FScriptMulticastDelegate,                                       DoAction);                                                 // 0x0038(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0018 PADDING_02DD, class USoundBase*,                                                     Sound);                                                    // 0x0048(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VoiceAction.BP_VoiceAction_C");
		return ptr;
	}


	void OnClicked(class UBaseRadialMenu_C* Raidal_Menu);
	void ExecuteUbergraph_BP_VoiceAction(int EntryPoint);
	void DoAction__DelegateSignature(class UClass* NewParam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
