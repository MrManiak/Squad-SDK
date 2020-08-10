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

// WidgetBlueprintGeneratedClass W_Helicopter_MiniMap.W_Helicopter_MiniMap_C
// 0x0098 (0x0278 - 0x01E0)
public class UW_Helicopter_MiniMap_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offShowAnim                                                   = new ExternalOffset<UWidgetAnimation>(0x0238, true);          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offGPSMap                                                     = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon_Player                                                = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMapMaterialInstance                                        = new ExternalOffset<UMaterialInstanceDynamic>(0x0250, true);  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UW_SQMapBody_C>                    _offMap_Body                                                   = new ExternalOffset<UW_SQMapBody_C>(0x0258, true);            // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FTimerHandle>                      _offFadeAnimation                                              = new ExternalOffset<FTimerHandle>(0x0260, false);             // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offOpen                                                       = new ExternalOffset<byte/*(bool)*/>(0x0268);                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offEngine_Active                                              = new ExternalOffset<byte/*(bool)*/>(0x0269);                  // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<ASQHelicopter2>                    _offHelicopter                                                 = new ExternalOffset<ASQHelicopter2>(0x0270, true);            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   ShowAnim                                                       => _offShowAnim.GetValue();
	public UImage                                             GPSMap                                                         => _offGPSMap.GetValue();
	public UImage                                             Icon_Player                                                    => _offIcon_Player.GetValue();
	public UMaterialInstanceDynamic                           MapMaterialInstance                                            => _offMapMaterialInstance.GetValue();
	public UW_SQMapBody_C                                     Map_Body                                                       => _offMap_Body.GetValue();
	public FTimerHandle                                       FadeAnimation                                                  => _offFadeAnimation.GetValue();
	public byte/*(bool)*/                                     Open                                                           => _offOpen.GetValue();
	public byte/*(bool)*/                                     Engine_Active                                                  => _offEngine_Active.GetValue();
	public ASQHelicopter2                                     Helicopter                                                     => _offHelicopter.GetValue();
	#endregion


}


}