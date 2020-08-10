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

// BlueprintGeneratedClass BPComponent_RadialModel.BPComponent_RadialModel_C
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_0395 - 0x0000 // Minimum to subtract -> (0010)
class UBPComponent_RadialModel_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0395, class UClass*,                                                         Radial_Model);                                             // 0x00D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPComponent_RadialModel.BPComponent_RadialModel_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
