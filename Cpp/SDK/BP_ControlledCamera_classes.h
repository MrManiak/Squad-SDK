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

// BlueprintGeneratedClass BP_ControlledCamera.BP_ControlledCamera_C
// 0x00E8 (FullSize[0x0320] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0CAA - 0x0000 // Minimum to subtract -> (0010)
class ABP_ControlledCamera_C : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CAA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CAA, class UCameraComponent*,                                               Camera);                                                   // 0x0250(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0CAA, class USceneComponent*,                                                Scene);                                                    // 0x0258(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0CAA, class USceneComponent*,                                                Pitch);                                                    // 0x0260(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0CAA, class USceneComponent*,                                                Yaw);                                                      // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0CAA, float,                                                                 Desired_Zoom);                                             // 0x0270(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0CAA, class ASQPlayerController*,                                            My_SQPC);                                                  // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0CAA, class UTexture2D*,                                                     Button_Icon);                                              // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CAA, class UW_CamControlButton_C*,                                          Cam_Control_Button);                                       // 0x0288(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CAA, bool,                                                                  Is_Active);                                                // 0x0290(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CAA, struct FScriptMulticastDelegate,                                       Created_Button);                                           // 0x0298(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CAA, bool,                                                                  ExtraSpeed);                                               // 0x02A8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CAA, class AActor*,                                                         Follow_Actor);                                             // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CAA, float,                                                                 Battery_Percent);                                          // 0x02B8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CAA, class UClass*,                                                         Action);                                                   // 0x02C0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CAA, bool,                                                                  Can_Possess);                                              // 0x02C8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CAA, class UClass*,                                                         Camera_Widget);                                            // 0x02D0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CAA, float,                                                                 Min_Pitch);                                                // 0x02D8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0CAA, float,                                                                 Max_Pitch);                                                // 0x02DC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CAA, class UW_CameraWidget_C*,                                              W_CameraUI);                                               // 0x02E0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CAA, float,                                                                 Min_Yaw);                                                  // 0x02E8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_0CAA, float,                                                                 Max_Yaw);                                                  // 0x02EC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0CAA, int,                                                                   Zoom_Level);                                               // 0x02F0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_0CAA, float,                                                                 Cam_Rotate_Speed);                                         // 0x02F4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0CAA, TArray<float>,                                                         Zoom_Levels);                                              // 0x02F8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0CAA, class USoundBase*,                                                     Open_Sound);                                               // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0CAA, class USoundBase*,                                                     Close_Sound);                                              // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0CAA, float,                                                                 NearClipPlaneDistance);                                    // 0x0318(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_0CAA, float,                                                                 LastNearClipPlaneDistance);                                // 0x031C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControlledCamera.BP_ControlledCamera_C");
		return ptr;
	}


	void Can_Become_View_Target(bool* Can_View);
	void Init_Camera();
	void Check_Soldier_Wound();
	void Create_Stabilisation_Point();
	void Update_Follow();
	void Find_Vehicle(bool* Found_Vehicle);
	void Update_Zoom();
	void Clamp_Camera_Rotation();
	void Add_Camera_Movement(float X_Delta, float Y_Delta);
	void Add_Zoom_Delta();
	void InpActEvt_LeanLeft_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ToggleStabilization_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Toggle_View(bool Active);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void K2_OnEndViewTarget(class APlayerController* PC);
	void Disable_Cam();
	void ExecuteUbergraph_BP_ControlledCamera(int EntryPoint);
	void Created_Button__DelegateSignature(class UW_CamControlButton_C* Cam_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
