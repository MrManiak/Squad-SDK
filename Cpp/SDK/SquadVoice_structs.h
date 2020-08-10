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

// Enum SquadVoice.ESQVoiceChannel
enum class ESQVoiceChannel : uint8_t
{
	ESQVoiceChannel__None          = 0,
	ESQVoiceChannel__Local         = 1,
	ESQVoiceChannel__Squad         = 2,
	ESQVoiceChannel__Command       = 3,
	ESQVoiceChannel__ToCommander   = 4,
	ESQVoiceChannel__CommandSQ1    = 5,
	ESQVoiceChannel__CommandSQ2    = 6,
	ESQVoiceChannel__CommandSQ3    = 7,
	ESQVoiceChannel__CommandSQ4    = 8,
	ESQVoiceChannel__CommandSQ5    = 9,
	ESQVoiceChannel__CommandSQ6    = 10,
	ESQVoiceChannel__CommandSQ7    = 11,
	ESQVoiceChannel__CommandSQ8    = 12,
	ESQVoiceChannel__CommandSQ9    = 13,
	ESQVoiceChannel__MAX           = 14,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
