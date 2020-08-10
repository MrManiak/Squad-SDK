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

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x0038
public class FMovieSceneGeometryCacheParams : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGeometryCache>                     _offGeometryCacheAsset                                         = new ExternalOffset<UGeometryCache>(0x0000, true);            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offStartFrameOffset                                           = new ExternalOffset<FFrameNumber>(0x0008, false);             // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offEndFrameOffset                                             = new ExternalOffset<FFrameNumber>(0x000C, false);             // 0x000C(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbReverse                                                   = new ExternalOffset<char>(0x0014, false);                     // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartOffset                                                = new ExternalOffset<float>(0x0018);                           // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEndOffset                                                  = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                    _offGeometryCache                                              = new ExternalOffset<FSoftObjectPath>(0x0020, false);          // 0x0020(0x0018) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGeometryCache                                      GeometryCacheAsset                                             => _offGeometryCacheAsset.GetValue();
	public FFrameNumber                                        StartFrameOffset                                               => _offStartFrameOffset.GetValue();
	public FFrameNumber                                        EndFrameOffset                                                 => _offEndFrameOffset.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public float                                               StartOffset                                                    => _offStartOffset.GetValue();
	public float                                               EndOffset                                                      => _offEndOffset.GetValue();
	public FSoftObjectPath                                     GeometryCache                                                  => _offGeometryCache.GetValue();
	#endregion

	public FMovieSceneGeometryCacheParams(UGeometryCache c_GeometryCacheAsset, FFrameNumber c_StartFrameOffset, FFrameNumber c_EndFrameOffset, float c_PlayRate, float c_StartOffset, float c_EndOffset, FSoftObjectPath c_GeometryCache) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGeometryCacheAsset.SetValue(c_GeometryCacheAsset);
		_offStartFrameOffset.SetValue(c_StartFrameOffset);
		_offEndFrameOffset.SetValue(c_EndFrameOffset);
		_offPlayRate.SetValue(c_PlayRate);
		_offStartOffset.SetValue(c_StartOffset);
		_offEndOffset.SetValue(c_EndOffset);
		_offGeometryCache.SetValue(c_GeometryCache);
	}
}
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0x0008 (0x0040 - 0x0038)
public class FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{
	#region Offsets
	private ExternalOffset<FFrameNumber>                       _offSectionStartTime                                           = new ExternalOffset<FFrameNumber>(0x0038, false);             // 0x0038(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFrameNumber>                       _offSectionEndTime                                             = new ExternalOffset<FFrameNumber>(0x003C, false);             // 0x003C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FFrameNumber                                        SectionStartTime                                               => _offSectionStartTime.GetValue();
	public FFrameNumber                                        SectionEndTime                                                 => _offSectionEndTime.GetValue();
	#endregion

	public FMovieSceneGeometryCacheSectionTemplateParameters(FFrameNumber c_SectionStartTime, FFrameNumber c_SectionEndTime) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSectionStartTime.SetValue(c_SectionStartTime);
		_offSectionEndTime.SetValue(c_SectionEndTime);
	}
}
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x0040 (0x0060 - 0x0020)
public class FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{
	#region Offsets
	private ExternalOffset<FMovieSceneGeometryCacheSectionTemplateParameters> _offParams                                                     = new ExternalOffset<FMovieSceneGeometryCacheSectionTemplateParameters>(0x0020, false); // 0x0020(0x0040) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneGeometryCacheSectionTemplateParameters   Params                                                         => _offParams.GetValue();
	#endregion

	public FMovieSceneGeometryCacheSectionTemplate(FMovieSceneGeometryCacheSectionTemplateParameters c_Params) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offParams.SetValue(c_Params);
	}
}

}