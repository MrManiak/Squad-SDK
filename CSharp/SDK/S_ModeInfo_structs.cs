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

// UserDefinedStruct S_ModeInfo.S_ModeInfo
// 0x0088
public class FS_ModeInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9                = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<UClass>                             _offWidget_11_1F431324444094E4D88F25B92424FDF2                 = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                              _offModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F               = new ExternalOffset<FText>(0x0020, false);                    // 0x0020(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                              _offAttackText_21_A3020B964FE89E69047A16BE3CE7F3BA             = new ExternalOffset<FText>(0x0038, false);                    // 0x0038(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<FText>                              _offDefendText_25_002E774248EF17F1493E939861D9890D             = new ExternalOffset<FText>(0x0050, false);                    // 0x0050(0x0018) (Edit, BlueprintVisible)
	#endregion

	#region Props
	public FText                                               ModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9                    => _offModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9.GetValue();
	public UClass                                              Widget_11_1F431324444094E4D88F25B92424FDF2                     => _offWidget_11_1F431324444094E4D88F25B92424FDF2.GetValue();
	public FText                                               ModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F                   => _offModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F.GetValue();
	public FText                                               AttackText_21_A3020B964FE89E69047A16BE3CE7F3BA                 => _offAttackText_21_A3020B964FE89E69047A16BE3CE7F3BA.GetValue();
	public FText                                               DefendText_25_002E774248EF17F1493E939861D9890D                 => _offDefendText_25_002E774248EF17F1493E939861D9890D.GetValue();
	#endregion

	public FS_ModeInfo(FText c_ModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9, UClass c_Widget_11_1F431324444094E4D88F25B92424FDF2, FText c_ModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F, FText c_AttackText_21_A3020B964FE89E69047A16BE3CE7F3BA, FText c_DefendText_25_002E774248EF17F1493E939861D9890D) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9.SetValue(c_ModeInfo_7_2EA7F63B4CCDC8C966C006BE0C74D8A9);
		_offWidget_11_1F431324444094E4D88F25B92424FDF2.SetValue(c_Widget_11_1F431324444094E4D88F25B92424FDF2);
		_offModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F.SetValue(c_ModeText_24_EFC4AEFA47A8DD0A2A9AF9A67640A27F);
		_offAttackText_21_A3020B964FE89E69047A16BE3CE7F3BA.SetValue(c_AttackText_21_A3020B964FE89E69047A16BE3CE7F3BA);
		_offDefendText_25_002E774248EF17F1493E939861D9890D.SetValue(c_DefendText_25_002E774248EF17F1493E939861D9890D);
	}
}

}