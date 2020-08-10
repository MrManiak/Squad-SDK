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

// WidgetBlueprintGeneratedClass W_Grid_AcceptDeny.W_Grid_AcceptDeny_C
// 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_0116 - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_AcceptDeny_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0116, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0116, class UImage*,                                                         Image_1);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0116, class UImage*,                                                         Image_120);                                                // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_AcceptDeny.W_Grid_AcceptDeny_C");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Grid_AcceptDeny(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
