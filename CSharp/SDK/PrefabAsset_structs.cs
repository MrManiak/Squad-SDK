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

// Enum PrefabAsset.EPrefabVariantRuleType
public enum EPrefabVariantRuleType : byte
{
	EPrefabVariantRuleType__SkipProp = 0,
	EPrefabVariantRuleType__EPrefabVariantRuleType_MAX = 1
}

// Enum PrefabAsset.EPTUITheme
public enum EPTUITheme : byte
{
	EPTUITheme__Default            = 0,
	EPTUITheme__Dark               = 1,
	EPTUITheme__EPTUITheme_MAX     = 2
}

// Enum PrefabAsset.EPrefabVisualizerType
public enum EPrefabVisualizerType : byte
{
	EPrefabVisualizerType__WireBox = 0,
	EPrefabVisualizerType__WireSphere = 1,
	EPrefabVisualizerType__EPrefabVisualizerType_MAX = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabAsset.PrefabVariantRule
// 0x0020
public class FPrefabVariantRule : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offScope                                                      = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offRule                                                       = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPrefabVariantRuleType>             _offRuleType                                                   = new ExternalOffset<EPrefabVariantRuleType>(0x0018, false);   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbEnable                                                    = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Scope                                                          => _offScope.GetValue();
	public FString                                             Rule                                                           => _offRule.GetValue();
	public EPrefabVariantRuleType                              RuleType                                                       => _offRuleType.GetValue();
	public byte/*(bool)*/                                      bEnable                                                        => _offbEnable.GetValue();
	#endregion

	public FPrefabVariantRule(FName c_Scope, FString c_Rule, EPrefabVariantRuleType c_RuleType, byte/*(bool)*/ c_bEnable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offScope.SetValue(c_Scope);
		_offRule.SetValue(c_Rule);
		_offRuleType.SetValue(c_RuleType);
		_offbEnable.SetValue(c_bEnable);
	}
}

}