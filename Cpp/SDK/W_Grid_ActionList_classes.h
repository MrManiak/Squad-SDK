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

// WidgetBlueprintGeneratedClass W_Grid_ActionList.W_Grid_ActionList_C
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_04F1 - 0x0000 // Minimum to subtract -> (0000)
class UW_Grid_ActionList_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04F1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04F1, class UBorder*,                                                        HoverCheckArea);                                           // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04F1, class UVerticalBox*,                                                   VerticalBox_1);                                            // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04F1, TArray<class UClass*>,                                                 Actions);                                                  // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04F1, bool,                                                                  was_hovered);                                              // 0x0270(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04F1, struct FScriptMulticastDelegate,                                       Closed);                                                   // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04F1, class UW_GridHeader_C*,                                                Header);                                                   // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04F1, int,                                                                   Fireteam_ID);                                              // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_04F1, int,                                                                   Squad_ID);                                                 // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_ActionList.W_Grid_ActionList_C");
		return ptr;
	}


	void Get_Squad_ID(int* ID);
	void Get_Fireteam_ID(int* ID);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Close();
	void Construct();
	void Populate_List();
	void ExecuteUbergraph_W_Grid_ActionList(int EntryPoint);
	void Closed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
