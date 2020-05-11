//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXCBeautyParamSetter-Protocol.h"
#import "TXCPituFilterDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TXCBeautifyFilter, TXCBeautyParams, TXCBeautyReportFlags, TXCCropFilter, TXCFilterFilter, TXCGaussianBlurFilter, TXCGreenScreenFilter, TXCGreenScreenParam, TXCPituFilter, TXCRGB2YUVOutput, TXCWaterMark, TXCYUV2RGBInput, TXSVFrame, UIImage, UIView;
@protocol TXINotifyDelegate, TXIVideoPreprocessorDelegateEx;

@interface TXCVideoPreprocessorEx : TXCModule <TXINotifyDelegate, TXCPituFilterDelegate, TXCBeautyParamSetter>
{
    _Bool _waterMirror;
    _Bool _mirror;
    _Bool _useWaterMarkAsInput;
    _Bool _isAsync;
    _Bool _customProcessed;
    _Bool _isSampleBuffer;
    _Bool _isFilterChanged;
    _Bool _isWaterMarkNeedUpdate;
    _Bool _isProcessFinish;
    _Bool _isInBackground;
    _Bool _filterTypeReport;
    _Bool _filterImageReport;
    _Bool _greenReport;
    _Bool _templateReport;
    _Bool _watermarkReport;
    float _mixLevel;
    float _gausLevel;
    long long _rotateAngle;
    TXCGreenScreenParam *_greenParam;
    TXCYUV2RGBInput *_yuvInput;
    TXCBeautifyFilter *_beautyFilter;
    TXCFilterFilter *_filterFilter;
    TXCCropFilter *_inputCropFilter;
    TXCCropFilter *_outputCropFilter;
    TXCPituFilter *_pituFilter;
    TXCGreenScreenFilter *_greenFilter;
    TXCWaterMark *_waterFilter;
    TXCRGB2YUVOutput *_yuvOutput;
    TXCGaussianBlurFilter *_gausFilter;
    id <TXIVideoPreprocessorDelegateEx> _delegate;
    id <TXINotifyDelegate> _notify;
    unsigned long long _curTimestamp;
    long long _beautStyle;
    UIImage *_filteImage;
    long long _filteType;
    NSString *_imagePath;
    NSString *_greenPath;
    UIView *_waterMark;
    UIImage *_waterMarkImage;
    long long _faceOrientation;
    long long _inputFormat;
    long long _outputFormat;
    long long _lastOutputFormat;
    TXCBeautyReportFlags *_reportFlags;
    NSString *_shotPath;
    unsigned long long _shotTimestamp;
    TXSVFrame *_vFrame;
    TXSVFrame *_lastVFrame;
    NSMutableDictionary *_dictBeautyStats;
    unsigned long long _totalFrameCnt;
    unsigned long long _lastTimeStamp;
    long long _renderOutputFormat;
    TXCCropFilter *_renderOutputCropFilter;
    TXCRGB2YUVOutput *_renderYuvOutput;
    struct __CVPixelBufferPool *_renderOutBufferPool;
    struct __CVPixelBufferPool *_encodeOutBufferPool;
    TXCBeautyParams *_beautyParams;
    struct CGSize _outputSize;
    struct CGSize _inputSize;
    struct CGSize _renderBufferSize;
    struct CGSize _encodeBufferSize;
    struct CGRect _cropRect;
    struct CGRect _waterMarkImageFrame;
}

+ (id)getVersion;
@property(retain, nonatomic) TXCBeautyParams *beautyParams; // @synthesize beautyParams=_beautyParams;
@property(nonatomic) struct CGSize encodeBufferSize; // @synthesize encodeBufferSize=_encodeBufferSize;
@property(nonatomic) struct __CVPixelBufferPool *encodeOutBufferPool; // @synthesize encodeOutBufferPool=_encodeOutBufferPool;
@property(nonatomic) struct CGSize renderBufferSize; // @synthesize renderBufferSize=_renderBufferSize;
@property(nonatomic) struct __CVPixelBufferPool *renderOutBufferPool; // @synthesize renderOutBufferPool=_renderOutBufferPool;
@property(retain, nonatomic) TXCRGB2YUVOutput *renderYuvOutput; // @synthesize renderYuvOutput=_renderYuvOutput;
@property(retain, nonatomic) TXCCropFilter *renderOutputCropFilter; // @synthesize renderOutputCropFilter=_renderOutputCropFilter;
@property(nonatomic) long long renderOutputFormat; // @synthesize renderOutputFormat=_renderOutputFormat;
@property(nonatomic) unsigned long long lastTimeStamp; // @synthesize lastTimeStamp=_lastTimeStamp;
@property(nonatomic) unsigned long long totalFrameCnt; // @synthesize totalFrameCnt=_totalFrameCnt;
@property(retain, nonatomic) NSMutableDictionary *dictBeautyStats; // @synthesize dictBeautyStats=_dictBeautyStats;
@property(retain, nonatomic) TXSVFrame *lastVFrame; // @synthesize lastVFrame=_lastVFrame;
@property(retain, nonatomic) TXSVFrame *vFrame; // @synthesize vFrame=_vFrame;
@property(nonatomic) unsigned long long shotTimestamp; // @synthesize shotTimestamp=_shotTimestamp;
@property(retain, nonatomic) NSString *shotPath; // @synthesize shotPath=_shotPath;
@property(nonatomic) _Bool watermarkReport; // @synthesize watermarkReport=_watermarkReport;
@property(nonatomic) _Bool templateReport; // @synthesize templateReport=_templateReport;
@property(nonatomic) _Bool greenReport; // @synthesize greenReport=_greenReport;
@property(nonatomic) _Bool filterImageReport; // @synthesize filterImageReport=_filterImageReport;
@property(nonatomic) _Bool filterTypeReport; // @synthesize filterTypeReport=_filterTypeReport;
@property(retain, nonatomic) TXCBeautyReportFlags *reportFlags; // @synthesize reportFlags=_reportFlags;
@property(nonatomic) long long lastOutputFormat; // @synthesize lastOutputFormat=_lastOutputFormat;
@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) long long inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) long long faceOrientation; // @synthesize faceOrientation=_faceOrientation;
@property(readonly, nonatomic) struct CGRect waterMarkImageFrame; // @synthesize waterMarkImageFrame=_waterMarkImageFrame;
@property(readonly, nonatomic) UIImage *waterMarkImage; // @synthesize waterMarkImage=_waterMarkImage;
@property(readonly, nonatomic) UIView *waterMark; // @synthesize waterMark=_waterMark;
@property(readonly, nonatomic) NSString *greenPath; // @synthesize greenPath=_greenPath;
@property(readonly, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(readonly, nonatomic) long long filteType; // @synthesize filteType=_filteType;
@property(readonly, nonatomic) UIImage *filteImage; // @synthesize filteImage=_filteImage;
@property(readonly, nonatomic) float gausLevel; // @synthesize gausLevel=_gausLevel;
@property(readonly, nonatomic) float mixLevel; // @synthesize mixLevel=_mixLevel;
@property(readonly, nonatomic) long long beautStyle; // @synthesize beautStyle=_beautStyle;
@property(nonatomic) unsigned long long curTimestamp; // @synthesize curTimestamp=_curTimestamp;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool isProcessFinish; // @synthesize isProcessFinish=_isProcessFinish;
@property(nonatomic) _Bool isWaterMarkNeedUpdate; // @synthesize isWaterMarkNeedUpdate=_isWaterMarkNeedUpdate;
@property(nonatomic) _Bool isFilterChanged; // @synthesize isFilterChanged=_isFilterChanged;
@property(nonatomic) _Bool isSampleBuffer; // @synthesize isSampleBuffer=_isSampleBuffer;
@property(nonatomic) __weak id <TXINotifyDelegate> notify; // @synthesize notify=_notify;
@property(nonatomic) __weak id <TXIVideoPreprocessorDelegateEx> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TXCGaussianBlurFilter *gausFilter; // @synthesize gausFilter=_gausFilter;
@property(retain, nonatomic) TXCRGB2YUVOutput *yuvOutput; // @synthesize yuvOutput=_yuvOutput;
@property(retain, nonatomic) TXCWaterMark *waterFilter; // @synthesize waterFilter=_waterFilter;
@property(retain, nonatomic) TXCGreenScreenFilter *greenFilter; // @synthesize greenFilter=_greenFilter;
@property(retain, nonatomic) TXCPituFilter *pituFilter; // @synthesize pituFilter=_pituFilter;
@property(retain, nonatomic) TXCCropFilter *outputCropFilter; // @synthesize outputCropFilter=_outputCropFilter;
@property(retain, nonatomic) TXCCropFilter *inputCropFilter; // @synthesize inputCropFilter=_inputCropFilter;
@property(retain, nonatomic) TXCFilterFilter *filterFilter; // @synthesize filterFilter=_filterFilter;
@property(retain, nonatomic) TXCBeautifyFilter *beautyFilter; // @synthesize beautyFilter=_beautyFilter;
@property(retain, nonatomic) TXCYUV2RGBInput *yuvInput; // @synthesize yuvInput=_yuvInput;
@property(nonatomic) _Bool customProcessed; // @synthesize customProcessed=_customProcessed;
@property(nonatomic) _Bool isAsync; // @synthesize isAsync=_isAsync;
@property(retain, nonatomic) TXCGreenScreenParam *greenParam; // @synthesize greenParam=_greenParam;
@property(nonatomic) _Bool useWaterMarkAsInput; // @synthesize useWaterMarkAsInput=_useWaterMarkAsInput;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) long long rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) _Bool waterMirror; // @synthesize waterMirror=_waterMirror;
- (void).cxx_destruct;
- (id)getBeautyStats;
- (void)addBeautyParam:(id)arg1 value:(long long)arg2;
- (void)setID:(id)arg1;
- (void)dealloc;
- (void)runAsynchronouslyOnVideoProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runSynchronouslyOnVideoProcessingQueue:(CDUnknownBlockType)arg1;
- (void)saveShotFilter:(id)arg1 name:(id)arg2;
- (void)saveShot;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)isWaterMarkEnable;
- (_Bool)isFilterEnable;
- (_Bool)isBeautyEnable;
- (_Bool)isPituEnable;
- (_Bool)isGausEnable;
- (struct CGRect)fixEncCropRegion:(struct CGSize)arg1 outputSize:(struct CGSize)arg2;
- (unsigned long long)getRotationMode:(long long)arg1 mirror:(_Bool)arg2;
- (struct CGSize)getOutput:(struct CGSize)arg1 rotate:(long long)arg2;
- (id)getFilterImage:(long long)arg1;
- (float)clipValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (int)strideNumber:(int)arg1;
- (struct CGSize)strideSize:(struct CGSize)arg1;
- (void)setCustomRenderOutputFormat:(long long)arg1;
- (void)setWaterMarkImage:(id)arg1 frame:(struct CGRect)arg2;
- (void)setWaterMark:(id)arg1;
- (void)setGreenScreenFile:(id)arg1;
- (void)setThinShoulderLevel:(float)arg1;
- (void)setThinBodyLevel:(float)arg1;
- (void)setThinWaistLevel:(float)arg1;
- (void)setLongLegLevel:(float)arg1;
- (void)setLipsThicknessLevel:(float)arg1;
- (void)setNosePositionLevel:(float)arg1;
- (void)setNoseWingLevel:(float)arg1;
- (void)setMouthShapeLevel:(float)arg1;
- (void)setEyeAngleLevel:(float)arg1;
- (void)setEyeDistanceLevel:(float)arg1;
- (void)setForeheadLevel:(float)arg1;
- (void)setSmileLinesRemoveLevel:(float)arg1;
- (void)setPounchRemoveLevel:(float)arg1;
- (void)setWrinkleRemoveLevel:(float)arg1;
- (void)setToothWhitenLevel:(float)arg1;
- (void)setEyeLightenLevel:(float)arg1;
- (void)setMotionMute:(_Bool)arg1;
- (void)setMotionTemplate:(id)arg1;
- (void)setNoseSlimLevel:(float)arg1;
- (void)setFaceShortLevel:(float)arg1;
- (void)setChinLevel:(float)arg1;
- (void)setFaceVLevel:(float)arg1;
- (void)setFaceBeautyLevel:(float)arg1;
- (void)setFaceSlimLevel:(float)arg1;
- (void)setEyeScaleLevel:(float)arg1;
- (void)setGausBlurLevel:(float)arg1;
- (void)setFilterMixLevel:(float)arg1;
- (void)setFilterUIImage:(id)arg1;
- (void)setFilterImage:(id)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setBeautyStyle:(long long)arg1;
- (void)onDetectFacePoints:(id)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)setFilterParam;
- (void)initFilterParam;
- (int)processFrame:(char *)arg1 width:(long long)arg2 height:(long long)arg3 orientation:(long long)arg4 inputFormat:(long long)arg5 outputFormat:(long long)arg6;
- (int)processFrame:(id)arg1 outputFormat:(long long)arg2;
- (void)outputByte;
- (void)copyDataToSampleBuffer:(char *)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 bufferSize:(struct CGSize)arg3 format:(long long)arg4;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(long long)arg1 bufferSize:(struct CGSize)arg2 fromPool:(struct __CVPixelBufferPool *)arg3;
- (struct __CVPixelBufferPool *)createBufferPool:(long long)arg1 bufferSize:(struct CGSize)arg2;
- (struct opaqueCMSampleBuffer *)createEncodeSampleBuffer:(char *)arg1 bufferSize:(struct CGSize)arg2;
- (struct opaqueCMSampleBuffer *)createRenderSampleBuffer:(char *)arg1 bufferSize:(struct CGSize)arg2 outputFormat:(long long)arg3;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(char *)arg1 bufferSize:(struct CGSize)arg2 outputFormat:(long long)arg3 bufferPool:(struct __CVPixelBufferPool *)arg4;
- (void)reportStatusInfo;
- (void)renderOutputSampleBuffer;
- (void)outputSampleBuffer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

