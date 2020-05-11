//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMAdFeaturesProtocol-Protocol.h"
#import "XMFindOptionScrollViewDelegate-Protocol.h"
#import "XMFindOptionsViewDelegate-Protocol.h"
#import "XMScrollImageViewDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableSet, NSObject, NSString, UIView, XMAVPlayer, XMAdModel, XMAddToPlayListPop, XMFavPopUpManager, XMFindOptionsView, XMFindRecTabModel, XMFindRecommendHeaderAdView, XMFlowModel, XMMinorNoticeView, XMNRequest, XMNewSideBarAdView, XMNewUserWelfareModel, XMNewUserWelfareSideBar, XMNewUserWelfaresView, XMRecFlowToastView, XMRecFlowUpdateView, XMScrollImageView, XMSideBarAdView, XMTableCellObject, XMTableViewDataSource;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface XMFindFlowViewController : XMSubLevelViewController <XMScrollImageViewDelegate, XMFindOptionScrollViewDelegate, XMTableViewDelegateProtocol, XMAdFeaturesProtocol, XMFindOptionsViewDelegate>
{
    XMAdModel *_videoAdModel;
    NSObject<OS_dispatch_source> *_checkVideoDispatchSource;
    NSObject<OS_dispatch_queue> *_ioQueue;
    void *_ioQueueTag;
    _Bool _showGiantVideoImmediately;
    _Bool _trackCellClickOnlyPlay;
    _Bool _hasRequestMinor;
    _Bool _isNewUser;
    _Bool _needToLoadMore;
    _Bool _isShowRecommendFriendBanner;
    _Bool _isUseCacheShowCell;
    _Bool _clickRecData;
    _Bool _isReqData;
    _Bool _reqSuccess;
    _Bool _needReqCityData;
    _Bool _hasRequestInterest;
    _Bool _autoPlayVideo;
    _Bool _autoResumeVideo;
    _Bool _isShowNuwSideBar;
    _Bool _isOnMPM;
    XMTableViewDataSource *_tableDataSource;
    XMFindRecTabModel *_currentTabModel;
    NSArray *_focus;
    NSArray *_squares;
    NSArray *_stickTopModules;
    NSMutableArray *_adModels;
    NSArray *_feedAds;
    NSMutableArray *_flowFocusModels;
    XMTableCellObject *_showYiJianTingObj;
    XMTableCellObject *_showTouTiaoTingObj;
    XMTableCellObject *_oneKeySquareObj;
    XMAddToPlayListPop *_addPLPop;
    XMNRequest *_recReq;
    XMNRequest *_guessLikeReq;
    XMNRequest *_sceneRequest;
    XMNRequest *_infoRequest;
    XMNRequest *_minorReq;
    XMMinorNoticeView *_minorNoticeView;
    NSMutableArray *_headerAlbumWeakAdInfos;
    CDUnknownBlockType _completeSelectCategorys;
    XMNewUserWelfareModel *_nnnnewGiftModel;
    CDUnknownBlockType _completeSelectInfos;
    CDUnknownBlockType _interestCheckCompleted;
    CDUnknownBlockType _customThemeHandler;
    XMFavPopUpManager *_popUpManager;
    XMFindRecommendHeaderAdView *_headerAdView;
    XMSideBarAdView *_sidBarAdView;
    XMNewSideBarAdView *_sidBarNewAdView;
    XMNewSideBarAdView *_subsidySidBarNewAdView;
    XMScrollImageView *_focusImageView;
    XMFindOptionsView *_optionsView;
    UIView *_tableHeader;
    XMRecFlowToastView *_toastView;
    XMRecFlowUpdateView *_updateView;
    XMNRequest *_recFlowReq;
    NSArray *_loadingCellObjs;
    long long _profileId;
    long long _bucketId;
    long long _guessPageId;
    double _enterBackgroundTime;
    UIView *_currentFocusImageView;
    NSIndexPath *_currentPlayingIndexPath;
    XMAVPlayer *_currentVideoPlayer;
    XMFlowModel *_currentModel;
    XMNRequest *_squareReq;
    XMNewUserWelfaresView *_nuwView;
    XMNewUserWelfareSideBar *_nuwSideBar;
    NSString *_saveButtonText;
    NSString *_saveButtonIting;
    NSString *_userGiftIting;
    NSString *_userGiftPic;
    NSMutableSet *_exposureAdObjs;
    double _zeroPlayBeginTime;
    double _alreadRecordDuration;
    long long _hotPlayModuleShowTimes;
}

+ (void)autoDropDownEndRefresh:(id)arg1;
+ (void)showAutoDropDownForVC:(id)arg1 withDelay:(id)arg2;
+ (void)setAdRefreshHeaderWithAdItem:(id)arg1 forVC:(id)arg2;
+ (void)closeGiantAdViewWhenOutOfScreenWithAdModel:(id)arg1;
+ (void)updateLaunchGiantViewIfNeededAtFocusImageView:(id)arg1 withAdModel:(id)arg2 inViewController:(id)arg3;
+ (void)updateVideoViewIfNeededAtFocusImageView:(id)arg1 withAdModel:(id)arg2 inViewController:(id)arg3;
@property(nonatomic) long long hotPlayModuleShowTimes; // @synthesize hotPlayModuleShowTimes=_hotPlayModuleShowTimes;
@property(nonatomic) double alreadRecordDuration; // @synthesize alreadRecordDuration=_alreadRecordDuration;
@property(nonatomic) double zeroPlayBeginTime; // @synthesize zeroPlayBeginTime=_zeroPlayBeginTime;
@property(retain, nonatomic) NSMutableSet *exposureAdObjs; // @synthesize exposureAdObjs=_exposureAdObjs;
@property(nonatomic) _Bool isOnMPM; // @synthesize isOnMPM=_isOnMPM;
@property(copy, nonatomic) NSString *userGiftPic; // @synthesize userGiftPic=_userGiftPic;
@property(copy, nonatomic) NSString *userGiftIting; // @synthesize userGiftIting=_userGiftIting;
@property(nonatomic) _Bool isShowNuwSideBar; // @synthesize isShowNuwSideBar=_isShowNuwSideBar;
@property(copy, nonatomic) NSString *saveButtonIting; // @synthesize saveButtonIting=_saveButtonIting;
@property(copy, nonatomic) NSString *saveButtonText; // @synthesize saveButtonText=_saveButtonText;
@property(retain, nonatomic) XMNewUserWelfareSideBar *nuwSideBar; // @synthesize nuwSideBar=_nuwSideBar;
@property(retain, nonatomic) XMNewUserWelfaresView *nuwView; // @synthesize nuwView=_nuwView;
@property(nonatomic) __weak XMNRequest *squareReq; // @synthesize squareReq=_squareReq;
@property(retain, nonatomic) XMFlowModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) XMAVPlayer *currentVideoPlayer; // @synthesize currentVideoPlayer=_currentVideoPlayer;
@property(retain, nonatomic) NSIndexPath *currentPlayingIndexPath; // @synthesize currentPlayingIndexPath=_currentPlayingIndexPath;
@property(nonatomic) _Bool autoResumeVideo; // @synthesize autoResumeVideo=_autoResumeVideo;
@property(nonatomic) _Bool autoPlayVideo; // @synthesize autoPlayVideo=_autoPlayVideo;
@property(nonatomic) _Bool hasRequestInterest; // @synthesize hasRequestInterest=_hasRequestInterest;
@property(nonatomic) _Bool needReqCityData; // @synthesize needReqCityData=_needReqCityData;
@property(nonatomic) _Bool reqSuccess; // @synthesize reqSuccess=_reqSuccess;
@property(nonatomic) _Bool isReqData; // @synthesize isReqData=_isReqData;
@property(nonatomic) __weak UIView *currentFocusImageView; // @synthesize currentFocusImageView=_currentFocusImageView;
@property(nonatomic) double enterBackgroundTime; // @synthesize enterBackgroundTime=_enterBackgroundTime;
@property(nonatomic) long long guessPageId; // @synthesize guessPageId=_guessPageId;
@property(nonatomic) long long bucketId; // @synthesize bucketId=_bucketId;
@property(nonatomic) long long profileId; // @synthesize profileId=_profileId;
@property(retain, nonatomic) NSArray *loadingCellObjs; // @synthesize loadingCellObjs=_loadingCellObjs;
@property(retain, nonatomic) XMNRequest *recFlowReq; // @synthesize recFlowReq=_recFlowReq;
@property(retain, nonatomic) XMRecFlowUpdateView *updateView; // @synthesize updateView=_updateView;
@property(retain, nonatomic) XMRecFlowToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(retain, nonatomic) XMFindOptionsView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) XMScrollImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(retain, nonatomic) XMNewSideBarAdView *subsidySidBarNewAdView; // @synthesize subsidySidBarNewAdView=_subsidySidBarNewAdView;
@property(retain, nonatomic) XMNewSideBarAdView *sidBarNewAdView; // @synthesize sidBarNewAdView=_sidBarNewAdView;
@property(retain, nonatomic) XMSideBarAdView *sidBarAdView; // @synthesize sidBarAdView=_sidBarAdView;
@property(retain, nonatomic) XMFindRecommendHeaderAdView *headerAdView; // @synthesize headerAdView=_headerAdView;
@property(retain, nonatomic) XMFavPopUpManager *popUpManager; // @synthesize popUpManager=_popUpManager;
@property(copy, nonatomic) CDUnknownBlockType customThemeHandler; // @synthesize customThemeHandler=_customThemeHandler;
@property(nonatomic) _Bool clickRecData; // @synthesize clickRecData=_clickRecData;
@property(copy, nonatomic) CDUnknownBlockType interestCheckCompleted; // @synthesize interestCheckCompleted=_interestCheckCompleted;
@property(copy, nonatomic) CDUnknownBlockType completeSelectInfos; // @synthesize completeSelectInfos=_completeSelectInfos;
@property(retain, nonatomic) XMNewUserWelfareModel *nnnnewGiftModel; // @synthesize nnnnewGiftModel=_nnnnewGiftModel;
@property(copy, nonatomic) CDUnknownBlockType completeSelectCategorys; // @synthesize completeSelectCategorys=_completeSelectCategorys;
@property(retain, nonatomic) NSMutableArray *headerAlbumWeakAdInfos; // @synthesize headerAlbumWeakAdInfos=_headerAlbumWeakAdInfos;
@property(nonatomic) _Bool isUseCacheShowCell; // @synthesize isUseCacheShowCell=_isUseCacheShowCell;
@property(nonatomic) _Bool isShowRecommendFriendBanner; // @synthesize isShowRecommendFriendBanner=_isShowRecommendFriendBanner;
@property(nonatomic) _Bool needToLoadMore; // @synthesize needToLoadMore=_needToLoadMore;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(retain, nonatomic) XMMinorNoticeView *minorNoticeView; // @synthesize minorNoticeView=_minorNoticeView;
@property(nonatomic) _Bool hasRequestMinor; // @synthesize hasRequestMinor=_hasRequestMinor;
@property(retain, nonatomic) XMNRequest *minorReq; // @synthesize minorReq=_minorReq;
@property(retain, nonatomic) XMNRequest *infoRequest; // @synthesize infoRequest=_infoRequest;
@property(retain, nonatomic) XMNRequest *sceneRequest; // @synthesize sceneRequest=_sceneRequest;
@property(retain, nonatomic) XMNRequest *guessLikeReq; // @synthesize guessLikeReq=_guessLikeReq;
@property(retain, nonatomic) XMNRequest *recReq; // @synthesize recReq=_recReq;
@property(retain, nonatomic) XMAddToPlayListPop *addPLPop; // @synthesize addPLPop=_addPLPop;
@property(nonatomic) __weak XMTableCellObject *oneKeySquareObj; // @synthesize oneKeySquareObj=_oneKeySquareObj;
@property(nonatomic) __weak XMTableCellObject *showTouTiaoTingObj; // @synthesize showTouTiaoTingObj=_showTouTiaoTingObj;
@property(nonatomic) __weak XMTableCellObject *showYiJianTingObj; // @synthesize showYiJianTingObj=_showYiJianTingObj;
@property(nonatomic) _Bool trackCellClickOnlyPlay; // @synthesize trackCellClickOnlyPlay=_trackCellClickOnlyPlay;
@property(retain, nonatomic) NSMutableArray *flowFocusModels; // @synthesize flowFocusModels=_flowFocusModels;
@property(retain, nonatomic) NSArray *feedAds; // @synthesize feedAds=_feedAds;
@property(retain, nonatomic) NSMutableArray *adModels; // @synthesize adModels=_adModels;
@property(retain, nonatomic) NSArray *stickTopModules; // @synthesize stickTopModules=_stickTopModules;
@property(retain, nonatomic) NSArray *squares; // @synthesize squares=_squares;
@property(retain, nonatomic) NSArray *focus; // @synthesize focus=_focus;
@property(retain, nonatomic) XMFindRecTabModel *currentTabModel; // @synthesize currentTabModel=_currentTabModel;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)syncAudioPlayer;
- (void)pauseVideoPlayerWhenViewDidDisappear;
- (void)releaseCurrentPlayer;
- (void)replayVideoPlayer;
- (void)resumeVideoPlayer;
- (void)stopVideoPlayer;
- (void)pauseVideoPlayer;
- (void)playVideoPlayerWithVideoCell:(id)arg1;
- (void)checkForAutomaticallyVideoPlaying;
- (void)flushCheckEvent;
- (void)createCheckEventSource;
- (void)pushSaveButtonIting;
- (void)showGuide:(_Bool)arg1 interestSelectPage:(_Bool)arg2;
- (void)showInterestCardViewController;
- (void)checkShowInterest;
- (id)abTest;
- (id)getAdDataString;
- (id)getInfoDic;
- (void)scrollToFirstFlowModule;
- (void)destroyPopUpManager;
- (void)onNetAvailable;
- (void)loginStateChanged;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)updateOneKeySquareMobule;
- (void)updateSquareAndlistenSceneWithJSON:(id)arg1;
- (void)loadRecentSquareAndSceneData;
- (void)hide423SubsidySidAdView:(id)arg1;
- (void)show423SubsidySidAdView:(id)arg1;
- (void)setupNotification;
- (void)onCityChanged;
- (void)mainTabfetchRecentFlows;
- (void)replaceLocalTingModel:(id)arg1;
- (void)cityChangeToFetchNewHeaderData;
- (id)allMoudleURLStringOnlyStreams:(_Bool)arg1 exposureAdObjsCount:(long long)arg2;
- (void)fetchOnlyStreamsFromLoadMore:(_Bool)arg1;
- (void)fetchTabsAndRecStreams;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)p_checkListenSideBarPackStatus:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollDidEndToPostExposure;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollActionWithScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)launchViewWillDismissNotification:(id)arg1;
- (void)launchGiantViewNotification:(id)arg1;
- (id)realExposurePositionNames;
- (void)updateAd;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)adViewControllerWillAppear;
- (void)adViewDidUpdateWithAdModels:(id)arg1 andPositionName:(id)arg2;
- (id)adViewWillRequestWithParamsForPositionName:(id)arg1;
- (void)adViewWillAddAds;
- (void)findOptionsView:(id)arg1 didClick:(id)arg2;
- (void)addFindOptionScrollViewWithType:(long long)arg1;
- (void)scrollImageView:(id)arg1 clickFocusItem:(id)arg2 atIndex:(long long)arg3;
- (void)addFocusImages:(id)arg1;
- (void)openGiftWebViewController;
- (void)showNewUserWelfareView;
- (void)removeNewUserWelfareSideBar;
- (void)addNewUserWelfareSideBar;
- (void)removeNewUserWelfareView;
- (void)addNewUserWelfaresView;
- (void)startDataLoad;
- (void)startReloadData;
- (void)loadDefautlCache;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshGuessYouLike;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupViews;
- (double)contentBottomOffset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)categoryRecAnchorsCellDidSelectItem:(id)arg1 atIndex:(long long)arg2 cellObj:(id)arg3;
- (void)recFLowCategoryWordCellDidSelectItem:(id)arg1 atIndex:(long long)arg2;
- (void)recFlowGuessRecCellDidClick:(id)arg1 recFlowModel:(id)arg2 atIndex:(long long)arg3;
- (void)recFlowNewUserSoundCellUnlikeCilckCancel:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserSoundCellUnlikeCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserSoundCellDidCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserSoundCellDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserSoundCellDidCilckPlayAll:(id)arg1 cellObject:(id)arg2;
- (void)playSoundItem:(id)arg1 flowUsercModel:(id)arg2 showNowPlaying:(_Bool)arg3;
- (void)recFlowNewUserSoundCellDidPlayItem:(id)arg1 fromRecModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowNewUserSoundCellDidCilckItem:(id)arg1 fromRecModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)replaceLiveToRecLiveWithCellObj:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)recFlowNewUserVideoCellUnlikeCilckCancel:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserVideoCellUnlikeCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserVideoCellDidCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserVideoCellDidCilckChange:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserVideoCellDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserVideoCellDidCilckItem:(id)arg1 fromRecModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)parseNewUserCycleJSON:(id)arg1 fromModel:(id)arg2;
- (void)newUserCycleWithRecModel:(id)arg1;
- (void)recFlowNewUserAlbumCellUnlikeCilckCancel:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserAlbumCellUnlikeCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserAlbumCellDidCilckUnlike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserAlbumCellDidCilckChange:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserAlbumCellDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowNewUserAlbumCellDidCilckItem:(id)arg1 fromRecModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)p_requestChannelInfoWith:(id)arg1;
- (void)p_requestPlayChannelWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clickFastPlayWithCell:(id)arg1 model:(id)arg2;
- (void)clickChannelWithCell:(id)arg1 model:(id)arg2;
- (void)clickHeadlineWithCell:(id)arg1 model:(id)arg2;
- (void)clickMainWithCell:(id)arg1 model:(id)arg2;
- (void)recFlowNewUserCardCellDidClickItem:(id)arg1 atIndex:(long long)arg2 fromCellObject:(id)arg3;
- (void)recFlowTrackCellDidClickHotCommentsUserName:(id)arg1 cellObject:(id)arg2;
- (void)recFlowTrackCellDidClickHotComments:(id)arg1 cellObject:(id)arg2;
- (void)recFlowTrackCellDidClickHotCommentUserName:(id)arg1 cellObject:(id)arg2;
- (void)recFlowTrackCellDidClickHotComment:(id)arg1 cellObject:(id)arg2;
- (void)recFlowAlbumCellUnlikeDidClickFriendName:(id)arg1 cellObject:(id)arg2;
- (void)recFlowFollowFriendCellDidCilckPlayVoiceSignature:(id)arg1 item:(id)arg2 position:(struct CGPoint)arg3;
- (void)recFlowFollowFriendCellDidClickItem:(id)arg1 uid:(long long)arg2;
- (void)recFlowFollowFriendCellDidClickMoreFriend:(id)arg1;
- (void)recFlowFollowFriendCellDidClickFindFriend:(id)arg1;
- (void)recFlowFollowFriendCellDidClickCancelAndRemoveCell:(id)arg1;
- (void)recFlowItingCardCellCellDidClickItem:(id)arg1 atIndex:(long long)arg2 fromCellObject:(id)arg3;
- (void)recFlowSpecialCollectionCellDidClickAlbum:(id)arg1 atIndex:(long long)arg2 fromCellObject:(id)arg3;
- (void)recFlowSpecialCollectionCellDidClickMore:(id)arg1;
- (void)recFlowHotWordsCellDidCilckHotWord:(id)arg1 cellObject:(id)arg2;
- (void)recFlowHotWordsCellDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowHotWordsCellDidCilckAlbum:(id)arg1 fromHotWord:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (id)getAllOfTheAdAlbumIdInGuessYouLikeModel:(id)arg1;
- (void)guessYouLikeModel:(id)arg1 addAlbumAdInfo:(id)arg2;
- (void)headerAlbumWeakAdInfosAddNewAdInfosInGuessYouLikeModel:(id)arg1;
- (id)getAllOfTheAdAlbumIdInPage;
- (void)headerAlbumWeakAdInfosRemoveOldAdInfosInGuessYouLikeModel:(id)arg1;
- (void)guessYouLikeChangeBatchWithCellObj:(id)arg1;
- (void)findRecBatchCellBatchDidCilck:(id)arg1;
- (id)realAlbumModelWithJSON:(id)arg1;
- (id)insertRealAlbums:(id)arg1 insertType:(id)arg2 toIndex:(long long)arg3 insertSize:(long long)arg4 toOldAlbums:(id)arg5;
- (void)realtimeUpdateRec:(id)arg1 fromAlbum:(id)arg2;
- (void)realtimeUpdateGuessModel:(id)arg1 fromAlbum:(id)arg2 searchWord:(id)arg3;
- (void)realtimeUpdateGuessLikeWithSearchWord:(id)arg1;
- (void)realtimeUpdateRec:(id)arg1 fromAlbum:(id)arg2 forReason:(id)arg3;
- (void)longPressGuess:(id)arg1 albumCardModel:(id)arg2 recFlowModel:(id)arg3;
- (void)clickGuessItem:(id)arg1 cell:(id)arg2 indexPath:(id)arg3;
- (void)clickGuessReloadButton:(id)arg1 cell:(id)arg2;
- (void)clickGuessMoreButton:(id)arg1 cell:(id)arg2;
- (void)clickGuessInterestButton:(id)arg1 cell:(id)arg2;
- (void)recRecGuessCardCellDidCilckItem:(id)arg1 fromRecModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)sectionCellRankingListDidCilck:(id)arg1;
- (void)sectionCellGuessYouLikeClick;
- (void)sectionCellMoreDidCilck:(id)arg1;
- (void)recFlowInterestCellUnlikeDidClick:(id)arg1;
- (void)recFlowInterestCellDidSelectTag:(id)arg1 withCellObject:(id)arg2;
- (void)recFlowInterestCellConfirmWithSelectTags:(id)arg1 intersetModel:(id)arg2 cellObject:(id)arg3;
- (void)recFlowInterestCellShouldShowConfirmButton;
- (void)animatedDeleteCellObject:(id)arg1;
- (void)showTrackMoreActionSheetWithModel:(id)arg1 fromCellObj:(id)arg2;
- (void)recFlowTrackCellUnlike:(id)arg1 reason:(id)arg2;
- (void)showAlbumMoreActionSheetWithModel:(id)arg1 fromCellObj:(id)arg2;
- (void)recFlowAlbumCellUnlikeDidClick:(id)arg1 reason:(id)arg2;
- (void)playableVideoCellReplayDidClick:(id)arg1;
- (void)playableVideoCellPlayDidClick:(id)arg1;
- (void)playableSoundCellPlayDidClick:(id)arg1 withModel:(id)arg2;
- (void)recFlowCellWechatTimelineShareDidClick:(id)arg1 recFlowModel:(id)arg2;
- (void)recFlowCellWechatSessionShareDidClick:(id)arg1 recFlowModel:(id)arg2;
- (void)cellDidLongPress:(id)arg1 withModel:(id)arg2;
- (void)recFlowRecLiveCellUnlikeDidClick:(id)arg1 reason:(id)arg2;
- (void)showRecLiveMoreActionSheetWithModel:(id)arg1 fromCellObj:(id)arg2;
- (void)videoUnlikeDidClickObj:(id)arg1 reason:(id)arg2;
- (void)showVideoMoreActionSheetWithModel:(id)arg1 fromCellObj:(id)arg2;
- (void)recFlowSpecialUnlikeDidClick:(id)arg1 reason:(id)arg2;
- (void)showSpecialMoreActionSheetWithModel:(id)arg1 fromCellObj:(id)arg2;
- (void)moreModuleDidClick:(id)arg1;
- (void)recFlowClassicListenDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowClassicListenDidCilckItem:(id)arg1 fromRecFlowModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowHotSearchDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowHotSearchDidCilckItem:(id)arg1 fromRecFlowModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowCardCellLongPressItem:(id)arg1 recFlowModel:(id)arg2 cellObj:(id)arg3;
- (void)recFlowCardCellClickItem:(id)arg1 recFlowModel:(id)arg2 cellObj:(id)arg3;
- (void)recFlowCardCellClickReload:(id)arg1 cellObj:(id)arg2;
- (void)recFlowAlbumCardCellDidLongPress:(id)arg1 albumCardModel:(id)arg2 recFlowModel:(id)arg3;
- (void)recFlowAlbumCardCellScrollViewDidEndDeceleratingWithModel:(id)arg1 visibleItems:(id)arg2 cellObject:(id)arg3;
- (void)recFlowAlbumCardCellDidCilckRankingList:(id)arg1 cellObject:(id)arg2;
- (void)recFlowAlbumCardCellDidClickGuessYouLike:(id)arg1 cellObject:(id)arg2;
- (void)recFlowAlbumCardCellDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowAlbumCardCellDidCilckCard:(id)arg1 fromRecFlowModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowEntDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowEntDidCilckCard:(id)arg1 fromRecFlowModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowRecommendFriendCellScrollViewDidEndDeceleratingWithModel:(id)arg1 visibleItems:(id)arg2 cellObject:(id)arg3;
- (void)recFlowLiveCellScrollViewDidEndDeceleratingWithModel:(id)arg1 visibleItems:(id)arg2 cellObject:(id)arg3;
- (void)recFlowLiveDidCilckMore:(id)arg1 cellObject:(id)arg2;
- (void)recFlowLiveDidCilckCard:(id)arg1 fromRecFlowModel:(id)arg2 atIndex:(long long)arg3 cellObject:(id)arg4;
- (void)recFlowTopBuzzCellMoreDidCilckTop:(id)arg1 cellObject:(id)arg2;
- (void)recFlowTopBuzzCellDidCilckPlay:(id)arg1 findRecFlowModel:(id)arg2 cellObject:(id)arg3;
- (void)recFlowTopBuzzCellDidCilckTop:(id)arg1 findRecFlowModel:(id)arg2 cellObject:(id)arg3;
- (void)showMinorTips;
- (void)getMinor;
- (void)unfoldTracksFromObj:(id)arg1;
- (void)shareAlbum:(id)arg1;
- (void)shareTrack:(id)arg1;
- (void)actionForSelectDiscoverColumnItem:(id)arg1 actionId:(long long *)arg2;
- (void)appendToDataSourceWithRecCellObjs:(id)arg1 addToNext:(_Bool)arg2 lastObj:(id)arg3 removeRecGuessObj:(_Bool)arg4;
- (void)fetchRecFlowsWithParams:(id)arg1 fromCellObj:(id)arg2;
- (void)pushVideoViewControllerWithItem:(id)arg1;
- (void)pushAlbumViewControllerWithItem:(id)arg1 forceCheck:(_Bool)arg2 fromCellObj:(id)arg3 autoPlay:(_Bool)arg4;
- (void)pushAlbumViewControllerWithItem:(id)arg1 forceCheck:(_Bool)arg2 fromCellObj:(id)arg3;
- (void)playTrackFlowModel:(id)arg1 showPlaying:(_Bool)arg2 fromCellObj:(id)arg3;
- (void)buildFeedAdCellObjects;
- (void)addAdModelsFromCellObjects:(id)arg1;
- (void)updateAllOfTheAdModelsInTableView;
- (id)cellForModel:(id)arg1;
- (id)cellObjectsWithModel:(id)arg1 currentIndex:(long long)arg2;
- (id)parseRecFlowsModule:(id)arg1 fromCache:(_Bool)arg2;
- (id)parseRecFlowsModule:(id)arg1;
- (void)reportAlbumAdInfosInCellObjs:(id)arg1;
- (id)albumAdWeakInfosFromCellObjects:(id)arg1;
- (id)parseHeaderModule:(id)arg1;
- (void)parseCityRelatedModulesFromJSON:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)genterateRecGuessLikeObjs:(id)arg1;
- (void)parseRecFlowsJSON:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)parseFlowsJSON:(id)arg1;
- (void)parseAllModulesJSON:(id)arg1 fromCache:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateDataSourceWithFlowModules:(id)arg1 fromLoadMore:(_Bool)arg2;
- (void)updateDataSourceWithLoadingCellObjs:(id)arg1;
- (void)updateDataSourceWithStickTopModules:(id)arg1 flowModules:(id)arg2;
- (void)reportFirstInstallActive;
- (void)postFastHearClickPlayDataTrackWithRecModel:(id)arg1 play:(_Bool)arg2;
- (void)postFastHearClickChannelDataTrackWithRecModel:(id)arg1;
- (void)postFastHearClickHeadlineDataTrackWithRecModel:(id)arg1;
- (void)postFastHearClickMainDataTrackWithRecModel:(id)arg1;
- (void)postFriendNameClickDataTrackWithRecModel:(id)arg1 friendInfo:(id)arg2 modulePosition:(long long)arg3;
- (void)postRecUserClickDataTrackWithRecModel:(id)arg1 userRecModel:(id)arg2 modulePosition:(long long)arg3;
- (void)postRecLiveClickDataTrackWithRecModel:(id)arg1 liveItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postItingCardClickDataTrackWithRecModel:(id)arg1 itingModel:(id)arg2 cardIndex:(long long)arg3 modulePosition:(long long)arg4;
- (void)postSpecialCollectionAlbumCardClickDataTrackWithRecModel:(id)arg1 subjectItem:(id)arg2 albumCardModel:(id)arg3 cardIndex:(long long)arg4 modulePosition:(long long)arg5;
- (void)postSpecialCollectionMoreClickDataTrackWithRecModel:(id)arg1 subjectItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postVideoClickDataTrackWithRecModel:(id)arg1 trackItem:(id)arg2 modulePosition:(long long)arg3 isNormal:(_Bool)arg4 isAD:(_Bool)arg5;
- (void)postHotWordFilterClickDataTrackWithRecModel:(id)arg1 hotWordModel:(id)arg2 toPosition:(long long)arg3 modulePosition:(long long)arg4;
- (void)postHotWordAlbumCardClickDataTrackWithRecModel:(id)arg1 hotWordModel:(id)arg2 cardAlbumModel:(id)arg3 cardPosition:(long long)arg4 modulePosition:(long long)arg5;
- (void)postHotWordsMoreClickDataTrackWithRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postRecToastClick;
- (void)postTabbarHomeRefreshClick;
- (void)postTabbarHomeClick;
- (id)moduleNameWithModuleType:(long long)arg1;
- (id)itemTypeWithRecModel:(id)arg1;
- (void)postRecommendFriendScrollExposureWithModel:(id)arg1 visibleIndexPaths:(id)arg2 cellIndexPath:(id)arg3;
- (void)postLiveScrollExposureWithModel:(id)arg1 visibleIndexPaths:(id)arg2 cellIndexPath:(id)arg3;
- (void)postAlbumCardScrollExposureWithModel:(id)arg1 visibleIndexPaths:(id)arg2 cellIndexPath:(id)arg3;
- (void)postVerticalScrollExposureWithIndexPaths:(id)arg1;
- (void)postGuessYouLikeChangeBatchEventWithFindRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postInterestTagClickDataTrackWithRecModel:(id)arg1 tag:(id)arg2 modulePosition:(long long)arg3;
- (void)postInterestConfirmClickDataTrackWithRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postSquareClickDataTrackWithContentType:(id)arg1 itemId:(long long)arg2 itemTitle:(id)arg3 srcPosition:(long long)arg4;
- (void)postFocusClickDataTrackWithItemId:(long long)arg1 srcPosition:(long long)arg2;
- (void)postClassicListenClickDataTrackWithRecModel:(id)arg1 albumModel:(id)arg2 modulePosition:(long long)arg3;
- (void)postHotSearchClickDataTrackWithRecModel:(id)arg1 hotWord:(id)arg2 modulePosition:(long long)arg3;
- (void)postHeadlinePlayClickDataTrackWithRecModel:(id)arg1 Sound:(id)arg2 modulePosition:(long long)arg3;
- (void)postHeadlineClickDataTrackWithRecModel:(id)arg1 Sound:(id)arg2 modulePosition:(long long)arg3 clickMore:(_Bool)arg4;
- (void)postTrackFlowClickDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 modulePosition:(long long)arg3 isAD:(_Bool)arg4;
- (void)postTrackFlowPlayClickDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 toPlay:(_Bool)arg3 modulePosition:(long long)arg4;
- (void)postTrackFlowLongPressDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postTrackActionSheetAddToListClickDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postTrackActionSheetLookAlbumClickDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postTrackActionSheetShareClickDataTrackWithRecModel:(id)arg1 soundItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postAlbumFlowLongPressDataTrackWithRecModel:(id)arg1 albumItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postAlbumFlowLongPressSubClickDataTrackWithRecModel:(id)arg1 albumItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postAlbumFlowLongPressShareClickDataTrackWithRecModel:(id)arg1 albumItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postAlbumFlowClickDataTrackWithRecModel:(id)arg1 albumItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postSubjectClickDataTrackWithRecModel:(id)arg1 newSpecialItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postSubjectClickDataTrackWithRecModel:(id)arg1 specialItem:(id)arg2 modulePosition:(long long)arg3;
- (void)postFastListenCardMoreClickDataTrackWithRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postFastListenCardClickDataTrackWithRecModel:(id)arg1 channelInfo:(id)arg2 cardPosition:(long long)arg3 modulePosition:(long long)arg4;
- (void)postLiveCardMoreClickDataTrackWithRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postLiveCardClickDataTrackWithRecModel:(id)arg1 liveItem:(id)arg2 cardPosition:(long long)arg3 modulePosition:(long long)arg4;
- (void)postAlbumCardMoreClickDataTrackWithRecModel:(id)arg1 modulePosition:(long long)arg2;
- (void)postAlbumCardClickDataTrackWithRecModel:(id)arg1 cardAlbumModel:(id)arg2 cardPosition:(long long)arg3 modulePosition:(long long)arg4;
- (void)postGuessLikeCardClickDataTrackWithRecModel:(id)arg1 cardModel:(id)arg2 cardPosition:(long long)arg3 modulePosition:(long long)arg4;
- (void)zeroPlayTimerEnd;
- (_Bool)canShowZeroPlayTips;
- (void)checkShowPlayTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

