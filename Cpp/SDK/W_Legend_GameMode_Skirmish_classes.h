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

// WidgetBlueprintGeneratedClass W_Legend_GameMode_Skirmish.W_Legend_GameMode_Skirmish_C
// 0x0070 (FullSize[0x0250] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0356 - 0x0000 // Minimum to subtract -> (0050)
class UW_Legend_GameMode_Skirmish_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0356, class UImage*,                                                         Gamemode_Image);                                           // 0x0230(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0356, class UImage*,                                                         Image_2);                                                  // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0356, class UImage*,                                                         Image_3);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0356, class UImage*,                                                         Image_52);                                                 // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Legend_GameMode_Skirmish.W_Legend_GameMode_Skirmish_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
