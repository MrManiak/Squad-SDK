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

// BlueprintGeneratedClass BP_HUDMenu.BP_HUDMenu_C
// 0x0019 (0x09C1 - 0x09A8)
public class ABP_HUDMenu_C : ASQHUD
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x09A8, false); // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x09B0, true);           // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UMainMenuScreen_C>                 _offMainMenu_Widget                                            = new ExternalOffset<UMainMenuScreen_C>(0x09B8, true);         // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowingMainMenu                                           = new ExternalOffset<byte/*(bool)*/>(0x09C0);                  // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	public UMainMenuScreen_C                                  MainMenu_Widget                                                => _offMainMenu_Widget.GetValue();
	public byte/*(bool)*/                                     bShowingMainMenu                                               => _offbShowingMainMenu.GetValue();
	#endregion


}


}