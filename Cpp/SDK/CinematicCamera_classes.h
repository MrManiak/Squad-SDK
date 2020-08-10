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

// Class CinematicCamera.CameraRig_Crane
// 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0496 - 0x0000 // Minimum to subtract -> (0010)
class ACameraRig_Crane : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0496, float,                                                                 CranePitch);                                               // 0x0248(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0496, float,                                                                 CraneYaw);                                                 // 0x024C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0496, float,                                                                 CraneArmLength);                                           // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0496, bool,                                                                  bLockMountPitch);                                          // 0x0254(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_0496, bool,                                                                  bLockMountYaw);                                            // 0x0255(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0496, class USceneComponent*,                                                TransformComponent);                                       // 0x0258(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0496, class USceneComponent*,                                                CraneYawControl);                                          // 0x0260(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0496, class USceneComponent*,                                                CranePitchControl);                                        // 0x0268(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0496, class USceneComponent*,                                                CraneCameraMount);                                         // 0x0270(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}


};

// Class CinematicCamera.CameraRig_Rail
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_0497 - 0x0000 // Minimum to subtract -> (0010)
class ACameraRig_Rail : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_0497, float,                                                                 CurrentPositionOnRail);                                    // 0x0248(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0497, bool,                                                                  bLockOrientationToRail);                                   // 0x024C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0497, class USceneComponent*,                                                TransformComponent);                                       // 0x0250(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0497, class USplineComponent*,                                               RailSplineComponent);                                      // 0x0258(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0497, class USceneComponent*,                                                RailCameraMount);                                          // 0x0260(0x0008)  (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}


};

// Class CinematicCamera.CineCameraActor
// 0x0050 (FullSize[0x0800] - InheritedSize[0x07B0])
// LastOffsetWithSize(0x07B0)
#define PADDING_0498 - 0x0000 // Minimum to subtract -> (0000)
class ACineCameraActor : public ACameraActor
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0498, struct FCameraLookatTrackingSettings,                                  LookatTrackingSettings);                                   // 0x07B0(0x0050)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};

// Class CinematicCamera.CineCameraComponent
// 0x00E0 (FullSize[0x08A0] - InheritedSize[0x07C0])
// LastOffsetWithSize(0x07C0)
#define PADDING_0499 - 0x0000 // Minimum to subtract -> (0000)
class UCineCameraComponent : public UCameraComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0499, struct FCameraFilmbackSettings,                                        FilmbackSettings);                                         // 0x07C0(0x000C)  (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0499, struct FCameraLensSettings,                                            LensSettings);                                             // 0x07CC(0x0018)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0499, struct FCameraFocusSettings,                                           FocusSettings);                                            // 0x07E8(0x0058)  (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0499, float,                                                                 CurrentFocalLength);                                       // 0x0840(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0499, float,                                                                 CurrentAperture);                                          // 0x0844(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0499, float,                                                                 CurrentFocusDistance);                                     // 0x0848(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0499, TArray<struct FNamedFilmbackPreset>,                                   FilmbackPresets);                                          // 0x0858(0x0010)  (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0499, TArray<struct FNamedLensPreset>,                                       LensPresets);                                              // 0x0868(0x0010)  (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0499, struct FString,                                                        DefaultFilmbackPresetName);                                // 0x0878(0x0010)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_0499, struct FString,                                                        DefaultLensPresetName);                                    // 0x0888(0x0010)  (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0499, float,                                                                 DefaultLensFocalLength);                                   // 0x0898(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00DC PADDING_0499, float,                                                                 DefaultLensFStop);                                         // 0x089C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
