//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "CNetworkStatusExt-Protocol.h"
#import "FriendAsistSessionExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IRadarSearchExt-Protocol.h"
#import "MMExposeViewControllerDelegate-Protocol.h"
#import "RSHeadImageViewDelegate-Protocol.h"
#import "RSVerifyViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AVAudioPlayer, NSMutableArray, NSString, RSVerifyView, SonicView, UIButton, UIImageView, UIView;
@protocol RadarSearchViewDelegate;

@interface RadarSearchView : MMUIImageView <IRadarSearchExt, IMsgExt, UIScrollViewDelegate, RSHeadImageViewDelegate, RSVerifyViewDelegate, MMExposeViewControllerDelegate, CNetworkStatusExt, FriendAsistSessionExt>
{
    UIView *_backgroundView;
    UIView *_tipsView;
    UIButton *_closeBtn;
    UIImageView *_selfHeadView;
    UIImageView *_radarLightView;
    SonicView *_radarAllHeadScrollView;
    RSVerifyView *_verifyView;
    NSMutableArray *_foundResult;
    AVAudioPlayer *_popPlayer;
    AVAudioPlayer *_holdPlayer;
    id <RadarSearchViewDelegate> _delegate;
    _Bool m_bIsRespondHeadImgClicking;
    long long m_locationErrorCode;
    _Bool m_bIsShowNetworkTips;
    double m_startSearchTime;
    _Bool m_bIsNeedToReport;
}

@property(nonatomic) __weak id <RadarSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onExposeCancel;
- (void)onExposeComplete;
- (void)onExpose:(id)arg1;
- (void)onRSVerifyViewHide;
- (void)onStatusViewHidden:(id)arg1;
- (void)onRSHeadImageClicked:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onFriendAssistAddMsg:(id)arg1;
- (id)parseXML:(id)arg1;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)OnVerifyUsr:(id)arg1 ErrCode:(int)arg2;
- (void)OnAddFriend:(id)arg1 ErrCode:(int)arg2;
- (void)OnRadarSearch:(id)arg1 ErrCode:(int)arg2;
- (void)handleSomeoneAppear:(id)arg1;
- (void)stopSearch;
- (void)startSearch;
- (void)hideTipsViewIfNeed;
- (void)stopLightAnimation;
- (void)startLightAnimation;
- (void)resumeLightAnimation;
- (void)stopPlayPopupSound;
- (void)startPlayPopupSound;
- (void)onClose;
- (void)onClose:(_Bool)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)resetDataMember;
- (void)showFindFailTips;
- (void)showTipsWithType:(long long)arg1;
- (void)hideTipsView;
- (void)showTipsView;
- (void)initTipsView;
- (void)initVerifyView;
- (void)initCloseButton;
- (void)initSelfHeadView;
- (void)initBackgroundView;
- (void)dealloc;
- (id)init;
- (void)initSkyBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

