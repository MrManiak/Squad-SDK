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

// WidgetBlueprintGeneratedClass W_MapMarker_DirectorParent.W_MapMarker_DirectorParent_C
// 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
// LastOffsetWithSize(0x02D0)
#define PADDING_04ED - 0x0000 // Minimum to subtract -> (0000)
class UW_MapMarker_DirectorParent_C : public USQMapWidgetMapMarkerSelectable
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_04ED, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_04ED, class ABP_MapMarker_DirectorMaster_C*,                                 MapMarker_Director);                                       // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_04ED, bool,                                                                  Faded);                                                    // 0x02E0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0014 PADDING_04ED, float,                                                                 Fade_Time);                                                // 0x02E4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

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
