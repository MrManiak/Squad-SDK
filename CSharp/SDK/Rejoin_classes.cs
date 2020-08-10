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

// Class Rejoin.RejoinCheck
// 0x0003 (0x002B - 0x0028)
public class URejoinCheck : UObject
{
	#region Offsets
	private ExternalOffset<ERejoinStatus>                     _offLastKnownStatus                                            = new ExternalOffset<ERejoinStatus>(0x0028, false);            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbRejoinAfterCheck                                          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbAttemptingRejoin                                          = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public ERejoinStatus                                      LastKnownStatus                                                => _offLastKnownStatus.GetValue();
	public byte/*(bool)*/                                     bRejoinAfterCheck                                              => _offbRejoinAfterCheck.GetValue();
	public byte/*(bool)*/                                     bAttemptingRejoin                                              => _offbAttemptingRejoin.GetValue();
	#endregion


}


}