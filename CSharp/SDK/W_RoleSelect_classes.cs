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

// WidgetBlueprintGeneratedClass W_RoleSelect.W_RoleSelect_C
// 0x0109 (0x02E9 - 0x01E0)
public class UW_RoleSelect_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBar                                                        = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_PreviewMessage                                      = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconRole                                                   = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_R2T                                                  = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRoleDetail                                                 = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRoleTitle                                                  = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_SquadList_C>                    _offSquadList_FT                                               = new ExternalOffset<UW_SquadList_C>(0x0268, true);            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Preview                                                 = new ExternalOffset<UTextBlock>(0x0270, true);                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Prompt                                                  = new ExternalOffset<UTextBlock>(0x0278, true);                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleDetails_C>                  _offW_RoleDetails                                              = new ExternalOffset<UW_RoleDetails_C>(0x0280, true);          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleList_C>                     _offW_RoleList_209                                             = new ExternalOffset<UW_RoleList_C>(0x0288, true);             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offPreviewRole                                                = new ExternalOffset<USQRoleSettings>(0x0290, true);           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMID_RendTex                                                = new ExternalOffset<UMaterialInstanceDynamic>(0x0298, true);  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRole_Selected                                              = new ExternalOffset<FScriptMulticastDelegate>(0x02A0, false); // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FTimerHandle>                      _offRole_Info_Timer                                            = new ExternalOffset<FTimerHandle>(0x02B0, false);             // 0x02B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleItem_C>                     _offCurrent_Role_Item                                          = new ExternalOffset<UW_RoleItem_C>(0x02B8, true);             // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x02C0, true);       // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offIs_Previewing                                              = new ExternalOffset<byte/*(bool)*/>(0x02C8);                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<USQRoleSettings>                   _offTemp_Role                                                  = new ExternalOffset<USQRoleSettings>(0x02D0, true);           // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ABP_R2T_Soldier_C>                 _offR2T_Soldier                                                = new ExternalOffset<ABP_R2T_Soldier_C>(0x02D8, true);         // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offCurrent_Role                                               = new ExternalOffset<USQRoleSettings>(0x02E0, true);           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offWas_Leader                                                 = new ExternalOffset<byte/*(bool)*/>(0x02E8);                  // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Bar                                                            => _offBar.GetValue();
	public UBorder                                            Border_PreviewMessage                                          => _offBorder_PreviewMessage.GetValue();
	public UImage                                             IconRole                                                       => _offIconRole.GetValue();
	public UImage                                             Image_R2T                                                      => _offImage_R2T.GetValue();
	public UTextBlock                                         RoleDetail                                                     => _offRoleDetail.GetValue();
	public UTextBlock                                         RoleTitle                                                      => _offRoleTitle.GetValue();
	public UW_SquadList_C                                     SquadList_FT                                                   => _offSquadList_FT.GetValue();
	public UTextBlock                                         TB_Preview                                                     => _offTB_Preview.GetValue();
	public UTextBlock                                         TB_Prompt                                                      => _offTB_Prompt.GetValue();
	public UW_RoleDetails_C                                   W_RoleDetails                                                  => _offW_RoleDetails.GetValue();
	public UW_RoleList_C                                      W_RoleList_209                                                 => _offW_RoleList_209.GetValue();
	public USQRoleSettings                                    PreviewRole                                                    => _offPreviewRole.GetValue();
	public UMaterialInstanceDynamic                           MID_RendTex                                                    => _offMID_RendTex.GetValue();
	public FScriptMulticastDelegate                           Role_Selected                                                  => _offRole_Selected.GetValue();
	public FTimerHandle                                       Role_Info_Timer                                                => _offRole_Info_Timer.GetValue();
	public UW_RoleItem_C                                      Current_Role_Item                                              => _offCurrent_Role_Item.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Is_Previewing                                                  => _offIs_Previewing.GetValue();
	public USQRoleSettings                                    Temp_Role                                                      => _offTemp_Role.GetValue();
	public ABP_R2T_Soldier_C                                  R2T_Soldier                                                    => _offR2T_Soldier.GetValue();
	public USQRoleSettings                                    Current_Role                                                   => _offCurrent_Role.GetValue();
	public byte/*(bool)*/                                     Was_Leader                                                     => _offWas_Leader.GetValue();
	#endregion


}


}