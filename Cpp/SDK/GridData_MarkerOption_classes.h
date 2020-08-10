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

// BlueprintGeneratedClass GridData_MarkerOption.GridData_MarkerOption_C
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
// LastOffsetWithSize(0x0060)
#define PADDING_0AAC - 0x0000 // Minimum to subtract -> (0000)
class UGridData_MarkerOption_C : public UGridData_BaseOption_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0AAC, class UClass*,                                                         BP_Marker);                                                // 0x0060(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0AAC, class USQMapMarkerDataAsset*,                                          MapMarkerData);                                            // 0x0068(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GridData_MarkerOption.GridData_MarkerOption_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
