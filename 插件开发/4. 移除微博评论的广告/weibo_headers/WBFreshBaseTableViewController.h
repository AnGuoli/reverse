//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBCardListBaseItemHeightContext-Protocol.h"
#import "WBComposeViewHalfScreenControllerDelegate-Protocol.h"
#import "WBFreshNewsEngineDelegate-Protocol.h"
#import "WBFreshNewsTableViewCellProtocol-Protocol.h"
#import "WBMenuListPopoverViewDelegate-Protocol.h"
#import "WBPageCardViewProtocol-Protocol.h"
#import "WBSearchTypeMenuDelegate-Protocol.h"
#import "WBToolBarMenuDelegate-Protocol.h"

@class FangleBubbleGuideView, NSArray, NSMutableDictionary, NSSet, NSString, WBFreshNaviView, WBFreshNewsEngine, WBFreshNewsFocusGuideView, WBMenuListPopoverView, WBPRLMTableViewWrapper, WBProgressHUD, WBSearchTypeMenu, WBToolBarMenu;

@interface WBFreshBaseTableViewController : WBTableViewController <WBComposeViewHalfScreenControllerDelegate, WBSearchTypeMenuDelegate, WBFreshNewsEngineDelegate, PRLMTableViewWrapperDelegate, WBFreshNewsTableViewCellProtocol, WBToolBarMenuDelegate, WBMenuListPopoverViewDelegate, WBCardListBaseItemHeightContext, WBPageCardViewProtocol>
{
    WBPRLMTableViewWrapper *prlmWrapper;
    NSArray *_cards;
    NSString *title;
    WBProgressHUD *loadHudView;
    NSMutableDictionary *paramsDic;
    _Bool needReloadData;
    NSSet *_guestForbiddenCardTypeSet;
    NSSet *_guestForbiddenSchemeSet;
    NSSet *_guestOpenSchemeSet;
    NSSet *_guestForbiddenContaineridSet;
    NSSet *_guestForbideenCardItemIDSet;
    _Bool hasLoged;
    NSString *sinceId;
    _Bool sinceIDMode;
    WBFreshNewsEngine *engine;
    _Bool hasLogedViews;
    _Bool hasPophint;
    _Bool isClickInteractButton;
    _Bool isFirstClickChannel;
    _Bool autoRefreshWhenViewDidLoad;
    _Bool _isNeedLog;
    _Bool _canLog;
    _Bool _enableAutoLoadMore;
    _Bool _refreshingLastCard;
    _Bool _flowNaviEnable;
    _Bool _naviAnimation;
    _Bool _hasClickFollowRead;
    NSArray *_peekingCards;
    NSMutableDictionary *_pageLogs;
    WBMenuListPopoverView *_listPopoverView;
    WBToolBarMenu *_toolBarMenu;
    long long _remainderCardsWhenAutoLoadMore;
    WBFreshNaviView *_flowNaviView;
    NSArray *_toolbarMenusArr;
    NSString *_mp_cardid;
    NSString *_sortbyString;
    FangleBubbleGuideView *_followGuideView;
    long long _follow_author;
    NSString *_callbackUrl;
    WBSearchTypeMenu *_searchTypeMenu;
    WBFreshNewsFocusGuideView *_focusGuideView;
}

@property(retain, nonatomic) WBFreshNewsFocusGuideView *focusGuideView; // @synthesize focusGuideView=_focusGuideView;
@property(retain, nonatomic) WBSearchTypeMenu *searchTypeMenu; // @synthesize searchTypeMenu=_searchTypeMenu;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(nonatomic) long long follow_author; // @synthesize follow_author=_follow_author;
@property(retain, nonatomic) FangleBubbleGuideView *followGuideView; // @synthesize followGuideView=_followGuideView;
@property(copy, nonatomic) NSString *sortbyString; // @synthesize sortbyString=_sortbyString;
@property(nonatomic) _Bool hasClickFollowRead; // @synthesize hasClickFollowRead=_hasClickFollowRead;
@property(copy, nonatomic) NSString *mp_cardid; // @synthesize mp_cardid=_mp_cardid;
@property(retain, nonatomic) NSArray *toolbarMenusArr; // @synthesize toolbarMenusArr=_toolbarMenusArr;
@property(nonatomic) _Bool naviAnimation; // @synthesize naviAnimation=_naviAnimation;
@property(nonatomic) _Bool flowNaviEnable; // @synthesize flowNaviEnable=_flowNaviEnable;
@property(retain, nonatomic) WBFreshNaviView *flowNaviView; // @synthesize flowNaviView=_flowNaviView;
@property(nonatomic) _Bool refreshingLastCard; // @synthesize refreshingLastCard=_refreshingLastCard;
@property(nonatomic) long long remainderCardsWhenAutoLoadMore; // @synthesize remainderCardsWhenAutoLoadMore=_remainderCardsWhenAutoLoadMore;
@property(nonatomic) _Bool enableAutoLoadMore; // @synthesize enableAutoLoadMore=_enableAutoLoadMore;
@property(retain, nonatomic) WBToolBarMenu *toolBarMenu; // @synthesize toolBarMenu=_toolBarMenu;
@property(retain, nonatomic) WBMenuListPopoverView *listPopoverView; // @synthesize listPopoverView=_listPopoverView;
@property(nonatomic) _Bool canLog; // @synthesize canLog=_canLog;
@property(nonatomic) _Bool isNeedLog; // @synthesize isNeedLog=_isNeedLog;
@property(retain, nonatomic) NSMutableDictionary *pageLogs; // @synthesize pageLogs=_pageLogs;
@property(readonly, nonatomic) WBFreshNewsEngine *engine; // @synthesize engine;
@property(retain, nonatomic) NSMutableDictionary *paramsDic; // @synthesize paramsDic;
@property(nonatomic) _Bool autoRefreshWhenViewDidLoad; // @synthesize autoRefreshWhenViewDidLoad;
@property(copy, nonatomic, setter=setTitle:) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)updateFocusGuideData:(id)arg1;
- (void)dismissFocusGudieView;
- (void)showFollowGuideView;
- (void)createFollowGuideView;
- (void)resetPagecount;
- (void)popoverDidDismiss:(id)arg1;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2 forceReload:(_Bool)arg3;
- (_Bool)checkFollowAuthor;
- (void)loadCard6Data;
- (void)configFreshNewsFollowReadClickStatus:(_Bool)arg1;
- (id)firstCardListViewController;
- (void)loadBlockData:(_Bool)arg1;
- (void)deleteFollowButton:(id)arg1;
- (id)findFollowToReadCardArray;
- (id)findFollowToReadCardPath;
- (id)findFollowToReadCard:(id)arg1;
- (void)focusToReadAlert:(long long)arg1 path:(id)arg2 barView:(id)arg3;
- (id)findIndexPathById:(id)arg1;
- (void)configFreshNewsFollowStatus:(_Bool)arg1;
- (id)currentCardListViewController;
- (void)combindParams:(id)arg1;
- (void)handleClickCommonBtnParams:(id)arg1;
- (void)_showProgressWithText:(id)arg1 Image:(id)arg2;
- (void)_followUser:(id)arg1 WithActionSheetText:(id)arg2;
- (void)_processFollowUser;
- (void)focusAuthor:(id)arg1;
- (void)showFocusHint;
- (void)removeFollowGuide;
- (void)showFreshNewsHint:(id)arg1 firing:(_Bool)arg2;
- (void)showCommentComposerWithStatus:(id)arg1 view:(id)arg2;
- (void)showStatusContent:(id)arg1;
- (void)toolbarMenu:(id)arg1 didClickFangleButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (void)followCardListItem:(id)arg1 para:(id)arg2 HUD:(id)arg3 show:(_Bool)arg4 handle:(CDUnknownBlockType)arg5;
- (void)unfollowCardListItem:(id)arg1 para:(id)arg2 HUD:(id)arg3;
- (void)followorUnfollowCardList:(CDUnknownBlockType)arg1 showAlert:(_Bool)arg2 addParam:(_Bool)arg3;
- (void)toolbarMenu:(id)arg1 didClickPageFollowButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (_Bool)toolbarMenu:(id)arg1 didClickPageComposerButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (_Bool)WBMenuListPopoverView:(id)arg1 didClickCommonButtonView:(id)arg2 withModel:(id)arg3;
- (void)toolbarMenu:(id)arg1 didClickMenuListPopButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)loadMoreCardsForPageCard:(id)arg1 Scheme:(id)arg2 indexPath:(id)arg3;
- (void)defaultCommonButtonDeleteCardNotification:(id)arg1;
- (float)heightForTheCardView:(id)arg1;
- (void)handledCardFillCallBack:(id)arg1 IndexPath:(id)arg2 model:(id)arg3;
- (id)findFatherModelIndexPathForCommonButton:(id)arg1;
- (void)commonButtonActionDidFinishedMethod:(id)arg1;
- (_Bool)logIfNeed;
- (_Bool)isCardTypeForbiddenForGuest:(unsigned long long)arg1;
- (_Bool)isSchemeForbiddenForGuest:(id)arg1;
- (_Bool)isContaineridForbiddenForGuest:(id)arg1;
- (_Bool)isCardItemidForbiddenForGuest:(id)arg1;
- (_Bool)shouldForbiddenForGuest:(id)arg1;
- (void)initGuestForbiddentResource;
- (_Bool)needRemovePreviousPolicyCacheForEngine:(id)arg1;
- (id)getCurrentPage;
- (id)getCurrentViewController;
- (void)pageDataDidReceivedFromNetwork:(id)arg1 error:(id)arg2;
- (_Bool)cacheForEngine:(id)arg1;
- (id)apiPathForPageEngine:(id)arg1;
- (Class)modelClassForPageEngine:(id)arg1;
- (void)didEndDecelerating;
- (void)configDataImmediately;
- (void)configData;
- (void)tableViewDidLoaded:(id)arg1;
- (id)prlmWrapper;
- (void)didFailedLoadPageCard:(id)arg1;
- (void)didFinishLoadPageCard:(id)arg1;
- (void)finishLoadingData;
- (id)cardByID:(id)arg1;
- (_Bool)needLoadAsyncCardsForEngine:(id)arg1;
- (id)cardListBaseItem;
- (void)showNetErrorView;
- (void)showLoadingHud:(id)arg1;
- (long long)findNoTitleIndex:(id)arg1 section:(long long)arg2 beginIndex:(long long)arg3;
- (void)rePositionChannel:(struct CGPoint)arg1;
- (_Bool)handleActionWithView:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4 withButton:(id)arg5;
- (void)didPressedReviewsButtonInCell:(id)arg1;
- (_Bool)isNeedEdgeInset;
- (_Bool)handleActionWithTableViewCell:(id)arg1 mainView:(id)arg2 actionType:(int)arg3 pageCard:(id)arg4 actionPara:(id)arg5 withButton:(id)arg6;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 setRelatedCellHighlighted:(_Bool)arg2 atIndexPath:(id)arg3;
- (id)cardForRowAtIndexPath:(id)arg1;
- (void)didSelectCard:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isListPageForEngine:(id)arg1 withCard:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfCardsBefore:(id)arg1;
- (void)configBasicInfoViewWithIndexPath:(id)arg1 inCell:(id)arg2;
- (void)configCellWithIndexPath:(id)arg1;
- (id)getPageType;
- (id)moduleID;
- (void)setTheCell:(id)arg1 ForIndex:(id)arg2 Tableview:(id)arg3 UseCard:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)VCWantToSetTheBubbleWidth;
- (_Bool)needSetBubbleViewWidthByVC;
- (id)bubbleTypeWithIndexPage:(id)arg1 tableView:(id)arg2;
- (long long)numberOfCardsInSection:(unsigned long long)arg1 inTableView:(id)arg2;
- (void)prepareCardForDisplay:(id)arg1;
- (void)setAnalysisData4OpenURL:(struct NSMutableDictionary *)arg1;
- (void)setAnalysisData4Child:(id)arg1 withSourceTimelineItem:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *cards;
@property(readonly, nonatomic) NSArray *peekingCards; // @synthesize peekingCards=_peekingCards;
- (id)makePeekingCardsWithOriginalCards:(id)arg1;
- (void)reloadViews;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1;
- (void)refresh;
- (Class)PullRefreshHeaderViewClass;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configSubviewsFrame;
- (void)loadHeaderView;
- (_Bool)supportPullRefrash;
- (_Bool)supportPrl;
- (void)setEmptyActionButton;
- (void)viewDidPopFromPeeking;
- (void)configToolbarMenu;
- (void)initializeSelf;
- (void)loadSearchMenu;
- (void)viewDidLoad;
- (void)dealloc;
- (void)configEngine:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

