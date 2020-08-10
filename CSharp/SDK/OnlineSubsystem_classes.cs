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

// Class OnlineSubsystem.NamedInterfaces
// 0x0020 (0x0048 - 0x0028)
public class UNamedInterfaces : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FNamedInterface>>           _offNamedInterfaces                                            = new ExternalOffset<TArray<FNamedInterface>>(0x0028, false);  // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FNamedInterfaceDef>>        _offNamedInterfaceDefs                                         = new ExternalOffset<TArray<FNamedInterfaceDef>>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FNamedInterface>                            NamedInterfaces                                                => _offNamedInterfaces.GetValue();
	public TArray<FNamedInterfaceDef>                         NamedInterfaceDefs                                             => _offNamedInterfaceDefs.GetValue();
	#endregion


}

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
public class UTurnBasedMatchInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}