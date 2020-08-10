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

// WidgetBlueprintGeneratedClass W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C
// 0x0024 (FullSize[0x0264] - InheritedSize[0x0240])
// LastOffsetWithSize(0x0240)
#define PADDING_0248 - 0x0000 // Minimum to subtract -> (0000)
class UW_Tooltip_RallyPoint_C : public USQToolTipBaseWidget
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0248, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0240(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0248, class UWidgetAnimation*,                                               OpenAnim);                                                 // 0x0248(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0248, class UImage*,                                                         BackgroundImage);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0248, class UTextBlock*,                                                     RallyPointText);                                           // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0248, int,                                                                   NumSpawns);                                                // 0x0260(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Tooltip_RallyPoint.W_Tooltip_RallyPoint_C");
		return ptr;
	}


	void Update_Rally_Tooltip_Text(int NumSpawns);
	void Construct();
	void ExecuteUbergraph_W_Tooltip_RallyPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
