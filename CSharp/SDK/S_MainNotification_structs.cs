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

// UserDefinedStruct S_MainNotification.S_MainNotification
// 0x0024
public class FS_MainNotification : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offMessage_10_859C40E04544AD6235485AA56AF0DB84                = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<float>                              _offDuration_9_DE1EEDD6427551BA55471EAD56C8995E                = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                       _offColor_12_0153DDF2416865175A5C188D9AB10331                  = new ExternalOffset<FLinearColor>(0x0014, false);             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FString                                             Message_10_859C40E04544AD6235485AA56AF0DB84                    => _offMessage_10_859C40E04544AD6235485AA56AF0DB84.GetValue();
	public float                                               Duration_9_DE1EEDD6427551BA55471EAD56C8995E                    => _offDuration_9_DE1EEDD6427551BA55471EAD56C8995E.GetValue();
	public FLinearColor                                        Color_12_0153DDF2416865175A5C188D9AB10331                      => _offColor_12_0153DDF2416865175A5C188D9AB10331.GetValue();
	#endregion

	public FS_MainNotification(FString c_Message_10_859C40E04544AD6235485AA56AF0DB84, float c_Duration_9_DE1EEDD6427551BA55471EAD56C8995E, FLinearColor c_Color_12_0153DDF2416865175A5C188D9AB10331) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMessage_10_859C40E04544AD6235485AA56AF0DB84.SetValue(c_Message_10_859C40E04544AD6235485AA56AF0DB84);
		_offDuration_9_DE1EEDD6427551BA55471EAD56C8995E.SetValue(c_Duration_9_DE1EEDD6427551BA55471EAD56C8995E);
		_offColor_12_0153DDF2416865175A5C188D9AB10331.SetValue(c_Color_12_0153DDF2416865175A5C188D9AB10331);
	}
}

}