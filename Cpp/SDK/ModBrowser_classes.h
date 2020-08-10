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

// WidgetBlueprintGeneratedClass ModBrowser.ModBrowser_C
// 0x0070 (FullSize[0x0250] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02E3 - 0x0000 // Minimum to subtract -> (0050)
class UModBrowser_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02E3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02E3, class UModDetails_C*,                                                  ModDetails);                                               // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02E3, class UWrapBox*,                                                       ModList);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02E3, class UTextBlock*,                                                     TextBlock_6);                                              // 0x0248(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ModBrowser.ModBrowser_C");
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	void Selected_Mod(const struct FModdingRuntimeModInfoDetails& ModInfo);
	void Init();
	void ExecuteUbergraph_ModBrowser(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
