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

// BlueprintGeneratedClass Radial_ActionModel_SpawnVehicle.Radial_ActionModel_SpawnVehicle_C
// 0x0020 (0x00C0 - 0x00A0)
public class URadial_ActionModel_SpawnVehicle_C : UBP_RadialActionModel_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x00A0, false); // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UClass>                            _offVehicle                                                    = new ExternalOffset<UClass>(0x00A8, true);                    // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offConstruction_Cost                                          = new ExternalOffset<int>(0x00B0);                             // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offAmmo_Cost                                                  = new ExternalOffset<int>(0x00B4);                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offSpawn_Duration                                             = new ExternalOffset<float>(0x00B8);                           // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UClass                                             Vehicle                                                        => _offVehicle.GetValue();
	public int                                                Construction_Cost                                              => _offConstruction_Cost.GetValue();
	public int                                                Ammo_Cost                                                      => _offAmmo_Cost.GetValue();
	public float                                              Spawn_Duration                                                 => _offSpawn_Duration.GetValue();
	#endregion


}


}