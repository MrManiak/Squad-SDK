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

// BlueprintGeneratedClass SaveData_UI.SaveData_UI_C
// 0x003E (FullSize[0x0066] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0398 - 0x0000 // Minimum to subtract -> (0000)
class USaveData_UI_C : public USaveGame
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0398, bool,                                                                  Show_Map_Roles);                                           // 0x0028(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0001 PADDING_0398, bool,                                                                  SL_Icon_Always_On);                                        // 0x0029(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0002 PADDING_0398, bool,                                                                  Show_Stance_Indicator);                                    // 0x002A(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0003 PADDING_0398, bool,                                                                  Show_FOB_Radius);                                          // 0x002B(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0398, bool,                                                                  Show_FOB_Supplies);                                        // 0x002C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0005 PADDING_0398, bool,                                                                  Show_Team_Waypoints);                                      // 0x002D(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0006 PADDING_0398, bool,                                                                  Show_Grid);                                                // 0x002E(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0007 PADDING_0398, bool,                                                                  Show_Spawns);                                              // 0x002F(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0398, bool,                                                                  Show_Weapons_in_Deployment);                               // 0x0030(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0009 PADDING_0398, bool,                                                                  Show_FT_In_Name_Tag);                                      // 0x0031(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x000C PADDING_0398, float,                                                                 Map_Marker_Scale);                                         // 0x0034(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0398, float,                                                                 Lattice_Opacity);                                          // 0x0038(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0398, float,                                                                 Grid_Opacity);                                             // 0x003C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0398, bool,                                                                  SkipGiveUpOption);                                         // 0x0040(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0019 PADDING_0398, bool,                                                                  Show_Fireteam_Letters);                                    // 0x0041(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001A PADDING_0398, bool,                                                                  Show_Deployment_Tutorial);                                 // 0x0042(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001B PADDING_0398, bool,                                                                  Show_Game_Mode_Animation);                                 // 0x0043(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001C PADDING_0398, bool,                                                                  Show_Whitelist_Mods);                                      // 0x0044(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001D PADDING_0398, bool,                                                                  Show_Modded_Servers);                                      // 0x0045(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001E PADDING_0398, bool,                                                                  Show_Vehicle_Keybinds);                                    // 0x0046(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x001F PADDING_0398, bool,                                                                  Show_TC_Zones);                                            // 0x0047(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0398, bool,                                                                  Play_Capture_Sounds);                                      // 0x0048(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0398, TArray<struct FString>,                                                FavouriteServers);                                         // 0x0050(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0398, bool,                                                                  Show_Favourites_Only);                                     // 0x0060(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0039 PADDING_0398, bool,                                                                  Show_Full_Servers);                                        // 0x0061(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x003A PADDING_0398, TEnumAsByte<E_SortType>,                                               LastSortType);                                             // 0x0062(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003B PADDING_0398, bool,                                                                  LastAscendingSortType);                                    // 0x0063(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x003C PADDING_0398, bool,                                                                  DisableOnScreenChat);                                      // 0x0064(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x003D PADDING_0398, bool,                                                                  Show_Director_Lines);                                      // 0x0065(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveData_UI.SaveData_UI_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
