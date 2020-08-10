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

// BlueprintGeneratedClass Comp_ResourceControl.Comp_ResourceControl_C
// 0x006C (0x0134 - 0x00C8)
public class UComp_ResourceControl_C : UActorComponent
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00D8, false); // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<float>                             _offResource_Quantity                                          = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offResource_Rate                                              = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Vehicle_Velocity                                       = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offResource_Gain_Timer                                        = new ExternalOffset<FTimerHandle>(0x00F0, false);             // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offAmmo_Transaction                                           = new ExternalOffset<byte/*(bool)*/>(0x00F8);                  // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offPickup_Transaction                                         = new ExternalOffset<byte/*(bool)*/>(0x00F9);                  // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQVehicle>                        _offCurrent_Vehicle                                            = new ExternalOffset<ASQVehicle>(0x0100, true);                // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offAnimation_Repeat_Rate                                      = new ExternalOffset<float>(0x0108);                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offAnimation_Delay_Timer                                      = new ExternalOffset<FTimerHandle>(0x0110, false);             // 0x0110(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<APlayerController>                 _offMy_PC                                                      = new ExternalOffset<APlayerController>(0x0118, true);         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleResource>                _offCurrent_Resource_Weapon                                    = new ExternalOffset<ASQVehicleResource>(0x0120, true);        // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShould_Validate_Player                                     = new ExternalOffset<byte/*(bool)*/>(0x0128);                  // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offLast_Hand_Anim_Time                                        = new ExternalOffset<float>(0x012C);                           // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offMax_Altitude_In_Meters                                     = new ExternalOffset<float>(0x0130);                           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public float                                              Resource_Quantity                                              => _offResource_Quantity.GetValue();
	public float                                              Resource_Rate                                                  => _offResource_Rate.GetValue();
	public float                                              Max_Vehicle_Velocity                                           => _offMax_Vehicle_Velocity.GetValue();
	public FTimerHandle                                       Resource_Gain_Timer                                            => _offResource_Gain_Timer.GetValue();
	public byte/*(bool)*/                                     Ammo_Transaction                                               => _offAmmo_Transaction.GetValue();
	public byte/*(bool)*/                                     Pickup_Transaction                                             => _offPickup_Transaction.GetValue();
	public ASQVehicle                                         Current_Vehicle                                                => _offCurrent_Vehicle.GetValue();
	public float                                              Animation_Repeat_Rate                                          => _offAnimation_Repeat_Rate.GetValue();
	public FTimerHandle                                       Animation_Delay_Timer                                          => _offAnimation_Delay_Timer.GetValue();
	public APlayerController                                  My_PC                                                          => _offMy_PC.GetValue();
	public ASQVehicleResource                                 Current_Resource_Weapon                                        => _offCurrent_Resource_Weapon.GetValue();
	public byte/*(bool)*/                                     Should_Validate_Player                                         => _offShould_Validate_Player.GetValue();
	public float                                              Last_Hand_Anim_Time                                            => _offLast_Hand_Anim_Time.GetValue();
	public float                                              Max_Altitude_In_Meters                                         => _offMax_Altitude_In_Meters.GetValue();
	#endregion


}


}