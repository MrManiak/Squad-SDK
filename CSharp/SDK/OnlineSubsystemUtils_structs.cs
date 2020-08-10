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

// Enum OnlineSubsystemUtils.EBeaconConnectionState
public enum EBeaconConnectionState : byte
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
}

// Enum OnlineSubsystemUtils.EClientRequestType
public enum EClientRequestType : byte
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__EClientRequestType_MAX = 6
}

// Enum OnlineSubsystemUtils.EPartyReservationResult
public enum EPartyReservationResult : byte
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	EPartyReservationResult__ReservationDenied_Banned = 11,
	EPartyReservationResult__ReservationRequestCanceled = 12,
	EPartyReservationResult__ReservationInvalid = 13,
	EPartyReservationResult__BadSessionId = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult__EPartyReservationResult_MAX = 16
}

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
public enum ESpectatorClientRequestType : byte
{
	ESpectatorClientRequestType__NonePending = 0,
	ESpectatorClientRequestType__ExistingSessionReservation = 1,
	ESpectatorClientRequestType__ReservationUpdate = 2,
	ESpectatorClientRequestType__EmptyServerReservation = 3,
	ESpectatorClientRequestType__Reconnect = 4,
	ESpectatorClientRequestType__Abandon = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX = 6
}

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
public enum ESpectatorReservationResult : byte
{
	ESpectatorReservationResult__NoResult = 0,
	ESpectatorReservationResult__RequestPending = 1,
	ESpectatorReservationResult__GeneralError = 2,
	ESpectatorReservationResult__SpectatorLimitReached = 3,
	ESpectatorReservationResult__IncorrectPlayerCount = 4,
	ESpectatorReservationResult__RequestTimedOut = 5,
	ESpectatorReservationResult__ReservationDuplicate = 6,
	ESpectatorReservationResult__ReservationNotFound = 7,
	ESpectatorReservationResult__ReservationAccepted = 8,
	ESpectatorReservationResult__ReservationDenied = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	ESpectatorReservationResult__ReservationDenied_Banned = 11,
	ESpectatorReservationResult__ReservationRequestCanceled = 12,
	ESpectatorReservationResult__ReservationInvalid = 13,
	ESpectatorReservationResult__BadSessionId = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX = 16
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050
public class FPlayerReservation : ExternalClass
{
	#region Offsets
	private ExternalOffset<FUniqueNetIdRepl>                   _offUniqueID                                                   = new ExternalOffset<FUniqueNetIdRepl>(0x0000, false);         // 0x0000(0x0028) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offValidationStr                                              = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offPlatform                                                   = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowCrossplay                                            = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offElapsedTime                                                = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FUniqueNetIdRepl                                    UniqueID                                                       => _offUniqueID.GetValue();
	public FString                                             ValidationStr                                                  => _offValidationStr.GetValue();
	public FString                                             Platform                                                       => _offPlatform.GetValue();
	public byte/*(bool)*/                                      bAllowCrossplay                                                => _offbAllowCrossplay.GetValue();
	public float                                               ElapsedTime                                                    => _offElapsedTime.GetValue();
	#endregion

	public FPlayerReservation(FUniqueNetIdRepl c_UniqueID, FString c_ValidationStr, FString c_Platform, byte/*(bool)*/ c_bAllowCrossplay, float c_ElapsedTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offUniqueID.SetValue(c_UniqueID);
		_offValidationStr.SetValue(c_ValidationStr);
		_offPlatform.SetValue(c_Platform);
		_offbAllowCrossplay.SetValue(c_bAllowCrossplay);
		_offElapsedTime.SetValue(c_ElapsedTime);
	}
}
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
public class FPIELoginSettingsInternal : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offID                                                         = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offToken                                                      = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offType                                                       = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                       _offTokenBytes                                                 = new ExternalOffset<TArray<char>>(0x0030, false);             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ID                                                             => _offID.GetValue();
	public FString                                             Token                                                          => _offToken.GetValue();
	public FString                                             Type                                                           => _offType.GetValue();
	public TArray<char>                                        TokenBytes                                                     => _offTokenBytes.GetValue();
	#endregion

	public FPIELoginSettingsInternal(FString c_ID, FString c_Token, FString c_Type, TArray<char> c_TokenBytes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offID.SetValue(c_ID);
		_offToken.SetValue(c_Token);
		_offType.SetValue(c_Type);
		_offTokenBytes.SetValue(c_TokenBytes);
	}
}
// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050
public class FPartyReservation : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offTeamNum                                                    = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FUniqueNetIdRepl>                   _offPartyLeader                                                = new ExternalOffset<FUniqueNetIdRepl>(0x0008, false);         // 0x0008(0x0028) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPlayerReservation>>         _offPartyMembers                                               = new ExternalOffset<TArray<FPlayerReservation>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPlayerReservation>>         _offRemovedPartyMembers                                        = new ExternalOffset<TArray<FPlayerReservation>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 TeamNum                                                        => _offTeamNum.GetValue();
	public FUniqueNetIdRepl                                    PartyLeader                                                    => _offPartyLeader.GetValue();
	public TArray<FPlayerReservation>                          PartyMembers                                                   => _offPartyMembers.GetValue();
	public TArray<FPlayerReservation>                          RemovedPartyMembers                                            => _offRemovedPartyMembers.GetValue();
	#endregion

	public FPartyReservation(int c_TeamNum, FUniqueNetIdRepl c_PartyLeader, TArray<FPlayerReservation> c_PartyMembers, TArray<FPlayerReservation> c_RemovedPartyMembers) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTeamNum.SetValue(c_TeamNum);
		_offPartyLeader.SetValue(c_PartyLeader);
		_offPartyMembers.SetValue(c_PartyMembers);
		_offRemovedPartyMembers.SetValue(c_RemovedPartyMembers);
	}
}
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078
public class FSpectatorReservation : ExternalClass
{
	#region Offsets
	private ExternalOffset<FUniqueNetIdRepl>                   _offSpectatorId                                                = new ExternalOffset<FUniqueNetIdRepl>(0x0000, false);         // 0x0000(0x0028) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPlayerReservation>                 _offSpectator                                                  = new ExternalOffset<FPlayerReservation>(0x0028, false);       // 0x0028(0x0050) (Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FUniqueNetIdRepl                                    SpectatorId                                                    => _offSpectatorId.GetValue();
	public FPlayerReservation                                  Spectator                                                      => _offSpectator.GetValue();
	#endregion

	public FSpectatorReservation(FUniqueNetIdRepl c_SpectatorId, FPlayerReservation c_Spectator) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpectatorId.SetValue(c_SpectatorId);
		_offSpectator.SetValue(c_Spectator);
	}
}
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
public class FBlueprintSessionResult : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FBlueprintSessionResult() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}

}