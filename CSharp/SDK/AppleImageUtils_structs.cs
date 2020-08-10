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

// Enum AppleImageUtils.EAppleTextureType
public enum EAppleTextureType : byte
{
	EAppleTextureType__Unknown     = 0,
	EAppleTextureType__Image       = 1,
	EAppleTextureType__PixelBuffer = 2,
	EAppleTextureType__Surface     = 3,
	EAppleTextureType__MetalTexture = 4,
	EAppleTextureType__EAppleTextureType_MAX = 5
}

// Enum AppleImageUtils.ETextureRotationDirection
public enum ETextureRotationDirection : byte
{
	ETextureRotationDirection__None = 0,
	ETextureRotationDirection__Left = 1,
	ETextureRotationDirection__Right = 2,
	ETextureRotationDirection__Down = 3,
	ETextureRotationDirection__ETextureRotationDirection_MAX = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// 0x0020
public class FAppleImageUtilsImageConversionResult : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offError                                                      = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                       _offImageData                                                  = new ExternalOffset<TArray<char>>(0x0010, false);             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Error                                                          => _offError.GetValue();
	public TArray<char>                                        ImageData                                                      => _offImageData.GetValue();
	#endregion

	public FAppleImageUtilsImageConversionResult(FString c_Error, TArray<char> c_ImageData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offError.SetValue(c_Error);
		_offImageData.SetValue(c_ImageData);
	}
}

}