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

// UserDefinedStruct S_MapBlurbs.S_MapBlurbs
// 0x0088
public class FS_MapBlurbs : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offMapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9                 = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                              _offTeam1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71             = new ExternalOffset<FText>(0x0018, false);                    // 0x0018(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                              _offTeam1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214          = new ExternalOffset<FText>(0x0030, false);                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<UTexture2D>                         _offTeam1Badge_10_AAF7752546473D96363A8AB293AA7260             = new ExternalOffset<UTexture2D>(0x0048, true);                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                              _offTeam2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD             = new ExternalOffset<FText>(0x0050, false);                    // 0x0050(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                              _offTeam2Division_23_3643ABB3443892B7E9331F935B960FB1          = new ExternalOffset<FText>(0x0068, false);                    // 0x0068(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<UTexture2D>                         _offTeam2Badge_13_D73F2CBD46E18B52E8044791EBA2171A             = new ExternalOffset<UTexture2D>(0x0080, true);                // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FText                                               MapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9                     => _offMapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9.GetValue();
	public FText                                               Team1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71                 => _offTeam1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71.GetValue();
	public FText                                               Team1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214              => _offTeam1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214.GetValue();
	public UTexture2D                                          Team1Badge_10_AAF7752546473D96363A8AB293AA7260                 => _offTeam1Badge_10_AAF7752546473D96363A8AB293AA7260.GetValue();
	public FText                                               Team2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD                 => _offTeam2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD.GetValue();
	public FText                                               Team2Division_23_3643ABB3443892B7E9331F935B960FB1              => _offTeam2Division_23_3643ABB3443892B7E9331F935B960FB1.GetValue();
	public UTexture2D                                          Team2Badge_13_D73F2CBD46E18B52E8044791EBA2171A                 => _offTeam2Badge_13_D73F2CBD46E18B52E8044791EBA2171A.GetValue();
	#endregion

	public FS_MapBlurbs(FText c_MapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9, FText c_Team1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71, FText c_Team1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214, UTexture2D c_Team1Badge_10_AAF7752546473D96363A8AB293AA7260, FText c_Team2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD, FText c_Team2Division_23_3643ABB3443892B7E9331F935B960FB1, UTexture2D c_Team2Badge_13_D73F2CBD46E18B52E8044791EBA2171A) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9.SetValue(c_MapLore_4_2EA7F63B4CCDC8C966C006BE0C74D8A9);
		_offTeam1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71.SetValue(c_Team1Blurb_20_056E415B4C02751FAE71A0B0E12E1C71);
		_offTeam1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214.SetValue(c_Team1Division_22_E7CC708A48BD5982DFD9CC8BEDFD6214);
		_offTeam1Badge_10_AAF7752546473D96363A8AB293AA7260.SetValue(c_Team1Badge_10_AAF7752546473D96363A8AB293AA7260);
		_offTeam2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD.SetValue(c_Team2Blurb_21_96D53BCF4A97567C2B8ECF8D173D5EAD);
		_offTeam2Division_23_3643ABB3443892B7E9331F935B960FB1.SetValue(c_Team2Division_23_3643ABB3443892B7E9331F935B960FB1);
		_offTeam2Badge_13_D73F2CBD46E18B52E8044791EBA2171A.SetValue(c_Team2Badge_13_D73F2CBD46E18B52E8044791EBA2171A);
	}
}

}