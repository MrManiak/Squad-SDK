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

// Class ImgMedia.ImgMediaSource
// 0x0028 (0x0060 - 0x0038)
public class UImgMediaSource : UBaseMediaSource
{
	#region Offsets
	private ExternalOffset<FFrameRate>                        _offFrameRateOverride                                          = new ExternalOffset<FFrameRate>(0x0038, false);               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offProxyOverride                                              = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDirectoryPath>                    _offSequencePath                                               = new ExternalOffset<FDirectoryPath>(0x0050, false);           // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FFrameRate                                         FrameRateOverride                                              => _offFrameRateOverride.GetValue();
	public FString                                            ProxyOverride                                                  => _offProxyOverride.GetValue();
	public FDirectoryPath                                     SequencePath                                                   => _offSequencePath.GetValue();
	#endregion


}


}