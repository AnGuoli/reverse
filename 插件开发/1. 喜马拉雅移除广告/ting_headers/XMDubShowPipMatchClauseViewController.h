//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVAudioPlayer, AWAVAssetExportSession, CDZButton, LOTAnimationView, NSArray, NSIndexPath, NSMutableArray, NSString, UIButton, UITableView, UIView, XMAEExtAudioFilePlayer, XMDubPipProgressView, XMDubPipSlider, XMDubPipVideoView, XMDubSelectRoleView, XMDubShowChanllengeModel, XMDubShowPipMatchClauseModel, XMDubShowPipRecordProcess, XMDubVideoInfo, XMRecordModel, XMTimer;

@interface XMDubShowPipMatchClauseViewController : XMBaseVC <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _recordOvertimed;
    _Bool _mergeSubTitleFinish;
    _Bool _visible;
    _Bool _finishRecordAll;
    XMDubShowChanllengeModel *_challenge;
    XMDubVideoInfo *_videoInfo;
    CDUnknownBlockType _beginRec;
    CDUnknownBlockType _reRecAction;
    XMDubPipVideoView *_playerView;
    XMDubPipSlider *_pipSlider;
    UITableView *_tableView;
    NSMutableArray *_showDotInfos;
    NSMutableArray *_cellModel;
    XMDubShowPipMatchClauseModel *_currentClauseModel;
    NSIndexPath *_currentIndexPath;
    NSString *_recListenFileName;
    double _recordVolume;
    double _bgmVolume;
    AVAudioPlayer *_beepPlayer;
    XMAEExtAudioFilePlayer *_bgmPlayer;
    XMAEExtAudioFilePlayer *_voicePlayer;
    XMRecordModel *_recordModel;
    double _recordCrtTs;
    NSString *_recordingFilePath;
    double _trimStartTime;
    double _trimEndTime;
    CDZButton *_recRoleButton;
    UIButton *_currentRoleButton;
    XMDubSelectRoleView *_roleView;
    long long _selectedIndex;
    NSString *_relatedId;
    UIButton *_doneButton;
    XMTimer *_mergeTimer;
    AWAVAssetExportSession *_pipExporter;
    XMDubPipProgressView *_pipProgressView;
    UIView *_backAlert;
    XMDubShowPipRecordProcess *_pipProcess;
    NSArray *_allVoiceFileItems;
    NSArray *_blankVoiceFileItems;
    LOTAnimationView *_recReadyLotView;
    XMTimer *_recReadyTimer;
}

@property(retain, nonatomic) XMTimer *recReadyTimer; // @synthesize recReadyTimer=_recReadyTimer;
@property(retain, nonatomic) LOTAnimationView *recReadyLotView; // @synthesize recReadyLotView=_recReadyLotView;
@property(nonatomic) _Bool finishRecordAll; // @synthesize finishRecordAll=_finishRecordAll;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSArray *blankVoiceFileItems; // @synthesize blankVoiceFileItems=_blankVoiceFileItems;
@property(retain, nonatomic) NSArray *allVoiceFileItems; // @synthesize allVoiceFileItems=_allVoiceFileItems;
@property(retain, nonatomic) XMDubShowPipRecordProcess *pipProcess; // @synthesize pipProcess=_pipProcess;
@property(retain, nonatomic) UIView *backAlert; // @synthesize backAlert=_backAlert;
@property(retain, nonatomic) XMDubPipProgressView *pipProgressView; // @synthesize pipProgressView=_pipProgressView;
@property(retain, nonatomic) AWAVAssetExportSession *pipExporter; // @synthesize pipExporter=_pipExporter;
@property(retain, nonatomic) XMTimer *mergeTimer; // @synthesize mergeTimer=_mergeTimer;
@property(nonatomic) _Bool mergeSubTitleFinish; // @synthesize mergeSubTitleFinish=_mergeSubTitleFinish;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSString *relatedId; // @synthesize relatedId=_relatedId;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) XMDubSelectRoleView *roleView; // @synthesize roleView=_roleView;
@property(retain, nonatomic) UIButton *currentRoleButton; // @synthesize currentRoleButton=_currentRoleButton;
@property(retain, nonatomic) CDZButton *recRoleButton; // @synthesize recRoleButton=_recRoleButton;
@property(nonatomic) double trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(nonatomic) double trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(retain, nonatomic) NSString *recordingFilePath; // @synthesize recordingFilePath=_recordingFilePath;
@property(nonatomic) double recordCrtTs; // @synthesize recordCrtTs=_recordCrtTs;
@property(retain, nonatomic) XMRecordModel *recordModel; // @synthesize recordModel=_recordModel;
@property(retain, nonatomic) XMAEExtAudioFilePlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
@property(retain, nonatomic) XMAEExtAudioFilePlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) AVAudioPlayer *beepPlayer; // @synthesize beepPlayer=_beepPlayer;
@property(nonatomic) _Bool recordOvertimed; // @synthesize recordOvertimed=_recordOvertimed;
@property(nonatomic) double bgmVolume; // @synthesize bgmVolume=_bgmVolume;
@property(nonatomic) double recordVolume; // @synthesize recordVolume=_recordVolume;
@property(copy, nonatomic) NSString *recListenFileName; // @synthesize recListenFileName=_recListenFileName;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) XMDubShowPipMatchClauseModel *currentClauseModel; // @synthesize currentClauseModel=_currentClauseModel;
@property(retain, nonatomic) NSMutableArray *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) NSMutableArray *showDotInfos; // @synthesize showDotInfos=_showDotInfos;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XMDubPipSlider *pipSlider; // @synthesize pipSlider=_pipSlider;
@property(retain, nonatomic) XMDubPipVideoView *playerView; // @synthesize playerView=_playerView;
@property(copy, nonatomic) CDUnknownBlockType reRecAction; // @synthesize reRecAction=_reRecAction;
@property(copy, nonatomic) CDUnknownBlockType beginRec; // @synthesize beginRec=_beginRec;
@property(retain, nonatomic) XMDubVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) XMDubShowChanllengeModel *challenge; // @synthesize challenge=_challenge;
- (void).cxx_destruct;
- (void)cleanResource;
- (void)showUnsaveAlert;
- (void)onMergeTimer;
- (void)stopMergeTimer;
- (void)startMergeTimer;
- (void)reRecordRightNow;
- (void)removeBlackFiles;
- (void)gotoDubshowEdit;
- (void)generateBlankVoiceFile;
- (void)mergeSubTitle;
- (void)startMerge;
- (void)p_handleDonePlayAction;
- (void)addDoneButton;
- (void)addRecReadyAnimationView;
- (void)setupDefaultRole;
- (void)reloadSrtUI;
- (void)p_updateSelectRole;
- (void)recordRoleButtonDidTap;
- (void)addRoleView;
- (void)updateCurrentCellRecordingTime:(double)arg1;
- (void)setCurrentCellRecordingStatus:(long long)arg1;
- (void)showOverTimeAlert;
- (void)stopRecordingWhileOverTime;
- (void)playBGM:(_Bool)arg1;
- (void)startRecorder;
- (void)updateVolume;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)audioSessionRouteChange;
- (void)onRecordInterruptStart;
- (void)setupNotifications;
- (void)triggerIndexCellWithStatus:(long long)arg1 indexPath:(id)arg2;
- (void)recordVideoView:(id)arg1 updatePlayStatus:(long long)arg2;
- (void)playListenRecFile:(_Bool)arg1;
- (void)updatePlayTime:(double)arg1;
- (void)recordVideoView:(id)arg1 updatePlayTime:(double)arg2;
- (void)configActionBtnForPlay;
- (void)startCameraCapture;
- (void)startVoiceAndBGMRecording;
- (void)stopRecordingWithAction:(CDUnknownBlockType)arg1;
- (void)pauseAllRecording:(CDUnknownBlockType)arg1;
- (void)pauseVoiceAndBGMRecording;
- (void)startRecording;
- (void)createRecordIndex;
- (void)doRecordButtonOnTap;
- (void)onRecReadyTimer;
- (void)hidePipMatchLoading;
- (void)showPipMatchLoading;
- (void)recordButtonOnTap;
- (void)removeCurrentRecFile;
- (void)onRecordByUser;
- (void)handleListenAction;
- (void)handleRecAction;
- (void)handlePlayAction;
- (void)p_handleDidTableViewCellWithIndex:(id)arg1;
- (void)pauseListenRec;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addContentView;
- (void)addVideoProgressBar;
- (void)addVideoView;
- (double)height;
- (double)width;
- (void)onVideoBack;
- (void)customInit;
- (void)loadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

