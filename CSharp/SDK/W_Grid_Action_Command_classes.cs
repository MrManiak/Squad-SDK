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

// WidgetBlueprintGeneratedClass W_Grid_Action_Command.W_Grid_Action_Command_C
// 0x0059 (0x02D1 - 0x0278)
public class UW_Grid_Action_Command_C : UW_Grid_Action_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0278, false); // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<int>                               _offInterval_Index                                             = new ExternalOffset<int>(0x0280);                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSQCommandData                                              = new ExternalOffset<UClass>(0x0288, true);                    // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offTint                                                       = new ExternalOffset<FLinearColor>(0x0290, false);             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offName                                                       = new ExternalOffset<FText>(0x02A0, false);                    // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offForce_Allowed                                              = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<AWorldSettings>                    _offWorldSettings                                              = new ExternalOffset<AWorldSettings>(0x02C0, true);            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBP_CommanderActionCondition_C>    _offCommand_Condition                                          = new ExternalOffset<UBP_CommanderActionCondition_C>(0x02C8, true); // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x02D0);                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public int                                                Interval_Index                                                 => _offInterval_Index.GetValue();
	public UClass                                             SQCommandData                                                  => _offSQCommandData.GetValue();
	public FLinearColor                                       Tint                                                           => _offTint.GetValue();
	public FText                                              Name                                                           => _offName.GetValue();
	public byte/*(bool)*/                                     Force_Allowed                                                  => _offForce_Allowed.GetValue();
	public AWorldSettings                                     WorldSettings                                                  => _offWorldSettings.GetValue();
	public UBP_CommanderActionCondition_C                     Command_Condition                                              => _offCommand_Condition.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	#endregion


}


}