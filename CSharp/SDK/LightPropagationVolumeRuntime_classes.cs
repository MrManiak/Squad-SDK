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

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x004C (0x0074 - 0x0028)
public class ULightPropagationVolumeBlendable : UObject
{
	#region Offsets
	private ExternalOffset<FLightPropagationVolumeSettings>   _offSettings                                                   = new ExternalOffset<FLightPropagationVolumeSettings>(0x0030, false); // 0x0030(0x0040) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offBlendWeight                                                = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FLightPropagationVolumeSettings                    Settings                                                       => _offSettings.GetValue();
	public float                                              BlendWeight                                                    => _offBlendWeight.GetValue();
	#endregion


}


}