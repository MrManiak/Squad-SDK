// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ImageWrapper.EBitmapHeaderVersion
public enum EBitmapHeaderVersion : byte
{
	EBitmapHeaderVersion__BHV_BITMAPINFOHEADER = 0,
	EBitmapHeaderVersion__BHV_BITMAPV2INFOHEADER = 1,
	EBitmapHeaderVersion__BHV_BITMAPV3INFOHEADER = 2,
	EBitmapHeaderVersion__BHV_BITMAPV4HEADER = 3,
	EBitmapHeaderVersion__BHV_BITMAPV5HEADER = 4,
	EBitmapHeaderVersion__BHV_MAX  = 5
}

// Enum ImageWrapper.EBitmapCSType
public enum EBitmapCSType : byte
{
	EBitmapCSType__BCST_BLCS_CALIBRATED_RGB = 0,
	EBitmapCSType__BCST_LCS_sRGB   = 1,
	EBitmapCSType__BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	EBitmapCSType__BCST_PROFILE_LINKED = 3,
	EBitmapCSType__BCST_PROFILE_EMBEDDED = 4,
	EBitmapCSType__BCST_MAX        = 5
}


}