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

// WidgetBlueprintGeneratedClass W_RoleList.W_RoleList_C
// 0x00E9 (0x02C9 - 0x01E0)
public class UW_RoleList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleGroup_C>                    _offRoleGroup_Command                                          = new ExternalOffset<UW_RoleGroup_C>(0x0240, true);            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleGroup_C>                    _offRoleGroup_FireSupport                                      = new ExternalOffset<UW_RoleGroup_C>(0x0248, true);            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleGroup_C>                    _offRoleGroup_Specialist                                       = new ExternalOffset<UW_RoleGroup_C>(0x0250, true);            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleGroup_C>                    _offRoleGroup_Standard                                         = new ExternalOffset<UW_RoleGroup_C>(0x0258, true);            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UScrollBox>                        _offScrollBox_Groups                                           = new ExternalOffset<UScrollBox>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Prompt                                                  = new ExternalOffset<UTextBlock>(0x0268, true);                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0270, true);       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0278, true);            // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQTeamState>                      _offMy_TS                                                      = new ExternalOffset<ASQTeamState>(0x0280, true);              // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleSelect_C>                   _offRole_Select                                                = new ExternalOffset<UW_RoleSelect_C>(0x0288, true);           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_RoleGroup_C>>            _offRole_Groups                                                = new ExternalOffset<TArray<UW_RoleGroup_C>>(0x0290, false);   // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<USQRoleSettings>                   _offLast_Role                                                  = new ExternalOffset<USQRoleSettings>(0x02A0, true);           // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offRefresh_Timer                                              = new ExternalOffset<FTimerHandle>(0x02A8, false);             // 0x02A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRoles_Refreshed                                            = new ExternalOffset<FScriptMulticastDelegate>(0x02B0, false); // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FTimerHandle>                      _offInitTimerHandle                                            = new ExternalOffset<FTimerHandle>(0x02C0, false);             // 0x02C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offForceRefreshRoleList                                       = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UW_RoleGroup_C                                     RoleGroup_Command                                              => _offRoleGroup_Command.GetValue();
	public UW_RoleGroup_C                                     RoleGroup_FireSupport                                          => _offRoleGroup_FireSupport.GetValue();
	public UW_RoleGroup_C                                     RoleGroup_Specialist                                           => _offRoleGroup_Specialist.GetValue();
	public UW_RoleGroup_C                                     RoleGroup_Standard                                             => _offRoleGroup_Standard.GetValue();
	public UScrollBox                                         ScrollBox_Groups                                               => _offScrollBox_Groups.GetValue();
	public UTextBlock                                         TB_Prompt                                                      => _offTB_Prompt.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public ASQTeamState                                       My_TS                                                          => _offMy_TS.GetValue();
	public UW_RoleSelect_C                                    Role_Select                                                    => _offRole_Select.GetValue();
	public TArray<UW_RoleGroup_C>                             Role_Groups                                                    => _offRole_Groups.GetValue();
	public USQRoleSettings                                    Last_Role                                                      => _offLast_Role.GetValue();
	public FTimerHandle                                       Refresh_Timer                                                  => _offRefresh_Timer.GetValue();
	public FScriptMulticastDelegate                           Roles_Refreshed                                                => _offRoles_Refreshed.GetValue();
	public FTimerHandle                                       InitTimerHandle                                                => _offInitTimerHandle.GetValue();
	public byte/*(bool)*/                                     ForceRefreshRoleList                                           => _offForceRefreshRoleList.GetValue();
	#endregion


}


}