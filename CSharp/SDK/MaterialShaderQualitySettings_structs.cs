// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
public enum EMobileCSMQuality : byte
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008
public class FMaterialQualityOverrides : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbDiscardQualityDuringCook                                  = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnableOverride                                            = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceFullyRough                                           = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceNonMetal                                             = new ExternalOffset<byte/*(bool)*/>(0x0003);                  // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceDisableLMDirectionality                              = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbForceLQReflections                                        = new ExternalOffset<byte/*(bool)*/>(0x0005);                  // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbDisableMaterialNormalCalculation                          = new ExternalOffset<byte/*(bool)*/>(0x0006);                  // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMobileCSMQuality>                  _offMobileCSMQuality                                           = new ExternalOffset<EMobileCSMQuality>(0x0007, false);        // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bDiscardQualityDuringCook                                      => _offbDiscardQualityDuringCook.GetValue();
	public byte/*(bool)*/                                      bEnableOverride                                                => _offbEnableOverride.GetValue();
	public byte/*(bool)*/                                      bForceFullyRough                                               => _offbForceFullyRough.GetValue();
	public byte/*(bool)*/                                      bForceNonMetal                                                 => _offbForceNonMetal.GetValue();
	public byte/*(bool)*/                                      bForceDisableLMDirectionality                                  => _offbForceDisableLMDirectionality.GetValue();
	public byte/*(bool)*/                                      bForceLQReflections                                            => _offbForceLQReflections.GetValue();
	public byte/*(bool)*/                                      bDisableMaterialNormalCalculation                              => _offbDisableMaterialNormalCalculation.GetValue();
	public EMobileCSMQuality                                   MobileCSMQuality                                               => _offMobileCSMQuality.GetValue();
	#endregion

	public FMaterialQualityOverrides(byte/*(bool)*/ c_bDiscardQualityDuringCook, byte/*(bool)*/ c_bEnableOverride, byte/*(bool)*/ c_bForceFullyRough, byte/*(bool)*/ c_bForceNonMetal, byte/*(bool)*/ c_bForceDisableLMDirectionality, byte/*(bool)*/ c_bForceLQReflections, byte/*(bool)*/ c_bDisableMaterialNormalCalculation, EMobileCSMQuality c_MobileCSMQuality) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbDiscardQualityDuringCook.SetValue(c_bDiscardQualityDuringCook);
		_offbEnableOverride.SetValue(c_bEnableOverride);
		_offbForceFullyRough.SetValue(c_bForceFullyRough);
		_offbForceNonMetal.SetValue(c_bForceNonMetal);
		_offbForceDisableLMDirectionality.SetValue(c_bForceDisableLMDirectionality);
		_offbForceLQReflections.SetValue(c_bForceLQReflections);
		_offbDisableMaterialNormalCalculation.SetValue(c_bDisableMaterialNormalCalculation);
		_offMobileCSMQuality.SetValue(c_MobileCSMQuality);
	}
}

}