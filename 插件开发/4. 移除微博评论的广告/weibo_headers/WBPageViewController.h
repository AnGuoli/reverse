//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUniversalPageViewController.h"

#import "WBBaseSegmentListViewWrapperDelegate-Protocol.h"
#import "WBProfileHeaderCardListDelegate-Protocol.h"
#import "WBSegmentCardListViewControllerCallback-Protocol.h"

@class NSMutableDictionary, NSString, QRCodeEncodeEngine, WBCardListHeaderChannelCard, WBCommonPopView, WBPageViewWrapper, WBProfileHeaderCardListViewController;

@interface WBPageViewController : WBUniversalPageViewController <WBSegmentCardListViewControllerCallback, WBBaseSegmentListViewWrapperDelegate, WBProfileHeaderCardListDelegate>
{
    _Bool _notAllowSegmentMode;
    _Bool _isSegmentViewMode;
    _Bool _isFirstLoad;
    _Bool _childCardlistCanScroll;
    _Bool _isSuperTopic;
    _Bool _isRefreshing;
    _Bool _cacheShowing;
    _Bool _adHasShown;
    _Bool _userJustFollowedThisPage;
    QRCodeEncodeEngine *_codeEncodeEngine;
    WBCardListHeaderChannelCard *_channelCard;
    WBPageViewWrapper *_wrapper;
    NSMutableDictionary *_observersInfo;
    CDUnknownBlockType _pendingAction;
    WBProfileHeaderCardListViewController *_headerCardlistVC;
    WBCommonPopView *_popView;
    struct CGPoint _currentContentOffset;
}

@property(retain, nonatomic) WBCommonPopView *popView; // @synthesize popView=_popView;
@property(nonatomic) _Bool userJustFollowedThisPage; // @synthesize userJustFollowedThisPage=_userJustFollowedThisPage;
@property(retain, nonatomic) WBProfileHeaderCardListViewController *headerCardlistVC; // @synthesize headerCardlistVC=_headerCardlistVC;
@property(nonatomic) _Bool adHasShown; // @synthesize adHasShown=_adHasShown;
@property(nonatomic) _Bool cacheShowing; // @synthesize cacheShowing=_cacheShowing;
@property(copy, nonatomic) CDUnknownBlockType pendingAction; // @synthesize pendingAction=_pendingAction;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NSMutableDictionary *observersInfo; // @synthesize observersInfo=_observersInfo;
@property(nonatomic) _Bool isSuperTopic; // @synthesize isSuperTopic=_isSuperTopic;
@property(nonatomic) struct CGPoint currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(nonatomic) _Bool childCardlistCanScroll; // @synthesize childCardlistCanScroll=_childCardlistCanScroll;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) WBPageViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) WBCardListHeaderChannelCard *channelCard; // @synthesize channelCard=_channelCard;
@property(retain, nonatomic) QRCodeEncodeEngine *codeEncodeEngine; // @synthesize codeEncodeEngine=_codeEncodeEngine;
@property(nonatomic) _Bool isSegmentViewMode; // @synthesize isSegmentViewMode=_isSegmentViewMode;
@property(nonatomic) _Bool notAllowSegmentMode; // @synthesize notAllowSegmentMode=_notAllowSegmentMode;
- (void).cxx_destruct;
- (void)WillAddChildViewController:(id)arg1;
- (void)headerCardList:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)headerCardListHeightDidChanged:(id)arg1;
- (void)resetSegmentViewControllersOffset;
- (struct CGRect)tableHeaderViewFrame;
- (void)hideRecommendView;
- (void)showRecommendView:(id)arg1;
- (void)replaceHeaderViewToLoopView;
- (void)containerView:(id)arg1 toolBarActionHasDone:(id)arg2;
- (void)onReceivedPageInfo:(id)arg1 in:(id)arg2;
- (void)onReceivedFooterTips:(id)arg1 in:(id)arg2;
- (void)onReceivedToolBar:(id)arg1 in:(id)arg2;
- (_Bool)panNavigationSimultaneouslyWithGestureRecognizer:(id)arg1;
- (_Bool)panToNavigation;
- (void)finishLoadingData;
- (void)presentGifViewIfNeed;
- (void)didFinishPullRefreshing;
- (void)configToolbarMenu;
- (void)refreshPage;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)needLoadAsyncCardsForEngine:(id)arg1;
- (void)syncOffsetWithChildCardlist;
- (void)configTargetOffsetForCardlistVC:(id)arg1;
- (void)wrapperWillAddChildViewController:(id)arg1 toIndex:(long long)arg2;
- (void)wrapperWillResetDefaultSelectedIndex:(long long)arg1;
- (void)wrapperDidChangeSwipeViewCurrentItem:(id)arg1;
- (void)wrapperDidClickSameChannelsBar:(id)arg1;
- (void)wrapperDidSelectChannelsBar:(id)arg1 toIndex:(long long)arg2;
- (void)refreshCardListControllerForcedAtIndex:(long long)arg1;
- (void)refreshCardListControllerIfNeededAtIndex:(long long)arg1;
- (id)applistGridView;
- (void)createAndShareQRCode;
- (void)contactRecentPickerViewController:(id)arg1 shareToPrivateMessageWithUserTarget:(id)arg2;
- (id)analysisParameters;
- (void)refreshSegmentWithContainerId:(id)arg1 cardlistHandleItself:(_Bool)arg2;
- (void)commonButtonDidFinish:(id)arg1;
- (void)sharePageViaStatusWithGroupType:(unsigned long long)arg1;
- (void)addCustomBackBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
- (void)addDefaultLeftBarWhenPresented;
- (void)addDefaultBackBarButtonItem;
- (void)didFailedLoadPageCard:(id)arg1;
- (void)didFinishLoadPageCard:(id)arg1;
- (_Bool)configCardListHeaderWithCard:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCurrentBgAlpha:(double)arg1;
- (void)updateChannelsData;
- (_Bool)supportPullRefrash;
- (void)switchToSegmentModeIfNeeded:(_Bool)arg1;
- (void)configData;
- (void)removeSubviewsIfNeeded;
- (void)initializeSubviewsIfNeeded;
- (void)reloadViews;
- (void)showError:(id)arg1;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)configHeaderViewIfNeeded;
- (void)configWhenNormalPage:(CDUnknownBlockType)arg1 whenSegmentPage:(CDUnknownBlockType)arg2 whenChildPage:(CDUnknownBlockType)arg3;
- (_Bool)hasToolBarMenu;
- (void)updateSegmentBarView;
- (void)configSubviewsFrame;
- (void)showFollowGuideViewNotification:(id)arg1;
- (void)initializeSelf;
- (Class)baseViewClass;
- (void)viewDidPopFromPeeking;
- (void)showImageAlertView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPageID:(id)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

