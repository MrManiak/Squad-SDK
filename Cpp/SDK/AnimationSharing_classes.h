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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0108 (FullSize[0x0288] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0330 - 0x0000 // Minimum to subtract -> (00E8)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0330, class UAnimSequence*,                                                  AnimationToPlay);                                          // 0x0268(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0330, float,                                                                 PermutationTimeOffset);                                    // 0x0270(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_0330, float,                                                                 PlayRate);                                                 // 0x0274(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0330, bool,                                                                  bStateBool);                                               // 0x0278(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0100 PADDING_0330, class UAnimSharingInstance*,                                           instance);                                                 // 0x0280(0x0008)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}


	void GetInstancedActors(TArray<class AActor*>* Actors);
};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x00FD (FullSize[0x027D] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0332 - 0x0000 // Minimum to subtract -> (00E8)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0332, TWeakObjectPtr<class USkeletalMeshComponent>,                          FromComponent);                                            // 0x0268(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0332, TWeakObjectPtr<class USkeletalMeshComponent>,                          ToComponent);                                              // 0x0270(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0332, float,                                                                 BlendTime);                                                // 0x0278(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0332, bool,                                                                  bBlendBool);                                               // 0x027C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x00FD (FullSize[0x027D] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
#define PADDING_0335 - 0x0000 // Minimum to subtract -> (00E8)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0335, TWeakObjectPtr<class USkeletalMeshComponent>,                          BaseComponent);                                            // 0x0268(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_0335, TWeakObjectPtr<class UAnimSequence>,                                   AdditiveAnimation);                                        // 0x0270(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_0335, float,                                                                 Alpha);                                                    // 0x0278(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x00FC PADDING_0335, bool,                                                                  bStateBool);                                               // 0x027C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimSharingInstance
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0337 - 0x0000 // Minimum to subtract -> (0000)
class UAnimSharingInstance : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0337, TArray<class AActor*>,                                                 RegisteredActors);                                         // 0x0028(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0337, class UAnimationSharingStateProcessor*,                                StateProcessor);                                           // 0x00A8(0x0008)  (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0337, TArray<class UAnimSequence*>,                                          UsedAnimationSequences);                                   // 0x00E8(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_0337, class UEnum*,                                                          StateEnum);                                                // 0x0108(0x0008)  (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_0337, class AActor*,                                                         SharingActor);                                             // 0x0110(0x0008)  (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimationSharingManager
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0338 - 0x0000 // Minimum to subtract -> (0000)
class UAnimationSharingManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0338, TArray<class USkeleton*>,                                              Skeletons);                                                // 0x0028(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0338, TArray<class UAnimSharingInstance*>,                                   PerSkeletonData);                                          // 0x0038(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}


	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
	static class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
	static bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
	static bool STATIC_AnimationSharingEnabled();
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0339 - 0x0000 // Minimum to subtract -> (0000)
class UAnimationSharingSetup : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0339, TArray<struct FPerSkeletonAnimationSharingSetup>,                      SkeletonSetups);                                           // 0x0028(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0339, struct FAnimationSharingScalability,                                   ScalabilitySettings);                                      // 0x0038(0x0010)  (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}


};

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UAnimationSharingStateProcessor : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}


	void ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
