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

// WidgetBlueprintGeneratedClass W_SubRoleItem.W_SubRoleItem_C
// 0x0110 (0x02F0 - 0x01E0)
public class UW_SubRoleItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offOpen                                                       = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Main                                                = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Role                                                = new ExternalOffset<UButton>(0x0248, true);                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_MainWeapon                                           = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offName_Primary                                               = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSelectedLine                                               = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount_Primary                                          = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offRoleReferenceItem                                          = new ExternalOffset<USQRoleSettings>(0x0270, true);           // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TArray<USQRoleSettings>>           _offSub_Roles_Items                                            = new ExternalOffset<TArray<USQRoleSettings>>(0x0278, false);  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0288, true);       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0290, true);            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offMy_TS                                                      = new ExternalOffset<ASQTeamState>(0x0298, true);              // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offselected                                                   = new ExternalOffset<byte/*(bool)*/>(0x02A1);                  // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FTimerHandle>                      _offRefresh_Timer                                              = new ExternalOffset<FTimerHandle>(0x02A8, false);             // 0x02A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offAvailability                                               = new ExternalOffset<FText>(0x02B0, false);                    // 0x02B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<TEnumAsByte<E_RoleAvailability>>   _offSquad_Locked                                               = new ExternalOffset<TEnumAsByte<E_RoleAvailability>>(0x02C8, false); // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRole_Selected                                              = new ExternalOffset<FScriptMulticastDelegate>(0x02D0, false); // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offRole_Hovered                                               = new ExternalOffset<FScriptMulticastDelegate>(0x02E0, false); // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Open                                                           => _offOpen.GetValue();
	public UBorder                                            Border_Main                                                    => _offBorder_Main.GetValue();
	public UButton                                            Button_Role                                                    => _offButton_Role.GetValue();
	public UImage                                             Image_MainWeapon                                               => _offImage_MainWeapon.GetValue();
	public UTextBlock                                         Name_Primary                                                   => _offName_Primary.GetValue();
	public UImage                                             SelectedLine                                                   => _offSelectedLine.GetValue();
	public UTextBlock                                         TB_Amount_Primary                                              => _offTB_Amount_Primary.GetValue();
	public USQRoleSettings                                    RoleReferenceItem                                              => _offRoleReferenceItem.GetValue();
	public TArray<USQRoleSettings>                            Sub_Roles_Items                                                => _offSub_Roles_Items.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public ASQTeamState                                       My_TS                                                          => _offMy_TS.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	public byte/*(bool)*/                                     selected                                                       => _offselected.GetValue();
	public FTimerHandle                                       Refresh_Timer                                                  => _offRefresh_Timer.GetValue();
	public FText                                              Availability                                                   => _offAvailability.GetValue();
	public TEnumAsByte<E_RoleAvailability>                    Squad_Locked                                                   => _offSquad_Locked.GetValue();
	public FScriptMulticastDelegate                           Role_Selected                                                  => _offRole_Selected.GetValue();
	public FScriptMulticastDelegate                           Role_Hovered                                                   => _offRole_Hovered.GetValue();
	#endregion


}


}