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
// Enums
//---------------------------------------------------------------------------

// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8_t
{
	EPrefabVariantRuleType__SkipProp = 0,
	EPrefabVariantRuleType__EPrefabVariantRuleType_MAX = 1,

};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8_t
{
	EPTUITheme__Default            = 0,
	EPTUITheme__Dark               = 1,
	EPTUITheme__EPTUITheme_MAX     = 2,

};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8_t
{
	EPrefabVisualizerType__WireBox = 0,
	EPrefabVisualizerType__WireSphere = 1,
	EPrefabVisualizerType__EPrefabVisualizerType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabAsset.PrefabVariantRule
// 0x0020
struct FPrefabVariantRule
{
	struct FName                                       Scope;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Rule;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPrefabVariantRuleType                             RuleType;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
