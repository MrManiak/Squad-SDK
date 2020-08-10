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

// BlueprintGeneratedClass BP_TeamInfo.BP_TeamInfo_C
// 0x0020 (FullSize[0x03A0] - InheritedSize[0x0380])
// LastOffsetWithSize(0x0380)
#define PADDING_0242 - 0x0000 // Minimum to subtract -> (0000)
class UBP_TeamInfo_C : public USQTeamInfo
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0242, class UClass*,                                                         SLCommandMenu);                                            // 0x0380(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0242, class UClass*,                                                         NonBuildSLCommandMenu);                                    // 0x0388(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0242, class UDataTable*,                                                     Grunt_Voice_Table);                                        // 0x0390(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0242, class UDataTable*,                                                     SL_Voice_Table);                                           // 0x0398(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeamInfo.BP_TeamInfo_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
