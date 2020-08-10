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

// BlueprintGeneratedClass MenuCamPawn.MenuCamPawn_C
// 0x0075 (0x0319 - 0x02A4)
public class AMenuCamPawn_C : APawn
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02A8, false); // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x02B0, true);          // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offMenu_Cam_Moving                                            = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offCam_Lerp                                                   = new ExternalOffset<float>(0x02BC);                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCam_Lerp_Duration                                          = new ExternalOffset<float>(0x02C0);                           // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<AMenuCamera_C>                     _offMove_To_Cam                                                = new ExternalOffset<AMenuCamera_C>(0x02C8, true);             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTransform>                        _offLast_Camera_Transform                                      = new ExternalOffset<FTransform>(0x02D0, false);               // 0x02D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offLast_FOV                                                   = new ExternalOffset<float>(0x0300);                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<AMenuCamera_C>>             _offMenu_Cameras                                               = new ExternalOffset<TArray<AMenuCamera_C>>(0x0308, false);    // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	private ExternalOffset<TEnumAsByte<EMenuCameraScreen>>    _offCurrent_Camera                                             = new ExternalOffset<TEnumAsByte<EMenuCameraScreen>>(0x0318, false); // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public byte/*(bool)*/                                     Menu_Cam_Moving                                                => _offMenu_Cam_Moving.GetValue();
	public float                                              Cam_Lerp                                                       => _offCam_Lerp.GetValue();
	public float                                              Cam_Lerp_Duration                                              => _offCam_Lerp_Duration.GetValue();
	public AMenuCamera_C                                      Move_To_Cam                                                    => _offMove_To_Cam.GetValue();
	public FTransform                                         Last_Camera_Transform                                          => _offLast_Camera_Transform.GetValue();
	public float                                              Last_FOV                                                       => _offLast_FOV.GetValue();
	public TArray<AMenuCamera_C>                              Menu_Cameras                                                   => _offMenu_Cameras.GetValue();
	public TEnumAsByte<EMenuCameraScreen>                     Current_Camera                                                 => _offCurrent_Camera.GetValue();
	#endregion


}


}