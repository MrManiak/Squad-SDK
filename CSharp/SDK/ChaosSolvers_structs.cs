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

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// 0x0010
public class FSolverTrailingFilterSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offFilterEnabled                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinVolume                                                  = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      FilterEnabled                                                  => _offFilterEnabled.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinVolume                                                      => _offMinVolume.GetValue();
	#endregion

	public FSolverTrailingFilterSettings(byte/*(bool)*/ c_FilterEnabled, float c_MinMass, float c_MinSpeed, float c_MinVolume) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFilterEnabled.SetValue(c_FilterEnabled);
		_offMinMass.SetValue(c_MinMass);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinVolume.SetValue(c_MinVolume);
	}
}
// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// 0x0010
public class FSolverBreakingFilterSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offFilterEnabled                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinVolume                                                  = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      FilterEnabled                                                  => _offFilterEnabled.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinVolume                                                      => _offMinVolume.GetValue();
	#endregion

	public FSolverBreakingFilterSettings(byte/*(bool)*/ c_FilterEnabled, float c_MinMass, float c_MinSpeed, float c_MinVolume) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFilterEnabled.SetValue(c_FilterEnabled);
		_offMinMass.SetValue(c_MinMass);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinVolume.SetValue(c_MinVolume);
	}
}
// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// 0x0010
public class FSolverCollisionFilterSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offFilterEnabled                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinMass                                                    = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinSpeed                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinImpulse                                                 = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      FilterEnabled                                                  => _offFilterEnabled.GetValue();
	public float                                               MinMass                                                        => _offMinMass.GetValue();
	public float                                               MinSpeed                                                       => _offMinSpeed.GetValue();
	public float                                               MinImpulse                                                     => _offMinImpulse.GetValue();
	#endregion

	public FSolverCollisionFilterSettings(byte/*(bool)*/ c_FilterEnabled, float c_MinMass, float c_MinSpeed, float c_MinImpulse) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFilterEnabled.SetValue(c_FilterEnabled);
		_offMinMass.SetValue(c_MinMass);
		_offMinSpeed.SetValue(c_MinSpeed);
		_offMinImpulse.SetValue(c_MinImpulse);
	}
}

}