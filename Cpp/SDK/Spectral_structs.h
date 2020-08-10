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

// Enum Spectral.ESpectralDeviceType
enum class ESpectralDeviceType : uint8_t
{
	ESpectralDeviceType__Keyboard  = 0,
	ESpectralDeviceType__Mouse     = 1,
	ESpectralDeviceType__Headset   = 2,
	ESpectralDeviceType__Mousepad  = 3,
	ESpectralDeviceType__HeadsetStand = 4,
	ESpectralDeviceType__Speaker   = 5,
	ESpectralDeviceType__ESpectralDeviceType_MAX = 6,

};

// Enum Spectral.ESpectralLedName
enum class ESpectralLedName : uint8_t
{
	ESpectralLedName__Invalid      = 0,
	ESpectralLedName__Backspace    = 1,
	ESpectralLedName__Tab          = 2,
	ESpectralLedName__Enter        = 3,
	ESpectralLedName__Pause        = 4,
	ESpectralLedName__CapsLock     = 5,
	ESpectralLedName__Escape       = 6,
	ESpectralLedName__Spacebar     = 7,
	ESpectralLedName__PageUp       = 8,
	ESpectralLedName__PageDown     = 9,
	ESpectralLedName__End          = 10,
	ESpectralLedName__Home         = 11,
	ESpectralLedName__LeftArrow    = 12,
	ESpectralLedName__UpArrow      = 13,
	ESpectralLedName__RightArrow   = 14,
	ESpectralLedName__DownArrow    = 15,
	ESpectralLedName__PrintScreen  = 16,
	ESpectralLedName__Insert       = 17,
	ESpectralLedName__Delete       = 18,
	ESpectralLedName__Zero         = 19,
	ESpectralLedName__One          = 20,
	ESpectralLedName__Two          = 21,
	ESpectralLedName__Three        = 22,
	ESpectralLedName__Four         = 23,
	ESpectralLedName__Five         = 24,
	ESpectralLedName__Six          = 25,
	ESpectralLedName__Seven        = 26,
	ESpectralLedName__Eight        = 27,
	ESpectralLedName__Nine         = 28,
	ESpectralLedName__A            = 29,
	ESpectralLedName__B            = 30,
	ESpectralLedName__C            = 31,
	ESpectralLedName__D            = 32,
	ESpectralLedName__E            = 33,
	ESpectralLedName__F            = 34,
	ESpectralLedName__G            = 35,
	ESpectralLedName__H            = 36,
	ESpectralLedName__I            = 37,
	ESpectralLedName__J            = 38,
	ESpectralLedName__K            = 39,
	ESpectralLedName__L            = 40,
	ESpectralLedName__M            = 41,
	ESpectralLedName__N            = 42,
	ESpectralLedName__O            = 43,
	ESpectralLedName__P            = 44,
	ESpectralLedName__Q            = 45,
	ESpectralLedName__R            = 46,
	ESpectralLedName__S            = 47,
	ESpectralLedName__T            = 48,
	ESpectralLedName__U            = 49,
	ESpectralLedName__V            = 50,
	ESpectralLedName__W            = 51,
	ESpectralLedName__X            = 52,
	ESpectralLedName__Y            = 53,
	ESpectralLedName__Z            = 54,
	ESpectralLedName__LeftWindows  = 55,
	ESpectralLedName__RightWindows = 56,
	ESpectralLedName__Applications = 57,
	ESpectralLedName__Numpad0      = 58,
	ESpectralLedName__Numpad1      = 59,
	ESpectralLedName__Numpad2      = 60,
	ESpectralLedName__Numpad3      = 61,
	ESpectralLedName__Numpad4      = 62,
	ESpectralLedName__Numpad5      = 63,
	ESpectralLedName__Numpad6      = 64,
	ESpectralLedName__Numpad7      = 65,
	ESpectralLedName__Numpad8      = 66,
	ESpectralLedName__Numpad9      = 67,
	ESpectralLedName__Multiply     = 68,
	ESpectralLedName__Add          = 69,
	ESpectralLedName__Subtract     = 70,
	ESpectralLedName__Decimal      = 71,
	ESpectralLedName__Divide       = 72,
	ESpectralLedName__F1           = 73,
	ESpectralLedName__F2           = 74,
	ESpectralLedName__F3           = 75,
	ESpectralLedName__F4           = 76,
	ESpectralLedName__F5           = 77,
	ESpectralLedName__F6           = 78,
	ESpectralLedName__F7           = 79,
	ESpectralLedName__F8           = 80,
	ESpectralLedName__F9           = 81,
	ESpectralLedName__F10          = 82,
	ESpectralLedName__F11          = 83,
	ESpectralLedName__F12          = 84,
	ESpectralLedName__NumLock      = 85,
	ESpectralLedName__ScrollLock   = 86,
	ESpectralLedName__LeftShift    = 87,
	ESpectralLedName__RightShift   = 88,
	ESpectralLedName__LeftControl  = 89,
	ESpectralLedName__RightControl = 90,
	ESpectralLedName__Semicolon    = 91,
	ESpectralLedName__Plus         = 92,
	ESpectralLedName__Comma        = 93,
	ESpectralLedName__Minus        = 94,
	ESpectralLedName__Period       = 95,
	ESpectralLedName__Slash        = 96,
	ESpectralLedName__Tilde        = 97,
	ESpectralLedName__LeftBracket  = 98,
	ESpectralLedName__Backslash    = 99,
	ESpectralLedName__RightBracket = 100,
	ESpectralLedName__Quote        = 101,
	ESpectralLedName__LeftAlt      = 102,
	ESpectralLedName__RightAlt     = 103,
	ESpectralLedName__NumpadEnter  = 104,
	ESpectralLedName__G1           = 105,
	ESpectralLedName__G2           = 106,
	ESpectralLedName__G3           = 107,
	ESpectralLedName__G4           = 108,
	ESpectralLedName__G5           = 109,
	ESpectralLedName__G6           = 110,
	ESpectralLedName__G7           = 111,
	ESpectralLedName__G8           = 112,
	ESpectralLedName__G9           = 113,
	ESpectralLedName__Logo         = 114,
	ESpectralLedName__Badge        = 115,
	ESpectralLedName__NonUsBackslash = 116,
	ESpectralLedName__Lang1        = 117,
	ESpectralLedName__Lang2        = 118,
	ESpectralLedName__LedProgramming = 119,
	ESpectralLedName__Brightness   = 120,
	ESpectralLedName__NonUsTilde   = 121,
	ESpectralLedName__WindowsLock  = 122,
	ESpectralLedName__Mute         = 123,
	ESpectralLedName__Stop         = 124,
	ESpectralLedName__PreviousTrack = 125,
	ESpectralLedName__PlayPause    = 126,
	ESpectralLedName__NextTrack    = 127,
	ESpectralLedName__VolumeUp     = 128,
	ESpectralLedName__VolumeDown   = 129,
	ESpectralLedName__MR           = 130,
	ESpectralLedName__M1           = 131,
	ESpectralLedName__M2           = 132,
	ESpectralLedName__M3           = 133,
	ESpectralLedName__G10          = 134,
	ESpectralLedName__G11          = 135,
	ESpectralLedName__G12          = 136,
	ESpectralLedName__G13          = 137,
	ESpectralLedName__G14          = 138,
	ESpectralLedName__G15          = 139,
	ESpectralLedName__G16          = 140,
	ESpectralLedName__G17          = 141,
	ESpectralLedName__G18          = 142,
	ESpectralLedName__Fn           = 143,
	ESpectralLedName__International1 = 144,
	ESpectralLedName__International2 = 145,
	ESpectralLedName__International3 = 146,
	ESpectralLedName__International4 = 147,
	ESpectralLedName__International5 = 148,
	ESpectralLedName__International6 = 149,
	ESpectralLedName__International7 = 150,
	ESpectralLedName__KeyboardZone1 = 151,
	ESpectralLedName__KeyboardZone2 = 152,
	ESpectralLedName__KeyboardZone3 = 153,
	ESpectralLedName__KeyboardZone4 = 154,
	ESpectralLedName__KeyboardZone5 = 155,
	ESpectralLedName__KeyboardZone6 = 156,
	ESpectralLedName__KeyboardZone7 = 157,
	ESpectralLedName__KeyboardZone8 = 158,
	ESpectralLedName__KeyboardZone9 = 159,
	ESpectralLedName__KeyboardZone10 = 160,
	ESpectralLedName__KeyboardZone11 = 161,
	ESpectralLedName__KeyboardZone12 = 162,
	ESpectralLedName__KeyboardZone13 = 163,
	ESpectralLedName__KeyboardZone14 = 164,
	ESpectralLedName__KeyboardZone15 = 165,
	ESpectralLedName__KeyboardZone16 = 166,
	ESpectralLedName__KeyboardZone17 = 167,
	ESpectralLedName__KeyboardZone18 = 168,
	ESpectralLedName__KeyboardZone19 = 169,
	ESpectralLedName__MouseZone1   = 170,
	ESpectralLedName__MouseZone2   = 171,
	ESpectralLedName__MouseZone3   = 172,
	ESpectralLedName__MouseZone4   = 173,
	ESpectralLedName__MouseZone5   = 174,
	ESpectralLedName__MouseZone6   = 175,
	ESpectralLedName__MouseZone7   = 176,
	ESpectralLedName__MouseZone8   = 177,
	ESpectralLedName__MouseZone9   = 178,
	ESpectralLedName__MouseZone10  = 179,
	ESpectralLedName__MouseZone11  = 180,
	ESpectralLedName__MouseZone12  = 181,
	ESpectralLedName__MouseZone13  = 182,
	ESpectralLedName__MouseZone14  = 183,
	ESpectralLedName__MouseZone15  = 184,
	ESpectralLedName__MouseZone16  = 185,
	ESpectralLedName__MouseZone17  = 186,
	ESpectralLedName__MouseZone18  = 187,
	ESpectralLedName__MouseZone19  = 188,
	ESpectralLedName__MouseZone20  = 189,
	ESpectralLedName__MouseZone21  = 190,
	ESpectralLedName__MouseZone22  = 191,
	ESpectralLedName__HeadsetLeftZone = 192,
	ESpectralLedName__HeadsetRightZone = 193,
	ESpectralLedName__MousepadZone1 = 194,
	ESpectralLedName__MousepadZone2 = 195,
	ESpectralLedName__MousepadZone3 = 196,
	ESpectralLedName__MousepadZone4 = 197,
	ESpectralLedName__MousepadZone5 = 198,
	ESpectralLedName__MousepadZone6 = 199,
	ESpectralLedName__MousepadZone7 = 200,
	ESpectralLedName__MousepadZone8 = 201,
	ESpectralLedName__MousepadZone9 = 202,
	ESpectralLedName__MousepadZone10 = 203,
	ESpectralLedName__MousepadZone11 = 204,
	ESpectralLedName__MousepadZone12 = 205,
	ESpectralLedName__MousepadZone13 = 206,
	ESpectralLedName__MousepadZone14 = 207,
	ESpectralLedName__MousepadZone15 = 208,
	ESpectralLedName__HeadsetStandZone1 = 209,
	ESpectralLedName__HeadsetStandZone2 = 210,
	ESpectralLedName__HeadsetStandZone3 = 211,
	ESpectralLedName__HeadsetStandZone4 = 212,
	ESpectralLedName__HeadsetStandZone5 = 213,
	ESpectralLedName__HeadsetStandZone6 = 214,
	ESpectralLedName__HeadsetStandZone7 = 215,
	ESpectralLedName__HeadsetStandZone8 = 216,
	ESpectralLedName__HeadsetStandZone9 = 217,
	ESpectralLedName__SpeakerLeft  = 218,
	ESpectralLedName__SpeakerRight = 219,
	ESpectralLedName__ESpectralLedName_MAX = 220,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
