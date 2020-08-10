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

// BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBPI_PlayerController_C : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C");
		return ptr;
	}


	void bCanRemoveMapMarkerNew(class UBP_MapMarker_Selectable_C* Map_Marker, bool* Can_Remove);
	void Set_Last_Command_Request_Time();
	void Get_Command_Request_Available(bool* Available, float* Remaining_Time);
	void Accept_Deny_Command_Request(class ABP_MapMarker_Command_Request_C* Marker, bool Accepted);
	void Get_Command_Action_Condition(class UClass** Condition_Class);
	void Get_Last_Selected_Marker(class USQMapWidgetMapMarkerSelectable** Marker);
	void Remove_Selected_Marker();
	void Request_Command_Marker(class UClass* Command_Marker, const struct FTransform& Transform, float distance);
	void Request_Director_Marker(class UClass* Director_Marker, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, float distance, int Squad_ID);
	void Remove_Map_Marker_New(unsigned char MapMarkerID);
	void Request_Marker(class UClass* Marker_Class, const struct FVector& Location, int Fire_Team_ID, bool Emote);
	void Request_Map_Marker(int Squad_ID, ESQTeam Team_ID, int Fire_Team_ID, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantize& DistanceRotation, class USQMapMarkerDataAsset* Map_Marker_Data);
	void Play_Emote(ESQEmotes Emote, const struct FName& Name);
	void SetAllowAdminCam(bool bAllowAdminCam);
	void bCan_Remove_Marker(bool* Can_Remove);
	void bCan_Place_Marker(bool* Can_Place);
	void Clear_Selected_Marker();
	void Change_Role_from_RearmSource(class UObject* Context, float Ammo, class USQRoleSettings* Role, bool Partial_Ammo);
	void Set_Selected_Marker(class USQMapWidgetMapMarkerSelectable* Marker_Ref);
	void Trace_Marker(const struct FVector& Start, const struct FVector& End, class USQMapMarkerDataAsset* Marker, bool Hotkey, bool Emote, class UClass* MarkerClass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
