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

// WidgetBlueprintGeneratedClass W_ModeIntro.W_ModeIntro_C
// 0x0078 (FullSize[0x0258] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_014E - 0x0000 // Minimum to subtract -> (0050)
class UW_ModeIntro_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_014E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_014E, class UWidgetAnimation*,                                               Anim);                                                     // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_014E, class UBorder*,                                                        Border_3);                                                 // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_014E, class UTextBlock*,                                                     TBAttackorDefend);                                         // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_014E, class UTextBlock*,                                                     TBMode);                                                   // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ModeIntro.W_ModeIntro_C");
		return ptr;
	}


	void Get_Mode_Info(int Team_ID);
	void OnLoaded_E3FFE2DA447448FE9067F19C6677E6FF(class UObject* Loaded);
	void Team_Selected(int Team_ID);
	void ExecuteUbergraph_W_ModeIntro(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
