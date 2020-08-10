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

// Class WmfMediaFactory.WmfMediaSettings
// 0x0004 (0x002C - 0x0028)
public class UWmfMediaSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offAllowNonStandardCodecs                                     = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offLowLatency                                                 = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offNativeAudioOut                                             = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offHardwareAcceleratedVideoDecoding                           = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     AllowNonStandardCodecs                                         => _offAllowNonStandardCodecs.GetValue();
	public byte/*(bool)*/                                     LowLatency                                                     => _offLowLatency.GetValue();
	public byte/*(bool)*/                                     NativeAudioOut                                                 => _offNativeAudioOut.GetValue();
	public byte/*(bool)*/                                     HardwareAcceleratedVideoDecoding                               => _offHardwareAcceleratedVideoDecoding.GetValue();
	#endregion


}


}