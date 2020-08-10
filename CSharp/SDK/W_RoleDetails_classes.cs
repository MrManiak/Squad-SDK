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

// WidgetBlueprintGeneratedClass W_RoleDetails.W_RoleDetails_C
// 0x0130 (0x0370 - 0x0240)
public class UW_RoleDetails_C : USQToolTipBaseWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0240, false); // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBar                                                        = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Details                                             = new ExternalOffset<UBorder>(0x0250, true);                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorder_Info                                                = new ExternalOffset<UBorder>(0x0258, true);                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offBorderPreviewMessage                                       = new ExternalOffset<UBorder>(0x0260, true);                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_MainWeapon                                          = new ExternalOffset<UButton>(0x0268, true);                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Secondary                                           = new ExternalOffset<UButton>(0x0270, true);                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Special                                             = new ExternalOffset<UButton>(0x0278, true);                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_8                                                    = new ExternalOffset<UImage>(0x0280, true);                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_MainWeapon                                           = new ExternalOffset<UImage>(0x0288, true);                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Secondary                                            = new ExternalOffset<UImage>(0x0290, true);                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_Special                                              = new ExternalOffset<UImage>(0x0298, true);                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offName_Description                                           = new ExternalOffset<UTextBlock>(0x02A0, true);                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offName_Primary                                               = new ExternalOffset<UTextBlock>(0x02A8, true);                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount_Primary                                          = new ExternalOffset<UTextBlock>(0x02B0, true);                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount_Secondary                                        = new ExternalOffset<UTextBlock>(0x02B8, true);                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount_Special                                          = new ExternalOffset<UTextBlock>(0x02C0, true);                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Preview                                                 = new ExternalOffset<UTextBlock>(0x02C8, true);                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTextBlock_Description                                      = new ExternalOffset<UTextBlock>(0x02D0, true);                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offV_SubRoles                                                 = new ExternalOffset<UVerticalBox>(0x02D8, true);              // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UVerticalBox>                      _offVerticalBox_Backpack                                       = new ExternalOffset<UVerticalBox>(0x02E0, true);              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQEquipableItem>                  _offPrimary                                                    = new ExternalOffset<ASQEquipableItem>(0x02E8, true);          // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQEquipableItem>                  _offSecondary                                                  = new ExternalOffset<ASQEquipableItem>(0x02F0, true);          // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQEquipableItem>                  _offSpecial                                                    = new ExternalOffset<ASQEquipableItem>(0x02F8, true);          // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FSQInventoryData>                  _offPrimary_Data                                               = new ExternalOffset<FSQInventoryData>(0x0300, false);         // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	private ExternalOffset<FSQInventoryData>                  _offSecondary_Data                                             = new ExternalOffset<FSQInventoryData>(0x0318, false);         // 0x0318(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	private ExternalOffset<FSQInventoryData>                  _offSpecial_Data                                               = new ExternalOffset<FSQInventoryData>(0x0330, false);         // 0x0330(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offSubRoles_Open                                              = new ExternalOffset<byte/*(bool)*/>(0x0348);                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UW_RoleSelect_C>                   _offRole_Select                                                = new ExternalOffset<UW_RoleSelect_C>(0x0350, true);           // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerController>               _offMy_PC                                                      = new ExternalOffset<ASQPlayerController>(0x0358, true);       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offHas_Sub_Roles                                              = new ExternalOffset<byte/*(bool)*/>(0x0360);                  // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<USQRoleSettings>                   _offLatest_Role                                                = new ExternalOffset<USQRoleSettings>(0x0368, true);           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Bar                                                            => _offBar.GetValue();
	public UBorder                                            Border_Details                                                 => _offBorder_Details.GetValue();
	public UBorder                                            Border_Info                                                    => _offBorder_Info.GetValue();
	public UBorder                                            BorderPreviewMessage                                           => _offBorderPreviewMessage.GetValue();
	public UButton                                            Button_MainWeapon                                              => _offButton_MainWeapon.GetValue();
	public UButton                                            Button_Secondary                                               => _offButton_Secondary.GetValue();
	public UButton                                            Button_Special                                                 => _offButton_Special.GetValue();
	public UImage                                             Image_8                                                        => _offImage_8.GetValue();
	public UImage                                             Image_MainWeapon                                               => _offImage_MainWeapon.GetValue();
	public UImage                                             Image_Secondary                                                => _offImage_Secondary.GetValue();
	public UImage                                             Image_Special                                                  => _offImage_Special.GetValue();
	public UTextBlock                                         Name_Description                                               => _offName_Description.GetValue();
	public UTextBlock                                         Name_Primary                                                   => _offName_Primary.GetValue();
	public UTextBlock                                         TB_Amount_Primary                                              => _offTB_Amount_Primary.GetValue();
	public UTextBlock                                         TB_Amount_Secondary                                            => _offTB_Amount_Secondary.GetValue();
	public UTextBlock                                         TB_Amount_Special                                              => _offTB_Amount_Special.GetValue();
	public UTextBlock                                         TB_Preview                                                     => _offTB_Preview.GetValue();
	public UTextBlock                                         TextBlock_Description                                          => _offTextBlock_Description.GetValue();
	public UVerticalBox                                       V_SubRoles                                                     => _offV_SubRoles.GetValue();
	public UVerticalBox                                       VerticalBox_Backpack                                           => _offVerticalBox_Backpack.GetValue();
	public ASQEquipableItem                                   Primary                                                        => _offPrimary.GetValue();
	public ASQEquipableItem                                   Secondary                                                      => _offSecondary.GetValue();
	public ASQEquipableItem                                   Special                                                        => _offSpecial.GetValue();
	public FSQInventoryData                                   Primary_Data                                                   => _offPrimary_Data.GetValue();
	public FSQInventoryData                                   Secondary_Data                                                 => _offSecondary_Data.GetValue();
	public FSQInventoryData                                   Special_Data                                                   => _offSpecial_Data.GetValue();
	public byte/*(bool)*/                                     SubRoles_Open                                                  => _offSubRoles_Open.GetValue();
	public UW_RoleSelect_C                                    Role_Select                                                    => _offRole_Select.GetValue();
	public ASQPlayerController                                My_PC                                                          => _offMy_PC.GetValue();
	public byte/*(bool)*/                                     Has_Sub_Roles                                                  => _offHas_Sub_Roles.GetValue();
	public USQRoleSettings                                    Latest_Role                                                    => _offLatest_Role.GetValue();
	#endregion


}


}