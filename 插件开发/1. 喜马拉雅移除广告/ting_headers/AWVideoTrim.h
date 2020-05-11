//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVVideoCompositionValidationHandling-Protocol.h"

@class AWAVAssetExportSession, NSError, NSString;

@interface AWVideoTrim : NSObject <AVVideoCompositionValidationHandling>
{
    NSString *_videoPath;
    double _startTime;
    double _endTime;
    AWAVAssetExportSession *_session;
    struct AVFormatContext *_ifmtCtx;
    struct AVBSFContext *_audioBsfCtx;
    struct AVStream *_bestVideoSt;
    struct AVStream *_bestAudioSt;
    NSError *_error;
    NSString *_ext;
    NSString *_watermark;
    struct CGRect _watermarkRect;
}

@property(nonatomic) struct CGRect watermarkRect; // @synthesize watermarkRect=_watermarkRect;
@property(copy, nonatomic) NSString *watermark; // @synthesize watermark=_watermark;
@property(readonly, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelExport;
- (void)exportAsynchronouslyWithMovPath:(id)arg1 audioPath:(id)arg2 finalPath:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)arg2 layerInstruction:(id)arg3 asset:(id)arg4;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)arg2;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingEmptyTimeRange:(CDStruct_e83c9415)arg2;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidValueForKey:(id)arg2;
- (id)insertTrack:(id)arg1 toComposition:(id)arg2 mediaType:(id)arg3 preferredTrackID:(int)arg4 insertTimeRange:(CDStruct_e83c9415)arg5 atTime:(CDStruct_1b6d18a9)arg6 error:(id *)arg7;
- (id)getAssetTrackWithMediaType:(id)arg1 asset:(id)arg2;
- (id)preprocessWithRemuxOutPath:(id)arg1 clipAudioOutPath:(id)arg2;
@property(readonly, nonatomic) long long needRemux;
- (id)initWithPath:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

