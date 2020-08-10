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

// Enum InputCore.EControllerHand
public enum EControllerHand : byte
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__AnyHand       = 2,
	EControllerHand__Pad           = 3,
	EControllerHand__ExternalCamera = 4,
	EControllerHand__Gun           = 5,
	EControllerHand__Special       = 6,
	EControllerHand__Special01     = 7,
	EControllerHand__Special02     = 8,
	EControllerHand__Special03     = 9,
	EControllerHand__Special04     = 10,
	EControllerHand__Special05     = 11,
	EControllerHand__Special06     = 12,
	EControllerHand__Special07     = 13,
	EControllerHand__Special08     = 14,
	EControllerHand__Special09     = 15,
	EControllerHand__Special10     = 16,
	EControllerHand__ControllerHand_Count = 17,
	EControllerHand__EControllerHand_MAX = 18
}

// Enum InputCore.EConsoleForGamepadLabels
public enum EConsoleForGamepadLabels : byte
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3
}

// Enum InputCore.ETouchType
public enum ETouchType : byte
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__ForceChanged       = 3,
	ETouchType__FirstMove          = 4,
	ETouchType__Ended              = 5,
	ETouchType__NumTypes           = 6,
	ETouchType__ETouchType_MAX     = 7
}

// Enum InputCore.ETouchIndex
public enum ETouchIndex : byte
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__CursorPointerIndex = 10,
	ETouchIndex__MAX_TOUCHES       = 11,
	ETouchIndex__ETouchIndex_MAX   = 12
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
public class FKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offKeyName                                                    = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FName                                               KeyName                                                        => _offKeyName.GetValue();
	#endregion

	public FKey(FName c_KeyName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offKeyName.SetValue(c_KeyName);
	}
}

}