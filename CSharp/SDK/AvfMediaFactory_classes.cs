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

// Class AvfMediaFactory.AvfMediaSettings
// 0x0001 (0x0029 - 0x0028)
public class UAvfMediaSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offNativeAudioOut                                             = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     NativeAudioOut                                                 => _offNativeAudioOut.GetValue();
	#endregion


}


}