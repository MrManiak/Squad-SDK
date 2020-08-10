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

// BlueprintGeneratedClass ConstructionResourceWeapon.ConstructionResourceWeapon_C
// 0x0010 (0x0290 - 0x0280)
public class AConstructionResourceWeapon_C : ASQConstructionResource
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0280, false); // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USceneComponent>                   _offDefaultSceneRoot                                           = new ExternalOffset<USceneComponent>(0x0288, true);           // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USceneComponent                                    DefaultSceneRoot                                               => _offDefaultSceneRoot.GetValue();
	#endregion


}


}