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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
public class USteamAuthComponentModuleInterface : UHandlerComponentFactory
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0014 (0x0790 - 0x077C)
public class USteamNetDriver : UIpNetDriver
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x000D (0x1A01 - 0x19F4)
public class USteamNetConnection : UIpConnection
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbIsPassthrough                                             = new ExternalOffset<byte/*(bool)*/>(0x1A00);                  // 0x1A00(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bIsPassthrough                                                 => _offbIsPassthrough.GetValue();
	#endregion


}


}