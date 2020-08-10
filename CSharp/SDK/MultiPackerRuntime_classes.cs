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

// Class MultiPackerRuntime.MaxRectsBinPack
// 0x0000 (0x0028 - 0x0028)
public class UMaxRectsBinPack : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MultiPackerRuntime.MultiPacker
// 0x0100 (0x0128 - 0x0028)
public class UMultiPacker : UObject
{
	#region Offsets
	private ExternalOffset<ETextureSizeOutput>                _offTextureTileSizeOutput                                      = new ExternalOffset<ETextureSizeOutput>(0x002A, false);       // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRectangleTiles                                             = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EFreeRectChoiceHeuristic>          _offRectangleMethod                                            = new ExternalOffset<EFreeRectChoiceHeuristic>(0x002C, false); // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextureSizeOutputPersonal>        _offOutputSizeX                                                = new ExternalOffset<ETextureSizeOutputPersonal>(0x002D, false); // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextureSizeOutputPersonal>        _offOutputSizeY                                                = new ExternalOffset<ETextureSizeOutputPersonal>(0x002E, false); // 0x002E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offTilePadding                                                = new ExternalOffset<FVector2D>(0x0030, false);                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChannelTextureSave>               _offChannelMethod                                              = new ExternalOffset<EChannelTextureSave>(0x0038, false);      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlpha                                                      = new ExternalOffset<byte/*(bool)*/>(0x0039);                  // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTileSize                                                   = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSaveMaterialCollection                                     = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSaveDatabase                                               = new ExternalOffset<byte/*(bool)*/>(0x0041);                  // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDirectoryPath>                    _offTargetDirectory                                            = new ExternalOffset<FDirectoryPath>(0x0048, false);           // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTargetName                                                 = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEditPrefix                                                 = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offDatabasePrefix                                             = new ExternalOffset<FString>(0x0070, false);                  // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTexturePrefix                                              = new ExternalOffset<FString>(0x0080, false);                  // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offMaterialcollectionPrefix                                   = new ExternalOffset<FString>(0x0090, false);                  // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEditTexture                                                = new ExternalOffset<byte/*(bool)*/>(0x00A0);                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextureFilter>>       _offT_TextureFilter                                            = new ExternalOffset<TEnumAsByte<ETextureFilter>>(0x00A1, false); // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offTex_SRGB                                                   = new ExternalOffset<byte/*(bool)*/>(0x00A2);                  // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextureAddress>>      _offTex_AddressX                                               = new ExternalOffset<TEnumAsByte<ETextureAddress>>(0x00A3, false); // 0x00A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETextureAddress>>      _offTex_AddressY                                               = new ExternalOffset<TEnumAsByte<ETextureAddress>>(0x00A4, false); // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETexturePowerOfTwoSetting>> _offTex_Power                                                  = new ExternalOffset<TEnumAsByte<ETexturePowerOfTwoSetting>>(0x00A5, false); // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTexture2D>>                _offTextureOutput                                              = new ExternalOffset<TArray<UTexture2D>>(0x00A8, false);       // 0x00A8(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerDataBase>              _offDatabase                                                   = new ExternalOffset<UMultiPackerDataBase>(0x00B8, true);      // 0x00B8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialParameterCollection>      _offMaterialCollection                                         = new ExternalOffset<UMaterialParameterCollection>(0x00C0, true); // 0x00C0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FTileDatabase>          _offTileMap                                                    = new ExternalOffset<TMap<FTileDatabase>>(0x00C8, false);      // 0x00C8(0x0050) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTilePointer>>              _offTilePointers                                               = new ExternalOffset<TArray<UTilePointer>>(0x0118, false);     // 0x0118(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ETextureSizeOutput                                 TextureTileSizeOutput                                          => _offTextureTileSizeOutput.GetValue();
	public byte/*(bool)*/                                     RectangleTiles                                                 => _offRectangleTiles.GetValue();
	public EFreeRectChoiceHeuristic                           RectangleMethod                                                => _offRectangleMethod.GetValue();
	public ETextureSizeOutputPersonal                         OutputSizeX                                                    => _offOutputSizeX.GetValue();
	public ETextureSizeOutputPersonal                         OutputSizeY                                                    => _offOutputSizeY.GetValue();
	public FVector2D                                          TilePadding                                                    => _offTilePadding.GetValue();
	public EChannelTextureSave                                ChannelMethod                                                  => _offChannelMethod.GetValue();
	public byte/*(bool)*/                                     Alpha                                                          => _offAlpha.GetValue();
	public int                                                TileSize                                                       => _offTileSize.GetValue();
	public byte/*(bool)*/                                     SaveMaterialCollection                                         => _offSaveMaterialCollection.GetValue();
	public byte/*(bool)*/                                     SaveDatabase                                                   => _offSaveDatabase.GetValue();
	public FDirectoryPath                                     TargetDirectory                                                => _offTargetDirectory.GetValue();
	public FString                                            TargetName                                                     => _offTargetName.GetValue();
	public byte/*(bool)*/                                     EditPrefix                                                     => _offEditPrefix.GetValue();
	public FString                                            DatabasePrefix                                                 => _offDatabasePrefix.GetValue();
	public FString                                            TexturePrefix                                                  => _offTexturePrefix.GetValue();
	public FString                                            MaterialcollectionPrefix                                       => _offMaterialcollectionPrefix.GetValue();
	public byte/*(bool)*/                                     EditTexture                                                    => _offEditTexture.GetValue();
	public TEnumAsByte<ETextureFilter>                        T_TextureFilter                                                => _offT_TextureFilter.GetValue();
	public byte/*(bool)*/                                     Tex_SRGB                                                       => _offTex_SRGB.GetValue();
	public TEnumAsByte<ETextureAddress>                       Tex_AddressX                                                   => _offTex_AddressX.GetValue();
	public TEnumAsByte<ETextureAddress>                       Tex_AddressY                                                   => _offTex_AddressY.GetValue();
	public TEnumAsByte<ETexturePowerOfTwoSetting>             Tex_Power                                                      => _offTex_Power.GetValue();
	public TArray<UTexture2D>                                 TextureOutput                                                  => _offTextureOutput.GetValue();
	public UMultiPackerDataBase                               Database                                                       => _offDatabase.GetValue();
	public UMaterialParameterCollection                       MaterialCollection                                             => _offMaterialCollection.GetValue();
	public TArray<UTilePointer>                               TilePointers                                                   => _offTilePointers.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerBaseEnums
// 0x0000 (0x0028 - 0x0028)
public class UMultiPackerBaseEnums : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MultiPackerRuntime.MultiPackerButton
// 0x0710 (0x0B28 - 0x0418)
public class UMultiPackerButton : UButton
{
	#region Offsets
	private ExternalOffset<EMultiPackerImageLayer>            _offTypeLayerNormal                                            = new ExternalOffset<EMultiPackerImageLayer>(0x0428, false);   // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSetAsImage                                                 = new ExternalOffset<byte/*(bool)*/>(0x0429);                  // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_layer_2                                                  = new ExternalOffset<byte/*(bool)*/>(0x042A);                  // 0x042A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_layer_3                                                  = new ExternalOffset<byte/*(bool)*/>(0x042B);                  // 0x042B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_layer_4                                                  = new ExternalOffset<byte/*(bool)*/>(0x042C);                  // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offN_LayerBase                                                = new ExternalOffset<FLayerDatabase>(0x0430, false);           // 0x0430(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offN_LayerAddition                                            = new ExternalOffset<FLayerDatabase>(0x0488, false);           // 0x0488(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offN_LayerDetail                                              = new ExternalOffset<FLayerDatabase>(0x04E0, false);           // 0x04E0(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EMultiPackerImageLayer>            _offTypeLayerHovered                                           = new ExternalOffset<EMultiPackerImageLayer>(0x0538, false);   // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_layer_2                                                  = new ExternalOffset<byte/*(bool)*/>(0x0539);                  // 0x0539(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_layer_3                                                  = new ExternalOffset<byte/*(bool)*/>(0x053A);                  // 0x053A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_layer_4                                                  = new ExternalOffset<byte/*(bool)*/>(0x053B);                  // 0x053B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offH_LayerBase                                                = new ExternalOffset<FLayerDatabase>(0x0540, false);           // 0x0540(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offH_LayerAddition                                            = new ExternalOffset<FLayerDatabase>(0x0598, false);           // 0x0598(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offH_LayerDetail                                              = new ExternalOffset<FLayerDatabase>(0x05F0, false);           // 0x05F0(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EMultiPackerImageLayer>            _offTypeLayerPressed                                           = new ExternalOffset<EMultiPackerImageLayer>(0x0648, false);   // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_layer_2                                                  = new ExternalOffset<byte/*(bool)*/>(0x0649);                  // 0x0649(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_layer_3                                                  = new ExternalOffset<byte/*(bool)*/>(0x064A);                  // 0x064A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_layer_4                                                  = new ExternalOffset<byte/*(bool)*/>(0x064B);                  // 0x064B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offP_LayerBase                                                = new ExternalOffset<FLayerDatabase>(0x0650, false);           // 0x0650(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offP_LayerAddition                                            = new ExternalOffset<FLayerDatabase>(0x06A8, false);           // 0x06A8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offP_LayerDetail                                              = new ExternalOffset<FLayerDatabase>(0x0700, false);           // 0x0700(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSetDisabledStyle                                           = new ExternalOffset<byte/*(bool)*/>(0x0758);                  // 0x0758(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EMultiPackerImageLayer>            _offTypeLayerDisabled                                          = new ExternalOffset<EMultiPackerImageLayer>(0x0759, false);   // 0x0759(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_layer_2                                                  = new ExternalOffset<byte/*(bool)*/>(0x075A);                  // 0x075A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_layer_3                                                  = new ExternalOffset<byte/*(bool)*/>(0x075B);                  // 0x075B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_layer_4                                                  = new ExternalOffset<byte/*(bool)*/>(0x075C);                  // 0x075C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offD_LayerBase                                                = new ExternalOffset<FLayerDatabase>(0x0760, false);           // 0x0760(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offD_LayerAddition                                            = new ExternalOffset<FLayerDatabase>(0x07B8, false);           // 0x07B8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offD_LayerDetail                                              = new ExternalOffset<FLayerDatabase>(0x0810, false);           // 0x0810(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalBaseColorOutline                                     = new ExternalOffset<FLinearColor>(0x0888, false);             // 0x0888(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalBaseColorInterior                                    = new ExternalOffset<FLinearColor>(0x0898, false);             // 0x0898(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalBaseOutlineThresold                                  = new ExternalOffset<float>(0x08A8);                           // 0x08A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalBaseSDFThresold                                      = new ExternalOffset<float>(0x08AC);                           // 0x08AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_BaseStyleChanged                                         = new ExternalOffset<byte/*(bool)*/>(0x08B0);                  // 0x08B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerNormalBaseStyle                                       = new ExternalOffset<UMultiPackerLayerDatabase>(0x08B8, true); // 0x08B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalAdditionColorOutline                                 = new ExternalOffset<FLinearColor>(0x08C0, false);             // 0x08C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalAdditionColorInterior                                = new ExternalOffset<FLinearColor>(0x08D0, false);             // 0x08D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalAdditionOutlineThresold                              = new ExternalOffset<float>(0x08E0);                           // 0x08E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalAdditionSDFThresold                                  = new ExternalOffset<float>(0x08E4);                           // 0x08E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_AdditionStyleChanged                                     = new ExternalOffset<byte/*(bool)*/>(0x08E8);                  // 0x08E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerNormalAdditionStyle                                   = new ExternalOffset<UMultiPackerLayerDatabase>(0x08F0, true); // 0x08F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalDetailColorOutline                                   = new ExternalOffset<FLinearColor>(0x08F8, false);             // 0x08F8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offNormalDetailColorInterior                                  = new ExternalOffset<FLinearColor>(0x0908, false);             // 0x0908(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalDetailOutlineThresold                                = new ExternalOffset<float>(0x0918);                           // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalDetailSDFThresold                                    = new ExternalOffset<float>(0x091C);                           // 0x091C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offN_DetailStyleChanged                                       = new ExternalOffset<byte/*(bool)*/>(0x0920);                  // 0x0920(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerNormalDetailStyle                                     = new ExternalOffset<UMultiPackerLayerDatabase>(0x0928, true); // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredBaseColorOutline                                    = new ExternalOffset<FLinearColor>(0x0930, false);             // 0x0930(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredBaseColorInterior                                   = new ExternalOffset<FLinearColor>(0x0940, false);             // 0x0940(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredBaseOutlineThresold                                 = new ExternalOffset<float>(0x0950);                           // 0x0950(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredBaseSDFThresold                                     = new ExternalOffset<float>(0x0954);                           // 0x0954(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_BaseStyleChanged                                         = new ExternalOffset<byte/*(bool)*/>(0x0958);                  // 0x0958(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerHoveredBaseStyle                                      = new ExternalOffset<UMultiPackerLayerDatabase>(0x0960, true); // 0x0960(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredAdditionColorOutline                                = new ExternalOffset<FLinearColor>(0x0968, false);             // 0x0968(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredAdditionColorInterior                               = new ExternalOffset<FLinearColor>(0x0978, false);             // 0x0978(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredAdditionOutlineThresold                             = new ExternalOffset<float>(0x0988);                           // 0x0988(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredAdditionSDFThresold                                 = new ExternalOffset<float>(0x098C);                           // 0x098C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_AdditionStyleChanged                                     = new ExternalOffset<byte/*(bool)*/>(0x0990);                  // 0x0990(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerHoveredAdditionStyle                                  = new ExternalOffset<UMultiPackerLayerDatabase>(0x0998, true); // 0x0998(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredDetailColorOutline                                  = new ExternalOffset<FLinearColor>(0x09A0, false);             // 0x09A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offHoveredDetailColorInterior                                 = new ExternalOffset<FLinearColor>(0x09B0, false);             // 0x09B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredDetailOutlineThresold                               = new ExternalOffset<float>(0x09C0);                           // 0x09C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHoveredDetailSDFThresold                                   = new ExternalOffset<float>(0x09C4);                           // 0x09C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offH_DetailStyleChanged                                       = new ExternalOffset<byte/*(bool)*/>(0x09C8);                  // 0x09C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerHoveredDetailStyle                                    = new ExternalOffset<UMultiPackerLayerDatabase>(0x09D0, true); // 0x09D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedBaseColorOutline                                    = new ExternalOffset<FLinearColor>(0x09D8, false);             // 0x09D8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedBaseColorInterior                                   = new ExternalOffset<FLinearColor>(0x09E8, false);             // 0x09E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedBaseOutlineThresold                                 = new ExternalOffset<float>(0x09F8);                           // 0x09F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedBaseSDFThresold                                     = new ExternalOffset<float>(0x09FC);                           // 0x09FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_BaseStyleChanged                                         = new ExternalOffset<byte/*(bool)*/>(0x0A00);                  // 0x0A00(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerPressedBaseStyle                                      = new ExternalOffset<UMultiPackerLayerDatabase>(0x0A08, true); // 0x0A08(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedAdditionColorOutline                                = new ExternalOffset<FLinearColor>(0x0A10, false);             // 0x0A10(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedAdditionColorInterior                               = new ExternalOffset<FLinearColor>(0x0A20, false);             // 0x0A20(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedAdditionOutlineThresold                             = new ExternalOffset<float>(0x0A30);                           // 0x0A30(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedAdditionSDFThresold                                 = new ExternalOffset<float>(0x0A34);                           // 0x0A34(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_AdditionStyleChanged                                     = new ExternalOffset<byte/*(bool)*/>(0x0A38);                  // 0x0A38(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerPressedAdditionStyle                                  = new ExternalOffset<UMultiPackerLayerDatabase>(0x0A40, true); // 0x0A40(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedDetailColorOutline                                  = new ExternalOffset<FLinearColor>(0x0A48, false);             // 0x0A48(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offPressedDetailColorInterior                                 = new ExternalOffset<FLinearColor>(0x0A58, false);             // 0x0A58(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedDetailOutlineThresold                               = new ExternalOffset<float>(0x0A68);                           // 0x0A68(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPressedDetailSDFThresold                                   = new ExternalOffset<float>(0x0A6C);                           // 0x0A6C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offP_DetailStyleChanged                                       = new ExternalOffset<byte/*(bool)*/>(0x0A70);                  // 0x0A70(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerPressedDetailStyle                                    = new ExternalOffset<UMultiPackerLayerDatabase>(0x0A78, true); // 0x0A78(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledBaseColorOutline                                   = new ExternalOffset<FLinearColor>(0x0A80, false);             // 0x0A80(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledBaseColorInterior                                  = new ExternalOffset<FLinearColor>(0x0A90, false);             // 0x0A90(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledBaseOutlineThresold                                = new ExternalOffset<float>(0x0AA0);                           // 0x0AA0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledBaseSDFThresold                                    = new ExternalOffset<float>(0x0AA4);                           // 0x0AA4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_BaseStyleChanged                                         = new ExternalOffset<byte/*(bool)*/>(0x0AA8);                  // 0x0AA8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerDisabledBaseStyle                                     = new ExternalOffset<UMultiPackerLayerDatabase>(0x0AB0, true); // 0x0AB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledAdditionColorOutline                               = new ExternalOffset<FLinearColor>(0x0AB8, false);             // 0x0AB8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledAdditionColorInterior                              = new ExternalOffset<FLinearColor>(0x0AC8, false);             // 0x0AC8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledAdditionOutlineThresold                            = new ExternalOffset<float>(0x0AD8);                           // 0x0AD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledAdditionSDFThresold                                = new ExternalOffset<float>(0x0ADC);                           // 0x0ADC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_AdditionStyleChanged                                     = new ExternalOffset<byte/*(bool)*/>(0x0AE0);                  // 0x0AE0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerDisabledAdditionStyle                                 = new ExternalOffset<UMultiPackerLayerDatabase>(0x0AE8, true); // 0x0AE8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledDetailColorOutline                                 = new ExternalOffset<FLinearColor>(0x0AF0, false);             // 0x0AF0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDisabledDetailColorInterior                                = new ExternalOffset<FLinearColor>(0x0B00, false);             // 0x0B00(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledDetailOutlineThresold                              = new ExternalOffset<float>(0x0B10);                           // 0x0B10(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDisabledDetailSDFThresold                                  = new ExternalOffset<float>(0x0B14);                           // 0x0B14(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offD_DetailStyleChanged                                       = new ExternalOffset<byte/*(bool)*/>(0x0B18);                  // 0x0B18(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerDisabledDetailStyle                                   = new ExternalOffset<UMultiPackerLayerDatabase>(0x0B20, true); // 0x0B20(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EMultiPackerImageLayer                             TypeLayerNormal                                                => _offTypeLayerNormal.GetValue();
	public byte/*(bool)*/                                     SetAsImage                                                     => _offSetAsImage.GetValue();
	public byte/*(bool)*/                                     N_layer_2                                                      => _offN_layer_2.GetValue();
	public byte/*(bool)*/                                     N_layer_3                                                      => _offN_layer_3.GetValue();
	public byte/*(bool)*/                                     N_layer_4                                                      => _offN_layer_4.GetValue();
	public FLayerDatabase                                     N_LayerBase                                                    => _offN_LayerBase.GetValue();
	public FLayerDatabase                                     N_LayerAddition                                                => _offN_LayerAddition.GetValue();
	public FLayerDatabase                                     N_LayerDetail                                                  => _offN_LayerDetail.GetValue();
	public EMultiPackerImageLayer                             TypeLayerHovered                                               => _offTypeLayerHovered.GetValue();
	public byte/*(bool)*/                                     H_layer_2                                                      => _offH_layer_2.GetValue();
	public byte/*(bool)*/                                     H_layer_3                                                      => _offH_layer_3.GetValue();
	public byte/*(bool)*/                                     H_layer_4                                                      => _offH_layer_4.GetValue();
	public FLayerDatabase                                     H_LayerBase                                                    => _offH_LayerBase.GetValue();
	public FLayerDatabase                                     H_LayerAddition                                                => _offH_LayerAddition.GetValue();
	public FLayerDatabase                                     H_LayerDetail                                                  => _offH_LayerDetail.GetValue();
	public EMultiPackerImageLayer                             TypeLayerPressed                                               => _offTypeLayerPressed.GetValue();
	public byte/*(bool)*/                                     P_layer_2                                                      => _offP_layer_2.GetValue();
	public byte/*(bool)*/                                     P_layer_3                                                      => _offP_layer_3.GetValue();
	public byte/*(bool)*/                                     P_layer_4                                                      => _offP_layer_4.GetValue();
	public FLayerDatabase                                     P_LayerBase                                                    => _offP_LayerBase.GetValue();
	public FLayerDatabase                                     P_LayerAddition                                                => _offP_LayerAddition.GetValue();
	public FLayerDatabase                                     P_LayerDetail                                                  => _offP_LayerDetail.GetValue();
	public byte/*(bool)*/                                     SetDisabledStyle                                               => _offSetDisabledStyle.GetValue();
	public EMultiPackerImageLayer                             TypeLayerDisabled                                              => _offTypeLayerDisabled.GetValue();
	public byte/*(bool)*/                                     D_layer_2                                                      => _offD_layer_2.GetValue();
	public byte/*(bool)*/                                     D_layer_3                                                      => _offD_layer_3.GetValue();
	public byte/*(bool)*/                                     D_layer_4                                                      => _offD_layer_4.GetValue();
	public FLayerDatabase                                     D_LayerBase                                                    => _offD_LayerBase.GetValue();
	public FLayerDatabase                                     D_LayerAddition                                                => _offD_LayerAddition.GetValue();
	public FLayerDatabase                                     D_LayerDetail                                                  => _offD_LayerDetail.GetValue();
	public FLinearColor                                       NormalBaseColorOutline                                         => _offNormalBaseColorOutline.GetValue();
	public FLinearColor                                       NormalBaseColorInterior                                        => _offNormalBaseColorInterior.GetValue();
	public float                                              NormalBaseOutlineThresold                                      => _offNormalBaseOutlineThresold.GetValue();
	public float                                              NormalBaseSDFThresold                                          => _offNormalBaseSDFThresold.GetValue();
	public byte/*(bool)*/                                     N_BaseStyleChanged                                             => _offN_BaseStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerNormalBaseStyle                                           => _offLayerNormalBaseStyle.GetValue();
	public FLinearColor                                       NormalAdditionColorOutline                                     => _offNormalAdditionColorOutline.GetValue();
	public FLinearColor                                       NormalAdditionColorInterior                                    => _offNormalAdditionColorInterior.GetValue();
	public float                                              NormalAdditionOutlineThresold                                  => _offNormalAdditionOutlineThresold.GetValue();
	public float                                              NormalAdditionSDFThresold                                      => _offNormalAdditionSDFThresold.GetValue();
	public byte/*(bool)*/                                     N_AdditionStyleChanged                                         => _offN_AdditionStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerNormalAdditionStyle                                       => _offLayerNormalAdditionStyle.GetValue();
	public FLinearColor                                       NormalDetailColorOutline                                       => _offNormalDetailColorOutline.GetValue();
	public FLinearColor                                       NormalDetailColorInterior                                      => _offNormalDetailColorInterior.GetValue();
	public float                                              NormalDetailOutlineThresold                                    => _offNormalDetailOutlineThresold.GetValue();
	public float                                              NormalDetailSDFThresold                                        => _offNormalDetailSDFThresold.GetValue();
	public byte/*(bool)*/                                     N_DetailStyleChanged                                           => _offN_DetailStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerNormalDetailStyle                                         => _offLayerNormalDetailStyle.GetValue();
	public FLinearColor                                       HoveredBaseColorOutline                                        => _offHoveredBaseColorOutline.GetValue();
	public FLinearColor                                       HoveredBaseColorInterior                                       => _offHoveredBaseColorInterior.GetValue();
	public float                                              HoveredBaseOutlineThresold                                     => _offHoveredBaseOutlineThresold.GetValue();
	public float                                              HoveredBaseSDFThresold                                         => _offHoveredBaseSDFThresold.GetValue();
	public byte/*(bool)*/                                     H_BaseStyleChanged                                             => _offH_BaseStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerHoveredBaseStyle                                          => _offLayerHoveredBaseStyle.GetValue();
	public FLinearColor                                       HoveredAdditionColorOutline                                    => _offHoveredAdditionColorOutline.GetValue();
	public FLinearColor                                       HoveredAdditionColorInterior                                   => _offHoveredAdditionColorInterior.GetValue();
	public float                                              HoveredAdditionOutlineThresold                                 => _offHoveredAdditionOutlineThresold.GetValue();
	public float                                              HoveredAdditionSDFThresold                                     => _offHoveredAdditionSDFThresold.GetValue();
	public byte/*(bool)*/                                     H_AdditionStyleChanged                                         => _offH_AdditionStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerHoveredAdditionStyle                                      => _offLayerHoveredAdditionStyle.GetValue();
	public FLinearColor                                       HoveredDetailColorOutline                                      => _offHoveredDetailColorOutline.GetValue();
	public FLinearColor                                       HoveredDetailColorInterior                                     => _offHoveredDetailColorInterior.GetValue();
	public float                                              HoveredDetailOutlineThresold                                   => _offHoveredDetailOutlineThresold.GetValue();
	public float                                              HoveredDetailSDFThresold                                       => _offHoveredDetailSDFThresold.GetValue();
	public byte/*(bool)*/                                     H_DetailStyleChanged                                           => _offH_DetailStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerHoveredDetailStyle                                        => _offLayerHoveredDetailStyle.GetValue();
	public FLinearColor                                       PressedBaseColorOutline                                        => _offPressedBaseColorOutline.GetValue();
	public FLinearColor                                       PressedBaseColorInterior                                       => _offPressedBaseColorInterior.GetValue();
	public float                                              PressedBaseOutlineThresold                                     => _offPressedBaseOutlineThresold.GetValue();
	public float                                              PressedBaseSDFThresold                                         => _offPressedBaseSDFThresold.GetValue();
	public byte/*(bool)*/                                     P_BaseStyleChanged                                             => _offP_BaseStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerPressedBaseStyle                                          => _offLayerPressedBaseStyle.GetValue();
	public FLinearColor                                       PressedAdditionColorOutline                                    => _offPressedAdditionColorOutline.GetValue();
	public FLinearColor                                       PressedAdditionColorInterior                                   => _offPressedAdditionColorInterior.GetValue();
	public float                                              PressedAdditionOutlineThresold                                 => _offPressedAdditionOutlineThresold.GetValue();
	public float                                              PressedAdditionSDFThresold                                     => _offPressedAdditionSDFThresold.GetValue();
	public byte/*(bool)*/                                     P_AdditionStyleChanged                                         => _offP_AdditionStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerPressedAdditionStyle                                      => _offLayerPressedAdditionStyle.GetValue();
	public FLinearColor                                       PressedDetailColorOutline                                      => _offPressedDetailColorOutline.GetValue();
	public FLinearColor                                       PressedDetailColorInterior                                     => _offPressedDetailColorInterior.GetValue();
	public float                                              PressedDetailOutlineThresold                                   => _offPressedDetailOutlineThresold.GetValue();
	public float                                              PressedDetailSDFThresold                                       => _offPressedDetailSDFThresold.GetValue();
	public byte/*(bool)*/                                     P_DetailStyleChanged                                           => _offP_DetailStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerPressedDetailStyle                                        => _offLayerPressedDetailStyle.GetValue();
	public FLinearColor                                       DisabledBaseColorOutline                                       => _offDisabledBaseColorOutline.GetValue();
	public FLinearColor                                       DisabledBaseColorInterior                                      => _offDisabledBaseColorInterior.GetValue();
	public float                                              DisabledBaseOutlineThresold                                    => _offDisabledBaseOutlineThresold.GetValue();
	public float                                              DisabledBaseSDFThresold                                        => _offDisabledBaseSDFThresold.GetValue();
	public byte/*(bool)*/                                     D_BaseStyleChanged                                             => _offD_BaseStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerDisabledBaseStyle                                         => _offLayerDisabledBaseStyle.GetValue();
	public FLinearColor                                       DisabledAdditionColorOutline                                   => _offDisabledAdditionColorOutline.GetValue();
	public FLinearColor                                       DisabledAdditionColorInterior                                  => _offDisabledAdditionColorInterior.GetValue();
	public float                                              DisabledAdditionOutlineThresold                                => _offDisabledAdditionOutlineThresold.GetValue();
	public float                                              DisabledAdditionSDFThresold                                    => _offDisabledAdditionSDFThresold.GetValue();
	public byte/*(bool)*/                                     D_AdditionStyleChanged                                         => _offD_AdditionStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerDisabledAdditionStyle                                     => _offLayerDisabledAdditionStyle.GetValue();
	public FLinearColor                                       DisabledDetailColorOutline                                     => _offDisabledDetailColorOutline.GetValue();
	public FLinearColor                                       DisabledDetailColorInterior                                    => _offDisabledDetailColorInterior.GetValue();
	public float                                              DisabledDetailOutlineThresold                                  => _offDisabledDetailOutlineThresold.GetValue();
	public float                                              DisabledDetailSDFThresold                                      => _offDisabledDetailSDFThresold.GetValue();
	public byte/*(bool)*/                                     D_DetailStyleChanged                                           => _offD_DetailStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerDisabledDetailStyle                                       => _offLayerDisabledDetailStyle.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerDataBase
// 0x00A4 (0x00CC - 0x0028)
public class UMultiPackerDataBase : UObject
{
	#region Offsets
	private ExternalOffset<UScriptStruct>                     _offRowStruct                                                  = new ExternalOffset<UScriptStruct>(0x0028, true);             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offVTile                                                      = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offHTile                                                      = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDo_SDF                                                     = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offBinPack                                                    = new ExternalOffset<byte/*(bool)*/>(0x0039);                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlpha                                                      = new ExternalOffset<byte/*(bool)*/>(0x003A);                  // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChannelTextureSave>               _offChannelMethod                                              = new ExternalOffset<EChannelTextureSave>(0x003B, false);      // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTexture2D>>                _offTextureOutput                                              = new ExternalOffset<TArray<UTexture2D>>(0x0040, false);       // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialParameterCollection>      _offMaterialCollection                                         = new ExternalOffset<UMaterialParameterCollection>(0x0050, true); // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FTileDatabase>          _offTileMap                                                    = new ExternalOffset<TMap<FTileDatabase>>(0x0058, false);      // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTileSize                                                   = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offlayer_bools                                                = new ExternalOffset<FLinearColor>(0x00AC, false);             // 0x00AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offTiles_Size                                                 = new ExternalOffset<FLinearColor>(0x00BC, false);             // 0x00BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UScriptStruct                                      RowStruct                                                      => _offRowStruct.GetValue();
	public int                                                VTile                                                          => _offVTile.GetValue();
	public int                                                HTile                                                          => _offHTile.GetValue();
	public byte/*(bool)*/                                     Do_SDF                                                         => _offDo_SDF.GetValue();
	public byte/*(bool)*/                                     BinPack                                                        => _offBinPack.GetValue();
	public byte/*(bool)*/                                     Alpha                                                          => _offAlpha.GetValue();
	public EChannelTextureSave                                ChannelMethod                                                  => _offChannelMethod.GetValue();
	public TArray<UTexture2D>                                 TextureOutput                                                  => _offTextureOutput.GetValue();
	public UMaterialParameterCollection                       MaterialCollection                                             => _offMaterialCollection.GetValue();
	public int                                                TileSize                                                       => _offTileSize.GetValue();
	public FLinearColor                                       layer_bools                                                    => _offlayer_bools.GetValue();
	public FLinearColor                                       Tiles_Size                                                     => _offTiles_Size.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerImage
// 0x01F4 (0x03C8 - 0x01D4)
public class UMultiPackerImage : UImage
{
	#region Offsets
	private ExternalOffset<EMultiPackerImageLayer>            _offTypeLayer                                                  = new ExternalOffset<EMultiPackerImageLayer>(0x0210, false);   // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offLayer_2                                                    = new ExternalOffset<byte/*(bool)*/>(0x0211);                  // 0x0211(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offLayer_3                                                    = new ExternalOffset<byte/*(bool)*/>(0x0212);                  // 0x0212(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offLayer_4                                                    = new ExternalOffset<byte/*(bool)*/>(0x0213);                  // 0x0213(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offLayerBase                                                  = new ExternalOffset<FLayerDatabase>(0x0218, false);           // 0x0218(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offLayerAddition                                              = new ExternalOffset<FLayerDatabase>(0x0270, false);           // 0x0270(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLayerDatabase>                    _offLayerDetail                                                = new ExternalOffset<FLayerDatabase>(0x02C8, false);           // 0x02C8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBaseColorOutline                                           = new ExternalOffset<FLinearColor>(0x0320, false);             // 0x0320(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offBaseColorInterior                                          = new ExternalOffset<FLinearColor>(0x0330, false);             // 0x0330(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offBaseOutlineThresold                                        = new ExternalOffset<float>(0x0340);                           // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offBaseSDFThresold                                            = new ExternalOffset<float>(0x0344);                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offBaseStyleChanged                                           = new ExternalOffset<byte/*(bool)*/>(0x0348);                  // 0x0348(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerBaseStyle                                             = new ExternalOffset<UMultiPackerLayerDatabase>(0x0350, true); // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offAdditionColorOutline                                       = new ExternalOffset<FLinearColor>(0x0358, false);             // 0x0358(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offAdditionColorInterior                                      = new ExternalOffset<FLinearColor>(0x0368, false);             // 0x0368(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAdditionOutlineThresold                                    = new ExternalOffset<float>(0x0378);                           // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAdditionSDFThresold                                        = new ExternalOffset<float>(0x037C);                           // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAdditionStyleChanged                                       = new ExternalOffset<byte/*(bool)*/>(0x0380);                  // 0x0380(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerAdditionStyle                                         = new ExternalOffset<UMultiPackerLayerDatabase>(0x0388, true); // 0x0388(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDetailColorOutline                                         = new ExternalOffset<FLinearColor>(0x0390, false);             // 0x0390(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offDetailColorInterior                                        = new ExternalOffset<FLinearColor>(0x03A0, false);             // 0x03A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDetailOutlineThresold                                      = new ExternalOffset<float>(0x03B0);                           // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDetailSDFThresold                                          = new ExternalOffset<float>(0x03B4);                           // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDetailStyleChanged                                         = new ExternalOffset<byte/*(bool)*/>(0x03B8);                  // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerLayerDatabase>         _offLayerDetailStyle                                           = new ExternalOffset<UMultiPackerLayerDatabase>(0x03C0, true); // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EMultiPackerImageLayer                             TypeLayer                                                      => _offTypeLayer.GetValue();
	public byte/*(bool)*/                                     Layer_2                                                        => _offLayer_2.GetValue();
	public byte/*(bool)*/                                     Layer_3                                                        => _offLayer_3.GetValue();
	public byte/*(bool)*/                                     Layer_4                                                        => _offLayer_4.GetValue();
	public FLayerDatabase                                     LayerBase                                                      => _offLayerBase.GetValue();
	public FLayerDatabase                                     LayerAddition                                                  => _offLayerAddition.GetValue();
	public FLayerDatabase                                     LayerDetail                                                    => _offLayerDetail.GetValue();
	public FLinearColor                                       BaseColorOutline                                               => _offBaseColorOutline.GetValue();
	public FLinearColor                                       BaseColorInterior                                              => _offBaseColorInterior.GetValue();
	public float                                              BaseOutlineThresold                                            => _offBaseOutlineThresold.GetValue();
	public float                                              BaseSDFThresold                                                => _offBaseSDFThresold.GetValue();
	public byte/*(bool)*/                                     BaseStyleChanged                                               => _offBaseStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerBaseStyle                                                 => _offLayerBaseStyle.GetValue();
	public FLinearColor                                       AdditionColorOutline                                           => _offAdditionColorOutline.GetValue();
	public FLinearColor                                       AdditionColorInterior                                          => _offAdditionColorInterior.GetValue();
	public float                                              AdditionOutlineThresold                                        => _offAdditionOutlineThresold.GetValue();
	public float                                              AdditionSDFThresold                                            => _offAdditionSDFThresold.GetValue();
	public byte/*(bool)*/                                     AdditionStyleChanged                                           => _offAdditionStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerAdditionStyle                                             => _offLayerAdditionStyle.GetValue();
	public FLinearColor                                       DetailColorOutline                                             => _offDetailColorOutline.GetValue();
	public FLinearColor                                       DetailColorInterior                                            => _offDetailColorInterior.GetValue();
	public float                                              DetailOutlineThresold                                          => _offDetailOutlineThresold.GetValue();
	public float                                              DetailSDFThresold                                              => _offDetailSDFThresold.GetValue();
	public byte/*(bool)*/                                     DetailStyleChanged                                             => _offDetailStyleChanged.GetValue();
	public UMultiPackerLayerDatabase                          LayerDetailStyle                                               => _offLayerDetailStyle.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerImageCore
// 0x0000 (0x0028 - 0x0028)
public class UMultiPackerImageCore : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MultiPackerRuntime.MultiPackerLayerDatabase
// 0x0090 (0x00B8 - 0x0028)
public class UMultiPackerLayerDatabase : UObject
{
	#region Offsets
	private ExternalOffset<FLayerDatabase>                    _offLayerBase                                                  = new ExternalOffset<FLayerDatabase>(0x0028, false);           // 0x0028(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColorOutline                                               = new ExternalOffset<FLinearColor>(0x0080, false);             // 0x0080(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColorInterior                                              = new ExternalOffset<FLinearColor>(0x0090, false);             // 0x0090(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offOutlineThresold                                            = new ExternalOffset<float>(0x00A0);                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSDFThresold                                                = new ExternalOffset<float>(0x00A4);                           // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTileCopy>                         _offButton                                                     = new ExternalOffset<UTileCopy>(0x00A8, true);                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInstanceDynamic>          _offMaterial                                                   = new ExternalOffset<UMaterialInstanceDynamic>(0x00B0, true);  // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FLayerDatabase                                     LayerBase                                                      => _offLayerBase.GetValue();
	public FLinearColor                                       ColorOutline                                                   => _offColorOutline.GetValue();
	public FLinearColor                                       ColorInterior                                                  => _offColorInterior.GetValue();
	public float                                              OutlineThresold                                                => _offOutlineThresold.GetValue();
	public float                                              SDFThresold                                                    => _offSDFThresold.GetValue();
	public UTileCopy                                          Button                                                         => _offButton.GetValue();
	public UMaterialInstanceDynamic                           Material                                                       => _offMaterial.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerMatNode
// 0x0028 (0x0050 - 0x0028)
public class UMultiPackerMatNode : UObject
{
	#region Offsets
	private ExternalOffset<UMaterialInterface>                _offMaterialBaseInput                                          = new ExternalOffset<UMaterialInterface>(0x0028, true);        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSDF                                                        = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSDF_Radius                                                 = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAtlas                                                      = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTilesVertical                                              = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTilesHorizontal                                            = new ExternalOffset<int>(0x0040);                             // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRectangleSize                                              = new ExternalOffset<byte/*(bool)*/>(0x0044);                  // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextureSizeOutputPersonal>        _offSetSizeByParameter                                         = new ExternalOffset<ETextureSizeOutputPersonal>(0x0045, false); // 0x0045(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSizeVertical                                               = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSizeHorizontal                                             = new ExternalOffset<int>(0x004C);                             // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMaterialInterface                                 MaterialBaseInput                                              => _offMaterialBaseInput.GetValue();
	public byte/*(bool)*/                                     SDF                                                            => _offSDF.GetValue();
	public int                                                SDF_Radius                                                     => _offSDF_Radius.GetValue();
	public byte/*(bool)*/                                     Atlas                                                          => _offAtlas.GetValue();
	public int                                                TilesVertical                                                  => _offTilesVertical.GetValue();
	public int                                                TilesHorizontal                                                => _offTilesHorizontal.GetValue();
	public byte/*(bool)*/                                     RectangleSize                                                  => _offRectangleSize.GetValue();
	public ETextureSizeOutputPersonal                         SetSizeByParameter                                             => _offSetSizeByParameter.GetValue();
	public int                                                SizeVertical                                                   => _offSizeVertical.GetValue();
	public int                                                SizeHorizontal                                                 => _offSizeHorizontal.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerRuntimeBinPack
// 0x0080 (0x00A8 - 0x0028)
public class UMultiPackerRuntimeBinPack : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UMaxRectsBinPack>>          _offBinPackPages                                               = new ExternalOffset<TArray<UMaxRectsBinPack>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTextureRenderTarget2D>>    _offRenderTargetPages                                          = new ExternalOffset<TArray<UTextureRenderTarget2D>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                           _offWorldContext                                               = new ExternalOffset<UObject>(0x0048, true);                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSize                                                       = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlpha                                                      = new ExternalOffset<byte/*(bool)*/>(0x0054);                  // 0x0054(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FMaterialDataBinPack>   _offMaterialMap                                                = new ExternalOffset<TMap<FMaterialDataBinPack>>(0x0058, false); // 0x0058(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UMaxRectsBinPack>                           BinPackPages                                                   => _offBinPackPages.GetValue();
	public TArray<UTextureRenderTarget2D>                     RenderTargetPages                                              => _offRenderTargetPages.GetValue();
	public UObject                                            WorldContext                                                   => _offWorldContext.GetValue();
	public int                                                Size                                                           => _offSize.GetValue();
	public byte/*(bool)*/                                     Alpha                                                          => _offAlpha.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerRuntimeGraph
// 0x0078 (0x00A0 - 0x0028)
public class UMultiPackerRuntimeGraph : UObject
{
	#region Offsets
	private ExternalOffset<ETextureSizeOutputPersonal>        _offRenderTargetSizeOutput                                     = new ExternalOffset<ETextureSizeOutputPersonal>(0x0028, false); // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlpha                                                      = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMultiPackerRuntimeBinPack>        _offRuntimeData                                                = new ExternalOffset<UMultiPackerRuntimeBinPack>(0x0030, true); // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSize                                                       = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPages                                                      = new ExternalOffset<int>(0x003C);                             // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FMaterialDataBinPack>   _offMaterialMap                                                = new ExternalOffset<TMap<FMaterialDataBinPack>>(0x0040, false); // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTextureRenderTarget2D>>    _offRenderTargetPages                                          = new ExternalOffset<TArray<UTextureRenderTarget2D>>(0x0090, false); // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ETextureSizeOutputPersonal                         RenderTargetSizeOutput                                         => _offRenderTargetSizeOutput.GetValue();
	public byte/*(bool)*/                                     Alpha                                                          => _offAlpha.GetValue();
	public UMultiPackerRuntimeBinPack                         RuntimeData                                                    => _offRuntimeData.GetValue();
	public int                                                Size                                                           => _offSize.GetValue();
	public int                                                Pages                                                          => _offPages.GetValue();
	public TArray<UTextureRenderTarget2D>                     RenderTargetPages                                              => _offRenderTargetPages.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerRuntimeMatNode
// 0x0011 (0x0039 - 0x0028)
public class UMultiPackerRuntimeMatNode : UObject
{
	#region Offsets
	private ExternalOffset<UMaterialInterface>                _offMaterialBaseInput                                          = new ExternalOffset<UMaterialInterface>(0x0028, true);        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offHeight                                                     = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offWidth                                                      = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextureSizeOutputPersonal>        _offMaterialSize                                               = new ExternalOffset<ETextureSizeOutputPersonal>(0x0038, false); // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMaterialInterface                                 MaterialBaseInput                                              => _offMaterialBaseInput.GetValue();
	public int                                                Height                                                         => _offHeight.GetValue();
	public int                                                Width                                                          => _offWidth.GetValue();
	public ETextureSizeOutputPersonal                         MaterialSize                                                   => _offMaterialSize.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerSettings
// 0x0068 (0x0090 - 0x0028)
public class UMultiPackerSettings : UDeveloperSettings
{
	#region Offsets
	private ExternalOffset<EChannelTextureSave>               _offChannelMethod                                              = new ExternalOffset<EChannelTextureSave>(0x0038, false);      // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offSaveMaterialCollection                                     = new ExternalOffset<byte/*(bool)*/>(0x0039);                  // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offSaveDatabase                                               = new ExternalOffset<byte/*(bool)*/>(0x003A);                  // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FDirectoryPath>                    _offTargetDirectory                                            = new ExternalOffset<FDirectoryPath>(0x0040, false);           // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offTextureChannelName                                         = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offDatabasePrefix                                             = new ExternalOffset<FString>(0x0060, false);                  // 0x0060(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offTexturePrefix                                              = new ExternalOffset<FString>(0x0070, false);                  // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offMaterialcollectionPrefix                                   = new ExternalOffset<FString>(0x0080, false);                  // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public EChannelTextureSave                                ChannelMethod                                                  => _offChannelMethod.GetValue();
	public byte/*(bool)*/                                     SaveMaterialCollection                                         => _offSaveMaterialCollection.GetValue();
	public byte/*(bool)*/                                     SaveDatabase                                                   => _offSaveDatabase.GetValue();
	public FDirectoryPath                                     TargetDirectory                                                => _offTargetDirectory.GetValue();
	public FString                                            TextureChannelName                                             => _offTextureChannelName.GetValue();
	public FString                                            DatabasePrefix                                                 => _offDatabasePrefix.GetValue();
	public FString                                            TexturePrefix                                                  => _offTexturePrefix.GetValue();
	public FString                                            MaterialcollectionPrefix                                       => _offMaterialcollectionPrefix.GetValue();
	#endregion


}

// Class MultiPackerRuntime.MultiPackerTextureNode
// 0x0060 (0x0088 - 0x0028)
public class UMultiPackerTextureNode : UObject
{
	#region Offsets
	private ExternalOffset<UTexture>                          _offTextureInput                                               = new ExternalOffset<UTexture>(0x0038, true);                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSDF                                                        = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSDF_Radius                                                 = new ExternalOffset<int>(0x0044);                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offMSDF                                                       = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTilesVertical                                              = new ExternalOffset<int>(0x004C);                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTilesHorizontal                                            = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRectangleSize                                              = new ExternalOffset<byte/*(bool)*/>(0x0054);                  // 0x0054(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ESizeTexture>                      _offAutoSizeFill                                               = new ExternalOffset<ESizeTexture>(0x0055, false);             // 0x0055(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ETextureSizeOutputPersonal>        _offSetSizeByParameter                                         = new ExternalOffset<ETextureSizeOutputPersonal>(0x0056, false); // 0x0056(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSizeVertical                                               = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSizeHorizontal                                             = new ExternalOffset<int>(0x005C);                             // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ENameTexture>                      _offAutoNameFill                                               = new ExternalOffset<ENameTexture>(0x0060, false);             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FTileThumbDatabase>>        _offATexTileData                                               = new ExternalOffset<TArray<FTileThumbDatabase>>(0x0068, false); // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTilePointer>>              _offThumbnails                                                 = new ExternalOffset<TArray<UTilePointer>>(0x0078, false);     // 0x0078(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture                                           TextureInput                                                   => _offTextureInput.GetValue();
	public byte/*(bool)*/                                     SDF                                                            => _offSDF.GetValue();
	public int                                                SDF_Radius                                                     => _offSDF_Radius.GetValue();
	public byte/*(bool)*/                                     MSDF                                                           => _offMSDF.GetValue();
	public int                                                TilesVertical                                                  => _offTilesVertical.GetValue();
	public int                                                TilesHorizontal                                                => _offTilesHorizontal.GetValue();
	public byte/*(bool)*/                                     RectangleSize                                                  => _offRectangleSize.GetValue();
	public ESizeTexture                                       AutoSizeFill                                                   => _offAutoSizeFill.GetValue();
	public ETextureSizeOutputPersonal                         SetSizeByParameter                                             => _offSetSizeByParameter.GetValue();
	public int                                                SizeVertical                                                   => _offSizeVertical.GetValue();
	public int                                                SizeHorizontal                                                 => _offSizeHorizontal.GetValue();
	public ENameTexture                                       AutoNameFill                                                   => _offAutoNameFill.GetValue();
	public TArray<FTileThumbDatabase>                         ATexTileData                                                   => _offATexTileData.GetValue();
	public TArray<UTilePointer>                               Thumbnails                                                     => _offThumbnails.GetValue();
	#endregion


}

// Class MultiPackerRuntime.TileCopy
// 0x0000 (0x0028 - 0x0028)
public class UTileCopy : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class MultiPackerRuntime.TilePointer
// 0x00A4 (0x00CC - 0x0028)
public class UTilePointer : UObject
{
	#region Offsets
	private ExternalOffset<UTextureRenderTarget2D>            _offTileRT                                                     = new ExternalOffset<UTextureRenderTarget2D>(0x0028, true);    // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                        _offTileTexture                                                = new ExternalOffset<UTexture2D>(0x0030, true);                // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offNameUTile                                                  = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                            _offTileWidth                                                  = new ExternalOffset<ushort>(0x0048);                          // 0x0048(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                            _offTileHeight                                                 = new ExternalOffset<ushort>(0x004A);                          // 0x004A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offTilePadding                                                = new ExternalOffset<FVector2D>(0x004C, false);                // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTileDatabase>                     _offTileDatabase                                               = new ExternalOffset<FTileDatabase>(0x0058, false);            // 0x0058(0x0050) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTilePointer>>              _offTileBinPack                                                = new ExternalOffset<TArray<UTilePointer>>(0x00A8, false);     // 0x00A8(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FColor>>                    _offTileData                                                   = new ExternalOffset<TArray<FColor>>(0x00B8, false);           // 0x00B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<uint>                              _offTileDimension                                              = new ExternalOffset<uint>(0x00C8);                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UTextureRenderTarget2D                             TileRT                                                         => _offTileRT.GetValue();
	public UTexture2D                                         TileTexture                                                    => _offTileTexture.GetValue();
	public FString                                            NameUTile                                                      => _offNameUTile.GetValue();
	public ushort                                             TileWidth                                                      => _offTileWidth.GetValue();
	public ushort                                             TileHeight                                                     => _offTileHeight.GetValue();
	public FVector2D                                          TilePadding                                                    => _offTilePadding.GetValue();
	public FTileDatabase                                      TileDatabase                                                   => _offTileDatabase.GetValue();
	public TArray<UTilePointer>                               TileBinPack                                                    => _offTileBinPack.GetValue();
	public TArray<FColor>                                     TileData                                                       => _offTileData.GetValue();
	public uint                                               TileDimension                                                  => _offTileDimension.GetValue();
	#endregion


}


}