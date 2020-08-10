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

// UserDefinedStruct ModImageDownloads.ModImageDownloads
// 0x0018
public class FModImageDownloads : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offURL_2_C309587F41E1BB64C3AC0BA8C4953D8B                     = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2DDynamic>                  _offImage_5_A09AF30345C008981F2F19A0197BA8A4                   = new ExternalOffset<UTexture2DDynamic>(0x0010, true);         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FString                                             URL_2_C309587F41E1BB64C3AC0BA8C4953D8B                         => _offURL_2_C309587F41E1BB64C3AC0BA8C4953D8B.GetValue();
	public UTexture2DDynamic                                   Image_5_A09AF30345C008981F2F19A0197BA8A4                       => _offImage_5_A09AF30345C008981F2F19A0197BA8A4.GetValue();
	#endregion

	public FModImageDownloads(FString c_URL_2_C309587F41E1BB64C3AC0BA8C4953D8B, UTexture2DDynamic c_Image_5_A09AF30345C008981F2F19A0197BA8A4) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offURL_2_C309587F41E1BB64C3AC0BA8C4953D8B.SetValue(c_URL_2_C309587F41E1BB64C3AC0BA8C4953D8B);
		_offImage_5_A09AF30345C008981F2F19A0197BA8A4.SetValue(c_Image_5_A09AF30345C008981F2F19A0197BA8A4);
	}
}

}