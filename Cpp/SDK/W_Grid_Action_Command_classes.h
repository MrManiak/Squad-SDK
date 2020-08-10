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

// WidgetBlueprintGeneratedClass W_Grid_Action_Command.W_Grid_Action_Command_C
// 0x0059 (FullSize[0x02D1] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_04CB - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_Action_Command_C : public UW_Grid_Action_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04CB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04CB, int,                                                                   Interval_Index);                                           // 0x0280(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04CB, class UClass*,                                                         SQCommandData);                                            // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04CB, struct FLinearColor,                                                   Tint);                                                     // 0x0290(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04CB, struct FText,                                                          Name);                                                     // 0x02A0(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04CB, bool,                                                                  Force_Allowed);                                            // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04CB, class AWorldSettings*,                                                 WorldSettings);                                            // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_04CB, class UBP_CommanderActionCondition_C*,                                 Command_Condition);                                        // 0x02C8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04CB, bool,                                                                  Locked);                                                   // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action_Command.W_Grid_Action_Command_C");
		return ptr;
	}


	bool Get_Action_Ready();
	class UWidget* Get_Tooltip();
	void Get_Color(struct FLinearColor* Tint);
	void Get_State(ESQCommandOptionState* State, float* State_Time, float* State_Percent, bool* Category_Locked, float* Category_Time, float* Category_Percent);
	void Construct();
	void Refresh_Info();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Action_Button_Pressed();
	void Fail_Message();
	void ExecuteUbergraph_W_Grid_Action_Command(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
