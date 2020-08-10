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

// WidgetBlueprintGeneratedClass W_RoleItem.W_RoleItem_C
// 0x0148 (0x0328 - 0x01E0)
public class UW_RoleItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpen                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Main                                                = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Role                                                = new ExternalOffset<UButton>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconRole                                                   = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offinf                                                        = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offlock                                                       = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSelectedLine                                               = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBAvailable                                                = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTBName                                                     = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWidgetSwitcher>                   _offWidgetSwitcher_Squad                                       = new ExternalOffset<UWidgetSwitcher>(0x0280, true);           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offRoleReferenceItem                                          = new ExternalOffset<USQRoleSettings>(0x0288, true);           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TArray<USQRoleSettings>>           _offSub_Role_Settings                                          = new ExternalOffset<TArray<USQRoleSettings>>(0x0290, false);  // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02A0, true);       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x02A8, true);            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offMy_TS                                                      = new ExternalOffset<ASQTeamState>(0x02B0, true);              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x02B8);                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offselected                                                   = new ExternalOffset<byte/*(bool)*/>(0x02B9);                  // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offRefresh_Timer                                              = new ExternalOffset<FTimerHandle>(0x02C0, false);             // 0x02C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offAvailability                                               = new ExternalOffset<FText>(0x02C8, false);                    // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<TEnumAsByte<E_RoleAvailability>>   _offLocked_State                                               = new ExternalOffset<TEnumAsByte<E_RoleAvailability>>(0x02E0, false); // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRole_Selected                                              = new ExternalOffset<FScriptMulticastDelegate>(0x02E8, false); // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offRole_Hovered                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02F8, false); // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<TArray<UW_SubRoleItem_C>>          _offSub_Role_Items                                             = new ExternalOffset<TArray<UW_SubRoleItem_C>>(0x0308, false); // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<UW_SubRoleOptions_C>               _offSub_Options                                                = new ExternalOffset<UW_SubRoleOptions_C>(0x0318, true);       // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offSub_Role_Item_Class                                        = new ExternalOffset<UClass>(0x0320, true);                    // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Open                                                           => _offOpen.GetValue();
	public UBorder                                            Border_Main                                                    => _offBorder_Main.GetValue();
	public UButton                                            Button_Role                                                    => _offButton_Role.GetValue();
	public UImage                                             IconRole                                                       => _offIconRole.GetValue();
	public UImage                                             inf                                                            => _offinf.GetValue();
	public UImage                                             lock                                                           => _offlock.GetValue();
	public UImage                                             SelectedLine                                                   => _offSelectedLine.GetValue();
	public UTextBlock                                         TBAvailable                                                    => _offTBAvailable.GetValue();
	public UTextBlock                                         TBName                                                         => _offTBName.GetValue();
	public UWidgetSwitcher                                    WidgetSwitcher_Squad                                           => _offWidgetSwitcher_Squad.GetValue();
	public USQRoleSettings                                    RoleReferenceItem                                              => _offRoleReferenceItem.GetValue();
	public TArray<USQRoleSettings>                            Sub_Role_Settings                                              => _offSub_Role_Settings.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public ASQTeamState                                       My_TS                                                          => _offMy_TS.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	public byte/*(bool)*/                                     selected                                                       => _offselected.GetValue();
	public FTimerHandle                                       Refresh_Timer                                                  => _offRefresh_Timer.GetValue();
	public FText                                              Availability                                                   => _offAvailability.GetValue();
	public TEnumAsByte<E_RoleAvailability>                    Locked_State                                                   => _offLocked_State.GetValue();
	public FScriptMulticastDelegate                           Role_Selected                                                  => _offRole_Selected.GetValue();
	public FScriptMulticastDelegate                           Role_Hovered                                                   => _offRole_Hovered.GetValue();
	public TArray<UW_SubRoleItem_C>                           Sub_Role_Items                                                 => _offSub_Role_Items.GetValue();
	public UW_SubRoleOptions_C                                Sub_Options                                                    => _offSub_Options.GetValue();
	public UClass                                             Sub_Role_Item_Class                                            => _offSub_Role_Item_Class.GetValue();
	#endregion


}


}