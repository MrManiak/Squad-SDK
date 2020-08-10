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

// WidgetBlueprintGeneratedClass MagazineWidget.MagazineWidget_C
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_04F2 - 0x0000 // Minimum to subtract -> (0000)
class UMagazineWidget_C : public USQMagazineWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04F2, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04F2, class UImage*,                                                         BPAmmoStatus);                                             // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MagazineWidget.MagazineWidget_C");
		return ptr;
	}


	void Construct();
	void BPInit();
	void ExecuteUbergraph_MagazineWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
