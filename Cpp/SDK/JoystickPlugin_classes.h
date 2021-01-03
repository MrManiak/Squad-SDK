#pragma once

// Name: S, Version: b


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class JoystickPlugin.JoystickInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UJoystickInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JoystickPlugin.JoystickInterface");
		return ptr;
	}



	void JoystickUnplugged(int DeviceID);
	void JoystickPluggedIn(int DeviceID);
	void JoystickHatChanged(int Hat, EJoystickPOVDirection Value, const struct FJoystickState& State);
	void JoystickButtonReleased(int Button, const struct FJoystickState& State);
	void JoystickButtonPressed(int Button, const struct FJoystickState& State);
	void JoystickBallMoved(int Ball, const struct FVector2D& Delta, const struct FJoystickState& State);
	void JoystickAxisChanged(int Axis, float Value, float valuePrev, const struct FJoystickState& State, const struct FJoystickState& prev);
};

// Class JoystickPlugin.JoystickFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UJoystickFunctions : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JoystickPlugin.JoystickFunctions");
		return ptr;
	}



	void STATIC_RegisterForJoystickEvents(class UObject* Listener);
	struct FVector2D STATIC_POVAxis(EJoystickPOVDirection Direction);
	void STATIC_MapJoystickDeviceToPlayer(int DeviceID, int Player);
	int STATIC_JoystickCount();
	void STATIC_IgnoreGameControllers(bool bIgnore);
	struct FJoystickState STATIC_GetPreviousJoystickState(int DeviceID);
	struct FJoystickState STATIC_GetJoystickState(int DeviceID);
	struct FJoystickInfo STATIC_GetJoystick(int DeviceID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
