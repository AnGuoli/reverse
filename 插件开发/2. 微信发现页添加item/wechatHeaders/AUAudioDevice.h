//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class MMTimer, NSObject, NSRecursiveLock, NSString, PCMAudioFile;
@protocol AUAudioDataSource, OS_dispatch_queue;

@interface AUAudioDevice : MMService <WCAudioSessionExt, MMServiceProtocol>
{
    struct {
        struct OpaqueAudioComponentInstance *ioUnit;
        struct AudioStreamBasicDescription inputDataFormat;
        struct AudioStreamBasicDescription outputDataFormat;
        id <AUAudioDataSource> recordDS;
        id <AUAudioDataSource> playDS;
        unsigned int volumeFactor;
        _Bool isRunning;
    } mAUState;
    int mWillWorkMode;
    int mWorkMode;
    int mBizMode;
    int mAudioUnitSubType;
    int mInSamplerate;
    int mInChannels;
    int mInFrameSize;
    int mOutChannels;
    int mOutSamplerate;
    int mOutFrameSize;
    char *pRecBuff;
    int mRBLeft;
    char *pPlayBuff;
    int mPBLeft;
    _Bool bMicrophoneMute;
    _Bool bSpeakerphone;
    _Bool bEnableProximity;
    _Bool bSoundCardFlag;
    NSString *mOutFromName;
    PCMAudioFile *mOutPCMFile;
    PCMAudioFile *mRecordPCMFile;
    _Bool mIsNeedRestartAudioTalk;
    _Bool mHasiOS7UsedVoip;
    _Bool bFirstEnterRecord;
    _Bool bFirstEnterPlay;
    unsigned long long llLastReocrdTime;
    unsigned long long llLastPlayTime;
    NSRecursiveLock *m_audioSessionLock;
    NSRecursiveLock *m_audioPlayLock;
    NSObject<OS_dispatch_queue> *m_audioSessionQueue;
    _Bool m_isForPstn;
    _Bool bEnableRmIO;
    _Bool bFirstMediaServiceReset;
    _Bool _isUsingExternalAudioDevice;
    int audioDevErrCode;
    int audioRecordingCallbackNum;
    int iMediaServiceResetCnt;
    int _audioRecordStateErrorCnt;
    int _voipModeSessionCount;
    MMTimer *mMeterTimer;
    id <AUAudioDataSource> dataSource;
    unsigned long long mLastMediaSrvResetTime;
    NSRecursiveLock *_m_audioPlayLock;
}

@property(retain, nonatomic) NSRecursiveLock *m_audioPlayLock; // @synthesize m_audioPlayLock=_m_audioPlayLock;
@property(nonatomic) int voipModeSessionCount; // @synthesize voipModeSessionCount=_voipModeSessionCount;
@property(nonatomic) _Bool isUsingExternalAudioDevice; // @synthesize isUsingExternalAudioDevice=_isUsingExternalAudioDevice;
@property(nonatomic) int audioRecordStateErrorCnt; // @synthesize audioRecordStateErrorCnt=_audioRecordStateErrorCnt;
@property(nonatomic) unsigned long long mLastMediaSrvResetTime; // @synthesize mLastMediaSrvResetTime;
@property(nonatomic) _Bool bFirstMediaServiceReset; // @synthesize bFirstMediaServiceReset;
@property(nonatomic) int iMediaServiceResetCnt; // @synthesize iMediaServiceResetCnt;
@property(nonatomic) _Bool bEnableRmIO; // @synthesize bEnableRmIO;
@property(nonatomic) int audioRecordingCallbackNum; // @synthesize audioRecordingCallbackNum;
@property(nonatomic) int audioDevErrCode; // @synthesize audioDevErrCode;
@property(retain, nonatomic) NSRecursiveLock *m_audioSessionLock; // @synthesize m_audioSessionLock;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) int workMode; // @synthesize workMode=mWorkMode;
@property(nonatomic) __weak id <AUAudioDataSource> dataSource; // @synthesize dataSource;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calRmsAndNotifyWithBuff:(char *)arg1 andSampleNum:(int)arg2;
- (void)checkExternalAudioDeviceState;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)ResetAudioRecordStateErrorCnt;
- (int)getWorkMode;
- (_Bool)isVoIPPlaying;
- (_Bool)isAudioRecording;
- (_Bool)isAudioPlaying;
- (_Bool)isRunning;
- (void)ChangeToCategory:(int)arg1;
- (void)StopForVoIP;
- (void)StopAndNotifyUIPause;
- (void)StopAndNotifyUIStop;
- (void)Stop;
- (void)RestartTalkAndNotifyUIRestart;
- (_Bool)Restart;
- (void)activeMixWithOtherAudio;
- (void)StartRecordAndPlayForCheckVoipMic;
- (void)StartRecordAndPlayForOpenVoice;
- (void)StartRecordAndPlayForMuTalk;
- (void)StartRecordAndPlayForPSTN;
- (void)StartRecordAndPlayForVoIP;
- (void)StartRecordAndPlay;
- (_Bool)StartPlay;
- (_Bool)StartRecord;
- (void)setCaptureToFileFrom:(id)arg1;
- (void)UnPluginHeadset;
- (void)PluginHeadset;
- (void)disableProximity;
- (void)enableProximity;
- (void)proximityChange:(id)arg1;
- (void)setVolumeFactor:(unsigned int)arg1;
- (_Bool)isUsingWirelessDevice;
- (_Bool)isUsingLineDevice;
- (_Bool)isUsingEarDevice;
- (_Bool)getSpeakerphone;
- (_Bool)getSoundCardFlag;
- (void)setSoundCardFlag:(_Bool)arg1;
- (void)setSpeakerphone:(_Bool)arg1;
- (void)ResetMediaServiceCnt;
- (void)setEableRmIOFlag:(int)arg1;
- (void)setMicrophoneMute:(_Bool)arg1;
- (int)getPlayChannels;
- (int)setPlayDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (int)setRecDataFormat:(int)arg1 Channels:(int)arg2 Duration:(int)arg3;
- (void)mediaServiceReset:(id)arg1;
- (void)mediaServiceFail:(id)arg1;
- (void)dealloc;
- (id)init;
- (double)getVolumnMeter;
- (void)delayRestartTalk;
- (void)restartTalk;
- (void)pauseTalk;
- (void)InputMicphoneSelection:(_Bool)arg1;
- (void)StopSession;
- (_Bool)StartSessionWithWorkMode:(int)arg1;
- (void)VoipCheckRecordStateWithSessionCount:(int)arg1;
- (void)TimerCheckMeter;
- (void)SetOutputCallback:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetInputCallback:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetOutputDataFormat:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetInputDataFormat:(struct OpaqueAudioComponentInstance *)arg1;
- (void)SetDataFormat:(struct AudioStreamBasicDescription *)arg1 SampleRate:(int)arg2 ChannelPerFrame:(int)arg3;
- (void)SetOutputIOEnable:(struct OpaqueAudioComponentInstance *)arg1 enabled:(_Bool)arg2;
- (void)SetInputIOEnable:(struct OpaqueAudioComponentInstance *)arg1 enabled:(_Bool)arg2;
- (void)CloseVoiceAGC:(struct OpaqueAudioComponentInstance *)arg1;
- (void)OpenVoiceAGC:(struct OpaqueAudioComponentInstance *)arg1;
- (void)CloseVoiceProcess:(struct OpaqueAudioComponentInstance *)arg1;
- (void)OpenVoiceProcess:(struct OpaqueAudioComponentInstance *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

