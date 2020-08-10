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

// WidgetBlueprintGeneratedClass W_Grid_ActionList_CO.W_Grid_ActionList_CO_C
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
// LastOffsetWithSize(0x0298)
#define PADDING_01D7 - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_ActionList_CO_C : public UW_Grid_ActionList_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01D7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0298(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01D7, TArray<class UClass*>,                                                 SQCommandActions);                                         // 0x02A0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_ActionList_CO.W_Grid_ActionList_CO_C");
		return ptr;
	}


	void Get_Fireteam_ID(int* ID);
	void Populate_List();
	void ExecuteUbergraph_W_Grid_ActionList_CO(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
