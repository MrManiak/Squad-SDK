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

// Enum JoystickPlugin.EJoystickPOVDirection
public enum EJoystickPOVDirection : byte
{
	EJoystickPOVDirection__DIRECTION_NONE = 0,
	EJoystickPOVDirection__DIRECTION_UP = 1,
	EJoystickPOVDirection__DIRECTION_UP_RIGHT = 2,
	EJoystickPOVDirection__DIRECTION_RIGHT = 3,
	EJoystickPOVDirection__DIRECTION_DOWN_RIGHT = 4,
	EJoystickPOVDirection__DIRECTION_DOWN = 5,
	EJoystickPOVDirection__DIRECTION_DOWN_LEFT = 6,
	EJoystickPOVDirection__DIRECTION_LEFT = 7,
	EJoystickPOVDirection__DIRECTION_UP_LEFT = 8,
	EJoystickPOVDirection__DIRECTION_MAX = 9
}

// Enum JoystickPlugin.EInputType
public enum EInputType : byte
{
	EInputType__INPUTTYPE_UNKNOWN  = 0,
	EInputType__INPUTTYPE_JOYSTICK = 1,
	EInputType__INPUTTYPE_GAMECONTROLLER = 2,
	EInputType__INPUTTYPE_MAX      = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JoystickPlugin.JoystickState
// 0x0048
public class FJoystickState : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offDeviceID                                                   = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                      _offAxes                                                       = new ExternalOffset<TArray<float>>(0x0008, false);            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<bool>>                       _offButtons                                                    = new ExternalOffset<TArray<bool>>(0x0018, false);             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<EJoystickPOVDirection>>      _offHats                                                       = new ExternalOffset<TArray<EJoystickPOVDirection>>(0x0028, false); // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector2D>>                  _offBalls                                                      = new ExternalOffset<TArray<FVector2D>>(0x0038, false);        // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 DeviceID                                                       => _offDeviceID.GetValue();
	public TArray<float>                                       Axes                                                           => _offAxes.GetValue();
	public TArray<bool>                                        Buttons                                                        => _offButtons.GetValue();
	public TArray<EJoystickPOVDirection>                       Hats                                                           => _offHats.GetValue();
	public TArray<FVector2D>                                   Balls                                                          => _offBalls.GetValue();
	#endregion

	public FJoystickState(int c_DeviceID, TArray<float> c_Axes, TArray<bool> c_Buttons, TArray<EJoystickPOVDirection> c_Hats, TArray<FVector2D> c_Balls) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDeviceID.SetValue(c_DeviceID);
		_offAxes.SetValue(c_Axes);
		_offButtons.SetValue(c_Buttons);
		_offHats.SetValue(c_Hats);
		_offBalls.SetValue(c_Balls);
	}
}
// ScriptStruct JoystickPlugin.JoystickInfo
// 0x0058
public class FJoystickInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offPlayer                                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDeviceID                                                   = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offIsRumbleDevice                                             = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offProductId                                                  = new ExternalOffset<FGuid>(0x000C, false);                    // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offProductName                                                = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDeviceName                                                 = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offConnected                                                  = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<EInputType>>                 _offInputType                                                  = new ExternalOffset<TArray<EInputType>>(0x0048, false);       // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Player                                                         => _offPlayer.GetValue();
	public int                                                 DeviceID                                                       => _offDeviceID.GetValue();
	public byte/*(bool)*/                                      IsRumbleDevice                                                 => _offIsRumbleDevice.GetValue();
	public FGuid                                               ProductId                                                      => _offProductId.GetValue();
	public FString                                             ProductName                                                    => _offProductName.GetValue();
	public FString                                             DeviceName                                                     => _offDeviceName.GetValue();
	public byte/*(bool)*/                                      Connected                                                      => _offConnected.GetValue();
	public TArray<EInputType>                                  InputType                                                      => _offInputType.GetValue();
	#endregion

	public FJoystickInfo(int c_Player, int c_DeviceID, byte/*(bool)*/ c_IsRumbleDevice, FGuid c_ProductId, FString c_ProductName, FString c_DeviceName, byte/*(bool)*/ c_Connected, TArray<EInputType> c_InputType) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPlayer.SetValue(c_Player);
		_offDeviceID.SetValue(c_DeviceID);
		_offIsRumbleDevice.SetValue(c_IsRumbleDevice);
		_offProductId.SetValue(c_ProductId);
		_offProductName.SetValue(c_ProductName);
		_offDeviceName.SetValue(c_DeviceName);
		_offConnected.SetValue(c_Connected);
		_offInputType.SetValue(c_InputType);
	}
}

}