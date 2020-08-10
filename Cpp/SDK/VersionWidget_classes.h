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

// WidgetBlueprintGeneratedClass VersionWidget.VersionWidget_C
// 0x0058 (FullSize[0x0238] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0252 - 0x0000 // Minimum to subtract -> (0050)
class UVersionWidget_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0252, class UTextBlock*,                                                     TextBlock_3166);                                           // 0x0230(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VersionWidget.VersionWidget_C");
		return ptr;
	}


	struct FText GetText_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
