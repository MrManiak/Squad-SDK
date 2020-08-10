// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
// 0x0010
public class FAudioCaptureDeviceInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offDeviceName                                                 = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offNumInputChannels                                           = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSampleRate                                                 = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               DeviceName                                                     => _offDeviceName.GetValue();
	public int                                                 NumInputChannels                                               => _offNumInputChannels.GetValue();
	public int                                                 SampleRate                                                     => _offSampleRate.GetValue();
	#endregion

	public FAudioCaptureDeviceInfo(FName c_DeviceName, int c_NumInputChannels, int c_SampleRate) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDeviceName.SetValue(c_DeviceName);
		_offNumInputChannels.SetValue(c_NumInputChannels);
		_offSampleRate.SetValue(c_SampleRate);
	}
}

}