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

// WidgetBlueprintGeneratedClass BP_MapWidgetSoldier.BP_MapWidgetSoldier_C
// 0x014D (FullSize[0x0469] - InheritedSize[0x031C])
// LastOffsetWithSize(0x031C)
#define PADDING_01D1 - 0x0000 // Minimum to subtract -> (0004)
class UBP_MapWidgetSoldier_C : public USQMapWidgetSoldier
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_01D1, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0320(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000C PADDING_01D1, class UWidgetAnimation*,                                               SelfPulseAnim);                                            // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0014 PADDING_01D1, class UWidgetAnimation*,                                               PlayerBleedingAnim);                                       // 0x0330(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001C PADDING_01D1, class UWidgetAnimation*,                                               PlayerIncapAnim);                                          // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0024 PADDING_01D1, class UImage*,                                                         Arrow);                                                    // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002C PADDING_01D1, class UOverlay*,                                                       BleedingPanel);                                            // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0034 PADDING_01D1, class UImage*,                                                         BleedingRing);                                             // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003C PADDING_01D1, class UImage*,                                                         FireteamDiamondRoles);                                     // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0044 PADDING_01D1, class UImage*,                                                         FireteamDot);                                              // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004C PADDING_01D1, class UImage*,                                                         FTL);                                                      // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0054 PADDING_01D1, class UBorder*,                                                        IconParent);                                               // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005C PADDING_01D1, class UImage*,                                                         IncapIcon);                                                // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0064 PADDING_01D1, class UOverlay*,                                                       IncapPanel);                                               // 0x0380(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_01D1, class UImage*,                                                         IncapRing);                                                // 0x0388(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_01D1, class UImage*,                                                         IsCommanderImage);                                         // 0x0390(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007C PADDING_01D1, class UImage*,                                                         IsCommanderImageOutline);                                  // 0x0398(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_01D1, class UImage*,                                                         IsMedicImage);                                             // 0x03A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_01D1, class UImage*,                                                         Player_Cone_Image);                                        // 0x03A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_01D1, class USizeBox*,                                                       PlayerIconSizeBox);                                        // 0x03B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_01D1, class UWidgetSwitcher*,                                                PlayerIconSwitcher);                                       // 0x03B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_01D1, class UBorder*,                                                        PlayerImage);                                              // 0x03C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_01D1, class UImage*,                                                         PulseImage);                                               // 0x03C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B4 PADDING_01D1, class UBorder*,                                                        RoleImage);                                                // 0x03D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_01D1, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x03D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C4 PADDING_01D1, class UImage*,                                                         Selection);                                                // 0x03E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CC PADDING_01D1, class UTextBlock*,                                                     TB_Identifier);                                            // 0x03E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_01D1, class UImage*,                                                         TooltipHitBox);                                            // 0x03F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DC PADDING_01D1, class UCanvasPanel*,                                                   ViewCone_Rotation);                                        // 0x03F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E4 PADDING_01D1, class UOverlay*,                                                       WidgetOverlay);                                            // 0x0400(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EC PADDING_01D1, float,                                                                 DefaultScale);                                             // 0x0408(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_01D1, float,                                                                 MedicScale);                                               // 0x040C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_01D1, float,                                                                 SquadLeaderScale);                                         // 0x0410(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_01D1, float,                                                                 SelfScale);                                                // 0x0414(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FC PADDING_01D1, class UTexture2D*,                                                     Dir_DefaultImage);                                         // 0x0418(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0104 PADDING_01D1, class UTexture2D*,                                                     Dir_SquadLeaderImage);                                     // 0x0420(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010C PADDING_01D1, class UTexture2D*,                                                     Dir_SelfImage);                                            // 0x0428(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0114 PADDING_01D1, class UW_Tooltip_Soldier_C*,                                           REF_Tooltip);                                              // 0x0430(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011C PADDING_01D1, int,                                                                   Pulse_Animation_Loops);                                    // 0x0438(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_01D1, bool,                                                                  Is_Animating);                                             // 0x043C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0124 PADDING_01D1, class ASQPlayerController*,                                            My_PC);                                                    // 0x0440(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012C PADDING_01D1, float,                                                                 Player_Image_Angle_Offset);                                // 0x0448(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_01D1, bool,                                                                  Showing_Roles);                                            // 0x044C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0134 PADDING_01D1, class UTexture2D*,                                                     NonDir_DefaultImage);                                      // 0x0450(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x013C PADDING_01D1, class UTexture2D*,                                                     NonDir_SquadLeaderImage);                                  // 0x0458(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0144 PADDING_01D1, class UTexture2D*,                                                     NonDir_SelfImage);                                         // 0x0460(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x014C PADDING_01D1, bool,                                                                  Show_Fireteam_Letters);                                    // 0x0468(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetSoldier.BP_MapWidgetSoldier_C");
		return ptr;
	}


	void Set_View_Cone_Visibility();
	void Refresh_Element_Visibility();
	void Set_Show_Fireteam_Letter();
	void Update_Tooltip_Color();
	void Update_Color();
	void Update_Wounded_Opacity();
	void Update_ID();
	void Update_Is_Medic_Icon();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Same_Fireteam(bool* Same);
	void Update_Role_Icon();
	void Update_Role_Info();
	struct FEventReply On_TooltipHitBox_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class UWidget* Tooltip();
	void Update_Icon_Size();
	void Update_Player_Image();
	void OnTintValueChanged();
	void OnShowBleedingChanged();
	void OnShowIncapChanged();
	void OnIsMedicChanged();
	void OnIsOwnedBySelfChanged();
	void OnIsInVehicleChanged();
	void OnSquadIdChanged();
	void OnCameraRotationYawChanged();
	void OnSoldierInfoChanged();
	void OnSelectionStateChanged();
	void Construct();
	void OnCurrentRoleChanged();
	void OnScaleChanged(float UniformScale);
	void OnIsWoundedChanged();
	void OnFireteamIdChanged();
	void OnFireTeamIndexChanged();
	void OnAngleChanged();
	void OnIsInSelfSquad();
	void OnIsInSelfTeam();
	void OnCommanderChangedEvent_Event_1(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void OnLeaderStateChanged();
	void ExecuteUbergraph_BP_MapWidgetSoldier(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
