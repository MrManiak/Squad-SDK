// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameplayTags.EGameplayTagQueryExprType
public enum EGameplayTagQueryExprType : byte
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
}

// Enum GameplayTags.EGameplayContainerMatchType
public enum EGameplayContainerMatchType : byte
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
}

// Enum GameplayTags.EGameplayTagMatchType
public enum EGameplayTagMatchType : byte
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
}

// Enum GameplayTags.EGameplayTagSelectionType
public enum EGameplayTagSelectionType : byte
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4
}

// Enum GameplayTags.EGameplayTagSourceType
public enum EGameplayTagSourceType : byte
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001
public class FGameplayTagCreationWidgetHelper : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayTagCreationWidgetHelper() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0010
public class FGameplayTagReferenceHelper : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayTagReferenceHelper() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayTags.GameplayTag
// 0x0008
public class FGameplayTag : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offTagName                                                    = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                               TagName                                                        => _offTagName.GetValue();
	#endregion

	public FGameplayTag(FName c_TagName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTagName.SetValue(c_TagName);
	}
}
// ScriptStruct GameplayTags.GameplayTagNode
// 0x0050
public class FGameplayTagNode : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayTagNode() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
public class FGameplayTagContainer : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayTag>>               _offGameplayTags                                               = new ExternalOffset<TArray<FGameplayTag>>(0x0000, false);     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FGameplayTag>>               _offParentTags                                                 = new ExternalOffset<TArray<FGameplayTag>>(0x0010, false);     // 0x0010(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FGameplayTag>                                GameplayTags                                                   => _offGameplayTags.GetValue();
	public TArray<FGameplayTag>                                ParentTags                                                     => _offParentTags.GetValue();
	#endregion

	public FGameplayTagContainer(TArray<FGameplayTag> c_GameplayTags, TArray<FGameplayTag> c_ParentTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayTags.SetValue(c_GameplayTags);
		_offParentTags.SetValue(c_ParentTags);
	}
}
// ScriptStruct GameplayTags.GameplayTagSource
// 0x0020
public class FGameplayTagSource : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offSourceName                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayTagSourceType>             _offSourceType                                                 = new ExternalOffset<EGameplayTagSourceType>(0x0008, false);   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayTagsList>                  _offSourceTagList                                              = new ExternalOffset<UGameplayTagsList>(0x0010, true);         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<URestrictedGameplayTagsList>        _offSourceRestrictedTagList                                    = new ExternalOffset<URestrictedGameplayTagsList>(0x0018, true); // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               SourceName                                                     => _offSourceName.GetValue();
	public EGameplayTagSourceType                              SourceType                                                     => _offSourceType.GetValue();
	public UGameplayTagsList                                   SourceTagList                                                  => _offSourceTagList.GetValue();
	public URestrictedGameplayTagsList                         SourceRestrictedTagList                                        => _offSourceRestrictedTagList.GetValue();
	#endregion

	public FGameplayTagSource(FName c_SourceName, EGameplayTagSourceType c_SourceType, UGameplayTagsList c_SourceTagList, URestrictedGameplayTagsList c_SourceRestrictedTagList) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceName.SetValue(c_SourceName);
		_offSourceType.SetValue(c_SourceType);
		_offSourceTagList.SetValue(c_SourceTagList);
		_offSourceRestrictedTagList.SetValue(c_SourceRestrictedTagList);
	}
}
// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0018 (0x0020 - 0x0008)
public class FGameplayTagTableRow : FTableRowBase
{
	#region Offsets
	private ExternalOffset<FName>                              _offTag                                                        = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDevComment                                                 = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Tag                                                            => _offTag.GetValue();
	public FString                                             DevComment                                                     => _offDevComment.GetValue();
	#endregion

	public FGameplayTagTableRow(FName c_Tag, FString c_DevComment) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTag.SetValue(c_Tag);
		_offDevComment.SetValue(c_DevComment);
	}
}
// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
public class FGameplayTagQuery : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offTokenStreamVersion                                         = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FGameplayTag>>               _offTagDictionary                                              = new ExternalOffset<TArray<FGameplayTag>>(0x0008, false);     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<char>>                       _offQueryTokenStream                                           = new ExternalOffset<TArray<char>>(0x0018, false);             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offUserDescription                                            = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                            _offAutoDescription                                            = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 TokenStreamVersion                                             => _offTokenStreamVersion.GetValue();
	public TArray<FGameplayTag>                                TagDictionary                                                  => _offTagDictionary.GetValue();
	public TArray<char>                                        QueryTokenStream                                               => _offQueryTokenStream.GetValue();
	public FString                                             UserDescription                                                => _offUserDescription.GetValue();
	public FString                                             AutoDescription                                                => _offAutoDescription.GetValue();
	#endregion

	public FGameplayTagQuery(int c_TokenStreamVersion, TArray<FGameplayTag> c_TagDictionary, TArray<char> c_QueryTokenStream, FString c_UserDescription, FString c_AutoDescription) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTokenStreamVersion.SetValue(c_TokenStreamVersion);
		_offTagDictionary.SetValue(c_TagDictionary);
		_offQueryTokenStream.SetValue(c_QueryTokenStream);
		_offUserDescription.SetValue(c_UserDescription);
		_offAutoDescription.SetValue(c_AutoDescription);
	}
}
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0008 (0x0028 - 0x0020)
public class FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbAllowNonRestrictedChildren                                = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bAllowNonRestrictedChildren                                    => _offbAllowNonRestrictedChildren.GetValue();
	#endregion

	public FRestrictedGameplayTagTableRow(byte/*(bool)*/ c_bAllowNonRestrictedChildren) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbAllowNonRestrictedChildren.SetValue(c_bAllowNonRestrictedChildren);
	}
}
// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0020
public class FRestrictedConfigInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offRestrictedConfigName                                       = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offOwners                                                     = new ExternalOffset<TArray<FString>>(0x0010, false);          // 0x0010(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             RestrictedConfigName                                           => _offRestrictedConfigName.GetValue();
	public TArray<FString>                                     Owners                                                         => _offOwners.GetValue();
	#endregion

	public FRestrictedConfigInfo(FString c_RestrictedConfigName, TArray<FString> c_Owners) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRestrictedConfigName.SetValue(c_RestrictedConfigName);
		_offOwners.SetValue(c_Owners);
	}
}
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020
public class FGameplayTagCategoryRemap : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offBaseCategory                                               = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                    _offRemapCategories                                            = new ExternalOffset<TArray<FString>>(0x0010, false);          // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             BaseCategory                                                   => _offBaseCategory.GetValue();
	public TArray<FString>                                     RemapCategories                                                => _offRemapCategories.GetValue();
	#endregion

	public FGameplayTagCategoryRemap(FString c_BaseCategory, TArray<FString> c_RemapCategories) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBaseCategory.SetValue(c_BaseCategory);
		_offRemapCategories.SetValue(c_RemapCategories);
	}
}
// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0010
public class FGameplayTagRedirect : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offOldTagName                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offNewTagName                                                 = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               OldTagName                                                     => _offOldTagName.GetValue();
	public FName                                               NewTagName                                                     => _offNewTagName.GetValue();
	#endregion

	public FGameplayTagRedirect(FName c_OldTagName, FName c_NewTagName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOldTagName.SetValue(c_OldTagName);
		_offNewTagName.SetValue(c_NewTagName);
	}
}

}