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

// UserDefinedStruct GridLinesPerZoomLevel.GridLinesPerZoomLevel
// 0x002C
public class FGridLinesPerZoomLevel : ExternalClass
{
	#region Offsets
	private ExternalOffset<UCurveFloat>                        _offOpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA          = new ExternalOffset<UCurveFloat>(0x0000, true);               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                         _offTexture_2_513F535945D2FFFAA449FA922C520958                 = new ExternalOffset<UTexture2D>(0x0008, true);                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                              _offZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18        = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                              _offZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776          = new ExternalOffset<float>(0x0014);                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<int>                                _offScaleFactor_25_1F6A722B4DB5237162393799FF69B000            = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                       _offTint_28_C16F00104057164EAE6283B19B77017E                   = new ExternalOffset<FLinearColor>(0x001C, false);             // 0x001C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UCurveFloat                                         OpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA              => _offOpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA.GetValue();
	public UTexture2D                                          Texture_2_513F535945D2FFFAA449FA922C520958                     => _offTexture_2_513F535945D2FFFAA449FA922C520958.GetValue();
	public float                                               ZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18            => _offZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18.GetValue();
	public float                                               ZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776              => _offZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776.GetValue();
	public int                                                 ScaleFactor_25_1F6A722B4DB5237162393799FF69B000                => _offScaleFactor_25_1F6A722B4DB5237162393799FF69B000.GetValue();
	public FLinearColor                                        Tint_28_C16F00104057164EAE6283B19B77017E                       => _offTint_28_C16F00104057164EAE6283B19B77017E.GetValue();
	#endregion

	public FGridLinesPerZoomLevel(UCurveFloat c_OpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA, UTexture2D c_Texture_2_513F535945D2FFFAA449FA922C520958, float c_ZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18, float c_ZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776, int c_ScaleFactor_25_1F6A722B4DB5237162393799FF69B000, FLinearColor c_Tint_28_C16F00104057164EAE6283B19B77017E) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA.SetValue(c_OpacityPerZoom_8_7D4D594647988B210638DCA367C8F9DA);
		_offTexture_2_513F535945D2FFFAA449FA922C520958.SetValue(c_Texture_2_513F535945D2FFFAA449FA922C520958);
		_offZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18.SetValue(c_ZoomAmountBegin_20_CCBF4CDF4CB0084B153CAEA044D4CA18);
		_offZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776.SetValue(c_ZoomAmountEnd_21_972E750A4C1ACB475F9EE7B38D389776);
		_offScaleFactor_25_1F6A722B4DB5237162393799FF69B000.SetValue(c_ScaleFactor_25_1F6A722B4DB5237162393799FF69B000);
		_offTint_28_C16F00104057164EAE6283B19B77017E.SetValue(c_Tint_28_C16F00104057164EAE6283B19B77017E);
	}
}

}