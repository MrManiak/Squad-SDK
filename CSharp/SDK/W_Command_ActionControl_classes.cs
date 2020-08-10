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

// WidgetBlueprintGeneratedClass W_Command_ActionControl.W_Command_ActionControl_C
// 0x0050 (0x0298 - 0x0248)
public class UW_Command_ActionControl_C : UW_FloatingWidget_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<float>                             _offWidget_Angle_Rotation_Offset                               = new ExternalOffset<float>(0x0250);                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FVector>                           _offLocal_World_Location                                       = new ExternalOffset<FVector>(0x0254, false);                  // 0x0254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FVector2D>                         _offAlignment                                                  = new ExternalOffset<FVector2D>(0x0260, false);                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_Grid_AcceptDeny_C>              _offAccept_Deny                                                = new ExternalOffset<UW_Grid_AcceptDeny_C>(0x0268, true);      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSQCommandAction                                            = new ExternalOffset<UClass>(0x0270, true);                    // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offPlacement_Complete                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0278, false); // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FVector2D>                         _offOrigin_Map_Position                                        = new ExternalOffset<FVector2D>(0x0288, false);                // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapCore_C>                    _offMap_Core                                                   = new ExternalOffset<UW_SQMapCore_C>(0x0290, true);            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public float                                              Widget_Angle_Rotation_Offset                                   => _offWidget_Angle_Rotation_Offset.GetValue();
	public FVector                                            Local_World_Location                                           => _offLocal_World_Location.GetValue();
	public FVector2D                                          Alignment                                                      => _offAlignment.GetValue();
	public UW_Grid_AcceptDeny_C                               Accept_Deny                                                    => _offAccept_Deny.GetValue();
	public UClass                                             SQCommandAction                                                => _offSQCommandAction.GetValue();
	public FScriptMulticastDelegate                           Placement_Complete                                             => _offPlacement_Complete.GetValue();
	public FVector2D                                          Origin_Map_Position                                            => _offOrigin_Map_Position.GetValue();
	public UW_SQMapCore_C                                     Map_Core                                                       => _offMap_Core.GetValue();
	#endregion


}


}