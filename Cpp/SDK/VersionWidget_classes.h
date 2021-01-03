#pragma once

// Name: S, Version: b


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
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UVersionWidget_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_3166;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


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
