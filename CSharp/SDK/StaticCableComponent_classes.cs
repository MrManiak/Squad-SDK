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

// Class StaticCableComponent.StaticCableComponent
// 0x0020 (0x04C8 - 0x04A8)
public class UStaticCableComponent : UCableComponent
{
	#region Offsets
	private ExternalOffset<float>                             _offSleepMoveSensitivity                                       = new ExternalOffset<float>(0x04C0);                           // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSleepTimeSensitivity                                       = new ExternalOffset<float>(0x04C4);                           // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              SleepMoveSensitivity                                           => _offSleepMoveSensitivity.GetValue();
	public float                                              SleepTimeSensitivity                                           => _offSleepTimeSensitivity.GetValue();
	#endregion


}


}