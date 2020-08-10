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

// Enum ImageWriteQueue.EDesiredImageFormat
public enum EDesiredImageFormat : byte
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
public class FImageWriteOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<EDesiredImageFormat>                _offFormat                                                     = new ExternalOffset<EDesiredImageFormat>(0x0000, false);      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptDelegate>                    _offOnComplete                                                 = new ExternalOffset<FScriptDelegate>(0x0004, false);          // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offCompressionQuality                                         = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbOverwriteFile                                             = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbAsync                                                     = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDesiredImageFormat                                 Format                                                         => _offFormat.GetValue();
	public FScriptDelegate                                     OnComplete                                                     => _offOnComplete.GetValue();
	public int                                                 CompressionQuality                                             => _offCompressionQuality.GetValue();
	public byte/*(bool)*/                                      bOverwriteFile                                                 => _offbOverwriteFile.GetValue();
	public byte/*(bool)*/                                      bAsync                                                         => _offbAsync.GetValue();
	#endregion

	public FImageWriteOptions(EDesiredImageFormat c_Format, FScriptDelegate c_OnComplete, int c_CompressionQuality, byte/*(bool)*/ c_bOverwriteFile, byte/*(bool)*/ c_bAsync) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFormat.SetValue(c_Format);
		_offOnComplete.SetValue(c_OnComplete);
		_offCompressionQuality.SetValue(c_CompressionQuality);
		_offbOverwriteFile.SetValue(c_bOverwriteFile);
		_offbAsync.SetValue(c_bAsync);
	}
}

}