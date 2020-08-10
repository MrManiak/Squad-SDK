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

// Class Overlay.Overlays
// 0x0000 (0x0028 - 0x0028)
public class UOverlays : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Overlay.LocalizedOverlays
// 0x0058 (0x0080 - 0x0028)
public class ULocalizedOverlays : UOverlays
{
	#region Offsets
	private ExternalOffset<UBasicOverlays>                    _offDefaultOverlays                                            = new ExternalOffset<UBasicOverlays>(0x0028, true);            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FString, class UBasicOverlays*>       _offLocaleToOverlaysMap                                        = new ExternalOffset<TMap<UBasicOverlays>>(0x0030, false);     // 0x0030(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UBasicOverlays                                     DefaultOverlays                                                => _offDefaultOverlays.GetValue();
	#endregion


}

// Class Overlay.BasicOverlays
// 0x0010 (0x0038 - 0x0028)
public class UBasicOverlays : UOverlays
{
	#region Offsets
	private ExternalOffset<TArray<FOverlayItem>>              _offOverlays                                                   = new ExternalOffset<TArray<FOverlayItem>>(0x0028, false);     // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FOverlayItem>                               Overlays                                                       => _offOverlays.GetValue();
	#endregion


}


}