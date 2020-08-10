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

// WidgetBlueprintGeneratedClass W_Grid_Action_Director_CO_OrderLine.W_Grid_Action_Director_CO_OrderLine_C
// 0x001C (FullSize[0x0294] - InheritedSize[0x0278])
// LastOffsetWithSize(0x0278)
#define PADDING_0417 - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_Action_Director_CO_OrderLine_C : public UW_Grid_Action_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0417, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0278(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0417, class UButton*,                                                        Button_ActionSquadID);                                     // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0417, class UTextBlock*,                                                     TB_ID);                                                    // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0417, int,                                                                   Interval_Index);                                           // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action_Director_CO_OrderLine.W_Grid_Action_Director_CO_OrderLine_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_ActionSquadID_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_Grid_Action_Director_CO_OrderLine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
