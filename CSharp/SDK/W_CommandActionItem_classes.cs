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

// WidgetBlueprintGeneratedClass W_CommandActionItem.W_CommandActionItem_C
// 0x015A (0x033A - 0x01E0)
public class UW_CommandActionItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder                                                     = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Main                                                = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offName                                                       = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_State                                                   = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Time                                                    = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTimer                                                      = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSQCommand_Data                                             = new ExternalOffset<UClass>(0x0270, true);                    // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMI_Timer                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x0278, true);  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offCurrent_State_Color                                        = new ExternalOffset<FLinearColor>(0x0280, false);             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offActive_Color                                               = new ExternalOffset<FLinearColor>(0x0290, false);             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offCooldown_Color                                             = new ExternalOffset<FLinearColor>(0x02A0, false);             // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offEnroute_Color                                              = new ExternalOffset<FLinearColor>(0x02B0, false);             // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offReady_Color                                                = new ExternalOffset<FLinearColor>(0x02C0, false);             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offInterval_Index                                             = new ExternalOffset<int>(0x02D0);                             // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offTime_Remaining                                             = new ExternalOffset<float>(0x02D4);                           // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02D8, true);       // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offCan_Execute_Command                                        = new ExternalOffset<byte/*(bool)*/>(0x02E0);                  // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offUse_Pre_Placement                                          = new ExternalOffset<byte/*(bool)*/>(0x02E1);                  // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<FString>                           _offDescription                                                = new ExternalOffset<FString>(0x02E8, false);                  // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offForce_Allowed                                              = new ExternalOffset<byte/*(bool)*/>(0x02F8);                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector>                           _offZero_Based_World_Location                                  = new ExternalOffset<FVector>(0x02FC, false);                  // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_CommandPrePlacement_C>          _offPre_Placement_Widget                                       = new ExternalOffset<UW_CommandPrePlacement_C>(0x0308, true);  // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offClicked                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0310, false); // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<UBP_CommanderActionCondition_C>    _offCommand_Condition                                          = new ExternalOffset<UBP_CommanderActionCondition_C>(0x0320, true); // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offCreated_Control_Widget                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0328, false); // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<byte/*(bool)*/>                    _offCategory_Enabled                                           = new ExternalOffset<byte/*(bool)*/>(0x0338);                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<byte/*(bool)*/>                    _offButton_Cooldown                                            = new ExternalOffset<byte/*(bool)*/>(0x0339);                  // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border                                                         => _offBorder.GetValue();
	public UButton                                            Button_Main                                                    => _offButton_Main.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UTextBlock                                         Name                                                           => _offName.GetValue();
	public UTextBlock                                         TB_State                                                       => _offTB_State.GetValue();
	public UTextBlock                                         TB_Time                                                        => _offTB_Time.GetValue();
	public UImage                                             Timer                                                          => _offTimer.GetValue();
	public UClass                                             SQCommand_Data                                                 => _offSQCommand_Data.GetValue();
	public UMaterialInstanceDynamic                           MI_Timer                                                       => _offMI_Timer.GetValue();
	public FLinearColor                                       Current_State_Color                                            => _offCurrent_State_Color.GetValue();
	public FLinearColor                                       Active_Color                                                   => _offActive_Color.GetValue();
	public FLinearColor                                       Cooldown_Color                                                 => _offCooldown_Color.GetValue();
	public FLinearColor                                       Enroute_Color                                                  => _offEnroute_Color.GetValue();
	public FLinearColor                                       Ready_Color                                                    => _offReady_Color.GetValue();
	public int                                                Interval_Index                                                 => _offInterval_Index.GetValue();
	public float                                              Time_Remaining                                                 => _offTime_Remaining.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Can_Execute_Command                                            => _offCan_Execute_Command.GetValue();
	public byte/*(bool)*/                                     Use_Pre_Placement                                              => _offUse_Pre_Placement.GetValue();
	public FString                                            Description                                                    => _offDescription.GetValue();
	public byte/*(bool)*/                                     Force_Allowed                                                  => _offForce_Allowed.GetValue();
	public FVector                                            Zero_Based_World_Location                                      => _offZero_Based_World_Location.GetValue();
	public UW_CommandPrePlacement_C                           Pre_Placement_Widget                                           => _offPre_Placement_Widget.GetValue();
	public FScriptMulticastDelegate                           Clicked                                                        => _offClicked.GetValue();
	public UBP_CommanderActionCondition_C                     Command_Condition                                              => _offCommand_Condition.GetValue();
	public FScriptMulticastDelegate                           Created_Control_Widget                                         => _offCreated_Control_Widget.GetValue();
	public byte/*(bool)*/                                     Category_Enabled                                               => _offCategory_Enabled.GetValue();
	public byte/*(bool)*/                                     Button_Cooldown                                                => _offButton_Cooldown.GetValue();
	#endregion


}


}