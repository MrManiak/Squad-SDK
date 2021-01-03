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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NametagTargetInfo.NametagTargetInfo
// 0x0030
struct FNametagTargetInfo
{
	class ASQSquadState*                               SquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8;             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              PlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       PlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF;            // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               IsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB;                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F;         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CNS8[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E;      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
