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

// WidgetBlueprintGeneratedClass W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C
// 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
class UW_MapMarker_DirectorParent_C : public USQMapWidgetMapMarkerSelectable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_MapMarker_DirectorMaster_C*              MapMarker_Director;                                        // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Faded;                                                     // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_80J6[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Fade_Time;                                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C");
		return ptr;
	}



	void Refresh_Visibility();
	void Update_Size();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Find_Map_Icon();
	void Init_Director_Marker();
	void Destruct();
	void OnRightClicked();
	void ExecuteUbergraph_W_MapMarker_DirectorParent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
