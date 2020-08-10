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

// BlueprintGeneratedClass MenuCamPawn.MenuCamPawn_C
// 0x0075 (FullSize[0x0319] - InheritedSize[0x02A4])
// LastOffsetWithSize(0x02A4)
#define PADDING_03F9 - 0x0000 // Minimum to subtract -> (0004)
class AMenuCamPawn_C : public APawn
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_03F9, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_03F9, class UCameraComponent*,                                               Camera);                                                   // 0x02B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_03F9, bool,                                                                  Menu_Cam_Moving);                                          // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03F9, float,                                                                 Cam_Lerp);                                                 // 0x02BC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_03F9, float,                                                                 Cam_Lerp_Duration);                                        // 0x02C0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_03F9, class AMenuCamera_C*,                                                  Move_To_Cam);                                              // 0x02C8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_03F9, struct FTransform,                                                     Last_Camera_Transform);                                    // 0x02D0(0x0030)  (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x005C PADDING_03F9, float,                                                                 Last_FOV);                                                 // 0x0300(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_03F9, TArray<class AMenuCamera_C*>,                                          Menu_Cameras);                                             // 0x0308(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0074 PADDING_03F9, TEnumAsByte<EMenuCameraScreen>,                                        Current_Camera);                                           // 0x0318(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MenuCamPawn.MenuCamPawn_C");
		return ptr;
	}


	int GetTeamId();
	void Move_Camera(TEnumAsByte<EMenuCameraScreen> New_Camera, bool Force);
	void Find_Menu_Cameras();
	void Stop_Menu_Camera_Movement();
	void Animate_Move();
	void OnTeamChange(int PreviousTeam);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MenuCamPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
