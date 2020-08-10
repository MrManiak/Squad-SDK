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

// WidgetBlueprintGeneratedClass UMG_StagingTimerText.UMG_StagingTimerText_C
// 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
// LastOffsetWithSize(0x0260)
#define PADDING_041B - 0x0000 // Minimum to subtract -> (0008)
class UUMG_StagingTimerText_C : public USQStagingTimerText
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_041B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0268(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0010 PADDING_041B, class UWidgetAnimation*,                                               Close);                                                    // 0x0270(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_041B, class UWidgetAnimation*,                                               Blinking);                                                 // 0x0278(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_041B, class UBorder*,                                                        BorderMain);                                               // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_041B, class UImage*,                                                         Clock);                                                    // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_041B, class UTextBlock*,                                                     Staging);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_041B, class UTextBlock*,                                                     TB_Defenders);                                             // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_041B, class UTextBlock*,                                                     TB_Notes);                                                 // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_StagingTimerText.UMG_StagingTimerText_C");
		return ptr;
	}


	void Construct();
	void OnFellBelowThreshold();
	void Get_Player_Team();
	void Team_State_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam);
	void ExecuteUbergraph_UMG_StagingTimerText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
