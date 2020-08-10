// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
public class UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
public class UGameplayTagAssetInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
public class UEditableGameplayTagQuery : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offUserDescription                                            = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UEditableGameplayTagQueryExpression> _offRootExpression                                             = new ExternalOffset<UEditableGameplayTagQueryExpression>(0x0048, true); // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagQuery>                 _offTagQueryExportText_Helper                                  = new ExternalOffset<FGameplayTagQuery>(0x0050, false);        // 0x0050(0x0048) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                            UserDescription                                                => _offUserDescription.GetValue();
	public UEditableGameplayTagQueryExpression                RootExpression                                                 => _offRootExpression.GetValue();
	public FGameplayTagQuery                                  TagQueryExportText_Helper                                      => _offTagQueryExportText_Helper.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
public class UEditableGameplayTagQueryExpression : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
public class UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>             _offTags                                                       = new ExternalOffset<FGameplayTagContainer>(0x0028, false);    // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagContainer                              Tags                                                           => _offTags.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
public class UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>             _offTags                                                       = new ExternalOffset<FGameplayTagContainer>(0x0028, false);    // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagContainer                              Tags                                                           => _offTags.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
public class UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>             _offTags                                                       = new ExternalOffset<FGameplayTagContainer>(0x0028, false);    // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagContainer                              Tags                                                           => _offTags.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
public class UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<TArray<UEditableGameplayTagQueryExpression>> _offExpressions                                                = new ExternalOffset<TArray<UEditableGameplayTagQueryExpression>>(0x0028, false); // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UEditableGameplayTagQueryExpression>        Expressions                                                    => _offExpressions.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
public class UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<TArray<UEditableGameplayTagQueryExpression>> _offExpressions                                                = new ExternalOffset<TArray<UEditableGameplayTagQueryExpression>>(0x0028, false); // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UEditableGameplayTagQueryExpression>        Expressions                                                    => _offExpressions.GetValue();
	#endregion


}

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
public class UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression
{
	#region Offsets
	private ExternalOffset<TArray<UEditableGameplayTagQueryExpression>> _offExpressions                                                = new ExternalOffset<TArray<UEditableGameplayTagQueryExpression>>(0x0028, false); // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UEditableGameplayTagQueryExpression>        Expressions                                                    => _offExpressions.GetValue();
	#endregion


}

// Class GameplayTags.GameplayTagsManager
// 0x0138 (0x0160 - 0x0028)
public class UGameplayTagsManager : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayTagSource>>        _offTagSources                                                 = new ExternalOffset<TArray<FGameplayTagSource>>(0x00C0, false); // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UDataTable>>                _offGameplayTagTables                                          = new ExternalOffset<TArray<UDataTable>>(0x0150, false);       // 0x0150(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FGameplayTagSource>                         TagSources                                                     => _offTagSources.GetValue();
	public TArray<UDataTable>                                 GameplayTagTables                                              => _offGameplayTagTables.GetValue();
	#endregion


}

// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
public class UGameplayTagsList : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offConfigFileName                                             = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayTagTableRow>>      _offGameplayTagList                                            = new ExternalOffset<TArray<FGameplayTagTableRow>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            ConfigFileName                                                 => _offConfigFileName.GetValue();
	public TArray<FGameplayTagTableRow>                       GameplayTagList                                                => _offGameplayTagList.GetValue();
	#endregion


}

// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
public class URestrictedGameplayTagsList : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offConfigFileName                                             = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FRestrictedGameplayTagTableRow>> _offRestrictedGameplayTagList                                  = new ExternalOffset<TArray<FRestrictedGameplayTagTableRow>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            ConfigFileName                                                 => _offConfigFileName.GetValue();
	public TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList                                      => _offRestrictedGameplayTagList.GetValue();
	#endregion


}

// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
public class UGameplayTagsSettings : UGameplayTagsList
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offImportTagsFromConfig                                       = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offWarnOnInvalidTags                                          = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offFastReplication                                            = new ExternalOffset<byte/*(bool)*/>(0x004A);                  // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offInvalidTagCharacters                                       = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayTagCategoryRemap>> _offCategoryRemapping                                          = new ExternalOffset<TArray<FGameplayTagCategoryRemap>>(0x0060, false); // 0x0060(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FSoftObjectPath>>           _offGameplayTagTableList                                       = new ExternalOffset<TArray<FSoftObjectPath>>(0x0070, false);  // 0x0070(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayTagRedirect>>      _offGameplayTagRedirects                                       = new ExternalOffset<TArray<FGameplayTagRedirect>>(0x0080, false); // 0x0080(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offCommonlyReplicatedTags                                     = new ExternalOffset<TArray<FName>>(0x0090, false);            // 0x0090(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumBitsForContainerSize                                    = new ExternalOffset<int>(0x00A0);                             // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNetIndexFirstBitSegment                                    = new ExternalOffset<int>(0x00A4);                             // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FRestrictedConfigInfo>>     _offRestrictedConfigFiles                                      = new ExternalOffset<TArray<FRestrictedConfigInfo>>(0x00A8, false); // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     ImportTagsFromConfig                                           => _offImportTagsFromConfig.GetValue();
	public byte/*(bool)*/                                     WarnOnInvalidTags                                              => _offWarnOnInvalidTags.GetValue();
	public byte/*(bool)*/                                     FastReplication                                                => _offFastReplication.GetValue();
	public FString                                            InvalidTagCharacters                                           => _offInvalidTagCharacters.GetValue();
	public TArray<FGameplayTagCategoryRemap>                  CategoryRemapping                                              => _offCategoryRemapping.GetValue();
	public TArray<FSoftObjectPath>                            GameplayTagTableList                                           => _offGameplayTagTableList.GetValue();
	public TArray<FGameplayTagRedirect>                       GameplayTagRedirects                                           => _offGameplayTagRedirects.GetValue();
	public TArray<FName>                                      CommonlyReplicatedTags                                         => _offCommonlyReplicatedTags.GetValue();
	public int                                                NumBitsForContainerSize                                        => _offNumBitsForContainerSize.GetValue();
	public int                                                NetIndexFirstBitSegment                                        => _offNetIndexFirstBitSegment.GetValue();
	public TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles                                          => _offRestrictedConfigFiles.GetValue();
	#endregion


}

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
public class UGameplayTagsDeveloperSettings : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offDeveloperConfigName                                        = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            DeveloperConfigName                                            => _offDeveloperConfigName.GetValue();
	#endregion


}


}