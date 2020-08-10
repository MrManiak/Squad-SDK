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

// Enum MultiPackerRuntime.EFreeRectChoiceHeuristic
public enum EFreeRectChoiceHeuristic : byte
{
	EFreeRectChoiceHeuristic__EMCE_Option1 = 0,
	EFreeRectChoiceHeuristic__EMCE_Option2 = 1,
	EFreeRectChoiceHeuristic__EMCE_Option3 = 2,
	EFreeRectChoiceHeuristic__EMCE_Option4 = 3,
	EFreeRectChoiceHeuristic__EMCE_Option5 = 4,
	EFreeRectChoiceHeuristic__EMCE_MAX = 5
}

// Enum MultiPackerRuntime.EChannelOutput
public enum EChannelOutput : byte
{
	EChannelOutput__Channel_RGB    = 0,
	EChannelOutput__Channel_Red    = 1,
	EChannelOutput__Channel_Green  = 2,
	EChannelOutput__Channel_Blue   = 3,
	EChannelOutput__Channel_Alpha  = 4,
	EChannelOutput__Channel_RGBA   = 5,
	EChannelOutput__Channel_Red01  = 6,
	EChannelOutput__Channel_Red02  = 7,
	EChannelOutput__Channel_Red03  = 8,
	EChannelOutput__Channel_Green01 = 9,
	EChannelOutput__Channel_Green02 = 10,
	EChannelOutput__Channel_Green03 = 11,
	EChannelOutput__Channel_Blue01 = 12,
	EChannelOutput__Channel_Blue02 = 13,
	EChannelOutput__Channel_Blue03 = 14,
	EChannelOutput__Channel_Alpha01 = 15,
	EChannelOutput__Channel_Alpha02 = 16,
	EChannelOutput__Channel_Alpha03 = 17,
	EChannelOutput__Channel_MAX    = 18
}

// Enum MultiPackerRuntime.EChannelTextureSave
public enum EChannelTextureSave : byte
{
	EChannelTextureSave__CS_Multiple = 0,
	EChannelTextureSave__CS_One    = 1,
	EChannelTextureSave__CS_Atlas  = 2,
	EChannelTextureSave__CS_OneSdf = 3,
	EChannelTextureSave__CS_MAX    = 4
}

// Enum MultiPackerRuntime.EStateButton
public enum EStateButton : byte
{
	EStateButton__EMCE_Option1     = 0,
	EStateButton__EMCE_Option2     = 1,
	EStateButton__EMCE_Option3     = 2,
	EStateButton__EMCE_Option4     = 3,
	EStateButton__EMCE_MAX         = 4
}

// Enum MultiPackerRuntime.ETextureSizeOutput
public enum ETextureSizeOutput : byte
{
	ETextureSizeOutput__EMCE_Option1 = 0,
	ETextureSizeOutput__EMCE_Option2 = 1,
	ETextureSizeOutput__EMCE_Option3 = 2,
	ETextureSizeOutput__EMCE_Option4 = 3,
	ETextureSizeOutput__EMCE_Option5 = 4,
	ETextureSizeOutput__EMCE_Option6 = 5,
	ETextureSizeOutput__EMCE_MAX   = 6
}

// Enum MultiPackerRuntime.ENameMaterial
public enum ENameMaterial : byte
{
	ENameMaterial__EMCE_Option1    = 0,
	ENameMaterial__EMCE_Option2    = 1,
	ENameMaterial__EMCE_Option3    = 2,
	ENameMaterial__EMCE_MAX        = 3
}

// Enum MultiPackerRuntime.ENameTexture
public enum ENameTexture : byte
{
	ENameTexture__EMCE_Option1     = 0,
	ENameTexture__EMCE_Option2     = 1,
	ENameTexture__EMCE_Option3     = 2,
	ENameTexture__EMCE_MAX         = 3
}

// Enum MultiPackerRuntime.ESizeTexture
public enum ESizeTexture : byte
{
	ESizeTexture__EMCE_Option1     = 0,
	ESizeTexture__EMCE_Option2     = 1,
	ESizeTexture__EMCE_MAX         = 2
}

// Enum MultiPackerRuntime.EChannelSelectionInput
public enum EChannelSelectionInput : byte
{
	EChannelSelectionInput__CSI_Blue = 0,
	EChannelSelectionInput__CSI_Green = 1,
	EChannelSelectionInput__CSI_Red = 2,
	EChannelSelectionInput__CSI_Alpha = 3,
	EChannelSelectionInput__CSI_RGB = 4,
	EChannelSelectionInput__CSI_RGBA = 5,
	EChannelSelectionInput__CSI_MAX = 6
}

// Enum MultiPackerRuntime.EApplyMaterial
public enum EApplyMaterial : byte
{
	EApplyMaterial__EMCE_Option1   = 0,
	EApplyMaterial__EMCE_Option2   = 1,
	EApplyMaterial__EMCE_Option3   = 2,
	EApplyMaterial__EMCE_MAX       = 3
}

// Enum MultiPackerRuntime.ETextureSizeOutputPersonal
public enum ETextureSizeOutputPersonal : byte
{
	ETextureSizeOutputPersonal__EMCE_Option1 = 0,
	ETextureSizeOutputPersonal__EMCE_Option2 = 1,
	ETextureSizeOutputPersonal__EMCE_Option3 = 2,
	ETextureSizeOutputPersonal__EMCE_Option4 = 3,
	ETextureSizeOutputPersonal__EMCE_Option5 = 4,
	ETextureSizeOutputPersonal__EMCE_Option6 = 5,
	ETextureSizeOutputPersonal__EMCE_Option7 = 6,
	ETextureSizeOutputPersonal__EMCE_Option8 = 7,
	ETextureSizeOutputPersonal__EMCE_Option9 = 8,
	ETextureSizeOutputPersonal__EMCE_MAX = 9
}

// Enum MultiPackerRuntime.EMultiPackerImageLayer
public enum EMultiPackerImageLayer : byte
{
	EMultiPackerImageLayer__EMCE_Option1 = 0,
	EMultiPackerImageLayer__EMCE_Option2 = 1,
	EMultiPackerImageLayer__EMCE_Option3 = 2,
	EMultiPackerImageLayer__EMCE_MAX = 3
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MultiPackerRuntime.ChannelDatabase
// 0x0010
public class FChannelDatabase : ExternalClass
{
	#region Offsets
	private ExternalOffset<UMultiPackerDataBase>               _offDatabase                                                   = new ExternalOffset<UMultiPackerDataBase>(0x0000, true);      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMultiPackerDataBase                                Database                                                       => _offDatabase.GetValue();
	public FName                                               Name                                                           => _offName.GetValue();
	#endregion

	public FChannelDatabase(UMultiPackerDataBase c_Database, FName c_Name) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDatabase.SetValue(c_Database);
		_offName.SetValue(c_Name);
	}
}
// ScriptStruct MultiPackerRuntime.RectSizePadding
// 0x0008
public class FRectSizePadding : ExternalClass
{
	#region Offsets
	private ExternalOffset<ushort>                             _offX                                                          = new ExternalOffset<ushort>(0x0000);                          // 0x0000(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offY                                                          = new ExternalOffset<ushort>(0x0002);                          // 0x0002(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offWidth                                                      = new ExternalOffset<ushort>(0x0004);                          // 0x0004(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offHeight                                                     = new ExternalOffset<ushort>(0x0006);                          // 0x0006(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ushort                                              X                                                              => _offX.GetValue();
	public ushort                                              Y                                                              => _offY.GetValue();
	public ushort                                              Width                                                          => _offWidth.GetValue();
	public ushort                                              Height                                                         => _offHeight.GetValue();
	#endregion

	public FRectSizePadding(ushort c_X, ushort c_Y, ushort c_Width, ushort c_Height) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offX.SetValue(c_X);
		_offY.SetValue(c_Y);
		_offWidth.SetValue(c_Width);
		_offHeight.SetValue(c_Height);
	}
}
// ScriptStruct MultiPackerRuntime.MaterialDataBinPack
// 0x0028
public class FMaterialDataBinPack : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offWidth                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offHeight                                                     = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTextureRenderTarget2D>             _offRT_Material                                                = new ExternalOffset<UTextureRenderTarget2D>(0x0008, true);    // 0x0008(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x0010, true);        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumPage                                                    = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRectSizePadding>                   _offMaterialRect                                               = new ExternalOffset<FRectSizePadding>(0x001C, false);         // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Width                                                          => _offWidth.GetValue();
	public int                                                 Height                                                         => _offHeight.GetValue();
	public UTextureRenderTarget2D                              RT_Material                                                    => _offRT_Material.GetValue();
	public UMaterialInterface                                  Material                                                       => _offMaterial.GetValue();
	public int                                                 NumPage                                                        => _offNumPage.GetValue();
	public FRectSizePadding                                    MaterialRect                                                   => _offMaterialRect.GetValue();
	#endregion

	public FMaterialDataBinPack(int c_Width, int c_Height, UTextureRenderTarget2D c_RT_Material, UMaterialInterface c_Material, int c_NumPage, FRectSizePadding c_MaterialRect) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWidth.SetValue(c_Width);
		_offHeight.SetValue(c_Height);
		_offRT_Material.SetValue(c_RT_Material);
		_offMaterial.SetValue(c_Material);
		_offNumPage.SetValue(c_NumPage);
		_offMaterialRect.SetValue(c_MaterialRect);
	}
}
// ScriptStruct MultiPackerRuntime.TileDatabase
// 0x0050
public class FTileDatabase : ExternalClass
{
	#region Offsets
	private ExternalOffset<UTexture>                           _offTileTexture                                                = new ExternalOffset<UTexture>(0x0000, true);                  // 0x0000(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTileName                                                   = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offFrame                                                      = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EChannelOutput>                     _offChannelTexture                                             = new ExternalOffset<EChannelOutput>(0x0014, false);           // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRectSizePadding>                   _offSizeAndPadding                                             = new ExternalOffset<FRectSizePadding>(0x0016, false);         // 0x0016(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSDFNode                                                    = new ExternalOffset<byte/*(bool)*/>(0x001E);                  // 0x001E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offMSDFNode                                                   = new ExternalOffset<byte/*(bool)*/>(0x001F);                  // 0x001F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offChannel_vec                                                = new ExternalOffset<FLinearColor>(0x0020, false);             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offLayer_vec                                                  = new ExternalOffset<FLinearColor>(0x0030, false);             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offSizePadding_vec                                            = new ExternalOffset<FLinearColor>(0x0040, false);             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture                                            TileTexture                                                    => _offTileTexture.GetValue();
	public FName                                               TileName                                                       => _offTileName.GetValue();
	public int                                                 Frame                                                          => _offFrame.GetValue();
	public EChannelOutput                                      ChannelTexture                                                 => _offChannelTexture.GetValue();
	public FRectSizePadding                                    SizeAndPadding                                                 => _offSizeAndPadding.GetValue();
	public byte/*(bool)*/                                      SDFNode                                                        => _offSDFNode.GetValue();
	public byte/*(bool)*/                                      MSDFNode                                                       => _offMSDFNode.GetValue();
	public FLinearColor                                        Channel_vec                                                    => _offChannel_vec.GetValue();
	public FLinearColor                                        Layer_vec                                                      => _offLayer_vec.GetValue();
	public FLinearColor                                        SizePadding_vec                                                => _offSizePadding_vec.GetValue();
	#endregion

	public FTileDatabase(UTexture c_TileTexture, FName c_TileName, int c_Frame, EChannelOutput c_ChannelTexture, FRectSizePadding c_SizeAndPadding, byte/*(bool)*/ c_SDFNode, byte/*(bool)*/ c_MSDFNode, FLinearColor c_Channel_vec, FLinearColor c_Layer_vec, FLinearColor c_SizePadding_vec) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTileTexture.SetValue(c_TileTexture);
		_offTileName.SetValue(c_TileName);
		_offFrame.SetValue(c_Frame);
		_offChannelTexture.SetValue(c_ChannelTexture);
		_offSizeAndPadding.SetValue(c_SizeAndPadding);
		_offSDFNode.SetValue(c_SDFNode);
		_offMSDFNode.SetValue(c_MSDFNode);
		_offChannel_vec.SetValue(c_Channel_vec);
		_offLayer_vec.SetValue(c_Layer_vec);
		_offSizePadding_vec.SetValue(c_SizePadding_vec);
	}
}
// ScriptStruct MultiPackerRuntime.LayerDatabase
// 0x0058
public class FLayerDatabase : ExternalClass
{
	#region Offsets
	private ExternalOffset<FChannelDatabase>                   _offColor                                                      = new ExternalOffset<FChannelDatabase>(0x0000, false);         // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FChannelDatabase>                   _offAlpha                                                      = new ExternalOffset<FChannelDatabase>(0x0010, false);         // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSDF                                                        = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offMSDF                                                       = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offMultiple                                                   = new ExternalOffset<byte/*(bool)*/>(0x0022);                  // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSDF_Interior                                               = new ExternalOffset<byte/*(bool)*/>(0x0023);                  // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offSDF_Alpha                                                  = new ExternalOffset<byte/*(bool)*/>(0x0024);                  // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offCanProcess_Interior                                        = new ExternalOffset<byte/*(bool)*/>(0x0025);                  // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offCanProcess_Alpha                                           = new ExternalOffset<byte/*(bool)*/>(0x0026);                  // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offUseColor                                                   = new ExternalOffset<byte/*(bool)*/>(0x0027);                  // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offOutline                                                    = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColorOutline                                               = new ExternalOffset<FLinearColor>(0x002C, false);             // 0x002C(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offColorInterior                                              = new ExternalOffset<FLinearColor>(0x003C, false);             // 0x003C(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEdgeSoftness                                               = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offOutlineThresold                                            = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSDFThresold                                                = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FChannelDatabase                                    Color                                                          => _offColor.GetValue();
	public FChannelDatabase                                    Alpha                                                          => _offAlpha.GetValue();
	public byte/*(bool)*/                                      SDF                                                            => _offSDF.GetValue();
	public byte/*(bool)*/                                      MSDF                                                           => _offMSDF.GetValue();
	public byte/*(bool)*/                                      Multiple                                                       => _offMultiple.GetValue();
	public byte/*(bool)*/                                      SDF_Interior                                                   => _offSDF_Interior.GetValue();
	public byte/*(bool)*/                                      SDF_Alpha                                                      => _offSDF_Alpha.GetValue();
	public byte/*(bool)*/                                      CanProcess_Interior                                            => _offCanProcess_Interior.GetValue();
	public byte/*(bool)*/                                      CanProcess_Alpha                                               => _offCanProcess_Alpha.GetValue();
	public byte/*(bool)*/                                      UseColor                                                       => _offUseColor.GetValue();
	public byte/*(bool)*/                                      Outline                                                        => _offOutline.GetValue();
	public FLinearColor                                        ColorOutline                                                   => _offColorOutline.GetValue();
	public FLinearColor                                        ColorInterior                                                  => _offColorInterior.GetValue();
	public float                                               EdgeSoftness                                                   => _offEdgeSoftness.GetValue();
	public float                                               OutlineThresold                                                => _offOutlineThresold.GetValue();
	public float                                               SDFThresold                                                    => _offSDFThresold.GetValue();
	#endregion

	public FLayerDatabase(FChannelDatabase c_Color, FChannelDatabase c_Alpha, byte/*(bool)*/ c_SDF, byte/*(bool)*/ c_MSDF, byte/*(bool)*/ c_Multiple, byte/*(bool)*/ c_SDF_Interior, byte/*(bool)*/ c_SDF_Alpha, byte/*(bool)*/ c_CanProcess_Interior, byte/*(bool)*/ c_CanProcess_Alpha, byte/*(bool)*/ c_UseColor, byte/*(bool)*/ c_Outline, FLinearColor c_ColorOutline, FLinearColor c_ColorInterior, float c_EdgeSoftness, float c_OutlineThresold, float c_SDFThresold) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offColor.SetValue(c_Color);
		_offAlpha.SetValue(c_Alpha);
		_offSDF.SetValue(c_SDF);
		_offMSDF.SetValue(c_MSDF);
		_offMultiple.SetValue(c_Multiple);
		_offSDF_Interior.SetValue(c_SDF_Interior);
		_offSDF_Alpha.SetValue(c_SDF_Alpha);
		_offCanProcess_Interior.SetValue(c_CanProcess_Interior);
		_offCanProcess_Alpha.SetValue(c_CanProcess_Alpha);
		_offUseColor.SetValue(c_UseColor);
		_offOutline.SetValue(c_Outline);
		_offColorOutline.SetValue(c_ColorOutline);
		_offColorInterior.SetValue(c_ColorInterior);
		_offEdgeSoftness.SetValue(c_EdgeSoftness);
		_offOutlineThresold.SetValue(c_OutlineThresold);
		_offSDFThresold.SetValue(c_SDFThresold);
	}
}
// ScriptStruct MultiPackerRuntime.TileThumbDatabase
// 0x0010
public class FTileThumbDatabase : ExternalClass
{
	#region Offsets
	private ExternalOffset<UTexture>                           _offTileTexture                                                = new ExternalOffset<UTexture>(0x0000, true);                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offTileName                                                   = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture                                            TileTexture                                                    => _offTileTexture.GetValue();
	public FName                                               TileName                                                       => _offTileName.GetValue();
	#endregion

	public FTileThumbDatabase(UTexture c_TileTexture, FName c_TileName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTileTexture.SetValue(c_TileTexture);
		_offTileName.SetValue(c_TileName);
	}
}
// ScriptStruct MultiPackerRuntime.TextureScalar
// 0x0014
public class FTextureScalar : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDefaultValue                                               = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offValueChangesOnTime                                         = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxValue                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public float                                               DefaultValue                                                   => _offDefaultValue.GetValue();
	public byte/*(bool)*/                                      ValueChangesOnTime                                             => _offValueChangesOnTime.GetValue();
	public float                                               MaxValue                                                       => _offMaxValue.GetValue();
	#endregion

	public FTextureScalar(FName c_ParameterName, float c_DefaultValue, byte/*(bool)*/ c_ValueChangesOnTime, float c_MaxValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParameterName.SetValue(c_ParameterName);
		_offDefaultValue.SetValue(c_DefaultValue);
		_offValueChangesOnTime.SetValue(c_ValueChangesOnTime);
		_offMaxValue.SetValue(c_MaxValue);
	}
}
// ScriptStruct MultiPackerRuntime.TextureMaterial
// 0x0010
public class FTextureMaterial : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offTileName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture>                           _offTileTexture                                                = new ExternalOffset<UTexture>(0x0008, true);                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               TileName                                                       => _offTileName.GetValue();
	public UTexture                                            TileTexture                                                    => _offTileTexture.GetValue();
	#endregion

	public FTextureMaterial(FName c_TileName, UTexture c_TileTexture) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTileName.SetValue(c_TileName);
		_offTileTexture.SetValue(c_TileTexture);
	}
}
// ScriptStruct MultiPackerRuntime.VectorMaterial
// 0x002C
public class FVectorMaterial : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offParameterName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offDefaultVectorValue                                         = new ExternalOffset<FLinearColor>(0x0008, false);             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offValueChangesOnTime                                         = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offMaxVectorValue                                             = new ExternalOffset<FLinearColor>(0x001C, false);             // 0x001C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               ParameterName                                                  => _offParameterName.GetValue();
	public FLinearColor                                        DefaultVectorValue                                             => _offDefaultVectorValue.GetValue();
	public byte/*(bool)*/                                      ValueChangesOnTime                                             => _offValueChangesOnTime.GetValue();
	public FLinearColor                                        MaxVectorValue                                                 => _offMaxVectorValue.GetValue();
	#endregion

	public FVectorMaterial(FName c_ParameterName, FLinearColor c_DefaultVectorValue, byte/*(bool)*/ c_ValueChangesOnTime, FLinearColor c_MaxVectorValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParameterName.SetValue(c_ParameterName);
		_offDefaultVectorValue.SetValue(c_DefaultVectorValue);
		_offValueChangesOnTime.SetValue(c_ValueChangesOnTime);
		_offMaxVectorValue.SetValue(c_MaxVectorValue);
	}
}
// ScriptStruct MultiPackerRuntime.RectSize
// 0x0004
public class FRectSize : ExternalClass
{
	#region Offsets
	private ExternalOffset<ushort>                             _offWidth                                                      = new ExternalOffset<ushort>(0x0000);                          // 0x0000(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ushort>                             _offHeight                                                     = new ExternalOffset<ushort>(0x0002);                          // 0x0002(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ushort                                              Width                                                          => _offWidth.GetValue();
	public ushort                                              Height                                                         => _offHeight.GetValue();
	#endregion

	public FRectSize(ushort c_Width, ushort c_Height) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWidth.SetValue(c_Width);
		_offHeight.SetValue(c_Height);
	}
}

}