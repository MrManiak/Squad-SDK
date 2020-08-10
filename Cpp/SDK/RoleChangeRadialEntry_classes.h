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

// WidgetBlueprintGeneratedClass RoleChangeRadialEntry.RoleChangeRadialEntry_C
// 0x0028 (FullSize[0x0488] - InheritedSize[0x0460])
// LastOffsetWithSize(0x0460)
#define PADDING_0109 - 0x0000 // Minimum to subtract -> (0000)
class URoleChangeRadialEntry_C : public USQRadialRoleIconButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0109, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0460(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0109, class UImage*,                                                         BPElementImage);                                           // 0x0468(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0109, class UImage*,                                                         BPIconImage);                                              // 0x0470(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0109, class UImage*,                                                         BPOuterRimImage);                                          // 0x0478(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0109, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x0480(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RoleChangeRadialEntry.RoleChangeRadialEntry_C");
		return ptr;
	}


	void BPInit();
	void Construct();
	void OnHoverBegin();
	void ExecuteUbergraph_RoleChangeRadialEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
