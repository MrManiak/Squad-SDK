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

// BlueprintGeneratedClass BP_RadialItemModel.BP_RadialItemModel_C
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_031B - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialItemModel_C : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_031B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0028(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_031B, struct FText,                                                          Name);                                                     // 0x0030(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0020 PADDING_031B, class UTexture2D*,                                                     Icon);                                                     // 0x0048(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_031B, struct FText,                                                          details);                                                  // 0x0050(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0040 PADDING_031B, bool,                                                                  ShowsToolTip);                                             // 0x0068(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0044 PADDING_031B, struct FName,                                                          ToolTipKey0);                                              // 0x006C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_031B, struct FName,                                                          ToolTipKey1);                                              // 0x0074(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_031B, struct FName,                                                          ToolTipKey2);                                              // 0x007C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_031B, ESQRadialWidgetSizeEnum,                                               WidgetSize);                                               // 0x0084(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005D PADDING_031B, bool,                                                                  UnavailableInVehicle);                                     // 0x0085(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_031B, class UClass*,                                                         WidgetCreatorMethod);                                      // 0x0088(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialItemModel.BP_RadialItemModel_C");
		return ptr;
	}


	void OnClicked(class UBaseRadialMenu_C* Radial);
	void Populate(class USQRadialButton* Widget, class UBaseRadialMenu_C* Menu, class UObject* Context);
	void OnReleased(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_RadialItemModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
