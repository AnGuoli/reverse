//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class InfoReportParam, NSLock, NSString;

@interface PlayerInformationReport : NSObject
{
    NSLock *mlock;
    int mLastEvent;
    NSString *mHost;
    _Bool _mCanSend;
    InfoReportParam *_mInfoReportParam;
}

@property(retain, nonatomic) InfoReportParam *mInfoReportParam; // @synthesize mInfoReportParam=_mInfoReportParam;
@property _Bool mCanSend; // @synthesize mCanSend=_mCanSend;
- (void).cxx_destruct;
- (void)sendUrl:(id)arg1;
- (void)sendDownloadErrorInfo:(id)arg1 errorCode:(int)arg2 requestId:(id)arg3;
- (void)sendDownloadPrepareEndInfo:(id)arg1;
- (void)sendDownloadPrepareStartInfo;
- (void)sendDeleteDownloadInfo:(_Bool)arg1;
- (void)sendFinishDownloadInfo;
- (void)sendStopDownloadInfo;
- (void)sendStartDownloadInfo:(id)arg1 interruptDownload:(_Bool)arg2 encrypted:(_Bool)arg3;
- (void)sendCachingSuccessInfo:(float)arg1;
- (void)sendStartCachingInfo:(float)arg1 cachSize:(int)arg2;
- (void)sendGetUrlEndInfo;
- (void)sendStartGetUrlInfo;
- (void)sendReplayEndInfo:(_Bool)arg1;
- (void)sendReplayStartInfo;
- (void)sendChangeQualityEndInfo:(id)arg1 AfterQuality:(id)arg2;
- (void)sendChangeQualityStartInfo;
- (void)sendLeaveFullScreenInfo;
- (void)sendEnterFullScreenInfo;
- (int)sendDelayInfo:(int)arg1 art:(int)arg2;
- (int)sendDownloadInfo:(long long)arg1 downloadTime:(long long)arg2 bitrate:(double)arg3;
- (int)sendHeartBeat:(int)arg1 timerInterval:(int)arg2;
- (int)sendPlayErrorInfo:(int)arg1 error_code:(int)arg2 errorDescrp:(id)arg3 eagleID:(id)arg4 cdnVia:(id)arg5 cdnError:(id)arg6;
- (int)sendBufferingEndInfo:(int)arg1 costTime:(int)arg2;
- (int)sendBufferingStartInfo:(int)arg1;
- (int)sendSeekEndInfo:(int)arg1 costTime:(int)arg2 eagleID:(id)arg3 cdnVia:(id)arg4;
- (int)sendSeekStartInfo:(int)arg1 seekTime:(int)arg2 eagleID:(id)arg3 cdnVia:(id)arg4;
- (int)sendPauseToPlayInfo:(int)arg1 costTime:(int)arg2;
- (int)sendPauseInfo:(int)arg1;
- (int)sendStopInfo:(int)arg1;
- (int)sendFinishInfo:(int)arg1;
- (int)sendPlayStartInfo:(int)arg1 connect_time:(double)arg2 ffprobe_time:(double)arg3 download_time:(double)arg4 width:(int)arg5 height:(int)arg6 eagleID:(id)arg7 cdnVia:(id)arg8 openTime:(id)arg9 encrypted:(_Bool)arg10;
- (void)sendStartPlay;
- (id)urlEncode:(id)arg1;
- (id)init;

@end

