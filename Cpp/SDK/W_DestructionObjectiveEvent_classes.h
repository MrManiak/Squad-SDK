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

// WidgetBlueprintGeneratedClass W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C
// 0x007A (FullSize[0x025A] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01B8 - 0x0000 // Minimum to subtract -> (0050)
class UW_DestructionObjectiveEvent_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01B8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01B8, class UWidgetAnimation*,                                               FlagAnim);                                                 // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01B8, class UWidgetAnimation*,                                               AlphaAnim);                                                // 0x0240(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01B8, class UImage*,                                                         Image_Progress);                                           // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01B8, class UTextBlock*,                                                     TB_State);                                                 // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01B8, unsigned char,                                                         Objective_Owner);                                          // 0x0258(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0079 PADDING_01B8, unsigned char,                                                         Old_Team);                                                 // 0x0259(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DestructionObjectiveEvent.W_DestructionObjectiveEvent_C");
		return ptr;
	}


	void Setup_Fill_Image();
	void Play_Destroy_Animation(unsigned char Objective_Owner);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_W_DestructionObjectiveEvent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
