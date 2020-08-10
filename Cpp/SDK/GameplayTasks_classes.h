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

// Class GameplayTasks.GameplayTask
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09C6 - 0x0000 // Minimum to subtract -> (0008)
class UGameplayTask : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09C6, struct FName,                                                          InstanceName);                                             // 0x0030(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0012 PADDING_09C6, ETaskResourceOverlapPolicy,                                            ResourceOverlapPolicy);                                    // 0x003A(0x0001)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0038 PADDING_09C6, class UGameplayTask*,                                                  ChildTask);                                                // 0x0060(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	static class UGameplayTask_ClaimResource* STATIC_ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	static class UGameplayTask_ClaimResource* STATIC_ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
};

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_09C8 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09C8, struct FScriptMulticastDelegate,                                       Success);                                                  // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C8, struct FScriptMulticastDelegate,                                       DidNotSpawn);                                              // 0x0078(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_09C8, class UClass*,                                                         ClassToSpawn);                                             // 0x00A0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}


	static class UGameplayTask_SpawnActor* STATIC_SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_09C9 - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09C9, struct FScriptMulticastDelegate,                                       OnFinished);                                               // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09C9, struct FScriptMulticastDelegate,                                       OnTimeExpired);                                            // 0x0078(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}


};

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
// LastOffsetWithSize(0x0068)
#define PADDING_09CA - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09CA, struct FScriptMulticastDelegate,                                       OnFinish);                                                 // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}


	static class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}


};

// Class GameplayTasks.GameplayTaskResource
// 0x0009 (FullSize[0x0031] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09CC - 0x0000 // Minimum to subtract -> (0000)
class UGameplayTaskResource : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09CC, int,                                                                   ManualResourceID);                                         // 0x0028(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0004 PADDING_09CC, int8_t,                                                                AutoResourceID);                                           // 0x002C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_09CC, unsigned char,                                                         bManuallySetID);                                           // 0x0030(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}


};

// Class GameplayTasks.GameplayTasksComponent
// 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_09CD - 0x0000 // Minimum to subtract -> (001C)
class UGameplayTasksComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x001C PADDING_09CD, unsigned char,                                                         bIsNetDirty);                                              // 0x00E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09CD, TArray<class UGameplayTask*>,                                          SimulatedTasks);                                           // 0x00E8(0x0010)  (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0030 PADDING_09CD, TArray<class UGameplayTask*>,                                          TaskPriorityQueue);                                        // 0x00F8(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0050 PADDING_09CD, TArray<class UGameplayTask*>,                                          TickingTasks);                                             // 0x0118(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0060 PADDING_09CD, TArray<class UGameplayTask*>,                                          KnownTasks);                                               // 0x0128(0x0010)  (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0070 PADDING_09CD, struct FScriptMulticastDelegate,                                       OnClaimedResourcesChange);                                 // 0x0138(0x0010)  (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}


	void OnRep_SimulatedTasks();
	static EGameplayTaskRunResult STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
