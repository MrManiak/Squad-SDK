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

// BlueprintGeneratedClass BP_R2T_Soldier.BP_R2T_Soldier_C
// 0x0060 (0x02C0 - 0x0260)
public class ABP_R2T_Soldier_C : ASceneCapture2D
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0260, false); // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UPointLightComponent>              _offPointLight1                                                = new ExternalOffset<UPointLightComponent>(0x0268, true);      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UPointLightComponent>              _offPointLight                                                 = new ExternalOffset<UPointLightComponent>(0x0270, true);      // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offPreview_Weapon                                             = new ExternalOffset<USkeletalMeshComponent>(0x0278, true);    // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offPreview_Soldier                                            = new ExternalOffset<USkeletalMeshComponent>(0x0280, true);    // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USceneComponent>                   _offSoldierParent                                              = new ExternalOffset<USceneComponent>(0x0288, true);           // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offTeam_2                                                     = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<USQRoleSettings>                   _offMy_Role                                                    = new ExternalOffset<USQRoleSettings>(0x0298, true);           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offR2T_Soldier_Rendering_Active                               = new ExternalOffset<byte/*(bool)*/>(0x02A0);                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<UStaticMeshComponent>>      _offAttachmentMeshes3P                                         = new ExternalOffset<TArray<UStaticMeshComponent>>(0x02A8, false); // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<UClass>                            _offCache_Weapon                                               = new ExternalOffset<UClass>(0x02B8, true);                    // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UPointLightComponent                               PointLight1                                                    => _offPointLight1.GetValue();
	public UPointLightComponent                               PointLight                                                     => _offPointLight.GetValue();
	public USkeletalMeshComponent                             Preview_Weapon                                                 => _offPreview_Weapon.GetValue();
	public USkeletalMeshComponent                             Preview_Soldier                                                => _offPreview_Soldier.GetValue();
	public USceneComponent                                    SoldierParent                                                  => _offSoldierParent.GetValue();
	public byte/*(bool)*/                                     Team_2                                                         => _offTeam_2.GetValue();
	public USQRoleSettings                                    My_Role                                                        => _offMy_Role.GetValue();
	public byte/*(bool)*/                                     R2T_Soldier_Rendering_Active                                   => _offR2T_Soldier_Rendering_Active.GetValue();
	public TArray<UStaticMeshComponent>                       AttachmentMeshes3P                                             => _offAttachmentMeshes3P.GetValue();
	public UClass                                             Cache_Weapon                                                   => _offCache_Weapon.GetValue();
	#endregion


}


}