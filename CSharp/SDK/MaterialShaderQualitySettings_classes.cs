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

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (0x0078 - 0x0028)
public class UMaterialShaderQualitySettings : UObject
{
	#region Offsets
//	private TMap<struct FName, class UShaderPlatformQualitySettings*> _offForwardSettingMap                                          = new ExternalOffset<TMap<UShaderPlatformQualitySettings>>(0x0028, false); // 0x0028(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion


}

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0018 (0x0040 - 0x0028)
public class UShaderPlatformQualitySettings : UObject
{
	#region Offsets
//	private ExternalOffset<FMaterialQualityOverrides>         _offQualityOverrides[0x3]                                      = new ExternalOffset<FMaterialQualityOverrides>(0x0028, false); // 0x0028(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion


}


}