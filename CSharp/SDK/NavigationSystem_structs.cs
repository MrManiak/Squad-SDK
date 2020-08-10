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

// Enum NavigationSystem.ERuntimeGenerationType
public enum ERuntimeGenerationType : byte
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
}

// Enum NavigationSystem.ENavCostDisplay
public enum ENavCostDisplay : byte
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
}

// Enum NavigationSystem.ERecastPartitioning
public enum ERecastPartitioning : byte
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
public class FNavigationFilterArea : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offAreaClass                                                  = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTravelCostOverride                                         = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEnteringCostOverride                                       = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbIsExcluded                                                = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideTravelCost                                        = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverrideEnteringCost                                      = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              AreaClass                                                      => _offAreaClass.GetValue();
	public float                                               TravelCostOverride                                             => _offTravelCostOverride.GetValue();
	public float                                               EnteringCostOverride                                           => _offEnteringCostOverride.GetValue();
	#endregion

	public FNavigationFilterArea(UClass c_AreaClass, float c_TravelCostOverride, float c_EnteringCostOverride) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAreaClass.SetValue(c_AreaClass);
		_offTravelCostOverride.SetValue(c_TravelCostOverride);
		_offEnteringCostOverride.SetValue(c_EnteringCostOverride);
	}
}
// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
public class FSupportedAreaData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offAreaClassName                                              = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAreaID                                                     = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offAreaClass                                                  = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             AreaClassName                                                  => _offAreaClassName.GetValue();
	public int                                                 AreaID                                                         => _offAreaID.GetValue();
	public UClass                                              AreaClass                                                      => _offAreaClass.GetValue();
	#endregion

	public FSupportedAreaData(FString c_AreaClassName, int c_AreaID, UClass c_AreaClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAreaClassName.SetValue(c_AreaClassName);
		_offAreaID.SetValue(c_AreaID);
		_offAreaClass.SetValue(c_AreaClass);
	}
}
// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
public class FNavCollisionCylinder : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offOffset                                                     = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRadius                                                     = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offHeight                                                     = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Offset                                                         => _offOffset.GetValue();
	public float                                               Radius                                                         => _offRadius.GetValue();
	public float                                               Height                                                         => _offHeight.GetValue();
	#endregion

	public FNavCollisionCylinder(FVector c_Offset, float c_Radius, float c_Height) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOffset.SetValue(c_Offset);
		_offRadius.SetValue(c_Radius);
		_offHeight.SetValue(c_Height);
	}
}
// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
public class FNavCollisionBox : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offOffset                                                     = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offExtent                                                     = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Offset                                                         => _offOffset.GetValue();
	public FVector                                             Extent                                                         => _offExtent.GetValue();
	#endregion

	public FNavCollisionBox(FVector c_Offset, FVector c_Extent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOffset.SetValue(c_Offset);
		_offExtent.SetValue(c_Extent);
	}
}
// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
public class FNavGraphNode : ExternalClass
{
	#region Offsets
	private ExternalOffset<UObject>                            _offOwner                                                      = new ExternalOffset<UObject>(0x0000, true);                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UObject                                             Owner                                                          => _offOwner.GetValue();
	#endregion

	public FNavGraphNode(UObject c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
public class FNavigationFilterFlags : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbNavFlag0                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag1                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag2                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag3                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag4                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag5                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag6                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag7                                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag8                                                  = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag9                                                  = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag10                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag11                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag12                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag13                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag14                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbNavFlag15                                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FNavigationFilterFlags() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
public class FNavGraphEdge : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FNavGraphEdge() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}