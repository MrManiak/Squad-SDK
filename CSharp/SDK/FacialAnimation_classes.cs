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

// Class FacialAnimation.AudioCurveSourceComponent
// 0x00F4 (0x0744 - 0x0650)
public class UAudioCurveSourceComponent : UAudioComponent
{
	#region Offsets
	private ExternalOffset<FName>                             _offCurveSourceBindingName                                     = new ExternalOffset<FName>(0x0738, false);                    // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurveSyncOffset                                            = new ExternalOffset<float>(0x0740);                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                              CurveSourceBindingName                                         => _offCurveSourceBindingName.GetValue();
	public float                                              CurveSyncOffset                                                => _offCurveSyncOffset.GetValue();
	#endregion


}


}