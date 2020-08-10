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

// Class ViewsterRuntime.ViewsterRequestIssuesAction
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_04DB - 0x0000 // Minimum to subtract -> (0008)
class UViewsterRequestIssuesAction : public UBlueprintAsyncActionBase
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_04DB, struct FScriptMulticastDelegate,                                       OnSuccess);                                                // 0x0030(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_04DB, struct FScriptMulticastDelegate,                                       OnFailure);                                                // 0x0040(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ViewsterRuntime.ViewsterRequestIssuesAction");
		return ptr;
	}


	static class UViewsterRequestIssuesAction* STATIC_RequestIssues(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
