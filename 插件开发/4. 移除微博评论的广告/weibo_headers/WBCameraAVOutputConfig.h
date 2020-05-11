//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;

@interface WBCameraAVOutputConfig : NSObject <NSCopying>
{
    _Bool _shouldOptimizeForNetworkUse;
    unsigned char _needVideoOutput;
    unsigned char _allowTextureInput;
    unsigned char _needAudioOutput;
    unsigned char _ignoreFrameError;
    NSURL *_outputURL;
    NSString *_outputFileType;
    NSArray *_metadata;
    unsigned long long _targetWidth;
    unsigned long long _targetHeight;
    NSString *_targetFillMode;
    NSString *_targetVideoCodec;
    NSString *_targetVideoProfile;
    unsigned long long _targetVideoBitrate;
    unsigned long long _targetVideoMaxGopSize;
    unsigned long long _targetVideoFPS;
    id _shareEAGLContext;
    NSString *_targetAudioCodec;
    unsigned long long _targetAudioBitrate;
    unsigned long long _targetAudioChannels;
    unsigned long long _targetAudioSampleRate;
    struct CGAffineTransform _transform;
}

+ (_Bool)hevcEnabled;
+ (double)videoBitrate:(double)arg1 p1:(struct CGPoint)arg2 p2:(struct CGPoint)arg3;
+ (id)wb_defaultOutputConfigWithAsset:(id)arg1 videoDefinition:(long long)arg2;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) unsigned char ignoreFrameError; // @synthesize ignoreFrameError=_ignoreFrameError;
@property(nonatomic) unsigned long long targetAudioSampleRate; // @synthesize targetAudioSampleRate=_targetAudioSampleRate;
@property(nonatomic) unsigned long long targetAudioChannels; // @synthesize targetAudioChannels=_targetAudioChannels;
@property(nonatomic) unsigned long long targetAudioBitrate; // @synthesize targetAudioBitrate=_targetAudioBitrate;
@property(nonatomic) NSString *targetAudioCodec; // @synthesize targetAudioCodec=_targetAudioCodec;
@property(nonatomic) unsigned char needAudioOutput; // @synthesize needAudioOutput=_needAudioOutput;
@property(nonatomic) __weak id shareEAGLContext; // @synthesize shareEAGLContext=_shareEAGLContext;
@property(nonatomic) unsigned char allowTextureInput; // @synthesize allowTextureInput=_allowTextureInput;
@property(nonatomic) unsigned long long targetVideoFPS; // @synthesize targetVideoFPS=_targetVideoFPS;
@property(nonatomic) unsigned long long targetVideoMaxGopSize; // @synthesize targetVideoMaxGopSize=_targetVideoMaxGopSize;
@property(nonatomic) unsigned long long targetVideoBitrate; // @synthesize targetVideoBitrate=_targetVideoBitrate;
@property(copy, nonatomic) NSString *targetVideoProfile; // @synthesize targetVideoProfile=_targetVideoProfile;
@property(copy, nonatomic) NSString *targetVideoCodec; // @synthesize targetVideoCodec=_targetVideoCodec;
@property(nonatomic) NSString *targetFillMode; // @synthesize targetFillMode=_targetFillMode;
@property(nonatomic) unsigned long long targetHeight; // @synthesize targetHeight=_targetHeight;
@property(nonatomic) unsigned long long targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) unsigned char needVideoOutput; // @synthesize needVideoOutput=_needVideoOutput;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (id)getLogStatistics;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)h265EncodingSupported;
- (id)targetAVAudioCodecID;
- (id)targetVideoProfileLevel;
- (id)targetAVVideoCodec;
- (id)targetScalingMode;
- (id)outputAVFileType;

@end

