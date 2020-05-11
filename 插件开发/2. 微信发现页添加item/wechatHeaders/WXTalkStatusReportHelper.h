//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface WXTalkStatusReportHelper : MMObject <PBMessageObserverDelegate>
{
    unsigned int _openWXTalkModeTime;
    unsigned int _startTalkingTime;
    unsigned int _startGetMicTime;
    unsigned int _getMicCount;
    unsigned int _getMicSucCount;
    unsigned int _getMicFailCount;
    double _openModeUseTime;
    double _openModeAndOpenEngineUsedTime;
    unsigned int _openModeResult;
    unsigned int _totalTalkingTime;
    double _getMicTotalTime;
    unsigned int _sendInviteTimes;
    unsigned int _offlineReConnectTimes;
    unsigned int _changeNetWorkReConTimes;
    unsigned int _isEngineError;
    unsigned int _getRoomMemberCGI;
    unsigned int _systemMsgErrorCount;
    unsigned int _isBeKickedOut;
    int _errCode;
    int _talkingTimeDistributed[10];
    _Bool _getMicResult;
    _Bool _isGettingMic;
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWXTalkStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)LogReportErrorCode:(int)arg1;
- (void)LogReportOpenEngineOk;
- (void)LogReportBeKickedOut;
- (void)LogReportSystemMsgError;
- (void)LogReportEngineError;
- (void)LogReportChangeNetWorkReConnect;
- (void)LogReportOfflineReConnect;
- (void)LogReportWXTalkInvite;
- (void)LogReportGiveupMic;
- (void)distributeTalkingTime:(int)arg1;
- (void)LogReportGetMicResult:(_Bool)arg1;
- (void)LogReportGetMic;
- (void)LogReportOpenWXTalkModeResult:(_Bool)arg1;
- (void)LogReportCloseWXTalkMode:(id)arg1 RoomName:(id)arg2 RoomId:(int)arg3 RoomKey:(long long)arg4;
- (void)sendStatusReportRequest:(id)arg1;
- (void)LogReportOpenWXTalkMode;
- (id)genReportLog:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3;
- (void)resetData;

@end

