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

// WidgetBlueprintGeneratedClass SpeedDialNumber.SpeedDialNumber_C
// 0x006C (FullSize[0x024C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0230 - 0x0000 // Minimum to subtract -> (0050)
class USpeedDialNumber_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0230, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0230, class UInvalidationBox*,                                               InvalidationBox_1);                                        // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0230, class UTextBlock*,                                                     TB_Num);                                                   // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0230, int,                                                                   Num);                                                      // 0x0248(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpeedDialNumber.SpeedDialNumber_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SpeedDialNumber(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
