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

// WidgetBlueprintGeneratedClass W_Director_ActionControl.W_Director_ActionControl_C
// 0x0048 (0x0290 - 0x0248)
public class UW_Director_ActionControl_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<float>                             _offWidget_Angle_Rotation_Offset                               = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offDirector_Action                                            = new ExternalOffset<UClass>(0x0258, true);                    // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offLocal_World_Location                                       = new ExternalOffset<FVector>(0x0260, false);                  // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offAlignment                                                  = new ExternalOffset<FVector2D>(0x026C, false);                // 0x026C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offSquad_ID                                                   = new ExternalOffset<int>(0x0274);                             // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapCore_C>                    _offMap_Core                                                   = new ExternalOffset<UW_SQMapCore_C>(0x0278, true);            // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offOrigin_Map_Position                                        = new ExternalOffset<FVector2D>(0x0280, false);                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQMapMarkerDataAsset>             _offMapMarkerDataAsset                                         = new ExternalOffset<USQMapMarkerDataAsset>(0x0288, true);     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public float                                              Widget_Angle_Rotation_Offset                                   => _offWidget_Angle_Rotation_Offset.GetValue();
	public UClass                                             Director_Action                                                => _offDirector_Action.GetValue();
	public FVector                                            Local_World_Location                                           => _offLocal_World_Location.GetValue();
	public FVector2D                                          Alignment                                                      => _offAlignment.GetValue();
	public int                                                Squad_ID                                                       => _offSquad_ID.GetValue();
	public UW_SQMapCore_C                                     Map_Core                                                       => _offMap_Core.GetValue();
	public FVector2D                                          Origin_Map_Position                                            => _offOrigin_Map_Position.GetValue();
	public USQMapMarkerDataAsset                              MapMarkerDataAsset                                             => _offMapMarkerDataAsset.GetValue();
	#endregion


}


}