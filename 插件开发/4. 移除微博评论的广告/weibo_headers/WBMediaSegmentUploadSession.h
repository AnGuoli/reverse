//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSProgressReporting-Protocol.h"

@class NSDictionary, NSError, NSProgress, NSString, WBMediaItemUploadFlowSessionLogger, WBMediaUploadChunkDetail, WBMediaUploadSessionSettings, WBUploadTimer, WBUploadURLSessionManager;
@protocol WBMediaSegmentUploadSessionDelegate, WBMediaUploadSessionUploadToken, WBUploadURLSessionTask;

@interface WBMediaSegmentUploadSession : NSObject <NSProgressReporting>
{
    struct {
        unsigned int finished;
        unsigned int cancelled;
        unsigned int failed;
    } _flags;
    CDStruct_4717d1f1 _optionalConfig;
    unsigned long long _uploadRequestRetryCount;
    NSProgress *_progress;
    WBMediaUploadChunkDetail *_segmentDetail;
    id <WBMediaSegmentUploadSessionDelegate> _delegate;
    WBUploadURLSessionManager *_networkClient;
    WBMediaUploadSessionSettings *_settings;
    id <WBMediaUploadSessionUploadToken> _uploadToken;
    WBMediaItemUploadFlowSessionLogger *_logger;
    NSDictionary *_segmentUserInfo;
    id <WBUploadURLSessionTask> _task;
    NSError *_currentError;
    long long _uploadRetryPendingCount;
    WBUploadTimer *_timer;
}

@property(retain, nonatomic) WBUploadTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long uploadRetryPendingCount; // @synthesize uploadRetryPendingCount=_uploadRetryPendingCount;
@property(retain, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(retain, nonatomic) id <WBUploadURLSessionTask> task; // @synthesize task=_task;
@property(retain, nonatomic) NSDictionary *segmentUserInfo; // @synthesize segmentUserInfo=_segmentUserInfo;
@property(retain, nonatomic) WBMediaItemUploadFlowSessionLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <WBMediaUploadSessionUploadToken> uploadToken; // @synthesize uploadToken=_uploadToken;
@property(retain, nonatomic) WBMediaUploadSessionSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) WBUploadURLSessionManager *networkClient; // @synthesize networkClient=_networkClient;
@property(nonatomic) __weak id <WBMediaSegmentUploadSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBMediaUploadChunkDetail *segmentDetail; // @synthesize segmentDetail=_segmentDetail;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_finishWithMeasurement:(id)arg1 error:(id)arg2;
- (void)uploadRetry;
- (void)cancelUpload;
- (void)_sendUploadRequest;
- (void)startUpload;
- (id)_chunkData;
- (void)dealloc;
- (id)initWithSegment:(id)arg1 networkClient:(id)arg2 uploadSettings:(id)arg3 uploadToken:(id)arg4 optionalConfig:(CDStruct_4717d1f1)arg5 logger:(id)arg6 segmentUserInfo:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

