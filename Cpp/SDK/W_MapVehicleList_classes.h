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

// WidgetBlueprintGeneratedClass W_MapVehicleList.W_MapVehicleList_C
// 0x00B8 (FullSize[0x0298] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0150 - 0x0000 // Minimum to subtract -> (0050)
class UW_MapVehicleList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0150, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0150, class UImage*,                                                         Image_1);                                                  // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0150, class UImage*,                                                         Image_2);                                                  // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0150, class UImage*,                                                         Image_3);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0150, class UImage*,                                                         Image_4);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0150, class UScrollBox*,                                                     ScrollBox_Ally);                                           // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0150, class UScrollBox*,                                                     ScrollBox_Enemy);                                          // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0150, class ASQPlayerState*,                                                 SQ_PS);                                                    // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0150, TArray<struct FS_VehicleListData>,                                     Unsorted_Ally_Vics);                                       // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0150, TArray<struct FS_VehicleListData>,                                     Unsorted_Enemy_Vics);                                      // 0x0280(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0150, class UClass*,                                                         Kill_Death_Ruleset);                                       // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapVehicleList.W_MapVehicleList_C");
		return ptr;
	}


	void Cache_KillDeath_Ruleset();
	void Sort_Vics_by_Cost(TArray<struct FS_VehicleListData>* To_Sort, TArray<struct FS_VehicleListData>* Out_Sorted);
	void Draw_Sorted_Vehicle_Data();
	void Get_Tickets_For_Vehicle(int Team, class UClass* Vehicle_Ref, int* Tickets_Lost_on_Vehicle_Destroy);
	void Collect_Vehicle_Data();
	void Construct();
	void ExecuteUbergraph_W_MapVehicleList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
