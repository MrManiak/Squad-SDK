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

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
public enum EClusterConnectionTypeEnum : byte
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	EClusterConnectionTypeEnum__Chaos_None = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max = 5,
	EClusterConnectionTypeEnum__Chaos_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0040
public class FBreakEventCallbackWrapper : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FBreakEventCallbackWrapper() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x0058
public class FChaosHandlerSet : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FChaosHandlerSet() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x0003
public class FChaosDebugSubstepControl : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbPause                                                     = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSubstep                                                   = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbStep                                                      = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bPause                                                         => _offbPause.GetValue();
	public byte/*(bool)*/                                      bSubstep                                                       => _offbSubstep.GetValue();
	public byte/*(bool)*/                                      bStep                                                          => _offbStep.GetValue();
	#endregion

	public FChaosDebugSubstepControl(byte/*(bool)*/ c_bPause, byte/*(bool)*/ c_bSubstep, byte/*(bool)*/ c_bStep) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbPause.SetValue(c_bPause);
		_offbSubstep.SetValue(c_bSubstep);
		_offbStep.SetValue(c_bStep);
	}
}
// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x0030
public class FChaosBreakEvent : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPrimitiveComponent>                _offComponent                                                  = new ExternalOffset<UPrimitiveComponent>(0x0000, true);       // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x0014, false);                  // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity                                            = new ExternalOffset<FVector>(0x0020, false);                  // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPrimitiveComponent                                 Component                                                      => _offComponent.GetValue();
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FVector                                             AngularVelocity                                                => _offAngularVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	#endregion

	public FChaosBreakEvent(UPrimitiveComponent c_Component, FVector c_Location, FVector c_Velocity, FVector c_AngularVelocity, float c_Mass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offComponent.SetValue(c_Component);
		_offLocation.SetValue(c_Location);
		_offVelocity.SetValue(c_Velocity);
		_offAngularVelocity.SetValue(c_AngularVelocity);
		_offMass.SetValue(c_Mass);
	}
}
// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x0070
public class FChaosPhysicsCollisionInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UPrimitiveComponent>                _offComponent                                                  = new ExternalOffset<UPrimitiveComponent>(0x0000, true);       // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPrimitiveComponent>                _offOtherComponent                                             = new ExternalOffset<UPrimitiveComponent>(0x0008, true);       // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLocation                                                   = new ExternalOffset<FVector>(0x0010, false);                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offNormal                                                     = new ExternalOffset<FVector>(0x001C, false);                  // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAccumulatedImpulse                                         = new ExternalOffset<FVector>(0x0028, false);                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offVelocity                                                   = new ExternalOffset<FVector>(0x0034, false);                  // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offOtherVelocity                                              = new ExternalOffset<FVector>(0x0040, false);                  // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offAngularVelocity                                            = new ExternalOffset<FVector>(0x004C, false);                  // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offOtherAngularVelocity                                       = new ExternalOffset<FVector>(0x0058, false);                  // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMass                                                       = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOtherMass                                                  = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPrimitiveComponent                                 Component                                                      => _offComponent.GetValue();
	public UPrimitiveComponent                                 OtherComponent                                                 => _offOtherComponent.GetValue();
	public FVector                                             Location                                                       => _offLocation.GetValue();
	public FVector                                             Normal                                                         => _offNormal.GetValue();
	public FVector                                             AccumulatedImpulse                                             => _offAccumulatedImpulse.GetValue();
	public FVector                                             Velocity                                                       => _offVelocity.GetValue();
	public FVector                                             OtherVelocity                                                  => _offOtherVelocity.GetValue();
	public FVector                                             AngularVelocity                                                => _offAngularVelocity.GetValue();
	public FVector                                             OtherAngularVelocity                                           => _offOtherAngularVelocity.GetValue();
	public float                                               Mass                                                           => _offMass.GetValue();
	public float                                               OtherMass                                                      => _offOtherMass.GetValue();
	#endregion

	public FChaosPhysicsCollisionInfo(UPrimitiveComponent c_Component, UPrimitiveComponent c_OtherComponent, FVector c_Location, FVector c_Normal, FVector c_AccumulatedImpulse, FVector c_Velocity, FVector c_OtherVelocity, FVector c_AngularVelocity, FVector c_OtherAngularVelocity, float c_Mass, float c_OtherMass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offComponent.SetValue(c_Component);
		_offOtherComponent.SetValue(c_OtherComponent);
		_offLocation.SetValue(c_Location);
		_offNormal.SetValue(c_Normal);
		_offAccumulatedImpulse.SetValue(c_AccumulatedImpulse);
		_offVelocity.SetValue(c_Velocity);
		_offOtherVelocity.SetValue(c_OtherVelocity);
		_offAngularVelocity.SetValue(c_AngularVelocity);
		_offOtherAngularVelocity.SetValue(c_OtherAngularVelocity);
		_offMass.SetValue(c_Mass);
		_offOtherMass.SetValue(c_OtherMass);
	}
}

}