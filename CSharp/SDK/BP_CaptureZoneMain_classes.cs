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

// BlueprintGeneratedClass BP_CaptureZoneMain.BP_CaptureZoneMain_C
// 0x0038 (0x0270 - 0x0238)
public class ABP_CaptureZoneMain_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USphereComponent>                  _offSphere                                                     = new ExternalOffset<USphereComponent>(0x0250, true);          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCaptureZoneResourceComponent>   _offSQCaptureZoneResource                                      = new ExternalOffset<USQCaptureZoneResourceComponent>(0x0258, true); // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQCaptureZoneComponent>           _offSQCaptureZone                                              = new ExternalOffset<USQCaptureZoneComponent>(0x0260, true);   // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0268, true);           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USphereComponent                                   Sphere                                                         => _offSphere.GetValue();
	public USQCaptureZoneResourceComponent                    SQCaptureZoneResource                                          => _offSQCaptureZoneResource.GetValue();
	public USQCaptureZoneComponent                            SQCaptureZone                                                  => _offSQCaptureZone.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	#endregion


}


}