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

// BlueprintGeneratedClass BP_CommanderActionCondition.BP_CommanderActionCondition_C
// 0x0008 (0x0030 - 0x0028)
public class UBP_CommanderActionCondition_C : UObject
{
	#region Offsets
	private ExternalOffset<AWorldSettings>                    _offWorld_Settings                                             = new ExternalOffset<AWorldSettings>(0x0028, true);            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public AWorldSettings                                     World_Settings                                                 => _offWorld_Settings.GetValue();
	#endregion


}


}