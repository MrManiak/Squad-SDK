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

// BlueprintGeneratedClass BP_Shockwave.BP_Shockwave_C
// 0x0038 (0x0270 - 0x0238)
public class ABP_Shockwave_C : AActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0248, false); // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USceneComponent>                   _offShockwaveRoot                                              = new ExternalOffset<USceneComponent>(0x0250, true);           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystem>                   _offEmitter_Being_Played                                       = new ExternalOffset<UParticleSystem>(0x0258, true);           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offVerticalSteps                                              = new ExternalOffset<int>(0x0260);                             // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offHorizontalSteps                                            = new ExternalOffset<int>(0x0264);                             // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offEffectsClass                                               = new ExternalOffset<UClass>(0x0268, true);                    // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USceneComponent                                    ShockwaveRoot                                                  => _offShockwaveRoot.GetValue();
	public UParticleSystem                                    Emitter_Being_Played                                           => _offEmitter_Being_Played.GetValue();
	public int                                                VerticalSteps                                                  => _offVerticalSteps.GetValue();
	public int                                                HorizontalSteps                                                => _offHorizontalSteps.GetValue();
	public UClass                                             EffectsClass                                                   => _offEffectsClass.GetValue();
	#endregion


}


}