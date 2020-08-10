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

// BlueprintGeneratedClass GridData_DirectorOption.GridData_DirectorOption_C
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
// LastOffsetWithSize(0x0060)
#define PADDING_014C - 0x0000 // Minimum to subtract -> (0000)
class UGridData_DirectorOption_C : public UGridData_BaseOption_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_014C, class UClass*,                                                         Control_Widget);                                           // 0x0060(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0008 PADDING_014C, class UClass*,                                                         Map_Marker_Class);                                         // 0x0068(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_014C, float,                                                                 Min_Distance);                                             // 0x0070(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_014C, float,                                                                 Max_Distance);                                             // 0x0074(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_014C, class USQMapMarkerDataAsset*,                                          MapMarkerDataAsset);                                       // 0x0078(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GridData_DirectorOption.GridData_DirectorOption_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
