//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIView, XMDubShowChanllengeModel, XMDubVideoInfo, XMTimer;

@interface XMDubVideoDownloadViewController : XMBaseVC
{
    _Bool _pushImmediately;
    long long _requestType;
    long long _trackId;
    long long _videoId;
    long long _activityId;
    NSString *_srcChannel;
    XMDubShowChanllengeModel *_challenge;
    NSArray *_labels;
    unsigned long long _communityId;
    XMDubVideoInfo *_videoInfo;
    UILabel *_progressLabel;
    UIView *_tipContainerView;
    UILabel *_tipsLabel1;
    UILabel *_tipsLabel2;
    double _progress;
    long long _downloadCount;
    NSMutableArray *_reqList;
    NSMutableArray *_noNeedSucReqList;
    long long _totalLength;
    XMTimer *_timer;
    NSArray *_tipList;
}

@property(retain, nonatomic) NSArray *tipList; // @synthesize tipList=_tipList;
@property(retain, nonatomic) XMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSMutableArray *noNeedSucReqList; // @synthesize noNeedSucReqList=_noNeedSucReqList;
@property(retain, nonatomic) NSMutableArray *reqList; // @synthesize reqList=_reqList;
@property(nonatomic) long long downloadCount; // @synthesize downloadCount=_downloadCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UILabel *tipsLabel2; // @synthesize tipsLabel2=_tipsLabel2;
@property(retain, nonatomic) UILabel *tipsLabel1; // @synthesize tipsLabel1=_tipsLabel1;
@property(retain, nonatomic) UIView *tipContainerView; // @synthesize tipContainerView=_tipContainerView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) XMDubVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool pushImmediately; // @synthesize pushImmediately=_pushImmediately;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) XMDubShowChanllengeModel *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) NSString *srcChannel; // @synthesize srcChannel=_srcChannel;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (void)backWithError;
- (void)pushCtrl:(id)arg1;
- (id)fetchCooperateInfo;
- (void)gotoRecordView;
- (void)downloadUrl:(id)arg1 weight:(long long)arg2 filePath:(id)arg3 needSucc:(_Bool)arg4;
- (void)downloadUrl:(id)arg1 weight:(long long)arg2;
- (void)downloadAllActorAvater;
- (void)startDownload;
- (void)requestVideoURL;
- (void)requestVideoInfo;
- (void)updateProgress;
- (void)p_handleTimerAction;
- (id)p_nextTipStr;
- (void)addContentView;
- (void)back;
- (void)p_backWithBI;
- (void)addBackButton;
- (void)addBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;

@end

