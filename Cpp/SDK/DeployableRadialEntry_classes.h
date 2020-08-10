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

// WidgetBlueprintGeneratedClass DeployableRadialEntry.DeployableRadialEntry_C
// 0x0030 (FullSize[0x04C8] - InheritedSize[0x0498])
// LastOffsetWithSize(0x0498)
#define PADDING_0CD5 - 0x0000 // Minimum to subtract -> (0000)
class UDeployableRadialEntry_C : public USQRadialDeployableButton
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CD5, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0498(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CD5, class UTextBlock*,                                                     BPDeployableLimitText);                                    // 0x04A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CD5, class UImage*,                                                         BPElementImage);                                           // 0x04A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CD5, class UImage*,                                                         BPIconImage);                                              // 0x04B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0CD5, class UImage*,                                                         BPOuterRimImage);                                          // 0x04B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0CD5, class UBP_RadialItemModel_C*,                                          RelatedActionModel);                                       // 0x04C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeployableRadialEntry.DeployableRadialEntry_C");
		return ptr;
	}


	void BPInit();
	void OnHoverBegin();
	void ExecuteUbergraph_DeployableRadialEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
