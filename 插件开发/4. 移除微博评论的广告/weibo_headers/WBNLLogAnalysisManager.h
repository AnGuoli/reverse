//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, WBNLLiveInfoModel;

@interface WBNLLogAnalysisManager : NSObject
{
    _Bool _isFromStory;
    NSDictionary *_analysisParameters;
    WBNLLiveInfoModel *_liveInfo;
    NSString *_uiCode;
    NSDate *_viewStartDate;
    NSString *_lfid;
    NSString *_luicode;
    NSString *_livefrom;
    NSString *_conductType;
    NSDictionary *_schemeParaDict;
    NSDictionary *_controllerAnalysisParameters;
    double _joinLiveTime;
    double _joinLiveFirstFrameTime;
    NSString *_extend;
    NSDictionary *_finalAnalysisParameters;
}

+ (id)extRechargeString:(id)arg1;
+ (void)doAnalysisActionRechargeButtonTapFrom:(id)arg1 Money:(id)arg2 PageInfo:(id)arg3;
+ (id)sharedManager;
@property(readonly, nonatomic) NSDictionary *finalAnalysisParameters; // @synthesize finalAnalysisParameters=_finalAnalysisParameters;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(nonatomic) _Bool isFromStory; // @synthesize isFromStory=_isFromStory;
@property(nonatomic) double joinLiveFirstFrameTime; // @synthesize joinLiveFirstFrameTime=_joinLiveFirstFrameTime;
@property(nonatomic) double joinLiveTime; // @synthesize joinLiveTime=_joinLiveTime;
@property(retain, nonatomic) NSDictionary *controllerAnalysisParameters; // @synthesize controllerAnalysisParameters=_controllerAnalysisParameters;
@property(retain, nonatomic) NSDictionary *schemeParaDict; // @synthesize schemeParaDict=_schemeParaDict;
@property(copy, nonatomic) NSString *conductType; // @synthesize conductType=_conductType;
@property(copy, nonatomic) NSString *livefrom; // @synthesize livefrom=_livefrom;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
@property(retain, nonatomic) NSString *lfid; // @synthesize lfid=_lfid;
@property(retain, nonatomic) NSDate *viewStartDate; // @synthesize viewStartDate=_viewStartDate;
@property(copy, nonatomic) NSString *uiCode; // @synthesize uiCode=_uiCode;
@property(retain, nonatomic) WBNLLiveInfoModel *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void).cxx_destruct;
- (void)doAnalysisRechargeProductTapFrom:(id)arg1;
- (id)status;
- (id)mustInfo;
- (id)getLiveStreamStatus;
- (id)getContainerId;
@property(readonly, nonatomic) NSDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
- (void)payLiveSwitch:(_Bool)arg1;
- (void)doAnalysisCommentStickAction;
- (void)doAnalysisScreenCaptureAction;
- (void)doAnalysisBlowupAction;
- (void)doAnalysisBeautyAction;
- (void)doAnalysisMirrorAction;
- (void)doAnalysisSwitchCamera;
- (void)doAnalysisPublishAction;
- (void)doAnalysisTopicAction;
- (void)doAnalysisLBSTapAction;
- (void)doAnalysisAddCoverAction;
- (void)bulletCommentSwitch:(id)arg1;
- (void)doAnalysisPayLivePayAction;
- (void)doAnalysisRechargeProductTapAction;
- (void)doAnalysisSendGiftActionWithOuterGiftModel:(id)arg1;
- (void)doAnalysisSendGiftActionWithModel:(id)arg1;
- (void)doAnalysisSendCommentAction:(id)arg1;
- (void)doAnalysisActivityAction;
- (void)doAnalysisShowcaseProductAction;
- (void)doAnalysisShowcaseAction;
- (void)doAnalysisLikeAction;
- (void)doAnalysisShareAction;
- (void)doAnalysisCommentLike;
- (void)doAnalysisShareToast;
- (void)doAnalysisGuanzhuFromSheetOwnerID:(id)arg1;
- (void)doAnalysisGuanzhuWithOwnerID:(id)arg1;
- (void)doWB_Anaylsis_ExitLive;
- (void)doWB_Anaylsis_LiveWatchFinish;
- (void)doWB_Anaylsis_LiveWatchStart;
- (void)doWB_Anaylsis_JoinLive;
- (void)doAnalysisViewEnd;
- (void)doAnalysisCode:(id)arg1 withExtension:(id)arg2;
- (void)doAnalysisCode:(id)arg1;

@end

