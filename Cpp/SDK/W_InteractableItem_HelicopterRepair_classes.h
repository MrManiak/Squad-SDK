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

// WidgetBlueprintGeneratedClass W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C
// 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
// LastOffsetWithSize(0x0290)
#define PADDING_04FD - 0x0000 // Minimum to subtract -> (0000)
class UW_InteractableItem_HelicopterRepair_C : public UW_InteractableItem_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04FD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0290(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04FD, class UWidgetAnimation*,                                               Fade);                                                     // 0x0298(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04FD, class UHorizontalBox*,                                                 FormatBox);                                                // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04FD, class UImage*,                                                         Image_1);                                                  // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04FD, class UImage*,                                                         Line);                                                     // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04FD, class UProgressBar*,                                                   ProgressBar_Hull);                                         // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04FD, class UTextBlock*,                                                     TB_RotorCollision);                                        // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_04FD, class UVerticalBox*,                                                   VerticalBox_Health);                                       // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04FD, class UW_HelicopterStatusSmall_C*,                                     W_HelicopterStatusSmall);                                  // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04FD, bool,                                                                  Last_Is_Full);                                             // 0x02D8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableItem_HelicopterRepair.W_InteractableItem_HelicopterRepair_C");
		return ptr;
	}


	void Set_Main_Health(class ASQVehicle* Vehicle, bool* Limit_Reached, bool* Max_Health);
	void Get_Format_Box(class UHorizontalBox** FormatBox);
	void Update_Vehicle_Health();
	void Format_Text();
	void ExecuteUbergraph_W_InteractableItem_HelicopterRepair(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
