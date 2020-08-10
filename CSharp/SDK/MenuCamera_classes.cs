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

// BlueprintGeneratedClass MenuCamera.MenuCamera_C
// 0x0019 (0x0251 - 0x0238)
public class AMenuCamera_C : AActor
{
	#region Offsets
	private ExternalOffset<UCameraComponent>                  _offCamera                                                     = new ExternalOffset<UCameraComponent>(0x0248, true);          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<EMenuCameraScreen>>    _offCamera_Name                                                = new ExternalOffset<TEnumAsByte<EMenuCameraScreen>>(0x0250, false); // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UCameraComponent                                   Camera                                                         => _offCamera.GetValue();
	public TEnumAsByte<EMenuCameraScreen>                     Camera_Name                                                    => _offCamera_Name.GetValue();
	#endregion


}


}