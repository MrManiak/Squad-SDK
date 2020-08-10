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

// Enum ActorSequence.EActorSequenceObjectReferenceType
public enum EActorSequenceObjectReferenceType : byte
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020
public class FActorSequenceObjectReferenceMap : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGuid>>                      _offBindingIds                                                 = new ExternalOffset<TArray<FGuid>>(0x0000, false);            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FActorSequenceObjectReferences>> _offReferences                                                 = new ExternalOffset<TArray<FActorSequenceObjectReferences>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FGuid>                                       BindingIds                                                     => _offBindingIds.GetValue();
	public TArray<FActorSequenceObjectReferences>              References                                                     => _offReferences.GetValue();
	#endregion

	public FActorSequenceObjectReferenceMap(TArray<FGuid> c_BindingIds, TArray<FActorSequenceObjectReferences> c_References) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBindingIds.SetValue(c_BindingIds);
		_offReferences.SetValue(c_References);
	}
}
// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028
public class FActorSequenceObjectReference : ExternalClass
{
	#region Offsets
	private ExternalOffset<EActorSequenceObjectReferenceType>  _offType                                                       = new ExternalOffset<EActorSequenceObjectReferenceType>(0x0000, false); // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                              _offActorId                                                    = new ExternalOffset<FGuid>(0x0004, false);                    // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offPathToComponent                                            = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EActorSequenceObjectReferenceType                   Type                                                           => _offType.GetValue();
	public FGuid                                               ActorId                                                        => _offActorId.GetValue();
	public FString                                             PathToComponent                                                => _offPathToComponent.GetValue();
	#endregion

	public FActorSequenceObjectReference(EActorSequenceObjectReferenceType c_Type, FGuid c_ActorId, FString c_PathToComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offType.SetValue(c_Type);
		_offActorId.SetValue(c_ActorId);
		_offPathToComponent.SetValue(c_PathToComponent);
	}
}
// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010
public class FActorSequenceObjectReferences : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FActorSequenceObjectReference>> _offArray                                                      = new ExternalOffset<TArray<FActorSequenceObjectReference>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FActorSequenceObjectReference>               Array                                                          => _offArray.GetValue();
	#endregion

	public FActorSequenceObjectReferences(TArray<FActorSequenceObjectReference> c_Array) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offArray.SetValue(c_Array);
	}
}

}