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

// BlueprintGeneratedClass BP_R2T_Soldier.BP_R2T_Soldier_C
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
// LastOffsetWithSize(0x0260)
#define PADDING_0392 - 0x0000 // Minimum to subtract -> (0000)
class ABP_R2T_Soldier_C : public ASceneCapture2D
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0392, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0260(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0392, class UPointLightComponent*,                                           PointLight1);                                              // 0x0268(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0392, class UPointLightComponent*,                                           PointLight);                                               // 0x0270(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0392, class USkeletalMeshComponent*,                                         Preview_Weapon);                                           // 0x0278(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0392, class USkeletalMeshComponent*,                                         Preview_Soldier);                                          // 0x0280(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0392, class USceneComponent*,                                                SoldierParent);                                            // 0x0288(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0392, bool,                                                                  Team_2);                                                   // 0x0290(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0392, class USQRoleSettings*,                                                My_Role);                                                  // 0x0298(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0392, bool,                                                                  R2T_Soldier_Rendering_Active);                             // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0392, TArray<class UStaticMeshComponent*>,                                   AttachmentMeshes3P);                                       // 0x02A8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0392, class UClass*,                                                         Cache_Weapon);                                             // 0x02B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_R2T_Soldier.BP_R2T_Soldier_C");
		return ptr;
	}


	void Manage_Attachments(bool Create);
	void Get_Role_Info(class USkeletalMeshComponent** Soldier_Mesh, class USkeletalMeshComponent** Weapon_Mesh);
	void Set_Rendering(bool Active);
	void Set_Render_Soldier_Role(class USQRoleSettings* NewRole, bool Force);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void Play_Animations();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_R2T_Soldier(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
