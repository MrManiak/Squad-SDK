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

// UserDefinedStruct KeybindActionStruct.KeybindActionStruct
// 0x0028
public class FKeybindActionStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offActionName_2_CA7DBD4242AA136E1102F3BA6647B028              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                              _offFriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC            = new ExternalOffset<FText>(0x0008, false);                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FName>                              _offCategory_10_AD245E2244D217ED2648CF9F1ECC96ED               = new ExternalOffset<FName>(0x0020, false);                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FName                                               ActionName_2_CA7DBD4242AA136E1102F3BA6647B028                  => _offActionName_2_CA7DBD4242AA136E1102F3BA6647B028.GetValue();
	public FText                                               FriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC                => _offFriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC.GetValue();
	public FName                                               Category_10_AD245E2244D217ED2648CF9F1ECC96ED                   => _offCategory_10_AD245E2244D217ED2648CF9F1ECC96ED.GetValue();
	#endregion

	public FKeybindActionStruct(FName c_ActionName_2_CA7DBD4242AA136E1102F3BA6647B028, FText c_FriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC, FName c_Category_10_AD245E2244D217ED2648CF9F1ECC96ED) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActionName_2_CA7DBD4242AA136E1102F3BA6647B028.SetValue(c_ActionName_2_CA7DBD4242AA136E1102F3BA6647B028);
		_offFriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC.SetValue(c_FriendlyName_6_9DA0219B43DAF6229FB1AD9278A926EC);
		_offCategory_10_AD245E2244D217ED2648CF9F1ECC96ED.SetValue(c_Category_10_AD245E2244D217ED2648CF9F1ECC96ED);
	}
}

}