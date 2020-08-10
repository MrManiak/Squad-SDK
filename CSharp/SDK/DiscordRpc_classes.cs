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

// Class DiscordRpc.DiscordRpc
// 0x0120 (0x0148 - 0x0028)
public class UDiscordRpc : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offIsConnected                                                = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnConnected                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnDisconnected                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnErrored                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnJoin                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSpectate                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0070, false); // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnJoinRequest                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FDiscordRichPresence>              _offRichPresence                                               = new ExternalOffset<FDiscordRichPresence>(0x0090, false);     // 0x0090(0x00B8) (BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     IsConnected                                                    => _offIsConnected.GetValue();
	public FScriptMulticastDelegate                           OnConnected                                                    => _offOnConnected.GetValue();
	public FScriptMulticastDelegate                           OnDisconnected                                                 => _offOnDisconnected.GetValue();
	public FScriptMulticastDelegate                           OnErrored                                                      => _offOnErrored.GetValue();
	public FScriptMulticastDelegate                           OnJoin                                                         => _offOnJoin.GetValue();
	public FScriptMulticastDelegate                           OnSpectate                                                     => _offOnSpectate.GetValue();
	public FScriptMulticastDelegate                           OnJoinRequest                                                  => _offOnJoinRequest.GetValue();
	public FDiscordRichPresence                               RichPresence                                                   => _offRichPresence.GetValue();
	#endregion


}


}