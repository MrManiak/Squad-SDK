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

// BlueprintGeneratedClass EntryMap.Kamdesh_Highlands_C
// 0x000F (0x0258 - 0x0249)
public class AKamdesh_Highlands_C : ALevelScriptActor
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	#endregion


}


}