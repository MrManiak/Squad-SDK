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

// WidgetBlueprintGeneratedClass W_SquadHealPrompt.W_SquadHealPrompt_C
// 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_0290 - 0x0000 // Minimum to subtract -> (0000)
class UW_SquadHealPrompt_C : public UW_HealPrompt_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0290, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0290, class UWidgetAnimation*,                                               BleedFlash);                                               // 0x0250(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0290, class UImage*,                                                         Image_1);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0290, class UImage*,                                                         Image_2);                                                  // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0290, class UWidgetSwitcher*,                                                WidgetSwitcher_1);                                         // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SquadHealPrompt.W_SquadHealPrompt_C");
		return ptr;
	}


	void Update_Soldier(class ASQSoldier* Soldier);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_W_SquadHealPrompt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
