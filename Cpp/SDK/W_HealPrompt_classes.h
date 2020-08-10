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

// WidgetBlueprintGeneratedClass W_HealPrompt.W_HealPrompt_C
// 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0296 - 0x0000 // Minimum to subtract -> (0050)
class UW_HealPrompt_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0296, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0296, class ASQSoldier*,                                                     Soldier);                                                  // 0x0238(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0296, struct FTimerHandle,                                                   Collapse_Timer);                                           // 0x0240(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HealPrompt.W_HealPrompt_C");
		return ptr;
	}


	void Update_Soldier(class ASQSoldier* Soldier);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Collapse();
	void Show();
	void ExecuteUbergraph_W_HealPrompt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
