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
// Classes
//---------------------------------------------------------------------------

// Class JoystickPlugin.JoystickFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UJoystickFunctions : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JoystickPlugin.JoystickFunctions");
		return ptr;
	}


	static void STATIC_RegisterForJoystickEvents(class UObject* Listener);
	static struct FVector2D STATIC_POVAxis(EJoystickPOVDirection Direction);
	static void STATIC_MapJoystickDeviceToPlayer(int DeviceID, int Player);
	static int STATIC_JoystickCount();
	static void STATIC_IgnoreGameControllers(bool bIgnore);
	static struct FJoystickState STATIC_GetPreviousJoystickState(int DeviceID);
	static struct FJoystickState STATIC_GetJoystickState(int DeviceID);
	static struct FJoystickInfo STATIC_GetJoystick(int DeviceID);
};

// Class JoystickPlugin.JoystickInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UJoystickInterface : public UInterface
{
public:
	//union
	//{
	//};

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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
