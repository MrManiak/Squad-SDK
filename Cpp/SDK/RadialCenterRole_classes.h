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

// WidgetBlueprintGeneratedClass RadialCenterRole.RadialCenterRole_C
// 0x00C0 (FullSize[0x04E0] - InheritedSize[0x0420])
// LastOffsetWithSize(0x0420)
#define PADDING_00A1 - 0x0000 // Minimum to subtract -> (0000)
class URadialCenterRole_C : public USQRadialCenterRoleButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00A1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0420(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00A1, class UBP_Role_Inventory_C*,                                           BP_Role_Inventory_5);                                      // 0x0428(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00A1, class UImage*,                                                         Image_2);                                                  // 0x0430(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00A1, class UImage*,                                                         LowerLayerImage);                                          // 0x0438(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00A1, class UImage*,                                                         LowestCircleImage);                                        // 0x0440(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00A1, class URadialCenterText_C*,                                            RadialCenterText);                                         // 0x0448(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_00A1, class UTextBlock*,                                                     RoleAmmoCostText);                                         // 0x0450(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_00A1, class UImage*,                                                         RoleImage);                                                // 0x0458(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_00A1, class UTextBlock*,                                                     RoleNameText);                                             // 0x0460(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_00A1, class UOverlay*,                                                       RoleWidgetOverlay);                                        // 0x0468(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_00A1, class UImage*,                                                         UnavailableImage);                                         // 0x0470(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_00A1, class UImage*,                                                         UnavailableTextImage);                                     // 0x0478(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_00A1, class UImage*,                                                         UpperLayerImage);                                          // 0x0480(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00A1, struct FText,                                                          MissingBindingText);                                       // 0x0488(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0080 PADDING_00A1, class UBaseRadialMenu_C*,                                              OwnerRadialMenu);                                          // 0x04A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_00A1, class USQRadialButton*,                                                LastHoverWidget);                                          // 0x04A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_00A1, struct FLinearColor,                                                   UnavailableColor);                                         // 0x04B0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_00A1, struct FLinearColor,                                                   AvailableColor);                                           // 0x04C0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_00A1, float,                                                                 CachedAmmoCost);                                           // 0x04D0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_00A1, class USQRoleSettings*,                                                CachedAmmoCostRole);                                       // 0x04D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialCenterRole.RadialCenterRole_C");
		return ptr;
	}


	void HideCenterTextWidget();
	void DisplayCenterTextWidget();
	ESlateVisibility GetVisibility_1();
	struct FText Get_Role_Specifics_Text_1();
	struct FSlateBrush Get_Role_Image_Brush_1();
	struct FText Get_Role_Text_Detail_Text_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnHoverBegin();
	void ExecuteUbergraph_RadialCenterRole(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
