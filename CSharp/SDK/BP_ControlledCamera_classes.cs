// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ControlledCamera.BP_ControlledCamera_C
// 0x00E8 (0x0320 - 0x0238)
public class ABP_ControlledCamera_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x0250, true);          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offScene                                                      = new ExternalOffset<USceneComponent>(0x0258, true);           // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offPitch                                                      = new ExternalOffset<USceneComponent>(0x0260, true);           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offYaw                                                        = new ExternalOffset<USceneComponent>(0x0268, true);           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offDesired_Zoom                                               = new ExternalOffset<float>(0x0270);                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_SQPC                                                    = new ExternalOffset<ASQPlayerController>(0x0278, true);       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offButton_Icon                                                = new ExternalOffset<UTexture2D>(0x0280, true);                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_CamControlButton_C>             _offCam_Control_Button                                         = new ExternalOffset<UW_CamControlButton_C>(0x0288, true);     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Active                                                  = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offCreated_Button                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0298, false); // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offExtraSpeed                                                 = new ExternalOffset<byte/*(bool)*/>(0x02A8);                  // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<AActor>                            _offFollow_Actor                                               = new ExternalOffset<AActor>(0x02B0, true);                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offBattery_Percent                                            = new ExternalOffset<float>(0x02B8);                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offAction                                                     = new ExternalOffset<UClass>(0x02C0, true);                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Possess                                                = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offCamera_Widget                                              = new ExternalOffset<UClass>(0x02D0, true);                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMin_Pitch                                                  = new ExternalOffset<float>(0x02D8);                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Pitch                                                  = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_CameraWidget_C>                 _offW_CameraUI                                                 = new ExternalOffset<UW_CameraWidget_C>(0x02E0, true);         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMin_Yaw                                                    = new ExternalOffset<float>(0x02E8);                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Yaw                                                    = new ExternalOffset<float>(0x02EC);                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offZoom_Level                                                 = new ExternalOffset<int>(0x02F0);                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCam_Rotate_Speed                                           = new ExternalOffset<float>(0x02F4);                           // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<float>>                     _offZoom_Levels                                                = new ExternalOffset<TArray<float>>(0x02F8, false);            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<USoundBase>                        _offOpen_Sound                                                 = new ExternalOffset<USoundBase>(0x0308, true);                // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USoundBase>                        _offClose_Sound                                                = new ExternalOffset<USoundBase>(0x0310, true);                // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offNearClipPlaneDistance                                      = new ExternalOffset<float>(0x0318);                           // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLastNearClipPlaneDistance                                  = new ExternalOffset<float>(0x031C);                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public USceneComponent                                    Scene                                                          => _offScene.GetValue();
	public USceneComponent                                    Pitch                                                          => _offPitch.GetValue();
	public USceneComponent                                    Yaw                                                            => _offYaw.GetValue();
	public float                                              Desired_Zoom                                                   => _offDesired_Zoom.GetValue();
	public ASQPlayerController                                My_SQPC                                                        => _offMy_SQPC.GetValue();
	public UTexture2D                                         Button_Icon                                                    => _offButton_Icon.GetValue();
	public UW_CamControlButton_C                              Cam_Control_Button                                             => _offCam_Control_Button.GetValue();
	public byte/*(bool)*/                                     Is_Active                                                      => _offIs_Active.GetValue();
	public FScriptMulticastDelegate                           Created_Button                                                 => _offCreated_Button.GetValue();
	public byte/*(bool)*/                                     ExtraSpeed                                                     => _offExtraSpeed.GetValue();
	public AActor                                             Follow_Actor                                                   => _offFollow_Actor.GetValue();
	public float                                              Battery_Percent                                                => _offBattery_Percent.GetValue();
	public UClass                                             Action                                                         => _offAction.GetValue();
	public byte/*(bool)*/                                     Can_Possess                                                    => _offCan_Possess.GetValue();
	public UClass                                             Camera_Widget                                                  => _offCamera_Widget.GetValue();
	public float                                              Min_Pitch                                                      => _offMin_Pitch.GetValue();
	public float                                              Max_Pitch                                                      => _offMax_Pitch.GetValue();
	public UW_CameraWidget_C                                  W_CameraUI                                                     => _offW_CameraUI.GetValue();
	public float                                              Min_Yaw                                                        => _offMin_Yaw.GetValue();
	public float                                              Max_Yaw                                                        => _offMax_Yaw.GetValue();
	public int                                                Zoom_Level                                                     => _offZoom_Level.GetValue();
	public float                                              Cam_Rotate_Speed                                               => _offCam_Rotate_Speed.GetValue();
	public TArray<float>                                      Zoom_Levels                                                    => _offZoom_Levels.GetValue();
	public USoundBase                                         Open_Sound                                                     => _offOpen_Sound.GetValue();
	public USoundBase                                         Close_Sound                                                    => _offClose_Sound.GetValue();
	public float                                              NearClipPlaneDistance                                          => _offNearClipPlaneDistance.GetValue();
	public float                                              LastNearClipPlaneDistance                                      => _offLastNearClipPlaneDistance.GetValue();
	#endregion


}


}