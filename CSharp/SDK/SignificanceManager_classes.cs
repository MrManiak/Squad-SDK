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

// Class SignificanceManager.SignificanceManager
// 0x00F0 (0x0118 - 0x0028)
public class USignificanceManager : UObject
{
	#region Offsets
	private ExternalOffset<FSoftClassPath>                    _offSignificanceManagerClassName                               = new ExternalOffset<FSoftClassPath>(0x0100, false);           // 0x0100(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FSoftClassPath                                     SignificanceManagerClassName                                   => _offSignificanceManagerClassName.GetValue();
	#endregion


}


}