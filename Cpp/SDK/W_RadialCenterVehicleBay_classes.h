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

// WidgetBlueprintGeneratedClass W_RadialCenterVehicleBay.W_RadialCenterVehicleBay_C
// 0x0070 (FullSize[0x0368] - InheritedSize[0x02F8])
// LastOffsetWithSize(0x02F8)
#define PADDING_0349 - 0x0000 // Minimum to subtract -> (0000)
class UW_RadialCenterVehicleBay_C : public USQRadialButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0349, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02F8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0349, class UImage*,                                                         Background);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0349, class UImage*,                                                         DisplayIcon);                                              // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0349, class UImage*,                                                         Image_2);                                                  // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0349, class UImage*,                                                         Image_3);                                                  // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0349, class UTextBlock*,                                                     TB_Ammo);                                                  // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0349, class UTextBlock*,                                                     TB_Con);                                                   // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0349, class UTextBlock*,                                                     TB_FailReason);                                            // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0349, class UTextBlock*,                                                     TB_Title);                                                 // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0349, class UWidgetSwitcher*,                                                WidgetSwitcher_Main);                                      // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0349, class UBaseRadialMenu_C*,                                              OwnerRadialMenu);                                          // 0x0348(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0349, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0350(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0349, bool,                                                                  Hovered);                                                  // 0x0358(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0349, class ABP_VehicleBay_C*,                                               Vehicle_Bay);                                              // 0x0360(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RadialCenterVehicleBay.W_RadialCenterVehicleBay_C");
		return ptr;
	}


	void Update_Info();
	struct FLinearColor Get_Background_ColorAndOpacity_1();
	void Construct();
	void BPInit();
	void UpdateVisibility();
	void OnHoverBegin();
	void OnHoverEnd();
	void ExecuteUbergraph_W_RadialCenterVehicleBay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
