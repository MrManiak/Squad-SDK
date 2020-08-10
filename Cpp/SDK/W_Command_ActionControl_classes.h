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

// WidgetBlueprintGeneratedClass W_Command_ActionControl.W_Command_ActionControl_C
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_04EE - 0x0000 // Minimum to subtract -> (0000)
class UW_Command_ActionControl_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04EE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04EE, float,                                                                 Widget_Angle_Rotation_Offset);                             // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x000C PADDING_04EE, struct FVector,                                                        Local_World_Location);                                     // 0x0254(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04EE, struct FVector2D,                                                      Alignment);                                                // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_04EE, class UW_Grid_AcceptDeny_C*,                                           Accept_Deny);                                              // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_04EE, class UClass*,                                                         SQCommandAction);                                          // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_04EE, struct FScriptMulticastDelegate,                                       Placement_Complete);                                       // 0x0278(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0040 PADDING_04EE, struct FVector2D,                                                      Origin_Map_Position);                                      // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_04EE, class UW_SQMapCore_C*,                                                 Map_Core);                                                 // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Command_ActionControl.W_Command_ActionControl_C");
		return ptr;
	}


	void Create_Accept_Deny();
	void Get_Pixel_Distance(float* distance);
	void Get_World_Distance(float* World_Distance);
	void Get_Angle(float* Widget_Angle, struct FRotator* World_Rotation);
	void Construct();
	void Remove();
	void Destruct();
	void On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location);
	void Add_Self_to_Canvas();
	void ExecuteUbergraph_W_Command_ActionControl(int EntryPoint);
	void Placement_Complete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
