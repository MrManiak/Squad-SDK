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

// Enum Rejoin.ERejoinStatus
public enum ERejoinStatus : byte
{
	ERejoinStatus__NoMatchToRejoin = 0,
	ERejoinStatus__RejoinAvailable = 1,
	ERejoinStatus__UpdatingStatus  = 2,
	ERejoinStatus__NeedsRecheck    = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus__ERejoinStatus_MAX = 5
}


}