//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHeadlineBaseViewController.h"

#import "ArticleContinueReadViewDelegate-Protocol.h"
#import "ArticleRecommendFlowViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBArticleCustomizedShareViewDelegate-Protocol.h"
#import "WBArticleMedileHeaderViewDelegate-Protocol.h"
#import "WBFeedPageTimeRecordProtocol-Protocol.h"
#import "WBHeadlineContentViewControllerCopyAndShareDelegate-Protocol.h"
#import "WBHeadlineContentViewControllerDeleteCardDelegate-Protocol.h"
#import "WBHeadlineHeaderViewDelegate-Protocol.h"
#import "WBRewardManagerDelegate-Protocol.h"
#import "WBRewardViewDelegate-Protocol.h"

@class ArticleContinueReadBaseView, NSArray, NSMutableDictionary, NSObject, NSString, UIImageView, UIView, WBALAssetPickerContextManager, WBArticleButtomShareView, WBArticleContentTipView, WBArticleEngine, WBArticleIntegrateCardListViewController, WBArticleMiddleHeaderView, WBArticleRecommendFlowViewController, WBArticleRecommendHintView, WBContentImageView, WBContinueReadView, WBHeadlineHeaderView, WBRewardManager, WBRewardView, WBWatermarkView;
@protocol OS_dispatch_group, WBCopyAndShareTextContentView, WBNewHeadlineArticleViewControllerDelegate;

@interface WBNewHeadlineArticleViewController : WBHeadlineBaseViewController <WBHeadlineContentViewControllerCopyAndShareDelegate, ArticleRecommendFlowViewControllerDelegate, UIScrollViewDelegate, WBALAssetPickerContextManagerDelegate, WBHeadlineHeaderViewDelegate, WBArticleMedileHeaderViewDelegate, WBRewardViewDelegate, WBRewardManagerDelegate, ArticleContinueReadViewDelegate, WBHeadlineContentViewControllerDeleteCardDelegate, WBArticleCustomizedShareViewDelegate, WBFeedPageTimeRecordProtocol>
{
    double scrollHeight;
    _Bool isLoading;
    _Bool isLoaded;
    NSString *_share_token;
    NSObject<OS_dispatch_group> *_dispatch_group;
    unsigned long long _fingerUpdateCount;
    WBHeadlineHeaderView *articleHeaderView;
    UIView *headerMiddleView;
    WBArticleMiddleHeaderView *continuseView;
    UIView *headerBottomView;
    WBRewardView *rewardView;
    WBContinueReadView *bottomMonthUserView;
    ArticleContinueReadBaseView *focusReadView;
    UIView *bottomShareViewBackgroundView;
    WBArticleButtomShareView *bottomShareView;
    WBWatermarkView *watermarkView;
    WBArticleRecommendFlowViewController *cardListViewController;
    WBArticleIntegrateCardListViewController *recommendViewController;
    WBArticleRecommendHintView *recommendHintView;
    _Bool showRecommendComplete;
    _Bool finishPayed;
    _Bool isUsedCompose;
    _Bool isSingleUser;
    _Bool commendFlowDataIsEmpty;
    double cardIncrementHeight;
    struct {
        unsigned int picturesCanSawDataSetuped:1;
        unsigned int extendViewControllerRefreshed:1;
        unsigned int unfollowedButCanSeeAll:1;
        unsigned int showEnlargeAnimation:1;
        unsigned int enlargeAnimationHasFinished:1;
        unsigned int hasScrollToAnchorIfHas:1;
    } _flagHas;
    struct {
        unsigned int isEditUpdateArticleShowRequestRefreshed:1;
        unsigned int isEditUpdateArticleExtendRequestRefreshed:1;
    } _articleEditUpdateRefreshFlags;
    _Bool _isHiddenHeaderBottomView;
    _Bool _isHiddenShareBar;
    _Bool _needPop;
    _Bool _isHiddenComments;
    NSString *luicode;
    NSString *_articleID;
    double _lastPosition;
    NSMutableDictionary *_extendDic;
    NSString *_demension;
    id <WBNewHeadlineArticleViewControllerDelegate> _delegate;
    WBRewardManager *_rewardManager;
    NSString *_extParam;
    NSString *_pageScheme;
    NSString *_act_id;
    WBALAssetPickerContextManager *_imageManager;
    WBArticleContentTipView *_recommendTipView;
    UIImageView *_footerBarSnapView;
    UIView *_bottomCardListView;
    WBContentImageView *_maskView;
    WBArticleEngine *_articleEngine;
    NSArray *_picturesCanSaw;
    NSString *_anchor;
}

+ (void)clearArticleShowTipMapCache;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool isHiddenComments; // @synthesize isHiddenComments=_isHiddenComments;
@property(retain, nonatomic) NSArray *picturesCanSaw; // @synthesize picturesCanSaw=_picturesCanSaw;
@property(retain, nonatomic) WBArticleEngine *articleEngine; // @synthesize articleEngine=_articleEngine;
@property(retain, nonatomic) WBContentImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *bottomCardListView; // @synthesize bottomCardListView=_bottomCardListView;
@property(retain, nonatomic) UIImageView *footerBarSnapView; // @synthesize footerBarSnapView=_footerBarSnapView;
@property(retain, nonatomic) WBArticleContentTipView *recommendTipView; // @synthesize recommendTipView=_recommendTipView;
@property(retain, nonatomic) WBALAssetPickerContextManager *imageManager; // @synthesize imageManager=_imageManager;
@property(copy, nonatomic) NSString *act_id; // @synthesize act_id=_act_id;
@property(copy, nonatomic) NSString *pageScheme; // @synthesize pageScheme=_pageScheme;
@property(copy, nonatomic) NSString *extParam; // @synthesize extParam=_extParam;
@property(retain, nonatomic) WBRewardManager *rewardManager; // @synthesize rewardManager=_rewardManager;
@property(nonatomic) _Bool needPop; // @synthesize needPop=_needPop;
@property(nonatomic) __weak id <WBNewHeadlineArticleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *demension; // @synthesize demension=_demension;
@property(retain, nonatomic) NSMutableDictionary *extendDic; // @synthesize extendDic=_extendDic;
@property(nonatomic) double lastPosition; // @synthesize lastPosition=_lastPosition;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(nonatomic) _Bool isHiddenShareBar; // @synthesize isHiddenShareBar=_isHiddenShareBar;
@property(nonatomic) _Bool isHiddenHeaderBottomView; // @synthesize isHiddenHeaderBottomView=_isHiddenHeaderBottomView;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)recordItemOfTimeRecorder;
- (id)timeRecordIdentifier;
- (void)_saveArticle;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)articleFoldShowAnalysis;
- (void)articleFoldClickAnalysis;
- (void)logWithBehavior:(id)arg1;
- (id)analysisFeatureCode;
- (void)loadTimePerformanceAnalysisWithIsLoadFromLocal:(_Bool)arg1;
- (void)_fillPlaceholderCardDataFromExtendProperties:(id)arg1;
- (id)getCurrentPlayingMusicContexID;
- (void)stopMusic;
- (void)removeFooterBarSnapView;
- (void)_recordArticlePageOpenDepth;
- (id)_shareContentTitle;
- (void)_clickShareButtonDict:(id)arg1;
- (void)recordRecommendRead;
- (void)recordReadPosition;
- (void)cancelAction:(id)arg1;
- (void)panNavigationDidBegin:(id)arg1;
- (void)doSomethingOnClosed;
- (void)configSubviewsFrame;
- (void)loadMoreDataDidTriggered;
- (void)pullRefreshDidTriggered;
- (_Bool)enableLoadMore;
- (id)moduleID;
- (void)articlereadavailable:(id)arg1;
- (void)articleEditUpdate:(id)arg1;
- (void)commentDidSendFinished:(id)arg1;
- (void)contactEngineDidUnfollowContactNotification:(id)arg1;
- (void)contactEngineDidFollowContactNotification:(id)arg1;
- (void)didEnterBackground;
- (void)shareButtonDidSelected:(id)arg1;
- (void)commendFlowDataIsEmpty:(id)arg1;
- (void)articleContextDidEndAnimation:(id)arg1 hasFooter:(_Bool)arg2;
- (void)articleContextWillStartAnimation:(id)arg1 hasFooter:(_Bool)arg2;
- (id)extParamAppendingLmid:(id)arg1;
- (void)didTapRewardUserListView:(id)arg1 scheme:(id)arg2;
- (void)didTapRewardView:(id)arg1 scheme:(id)arg2;
- (void)rewardView:(id)arg1 userlistButtonDidSelcted:(id)arg2;
- (void)rewardView:(id)arg1 rewardButtonDidClick:(id)arg2;
- (void)continueButtonDidClick:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapArticleBottomShare:(id)arg1;
- (void)deleteCardIndex:(double)arg1;
- (void)falseInfoBackgroudDidTapped:(id)arg1;
- (void)originalUrlClick:(id)arg1;
- (void)copyrightClick:(id)arg1;
- (void)didTapReward:(id)arg1;
- (void)didTapRewardUserList:(id)arg1;
- (void)continueReadButtonClick:(id)arg1 user:(id)arg2;
- (void)userInfoClick:(id)arg1;
- (void)coverImageClick:(id)arg1;
- (void)writerNameClick:(id)arg1;
- (void)continueReadPayed:(_Bool)arg1 withPayType:(int)arg2 extraInfo:(id)arg3;
- (void)refreshViewsOnPayCompleteWithPayCompleteNotificationListener:(id)arg1 wbExtendType:(id)arg2;
- (void)createContentViewByArticle:(id)arg1;
- (void)_handleArticleHasDeleted:(id)arg1;
- (void)_dealWithFailureForGetArticleShowWithError:(id)arg1;
- (void)_dealWithSuccessForGetArticleShowWithResponse:(id)arg1;
- (void)requestArticleFromNetwork;
- (void)insertPicturesFromExtend:(id)arg1;
- (id)deleteParameter:(id)arg1 WithOriginUrl:(id)arg2;
- (id)getParameter:(id)arg1 urlStr:(id)arg2;
- (void)_handleHalfYearToReadError;
- (void)_handleRefreshViewWithExtendData:(id)arg1;
- (void)_handleIsFollowedWithExtendData:(id)arg1;
- (void)_handleStatusChangedForArticleWithExtendData:(id)arg1;
- (void)_handleReadScaleWithExtendData:(id)arg1;
- (void)_handleShowReadCountWithExtendData:(id)arg1;
- (void)_handleShowCardWithExtendData:(id)arg1;
- (void)_handledDeleteArticleWithExtendData:(id)arg1;
- (void)_handleShowSighOfEditForArticleWithExtendData:(id)arg1;
- (void)_handleCustomViewWithExtendData:(id)arg1;
- (void)_handleComplaintWithExtendData:(id)arg1;
- (void)_updateViewByExtendData:(id)arg1;
- (void)_requestExtendDataAndIsNeedSetReadCount:(_Bool)arg1;
- (void)_updateViewUsePreloadData;
- (void)_handleBuilderHasFinished:(id)arg1;
- (void)_generateBuilderFormLocal:(_Bool)arg1;
- (void)_prepareGenerateBuilderFromLocal:(_Bool)arg1;
- (_Bool)_isArticleDataValid:(id)arg1;
- (void)loadArticle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (void)initPropertyValuesWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)initFromComposer;
- (id)init;
- (_Bool)showTipsOfLimit;
- (void)showTipsLimitTimeIncrease;
- (void)setShowTipsLimitTime:(long long)arg1;
- (id)showTipsLimitString;
- (id)showTipsLimitKey;
- (id)showTipsLimitMutableDictionary;
@property(retain, nonatomic) UIView<WBCopyAndShareTextContentView> *selectedContentView; // @dynamic selectedContentView;
- (void)wbCopyAndShareContentViewWannerBeUnselected:(id)arg1;
- (void)wbCopyAndShareContentViewWannerBeSelected:(id)arg1;
- (void)showCopyAndShareMenu;
- (void)share:(id)arg1;
- (void)copyContent:(id)arg1;
- (id)contextMenuItems;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)contentViewDidSetup:(id)arg1;
- (void)resetSelectedContentView;
- (_Bool)needResetUILayoutWithStyle:(_Bool)arg1;
- (void)_showWaterMarkView;
- (void)showWatermarkViewIfNeeded;
- (void)dimissRecommendHintView;
- (void)updateRecommendHintFrame;
- (void)_createRecommandHintView:(id)arg1;
- (void)showRecommendHintView:(id)arg1;
- (void)scrollToLastreadPosition;
- (_Bool)shouldMakeArticleContentPartlyCanRead;
- (double)minHeightForShowConvertScreenHeight:(double)arg1;
- (_Bool)shouldShowTipMapScrollTip;
- (_Bool)shouldExpandToRead;
- (_Bool)shouldFollowToRead;
- (_Bool)shouldShowRecommendContentTipView;
- (void)_updateIsAuthorFollowedInMemoryAndDb:(long long)arg1;
- (void)_setupPicturesCanSawByPragraphModelArray:(id)arg1;
- (void)_refreshCardListVC;
- (_Bool)_sharePosition:(id)arg1 has:(id)arg2;
- (_Bool)_isScrollToLastReadPositionAnimated;
- (double)_lastReadPosition;
- (_Bool)_hasAnchor;
- (void)_updateMaskViewVisibility:(_Bool)arg1 withViewTop:(double)arg2 viewLeft:(double)arg3 maskViewHeight:(double)arg4 maskViewWidth:(double)arg5;
- (void)_addMaskViewForContinuseViewIfNeed;
- (void)refreshContentView;
- (void)switchViewsByAllContentCanSee:(_Bool)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)refreshViewsByIsFollowed:(_Bool)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)refreshOnFollowStateChanged:(long long)arg1 viewsChangeImmediately:(_Bool)arg2;
- (void)updateViewsWhenParagraphingFinished:(id)arg1 pictures:(id)arg2;
- (void)updateRecommendTipViewFrame;
- (void)configBottomCardlistView:(_Bool)arg1 cardlistBaseItem:(id)arg2;
- (void)refreshCardListView;
- (void)configHeaderBottomShareView;
- (void)configBottomMonthUserView;
- (void)configBottomRewardView;
- (void)configBottomFocusReadView;
- (void)configHeaderBottomView;
- (void)createHeaderBottomViewElements;
- (void)updateNopayContent;
- (void)updateContentViewForPayContent;
- (void)updateMiddleButton;
- (void)createHeaderMiddleView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

