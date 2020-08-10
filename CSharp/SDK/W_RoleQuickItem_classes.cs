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

// WidgetBlueprintGeneratedClass W_RoleQuickItem.W_RoleQuickItem_C
// 0x0050 (0x0378 - 0x0328)
public class UW_RoleQuickItem_C : UW_RoleItem_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0328, false); // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Main_Quick                                          = new ExternalOffset<UBorder>(0x0330, true);                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_Role_Quick                                          = new ExternalOffset<UButton>(0x0338, true);                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIconRole_Quick                                             = new ExternalOffset<UImage>(0x0340, true);                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_RoleMainWeapon_C>>       _offSub_Roles_1                                                = new ExternalOffset<TArray<UW_RoleMainWeapon_C>>(0x0348, false); // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<UW_SubRoleOptions_C>               _offSub_Options_1                                              = new ExternalOffset<UW_SubRoleOptions_C>(0x0358, true);       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offAvailability_1                                             = new ExternalOffset<FText>(0x0360, false);                    // 0x0360(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Main_Quick                                              => _offBorder_Main_Quick.GetValue();
	public UButton                                            Button_Role_Quick                                              => _offButton_Role_Quick.GetValue();
	public UImage                                             IconRole_Quick                                                 => _offIconRole_Quick.GetValue();
	public TArray<UW_RoleMainWeapon_C>                        Sub_Roles_1                                                    => _offSub_Roles_1.GetValue();
	public UW_SubRoleOptions_C                                Sub_Options_1                                                  => _offSub_Options_1.GetValue();
	public FText                                              Availability_1                                                 => _offAvailability_1.GetValue();
	#endregion


}


}