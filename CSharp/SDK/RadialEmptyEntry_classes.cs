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

// WidgetBlueprintGeneratedClass RadialEmptyEntry.RadialEmptyEntry_C
// 0x0008 (0x0300 - 0x02F8)
public class URadialEmptyEntry_C : USQRadialButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02F8, false); // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	#endregion


}


}