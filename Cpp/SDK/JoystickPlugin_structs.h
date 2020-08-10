#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum JoystickPlugin.EJoystickPOVDirection
enum class EJoystickPOVDirection : uint8_t
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
	EJoystickPOVDirection__DIRECTION_MAX = 9,

};

// Enum JoystickPlugin.EInputType
enum class EInputType : uint8_t
{
	EInputType__INPUTTYPE_UNKNOWN  = 0,
	EInputType__INPUTTYPE_JOYSTICK = 1,
	EInputType__INPUTTYPE_GAMECONTROLLER = 2,
	EInputType__INPUTTYPE_MAX      = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JoystickPlugin.JoystickState
// 0x0048
struct FJoystickState
{
	int                                                DeviceID;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Axes;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       Buttons;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<EJoystickPOVDirection>                      Hats;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           Balls;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct JoystickPlugin.JoystickInfo
// 0x0058
struct FJoystickInfo
{
	int                                                Player;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRumbleDevice;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ProductId;                                                 // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProductName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Connected;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EInputType>                                 InputType;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
