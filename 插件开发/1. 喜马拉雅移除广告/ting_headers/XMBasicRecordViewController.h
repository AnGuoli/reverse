//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UITextViewDelegate-Protocol.h"
#import "XMActionSheetViewDelegate-Protocol.h"
#import "XMAppAudioAction-Protocol.h"
#import "XMBasicRecordBGMPanelDelegate-Protocol.h"
#import "XMBasicRecordPreviewEditViewControllerDelegate-Protocol.h"
#import "XMBasicRecordSegmentNavViewDelegate-Protocol.h"
#import "XMFloatTipViewDelegate-Protocol.h"
#import "XMRecordBGMControlViewDelegate-Protocol.h"
#import "XMRecordBGMusicDelegate-Protocol.h"
#import "XMRecordEchoPanelDelegate-Protocol.h"
#import "XMRecordOneshotPanelDelegate-Protocol.h"
#import "XMRecordVoiceBeautifyFilterPanelDelegate-Protocol.h"
#import "XMRecordVoiceFilterPanelDelegate-Protocol.h"

@class AVAudioPlayer, CDZButton, MBProgressHUD, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, UIButton, UILabel, UIView, XMActivityItem, XMAnchorSkillView, XMAudioFilter, XMBasicRecordBGMPanel, XMBasicRecordSegmentNavView, XMBasicRecordTextEditView, XMBasicRecordTopicView, XMEchoFilter, XMEqualizerFilter, XMNetSoundItem, XMNoviceTipView, XMReadingTextDisplayView, XMRealNameReminderView, XMRecButton, XMRecordBGMControlView, XMRecordBGMHistManager, XMRecordEchoPanel, XMRecordFloatPanel, XMRecordIndex, XMRecordOneshotPanel, XMRecordSoundWaveView, XMRecordTimeView, XMRecordVoiceBeautifyFilterPanel, XMRecordVoiceFilterPanel;
@protocol XMBasicRecordViewControllerDelegate;

@interface XMBasicRecordViewController : XMBaseViewController <XMBasicRecordSegmentNavViewDelegate, UITextViewDelegate, XMRecordBGMusicDelegate, XMActionSheetViewDelegate, XMFloatTipViewDelegate, XMBasicRecordBGMPanelDelegate, XMBasicRecordPreviewEditViewControllerDelegate, XMRecordOneshotPanelDelegate, XMRecordEchoPanelDelegate, XMRecordVoiceFilterPanelDelegate, XMRecordBGMControlViewDelegate, XMAppAudioAction, XMRecordVoiceBeautifyFilterPanelDelegate>
{
    _Bool _headsetPluggedIn;
    double _durationBeforeClipping;
    _Bool _needToAddNotifications;
    _Bool _showingRecordBottomView;
    _Bool _needUpdateBGM;
    _Bool _needAutoPlayBgm;
    _Bool _everRecorded;
    _Bool _recoredEverClipped;
    _Bool _headsetEverPlugged;
    _Bool _bgmEverAdded;
    _Bool _showSelectCommunity;
    _Bool _hasRequestedReadingInfo;
    _Bool _editFinished;
    _Bool _recordOvertimed;
    _Bool _dashboardNeedUpdate;
    _Bool _recordingBGM;
    _Bool _recordingVoice;
    XMActivityItem *_activityItem;
    NSDictionary *_extra;
    NSDictionary *_qunFengDataDict;
    NSString *_srcInfoStr;
    NSString *_topicTitle;
    unsigned long long _topicId;
    id <XMBasicRecordViewControllerDelegate> _delegate;
    double _recordDuration;
    NSArray *_typeConfigModels;
    XMBasicRecordSegmentNavView *_navView;
    XMRealNameReminderView *_realNameReminderView;
    NSString *_currentType;
    double _keyboardHeight;
    XMBasicRecordTextEditView *_editTextView;
    XMBasicRecordTopicView *_topicView;
    long long _randomId;
    XMReadingTextDisplayView *_readingView;
    NSDictionary *_readingTextData;
    CDZButton *_readingViewChangeBtn;
    NSString *_lastSavedText;
    XMRecordTimeView *_timeView;
    UIView *_upperContainer;
    XMNoviceTipView *_voiceNotOpenTip;
    XMNoviceTipView *_bgmNotOpentipView;
    XMAnchorSkillView *_anchorSkillView;
    UIView *_actionBtnContainer;
    UIButton *_bgmBtn;
    UIButton *_oneShotBtn;
    UIButton *_voiceBeautifyBtn;
    UIButton *_voiceFilterBtn;
    XMRecButton *_recordButton;
    UILabel *_recordButtonLabel;
    UIButton *_recPreviewButton;
    UIButton *_recSaveButton;
    UIView *_bgmControlBgView;
    XMRecordBGMControlView *_bgmControlView;
    XMBasicRecordBGMPanel *_bgmPanel;
    XMRecordOneshotPanel *_oneshotPanel;
    XMRecordEchoPanel *_echoPanel;
    XMRecordVoiceBeautifyFilterPanel *_voiceBeatufiyPanel;
    XMRecordVoiceFilterPanel *_voiceFilterPanel;
    XMRecordFloatPanel *_currentPanel;
    unsigned long long _state;
    XMRecordIndex *_recordIndex;
    XMNetSoundItem *_bgMusicSelectitem;
    XMNetSoundItem *_recommendedForReadBgmItem;
    XMNetSoundItem *_selectedForReadBgmItem;
    double _bgPlayTime;
    XMRecordBGMHistManager *_histManager;
    NSArray *_oneshotAudioList;
    NSMutableArray *_bgmArray;
    XMAudioFilter *_currentVoiceFilter;
    XMEchoFilter *_currentEchoFilter;
    XMEqualizerFilter *_currentEqualizerFilter;
    unsigned long long _timerRunTimes;
    NSTimer *_timer;
    NSTimer *_recordTimer;
    XMRecordSoundWaveView *_waveView;
    NSMutableArray *_dataTempArray;
    NSMutableArray *_validLevelMeters;
    NSMutableArray *_values;
    AVAudioPlayer *_pilotPlayer;
    NSArray *_musicArr;
    MBProgressHUD *_downloadHud;
    NSString *_oldDirectory;
    NSString *_voiceBeautifyTitle;
    double _lastRecordDuration;
}

@property(nonatomic) double lastRecordDuration; // @synthesize lastRecordDuration=_lastRecordDuration;
@property(retain, nonatomic) NSString *voiceBeautifyTitle; // @synthesize voiceBeautifyTitle=_voiceBeautifyTitle;
@property(retain, nonatomic) NSString *oldDirectory; // @synthesize oldDirectory=_oldDirectory;
@property(retain, nonatomic) MBProgressHUD *downloadHud; // @synthesize downloadHud=_downloadHud;
@property(retain, nonatomic) NSArray *musicArr; // @synthesize musicArr=_musicArr;
@property(retain, nonatomic) AVAudioPlayer *pilotPlayer; // @synthesize pilotPlayer=_pilotPlayer;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSMutableArray *validLevelMeters; // @synthesize validLevelMeters=_validLevelMeters;
@property(retain, nonatomic) NSMutableArray *dataTempArray; // @synthesize dataTempArray=_dataTempArray;
@property(retain, nonatomic) XMRecordSoundWaveView *waveView; // @synthesize waveView=_waveView;
@property(retain, nonatomic) NSTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long timerRunTimes; // @synthesize timerRunTimes=_timerRunTimes;
@property(retain, nonatomic) XMEqualizerFilter *currentEqualizerFilter; // @synthesize currentEqualizerFilter=_currentEqualizerFilter;
@property(retain, nonatomic) XMEchoFilter *currentEchoFilter; // @synthesize currentEchoFilter=_currentEchoFilter;
@property(retain, nonatomic) XMAudioFilter *currentVoiceFilter; // @synthesize currentVoiceFilter=_currentVoiceFilter;
@property(retain, nonatomic) NSMutableArray *bgmArray; // @synthesize bgmArray=_bgmArray;
@property(retain, nonatomic) NSArray *oneshotAudioList; // @synthesize oneshotAudioList=_oneshotAudioList;
@property(retain, nonatomic) XMRecordBGMHistManager *histManager; // @synthesize histManager=_histManager;
@property(nonatomic) double bgPlayTime; // @synthesize bgPlayTime=_bgPlayTime;
@property(retain, nonatomic) XMNetSoundItem *selectedForReadBgmItem; // @synthesize selectedForReadBgmItem=_selectedForReadBgmItem;
@property(retain, nonatomic) XMNetSoundItem *recommendedForReadBgmItem; // @synthesize recommendedForReadBgmItem=_recommendedForReadBgmItem;
@property(retain, nonatomic) XMNetSoundItem *bgMusicSelectitem; // @synthesize bgMusicSelectitem=_bgMusicSelectitem;
@property(retain, nonatomic) XMRecordIndex *recordIndex; // @synthesize recordIndex=_recordIndex;
@property(nonatomic) _Bool recordingVoice; // @synthesize recordingVoice=_recordingVoice;
@property(nonatomic) _Bool recordingBGM; // @synthesize recordingBGM=_recordingBGM;
@property(nonatomic) _Bool dashboardNeedUpdate; // @synthesize dashboardNeedUpdate=_dashboardNeedUpdate;
@property(nonatomic) _Bool recordOvertimed; // @synthesize recordOvertimed=_recordOvertimed;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) XMRecordFloatPanel *currentPanel; // @synthesize currentPanel=_currentPanel;
@property(retain, nonatomic) XMRecordVoiceFilterPanel *voiceFilterPanel; // @synthesize voiceFilterPanel=_voiceFilterPanel;
@property(retain, nonatomic) XMRecordVoiceBeautifyFilterPanel *voiceBeatufiyPanel; // @synthesize voiceBeatufiyPanel=_voiceBeatufiyPanel;
@property(retain, nonatomic) XMRecordEchoPanel *echoPanel; // @synthesize echoPanel=_echoPanel;
@property(retain, nonatomic) XMRecordOneshotPanel *oneshotPanel; // @synthesize oneshotPanel=_oneshotPanel;
@property(retain, nonatomic) XMBasicRecordBGMPanel *bgmPanel; // @synthesize bgmPanel=_bgmPanel;
@property(retain, nonatomic) XMRecordBGMControlView *bgmControlView; // @synthesize bgmControlView=_bgmControlView;
@property(retain, nonatomic) UIView *bgmControlBgView; // @synthesize bgmControlBgView=_bgmControlBgView;
@property(retain, nonatomic) UIButton *recSaveButton; // @synthesize recSaveButton=_recSaveButton;
@property(retain, nonatomic) UIButton *recPreviewButton; // @synthesize recPreviewButton=_recPreviewButton;
@property(retain, nonatomic) UILabel *recordButtonLabel; // @synthesize recordButtonLabel=_recordButtonLabel;
@property(retain, nonatomic) XMRecButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIButton *voiceFilterBtn; // @synthesize voiceFilterBtn=_voiceFilterBtn;
@property(retain, nonatomic) UIButton *voiceBeautifyBtn; // @synthesize voiceBeautifyBtn=_voiceBeautifyBtn;
@property(retain, nonatomic) UIButton *oneShotBtn; // @synthesize oneShotBtn=_oneShotBtn;
@property(retain, nonatomic) UIButton *bgmBtn; // @synthesize bgmBtn=_bgmBtn;
@property(retain, nonatomic) UIView *actionBtnContainer; // @synthesize actionBtnContainer=_actionBtnContainer;
@property(retain, nonatomic) XMAnchorSkillView *anchorSkillView; // @synthesize anchorSkillView=_anchorSkillView;
@property(nonatomic) __weak XMNoviceTipView *bgmNotOpentipView; // @synthesize bgmNotOpentipView=_bgmNotOpentipView;
@property(retain, nonatomic) XMNoviceTipView *voiceNotOpenTip; // @synthesize voiceNotOpenTip=_voiceNotOpenTip;
@property(retain, nonatomic) UIView *upperContainer; // @synthesize upperContainer=_upperContainer;
@property(retain, nonatomic) XMRecordTimeView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) _Bool editFinished; // @synthesize editFinished=_editFinished;
@property(retain, nonatomic) NSString *lastSavedText; // @synthesize lastSavedText=_lastSavedText;
@property(retain, nonatomic) CDZButton *readingViewChangeBtn; // @synthesize readingViewChangeBtn=_readingViewChangeBtn;
@property(retain, nonatomic) NSDictionary *readingTextData; // @synthesize readingTextData=_readingTextData;
@property(nonatomic) _Bool hasRequestedReadingInfo; // @synthesize hasRequestedReadingInfo=_hasRequestedReadingInfo;
@property(retain, nonatomic) XMReadingTextDisplayView *readingView; // @synthesize readingView=_readingView;
@property(nonatomic) long long randomId; // @synthesize randomId=_randomId;
@property(retain, nonatomic) XMBasicRecordTopicView *topicView; // @synthesize topicView=_topicView;
@property(retain, nonatomic) XMBasicRecordTextEditView *editTextView; // @synthesize editTextView=_editTextView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) XMRealNameReminderView *realNameReminderView; // @synthesize realNameReminderView=_realNameReminderView;
@property(retain, nonatomic) XMBasicRecordSegmentNavView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) NSArray *typeConfigModels; // @synthesize typeConfigModels=_typeConfigModels;
@property(nonatomic) double recordDuration; // @synthesize recordDuration=_recordDuration;
@property(nonatomic) __weak id <XMBasicRecordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showSelectCommunity; // @synthesize showSelectCommunity=_showSelectCommunity;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *srcInfoStr; // @synthesize srcInfoStr=_srcInfoStr;
@property(retain, nonatomic) NSDictionary *qunFengDataDict; // @synthesize qunFengDataDict=_qunFengDataDict;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) XMActivityItem *activityItem; // @synthesize activityItem=_activityItem;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onLoginSuccessNotification;
- (void)openSkillUrl:(id)arg1;
- (void)XMFloatTipViewDidTap:(id)arg1;
- (void)setupAnchorSkillView:(id)arg1 url:(id)arg2;
- (void)requestAnchorSkill;
- (void)endPilotPlayIfNeed;
- (void)pilotPlayWithPath:(id)arg1 playFailed:(CDUnknownBlockType)arg2;
- (void)downloadMusicData:(id)arg1 downloadPath:(id)arg2;
- (void)pilotPlayWithTitle:(id)arg1;
- (void)updateNavView;
- (void)updateRecordButtonLabel;
- (void)setValue;
- (void)setDataValue:(double)arg1;
- (float)currentValueForlevelMeterVoiceLevel:(float *)arg1 BGMLevel:(float *)arg2;
- (void)updateViewInTime;
- (void)statisticPlayBGM:(_Bool)arg1;
- (void)recordActionStatistic:(id)arg1;
- (void)statisticStartRecord;
- (void)XMBasicRecordPreviewEditViewControllerFinishWithClip:(_Bool)arg1;
- (void)XMBasicRecordPreviewEditViewControllerResetRecord;
- (void)XMRecordVoiceBeautifyFilterPanelWillHide:(id)arg1;
- (void)initVoiceBeautifyFilterWithFilterName:(id)arg1;
- (void)XMRecordVoiceBeautifyFilterPanel:(id)arg1 filterName:(id)arg2;
- (void)cleanVoiceBeautifyFilterTitle;
- (void)XMRecordVoiceFilterPanelWillHide:(id)arg1;
- (void)XMRecordVoiceFilterPanel:(id)arg1 didChangeToVoiceFilter:(id)arg2 didChangeToEchoFilter:(id)arg3 filterName:(id)arg4;
- (void)cleanVoiceFilterTitle;
- (void)recordOneshotPanel:(id)arg1 didTapAudio:(id)arg2;
- (void)XMRecordBGMControlView:(id)arg1 didTapBGMButton:(id)arg2 play:(_Bool)arg3;
- (void)XMRecordBGMControlView:(id)arg1 didTapChangeBGMButton:(id)arg2;
- (void)xmRecordBGMControlView:(id)arg1 didChangeVolume:(double)arg2;
- (void)XMBasicRecordBGMPanel:(id)arg1 didChangeVolume:(double)arg2;
- (void)XMBasicRecordBGMPanel:(id)arg1 didTapDeleteBGM:(id)arg2;
- (void)XMBasicRecordBGMPanelDidTapAddBtn:(id)arg1;
- (void)XMBasicRecordBGMPanel:(id)arg1 didTapPlayBGM:(id)arg2;
- (void)XMBasicRecordSegmentNavViewOnSettingButtonClicked;
- (void)switchToType:(id)arg1;
- (void)XMBasicRecordSegmentNavViewSegmentButtonClickedWithType:(id)arg1;
- (void)editTextGoBackWithTextChange:(_Bool)arg1;
- (void)XMBasicRecordSegmentNavViewOnBackButtonClicked;
- (void)gotoAddBGMWithBehavior:(_Bool)arg1;
- (void)editFinishBtnDidTap;
- (void)gotoTextEdit;
- (void)prepareRecordIndexForTopic;
- (void)prepareRecordIndexForQunFengRead;
- (void)prepareRecordIndexForAnchorRead;
- (void)gotoPreview;
- (void)gotoSoundSaveVC;
- (void)showUnsaveAlert;
- (_Bool)checkOverTime;
- (void)showOverTimeAlert;
- (void)showFreeSpaceAlert;
- (void)showResumeRecordAlertClipped:(_Bool)arg1;
- (void)checkFreeSpaceToast;
- (void)checkMikeState;
- (void)reRecordRightNow;
- (void)deleteRecord;
- (void)addNetSound:(id)arg1;
- (void)loadSavedBGMList;
- (void)saveBGMList;
- (void)saveCurrentBGM;
- (void)deleteBackgroudMusic;
- (void)restoreBGM;
- (void)updateBGM:(id)arg1;
- (void)setupBGM;
- (void)stopUpdate;
- (void)startUpdate;
- (void)updateRecordTime;
- (void)stopRecordingWithAction:(CDUnknownBlockType)arg1;
- (void)stopAllRecording:(CDUnknownBlockType)arg1;
- (void)pauseAllRecording;
- (void)pauseAllRecording:(CDUnknownBlockType)arg1;
- (void)resetRecordInfo;
- (void)pauseBGMRecording;
- (void)pauseBGMRecording:(CDUnknownBlockType)arg1;
- (void)startBGMRecording;
- (void)pauseVoiceRecording;
- (void)pauseVoiceRecording:(CDUnknownBlockType)arg1;
- (void)startVoiceRecording;
- (void)startRecorder;
- (void)startRecording;
- (void)createRecordIndex;
- (void)showRecordingButtomView:(_Bool)arg1;
- (void)removeBGM;
- (void)resizeTextView;
- (void)showBGM;
- (void)showVoiceFilterPanel;
- (void)showVoiceBeautifyPanel;
- (void)showEchoPanel;
- (void)showOneshotPanel;
- (void)updateBGMPanel;
- (void)showBGMPanel;
- (void)recordPreviewButtonDidTap:(id)arg1;
- (void)recordSaveButtonDidTap:(id)arg1;
- (void)showVoiceNotOpenTipViewIfNeed;
- (void)showBgmNotOpenTipViewIfNeed;
- (void)recordButtonOnTap:(id)arg1;
- (void)voiceEffectBtnDidTap:(id)arg1;
- (void)beautifyBtnDidTap:(id)arg1;
- (void)oneshotBtnDidTap:(id)arg1;
- (void)bgmBtnDidTap:(id)arg1;
- (void)recordSavedToDraft:(id)arg1;
- (void)delayChangeVolumeView:(id)arg1;
- (void)onRecordVolumeChange:(id)arg1;
- (void)onRecordInterruptStart;
- (void)_onRouteChange;
- (void)onRecordOverTime;
- (void)setupNotifications;
- (void)loadMusicData;
- (void)requestVoiceFilterInfo;
- (void)downloadPresetBGM:(id)arg1;
- (void)requestQunFengReadingTextData;
- (void)requestReadingTextData;
- (_Bool)isFromAnchorRead;
- (void)delayDismiss;
- (void)viewDidLayoutSubviews;
- (void)setupRecordBtns;
- (void)setupActionButtons;
- (void)showRealNameReminder;
- (void)setupNavView;
- (void)setupRecord;
- (void)setupViews;
- (void)placeholderDidTap:(id)arg1;
- (void)setupReadingView;
- (void)setupTextEditView;
- (void)loadVoiceBeautifyType;
- (void)addKeyboarNotificaitons;
- (long long)overrideUserInterfaceStyle;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

