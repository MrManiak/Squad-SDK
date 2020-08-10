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

// BlueprintGeneratedClass BP_TeamInfo.BP_TeamInfo_C
// 0x0020 (0x03A0 - 0x0380)
public class UBP_TeamInfo_C : USQTeamInfo
{
	#region Offsets
	private ExternalOffset<UClass>                            _offSLCommandMenu                                              = new ExternalOffset<UClass>(0x0380, true);                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UClass>                            _offNonBuildSLCommandMenu                                      = new ExternalOffset<UClass>(0x0388, true);                    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDataTable>                        _offGrunt_Voice_Table                                          = new ExternalOffset<UDataTable>(0x0390, true);                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UDataTable>                        _offSL_Voice_Table                                             = new ExternalOffset<UDataTable>(0x0398, true);                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UClass                                             SLCommandMenu                                                  => _offSLCommandMenu.GetValue();
	public UClass                                             NonBuildSLCommandMenu                                          => _offNonBuildSLCommandMenu.GetValue();
	public UDataTable                                         Grunt_Voice_Table                                              => _offGrunt_Voice_Table.GetValue();
	public UDataTable                                         SL_Voice_Table                                                 => _offSL_Voice_Table.GetValue();
	#endregion


}


}