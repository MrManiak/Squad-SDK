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

// BlueprintGeneratedClass BP_MainMenu_PC.BP_MainMenu_PC_C
// 0x0018 (0x09B0 - 0x0998)
public class ABP_MainMenu_PC_C : ASQPlayerController
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0998, false); // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FScriptMulticastDelegate>          _offPossessedMenuCam                                           = new ExternalOffset<FScriptMulticastDelegate>(0x09A0, false); // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FScriptMulticastDelegate                           PossessedMenuCam                                               => _offPossessedMenuCam.GetValue();
	#endregion


}


}