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

// WidgetBlueprintGeneratedClass W_GridMenu.W_GridMenu_C
// 0x0100 (FullSize[0x02E0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_03FC - 0x0000 // Minimum to subtract -> (0050)
class UW_GridMenu_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_03FC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03FC, class UButton*,                                                        Button_GridMenuMain);                                      // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_03FC, class UBorder*,                                                        CenterBorder);                                             // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03FC, class UImage*,                                                         CenterIcon);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03FC, class UImage*,                                                         Icon);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03FC, class USizeBox*,                                                       SizeBox_Main);                                             // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03FC, class UWidgetSwitcher*,                                                WidgetSwitcher_3);                                         // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03FC, TArray<class UClass*>,                                                 Grid_Headers);                                             // 0x0268(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03FC, TArray<class UW_GridHeader_C*>,                                        Current_Headers);                                          // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_03FC, struct FVector2D,                                                      Origin_Screen_Position);                                   // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_03FC, float,                                                                 Min_X);                                                    // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_03FC, float,                                                                 Max_X);                                                    // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_03FC, float,                                                                 Min_Y);                                                    // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_03FC, float,                                                                 Max_Y);                                                    // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_03FC, struct FVector,                                                        SL_Grid_Zero_Based_World_Location);                        // 0x02A0(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CC PADDING_03FC, float,                                                                 Custom_Padding);                                           // 0x02AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_03FC, class UClass*,                                                         Center_Marker);                                            // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_03FC, bool,                                                                  Is_Deleting);                                              // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00DC PADDING_03FC, struct FVector2D,                                                      Origin_Mouse_Position);                                    // 0x02BC(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_03FC, struct FVector2D,                                                      Origin_Mouse_Screen_Position);                             // 0x02C4(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03FC, class ASQPlayerController*,                                            SQ_PC);                                                    // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_03FC, class UBP_MapMarker_Selectable_C*,                                     SelectedMapMarker);                                        // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridMenu.W_GridMenu_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Place_Map_Marker(class USQMapMarkerDataAsset* Map_Marker_Data, int FireTeamId);
	void Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local);
	void Place_Marker(class UClass* MarkerClass, int FireTeamId);
	void Remove_Self();
	void Close_All_Actions();
	void Close_All_Headers();
	void Add_Self_to_Viewport();
	void Remove_Headers();
	void Add_Header(bool Double_Child, TEnumAsByte<E_HeaderDirection> Direction, int* Button_ID, const struct FVector2D& Edge_Alpha);
	void Build_Grid(const struct FGeometry& In_Geometry, const struct FPointerEvent& In_Mouse_Event, const struct FVector& Zero_Based_World_Location);
	void Destruct();
	void BndEvt__Button_Waypoint_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Grid_Main_Action();
	void ExecuteUbergraph_W_GridMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
