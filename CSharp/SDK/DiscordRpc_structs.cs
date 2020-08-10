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

// Enum DiscordRpc.EDiscordJoinResponseCodes
public enum EDiscordJoinResponseCodes : byte
{
	EDiscordJoinResponseCodes__DISCORD_REPLY_NO = 0,
	EDiscordJoinResponseCodes__DISCORD_REPLY_YES = 1,
	EDiscordJoinResponseCodes__DISCORD_REPLY_IGNORE = 2,
	EDiscordJoinResponseCodes__DISCORD_REPLY_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DiscordRpc.DiscordRichPresence
// 0x00B8
public class FDiscordRichPresence : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offState                                                      = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offdetails                                                    = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offstartTimestamp                                             = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offendTimestamp                                               = new ExternalOffset<int>(0x0024);                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offlargeImageKey                                              = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offlargeImageText                                             = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offsmallImageKey                                              = new ExternalOffset<FString>(0x0048, false);                  // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offsmallImageText                                             = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offpartyId                                                    = new ExternalOffset<FString>(0x0068, false);                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offpartySize                                                  = new ExternalOffset<int>(0x0078);                             // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offpartyMax                                                   = new ExternalOffset<int>(0x007C);                             // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offmatchSecret                                                = new ExternalOffset<FString>(0x0080, false);                  // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offjoinSecret                                                 = new ExternalOffset<FString>(0x0090, false);                  // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offspectateSecret                                             = new ExternalOffset<FString>(0x00A0, false);                  // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offinstance                                                   = new ExternalOffset<byte/*(bool)*/>(0x00B0);                  // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             State                                                          => _offState.GetValue();
	public FString                                             details                                                        => _offdetails.GetValue();
	public int                                                 startTimestamp                                                 => _offstartTimestamp.GetValue();
	public int                                                 endTimestamp                                                   => _offendTimestamp.GetValue();
	public FString                                             largeImageKey                                                  => _offlargeImageKey.GetValue();
	public FString                                             largeImageText                                                 => _offlargeImageText.GetValue();
	public FString                                             smallImageKey                                                  => _offsmallImageKey.GetValue();
	public FString                                             smallImageText                                                 => _offsmallImageText.GetValue();
	public FString                                             partyId                                                        => _offpartyId.GetValue();
	public int                                                 partySize                                                      => _offpartySize.GetValue();
	public int                                                 partyMax                                                       => _offpartyMax.GetValue();
	public FString                                             matchSecret                                                    => _offmatchSecret.GetValue();
	public FString                                             joinSecret                                                     => _offjoinSecret.GetValue();
	public FString                                             spectateSecret                                                 => _offspectateSecret.GetValue();
	public byte/*(bool)*/                                      instance                                                       => _offinstance.GetValue();
	#endregion

	public FDiscordRichPresence(FString c_State, FString c_details, int c_startTimestamp, int c_endTimestamp, FString c_largeImageKey, FString c_largeImageText, FString c_smallImageKey, FString c_smallImageText, FString c_partyId, int c_partySize, int c_partyMax, FString c_matchSecret, FString c_joinSecret, FString c_spectateSecret, byte/*(bool)*/ c_instance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offState.SetValue(c_State);
		_offdetails.SetValue(c_details);
		_offstartTimestamp.SetValue(c_startTimestamp);
		_offendTimestamp.SetValue(c_endTimestamp);
		_offlargeImageKey.SetValue(c_largeImageKey);
		_offlargeImageText.SetValue(c_largeImageText);
		_offsmallImageKey.SetValue(c_smallImageKey);
		_offsmallImageText.SetValue(c_smallImageText);
		_offpartyId.SetValue(c_partyId);
		_offpartySize.SetValue(c_partySize);
		_offpartyMax.SetValue(c_partyMax);
		_offmatchSecret.SetValue(c_matchSecret);
		_offjoinSecret.SetValue(c_joinSecret);
		_offspectateSecret.SetValue(c_spectateSecret);
		_offinstance.SetValue(c_instance);
	}
}
// ScriptStruct DiscordRpc.DiscordUserData
// 0x0040
public class FDiscordUserData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offuserId                                                     = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offusername                                                   = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offdiscriminator                                              = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offavatar                                                     = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             userId                                                         => _offuserId.GetValue();
	public FString                                             username                                                       => _offusername.GetValue();
	public FString                                             discriminator                                                  => _offdiscriminator.GetValue();
	public FString                                             avatar                                                         => _offavatar.GetValue();
	#endregion

	public FDiscordUserData(FString c_userId, FString c_username, FString c_discriminator, FString c_avatar) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offuserId.SetValue(c_userId);
		_offusername.SetValue(c_username);
		_offdiscriminator.SetValue(c_discriminator);
		_offavatar.SetValue(c_avatar);
	}
}

}