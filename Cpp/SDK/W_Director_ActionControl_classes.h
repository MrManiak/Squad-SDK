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

// WidgetBlueprintGeneratedClass W_Director_ActionControl.W_Director_ActionControl_C
// 0x0048 (FullSize[0x0290] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_0CAB - 0x0000 // Minimum to subtract -> (0000)
class UW_Director_ActionControl_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CAB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CAB, float,                                                                 Widget_Angle_Rotation_Offset);                             // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CAB, class UClass*,                                                         Director_Action);                                          // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CAB, struct FVector,                                                        Local_World_Location);                                     // 0x0260(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0CAB, struct FVector2D,                                                      Alignment);                                                // 0x026C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_0CAB, int,                                                                   Squad_ID);                                                 // 0x0274(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0CAB, class UW_SQMapCore_C*,                                                 Map_Core);                                                 // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0CAB, struct FVector2D,                                                      Origin_Map_Position);                                      // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0CAB, class USQMapMarkerDataAsset*,                                          MapMarkerDataAsset);                                       // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Director_ActionControl.W_Director_ActionControl_C");
		return ptr;
	}


	void Get_Pixel_Distance(float* distance);
	void Get_Angle(float* Widget_Angle, struct FRotator* World_Rotation);
	void Construct();
	void Remove();
	void On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location);
	void Add_Self_to_Viewport();
	void ExecuteUbergraph_W_Director_ActionControl(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
