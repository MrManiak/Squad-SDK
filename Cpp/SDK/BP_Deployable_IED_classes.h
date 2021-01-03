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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deployable_IED.BP_Deployable_IED_C
// 0x0016 (FullSize[0x0498] - InheritedSize[0x0482])
class ABP_Deployable_IED_C : public ABP_Deployable_GenericExplosives_C
{
public:
	unsigned char                                      UnknownData_OE84[0x6];                                     // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  RingTone;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deployable_IED.BP_Deployable_IED_C");
		return ptr;
	}



	void Multi_Cast_Ringtone();
	void ExecuteUbergraph_BP_Deployable_IED(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
