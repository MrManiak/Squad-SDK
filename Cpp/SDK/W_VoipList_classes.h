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

// WidgetBlueprintGeneratedClass W_VoipList.W_VoipList_C
// 0x0080 (FullSize[0x0260] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_022F - 0x0000 // Minimum to subtract -> (0050)
class UW_VoipList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_022F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_022F, class UGridPanel*,                                                     VoipGrid);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_022F, int,                                                                   Max_List_Size);                                            // 0x0240(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_022F, class ASQHUD*,                                                         REF_HUD);                                                  // 0x0248(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_022F, TArray<class UW_VoipPlayer_C*>,                                        Voip_Player_Widgets);                                      // 0x0250(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VoipList.W_VoipList_C");
		return ptr;
	}


	void Refresh_Speaker_Widgets();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Refresh();
	void ExecuteUbergraph_W_VoipList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
