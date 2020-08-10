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

// Class GeometryCache.GeometryCache
// 0x0040 (0x0068 - 0x0028)
public class UGeometryCache : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UMaterialInterface>>        _offMaterials                                                  = new ExternalOffset<TArray<UMaterialInterface>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UGeometryCacheTrack>>       _offTracks                                                     = new ExternalOffset<TArray<UGeometryCacheTrack>>(0x0040, false); // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStartFrame                                                 = new ExternalOffset<int>(0x0060);                             // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offEndFrame                                                   = new ExternalOffset<int>(0x0064);                             // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UMaterialInterface>                         Materials                                                      => _offMaterials.GetValue();
	public TArray<UGeometryCacheTrack>                        Tracks                                                         => _offTracks.GetValue();
	public int                                                StartFrame                                                     => _offStartFrame.GetValue();
	public int                                                EndFrame                                                       => _offEndFrame.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheActor
// 0x0018 (0x0250 - 0x0238)
public class AGeometryCacheActor : AActor
{
	#region Offsets
	private ExternalOffset<UGeometryCacheComponent>           _offGeometryCacheComponent                                     = new ExternalOffset<UGeometryCacheComponent>(0x0248, true);   // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UGeometryCacheComponent                            GeometryCacheComponent                                         => _offGeometryCacheComponent.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (0x0038 - 0x0028)
public class UGeometryCacheCodecBase : UObject
{
	#region Offsets
	private ExternalOffset<TArray<int>>                       _offTopologyRanges                                             = new ExternalOffset<TArray<int>>(0x0028, false);              // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<int>                                        TopologyRanges                                                 => _offTopologyRanges.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0004 (0x003C - 0x0038)
public class UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
	#region Offsets
	private ExternalOffset<int>                               _offDummyProperty                                              = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                DummyProperty                                                  => _offDummyProperty.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheCodecV1
// 0x0000 (0x0038 - 0x0038)
public class UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GeometryCache.GeometryCacheComponent
// 0x0058 (0x0481 - 0x0429)
public class UGeometryCacheComponent : UMeshComponent
{
	#region Offsets
	private ExternalOffset<UGeometryCache>                    _offGeometryCache                                              = new ExternalOffset<UGeometryCache>(0x0430, true);            // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbRunning                                                   = new ExternalOffset<byte/*(bool)*/>(0x0438);                  // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbLooping                                                   = new ExternalOffset<byte/*(bool)*/>(0x0439);                  // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offStartTimeOffset                                            = new ExternalOffset<float>(0x043C);                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPlaybackSpeed                                              = new ExternalOffset<float>(0x0440);                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offNumTracks                                                  = new ExternalOffset<int>(0x0444);                             // 0x0444(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offElapsedTime                                                = new ExternalOffset<float>(0x0448);                           // 0x0448(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x047C);                           // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbManualTick                                                = new ExternalOffset<byte/*(bool)*/>(0x0480);                  // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UGeometryCache                                     GeometryCache                                                  => _offGeometryCache.GetValue();
	public byte/*(bool)*/                                     bRunning                                                       => _offbRunning.GetValue();
	public byte/*(bool)*/                                     bLooping                                                       => _offbLooping.GetValue();
	public float                                              StartTimeOffset                                                => _offStartTimeOffset.GetValue();
	public float                                              PlaybackSpeed                                                  => _offPlaybackSpeed.GetValue();
	public int                                                NumTracks                                                      => _offNumTracks.GetValue();
	public float                                              ElapsedTime                                                    => _offElapsedTime.GetValue();
	public float                                              Duration                                                       => _offDuration.GetValue();
	public byte/*(bool)*/                                     bManualTick                                                    => _offbManualTick.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheTrack
// 0x0004 (0x002C - 0x0028)
public class UGeometryCacheTrack : UObject
{
	#region Offsets
	private ExternalOffset<float>                             _offDuration                                                   = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              Duration                                                       => _offDuration.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0030 (0x005C - 0x002C)
public class UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
	#region Offsets
	private ExternalOffset<uint>                              _offNumMeshSamples                                             = new ExternalOffset<uint>(0x0058);                            // 0x0058(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public uint                                               NumMeshSamples                                                 => _offNumMeshSamples.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0160 (0x018C - 0x002C)
public class UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
	#region Offsets
	private ExternalOffset<UGeometryCacheCodecBase>           _offCodec                                                      = new ExternalOffset<UGeometryCacheCodecBase>(0x0058, true);   // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStartSampleTime                                            = new ExternalOffset<float>(0x0188);                           // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UGeometryCacheCodecBase                            Codec                                                          => _offCodec.GetValue();
	public float                                              StartSampleTime                                                => _offStartSampleTime.GetValue();
	#endregion


}

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x002C (0x0058 - 0x002C)
public class UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x002C (0x0058 - 0x002C)
public class UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}