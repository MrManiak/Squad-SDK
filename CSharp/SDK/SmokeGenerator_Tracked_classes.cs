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

// BlueprintGeneratedClass SmokeGenerator_Tracked.SmokeGenerator_Tracked_C
// 0x0030 (0x0A20 - 0x09F0)
public class ASmokeGenerator_Tracked_C : ASQVehicleSmokeGenerator
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x09F0, false); // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UParticleSystem>                   _offSmokeEffect                                                = new ExternalOffset<UParticleSystem>(0x09F8, true);           // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<FName>>                     _offWheelFxCachedBoneNames                                     = new ExternalOffset<TArray<FName>>(0x0A00, false);            // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<FParticleSysParam>>         _offWheelFxCachedParams                                        = new ExternalOffset<TArray<FParticleSysParam>>(0x0A10, false); // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UParticleSystem                                    SmokeEffect                                                    => _offSmokeEffect.GetValue();
	public TArray<FName>                                      WheelFxCachedBoneNames                                         => _offWheelFxCachedBoneNames.GetValue();
	public TArray<FParticleSysParam>                          WheelFxCachedParams                                            => _offWheelFxCachedParams.GetValue();
	#endregion


}


}