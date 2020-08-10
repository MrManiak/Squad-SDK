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

// WidgetBlueprintGeneratedClass W_CommandActionList.W_CommandActionList_C
// 0x00C0 (FullSize[0x02A0] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0306 - 0x0000 // Minimum to subtract -> (0050)
class UW_CommandActionList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0306, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0306, class UBorder*,                                                        BorderMain);                                               // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0306, class UVerticalBox*,                                                   CategoryBox);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0306, class UImage*,                                                         Image_5);                                                  // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0306, class UTextBlock*,                                                     TB_Requirements);                                          // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0306, class UTextBlock*,                                                     TextBlock_2);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0306, class UMaterialInstanceDynamic*,                                       MI_TacticoolTimer);                                        // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0306, class UMaterialInstanceDynamic*,                                       MI_Strategic_Timer);                                       // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0306, float,                                                                 Tactical_Time_Remaining);                                  // 0x0270(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0306, bool,                                                                  Tactical_Locked);                                          // 0x0274(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0306, float,                                                                 Strategic_Time_Remaining);                                 // 0x0278(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_0306, bool,                                                                  Strategic_Locked);                                         // 0x027C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0306, class UW_CommandPrePlacement_C*,                                       Pre_Placement_Widget);                                     // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0306, class ASQPlayerController*,                                            My_PC);                                                    // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0306, class ASQPlayerState*,                                                 Current_Commander);                                        // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0306, float,                                                                 Additional_Distance);                                      // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0306, float,                                                                 Turn_Speed);                                               // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandActionList.W_CommandActionList_C");
		return ptr;
	}


	void Init_Actions_List();
	void Construct();
	void Get_Player_State();
	void Team_Changed(class ASQTeamState* OldTeam, class ASQTeamState* NewTeam);
	void Bind_To_Menu_Open_Close(class UUMG_MenuBase_C* Menu);
	void Parent_Opened();
	void Parent_Closed();
	void Bind_Commander_Changed();
	void Command_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void Update_Requirements_Text();
	void ExecuteUbergraph_W_CommandActionList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
