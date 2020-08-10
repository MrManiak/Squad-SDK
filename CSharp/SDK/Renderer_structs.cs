// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Renderer.LightPropagationVolumeSettings
// 0x0040
public class FLightPropagationVolumeSettings : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbOverride_LPVIntensity                                     = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVDirectionalOcclusionIntensity                 = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVDirectionalOcclusionRadius                    = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVDiffuseOcclusionExponent                      = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVSpecularOcclusionExponent                     = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVDiffuseOcclusionIntensity                     = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVSpecularOcclusionIntensity                    = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVSize                                          = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVSecondaryOcclusionIntensity                   = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVSecondaryBounceIntensity                      = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVGeometryVolumeBias                            = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVVplInjectionBias                              = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_LPVEmissiveInjectionIntensity                    = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVIntensity                                               = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVVplInjectionBias                                        = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVSize                                                    = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVSecondaryOcclusionIntensity                             = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVSecondaryBounceIntensity                                = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVGeometryVolumeBias                                      = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVEmissiveInjectionIntensity                              = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVDirectionalOcclusionIntensity                           = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVDirectionalOcclusionRadius                              = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVDiffuseOcclusionExponent                                = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVSpecularOcclusionExponent                               = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVDiffuseOcclusionIntensity                               = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVSpecularOcclusionIntensity                              = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVFadeRange                                               = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLPVDirectionalOcclusionFadeRange                           = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               LPVIntensity                                                   => _offLPVIntensity.GetValue();
	public float                                               LPVVplInjectionBias                                            => _offLPVVplInjectionBias.GetValue();
	public float                                               LPVSize                                                        => _offLPVSize.GetValue();
	public float                                               LPVSecondaryOcclusionIntensity                                 => _offLPVSecondaryOcclusionIntensity.GetValue();
	public float                                               LPVSecondaryBounceIntensity                                    => _offLPVSecondaryBounceIntensity.GetValue();
	public float                                               LPVGeometryVolumeBias                                          => _offLPVGeometryVolumeBias.GetValue();
	public float                                               LPVEmissiveInjectionIntensity                                  => _offLPVEmissiveInjectionIntensity.GetValue();
	public float                                               LPVDirectionalOcclusionIntensity                               => _offLPVDirectionalOcclusionIntensity.GetValue();
	public float                                               LPVDirectionalOcclusionRadius                                  => _offLPVDirectionalOcclusionRadius.GetValue();
	public float                                               LPVDiffuseOcclusionExponent                                    => _offLPVDiffuseOcclusionExponent.GetValue();
	public float                                               LPVSpecularOcclusionExponent                                   => _offLPVSpecularOcclusionExponent.GetValue();
	public float                                               LPVDiffuseOcclusionIntensity                                   => _offLPVDiffuseOcclusionIntensity.GetValue();
	public float                                               LPVSpecularOcclusionIntensity                                  => _offLPVSpecularOcclusionIntensity.GetValue();
	public float                                               LPVFadeRange                                                   => _offLPVFadeRange.GetValue();
	public float                                               LPVDirectionalOcclusionFadeRange                               => _offLPVDirectionalOcclusionFadeRange.GetValue();
	#endregion

	public FLightPropagationVolumeSettings(float c_LPVIntensity, float c_LPVVplInjectionBias, float c_LPVSize, float c_LPVSecondaryOcclusionIntensity, float c_LPVSecondaryBounceIntensity, float c_LPVGeometryVolumeBias, float c_LPVEmissiveInjectionIntensity, float c_LPVDirectionalOcclusionIntensity, float c_LPVDirectionalOcclusionRadius, float c_LPVDiffuseOcclusionExponent, float c_LPVSpecularOcclusionExponent, float c_LPVDiffuseOcclusionIntensity, float c_LPVSpecularOcclusionIntensity, float c_LPVFadeRange, float c_LPVDirectionalOcclusionFadeRange) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLPVIntensity.SetValue(c_LPVIntensity);
		_offLPVVplInjectionBias.SetValue(c_LPVVplInjectionBias);
		_offLPVSize.SetValue(c_LPVSize);
		_offLPVSecondaryOcclusionIntensity.SetValue(c_LPVSecondaryOcclusionIntensity);
		_offLPVSecondaryBounceIntensity.SetValue(c_LPVSecondaryBounceIntensity);
		_offLPVGeometryVolumeBias.SetValue(c_LPVGeometryVolumeBias);
		_offLPVEmissiveInjectionIntensity.SetValue(c_LPVEmissiveInjectionIntensity);
		_offLPVDirectionalOcclusionIntensity.SetValue(c_LPVDirectionalOcclusionIntensity);
		_offLPVDirectionalOcclusionRadius.SetValue(c_LPVDirectionalOcclusionRadius);
		_offLPVDiffuseOcclusionExponent.SetValue(c_LPVDiffuseOcclusionExponent);
		_offLPVSpecularOcclusionExponent.SetValue(c_LPVSpecularOcclusionExponent);
		_offLPVDiffuseOcclusionIntensity.SetValue(c_LPVDiffuseOcclusionIntensity);
		_offLPVSpecularOcclusionIntensity.SetValue(c_LPVSpecularOcclusionIntensity);
		_offLPVFadeRange.SetValue(c_LPVFadeRange);
		_offLPVDirectionalOcclusionFadeRange.SetValue(c_LPVDirectionalOcclusionFadeRange);
	}
}

}