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

// WidgetBlueprintGeneratedClass W_EndRound_Base.W_EndRound_Base_C
// 0x0060 (0x0240 - 0x01E0)
public class UW_EndRound_Base_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<int>                               _offWinning_Team                                               = new ExternalOffset<int>(0x0230);                             // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offLosing_Team                                                = new ExternalOffset<int>(0x0234);                             // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offWinning_Tickets                                            = new ExternalOffset<int>(0x0238);                             // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<int>                               _offLosing_Tickets                                             = new ExternalOffset<int>(0x023C);                             // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public int                                                Winning_Team                                                   => _offWinning_Team.GetValue();
	public int                                                Losing_Team                                                    => _offLosing_Team.GetValue();
	public int                                                Winning_Tickets                                                => _offWinning_Tickets.GetValue();
	public int                                                Losing_Tickets                                                 => _offLosing_Tickets.GetValue();
	#endregion


}


}