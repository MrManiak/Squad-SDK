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
// Enums
//---------------------------------------------------------------------------

// Enum SquadVoice.ESQVoiceChannel
enum class ESQVoiceChannel : uint8_t
{
	None                           = 0,
	Local                          = 1,
	Squad                          = 2,
	Command                        = 3,
	ToCommander                    = 4,
	CommandSQ1                     = 5,
	CommandSQ2                     = 6,
	CommandSQ3                     = 7,
	CommandSQ4                     = 8,
	CommandSQ5                     = 9,
	CommandSQ6                     = 10,
	CommandSQ7                     = 11,
	CommandSQ8                     = 12,
	CommandSQ9                     = 13,
	MAX                            = 14,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
