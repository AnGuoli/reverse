//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMDiscoverFeedsBaseViewController.h"

#import "XMDubShowProgramBannerCellDelegate-Protocol.h"
#import "XMDubShowProgramCellDelegate-Protocol.h"
#import "XMDubShowProgramDubbingCellDelegate-Protocol.h"
#import "XMDubShowProgramSelectedCellDelegate-Protocol.h"
#import "XMPlayerDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UIButton, XMAVPlayer, XMTableViewDataSource;

@interface XMDubShowDiscoverStreamViewController : XMDiscoverFeedsBaseViewController <XMTableViewDelegateProtocol, XMDubShowProgramCellDelegate, XMPlayerDelegate, XMDubShowProgramSelectedCellDelegate, XMDubShowProgramDubbingCellDelegate, XMDubShowProgramBannerCellDelegate>
{
    _Bool _hasMoreData;
    _Bool _defOpenVoice;
    _Bool _enabledData;
    _Bool _pauseAppVoice;
    _Bool _firstIn;
    _Bool _findTrigger;
    unsigned long long _dubShowFeedViewControllerType;
    unsigned long long _tagId;
    NSMutableArray *_dubProgramIds;
    NSMutableArray *_dubPrograms;
    NSMutableArray *_dubBannerItems;
    NSMutableArray *_selectedCollectionItems;
    NSMutableArray *_dubDubbingItems;
    NSMutableArray *_dubItems;
    XMTableViewDataSource *_tableDataSource;
    unsigned long long _refreshTimes;
    NSIndexPath *_currentPlayIndexPath;
    XMAVPlayer *_videoPlayer;
    unsigned long long _pageId;
    long long _playStartedAt;
    long long _didScrolledTime;
    long long _fetchRequestOffset;
    UIButton *_tryDubButton;
    long long _bannerId;
}

@property(nonatomic) long long bannerId; // @synthesize bannerId=_bannerId;
@property(retain, nonatomic) UIButton *tryDubButton; // @synthesize tryDubButton=_tryDubButton;
@property(nonatomic) long long fetchRequestOffset; // @synthesize fetchRequestOffset=_fetchRequestOffset;
@property(nonatomic) _Bool findTrigger; // @synthesize findTrigger=_findTrigger;
@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(nonatomic) long long didScrolledTime; // @synthesize didScrolledTime=_didScrolledTime;
@property(nonatomic) long long playStartedAt; // @synthesize playStartedAt=_playStartedAt;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool pauseAppVoice; // @synthesize pauseAppVoice=_pauseAppVoice;
@property(nonatomic) _Bool enabledData; // @synthesize enabledData=_enabledData;
@property(nonatomic) _Bool defOpenVoice; // @synthesize defOpenVoice=_defOpenVoice;
@property(retain, nonatomic) XMAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) NSIndexPath *currentPlayIndexPath; // @synthesize currentPlayIndexPath=_currentPlayIndexPath;
@property(nonatomic) unsigned long long refreshTimes; // @synthesize refreshTimes=_refreshTimes;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSMutableArray *dubItems; // @synthesize dubItems=_dubItems;
@property(retain, nonatomic) NSMutableArray *dubDubbingItems; // @synthesize dubDubbingItems=_dubDubbingItems;
@property(retain, nonatomic) NSMutableArray *selectedCollectionItems; // @synthesize selectedCollectionItems=_selectedCollectionItems;
@property(retain, nonatomic) NSMutableArray *dubBannerItems; // @synthesize dubBannerItems=_dubBannerItems;
@property(retain, nonatomic) NSMutableArray *dubPrograms; // @synthesize dubPrograms=_dubPrograms;
@property(retain, nonatomic) NSMutableArray *dubProgramIds; // @synthesize dubProgramIds=_dubProgramIds;
@property(nonatomic) unsigned long long tagId; // @synthesize tagId=_tagId;
@property(nonatomic) unsigned long long dubShowFeedViewControllerType; // @synthesize dubShowFeedViewControllerType=_dubShowFeedViewControllerType;
- (void).cxx_destruct;
- (void)postBISelectedAlbum;
- (void)postBIActiveRole;
- (void)biBannerCellShowWithBannnerId:(long long)arg1;
- (void)postBIBanner;
- (void)reachabilityChanged;
- (void)showTryDubButton;
- (void)hideTryDubButton;
- (void)p_handleTryDubAction;
- (void)addTryDubButton;
- (void)xmDubShowProgramBannerCell:(id)arg1 bannnerIndexChanged:(id)arg2;
- (void)xmDubShowProgramBannerCell:(id)arg1 clickPicModel:(id)arg2;
- (void)changeFollowState:(id)arg1;
- (void)xmDubShowProgramDubbingCell:(id)arg1 tapAvaterWithModel:(id)arg2;
- (void)xmDubShowProgramDubbingCell:(id)arg1 cellModel:(id)arg2 clickItemWithModel:(id)arg3;
- (void)xmDubShowProgramDubbingCell:(id)arg1 followWithModel:(id)arg2;
- (void)parseDubSelectedCollectionItemsFromResponse:(id)arg1 pullToRefresh:(_Bool)arg2;
- (void)parseDubItemsFromResponse:(id)arg1 pullToRefresh:(_Bool)arg2;
- (void)fetchContentWithOffset:(long long)arg1 pullToRefresh:(_Bool)arg2;
- (void)dubShowProgramSelectedCell:(id)arg1 selectedModel:(id)arg2;
- (void)handleSyncDataInfo:(id)arg1;
- (void)onPriaseCommentStatusChanged:(id)arg1;
- (void)postVideoStatistic:(id)arg1;
- (void)postVideoCount;
- (id)currentDubShowProgrameCell;
- (void)stopVideoAndVoicePlayer:(long long)arg1;
- (void)playDubShowProgrameVideoMaterailWithIndexPath:(id)arg1;
- (void)playDubShowProgrameCellWithIndex:(id)arg1;
- (void)removeVideoPlayerKVO;
- (void)addVideoPlayerKVO;
- (void)uploadVisibleCellItemsToServerForExposureTrack;
- (void)removeUnVisiableDidFinishedPlayView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)autoPlay;
- (void)stopUnVisiableCellPlay;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dubShowProgrameCellTapFollow:(id)arg1;
- (void)dubShowProgrameCellTapVolume:(id)arg1;
- (void)dubShowProgrameCellTapAvater:(id)arg1;
- (void)dubShowProgramCellTapComment:(id)arg1;
- (void)dubShowProgramCellTapLike:(id)arg1;
- (id)playModelForIndex:(long long)arg1;
- (id)itemModelForIndexPath:(id)arg1;
- (void)dubShowProgramCellTapPlay:(id)arg1;
- (void)dubShowProgramCell:(id)arg1 topicButtonPressedWithItem:(id)arg2;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)updateItemModelWithPlayStatusWithIndexPath:(id)arg1 play:(_Bool)arg2;
- (void)updateAllModelWithVolumeOpen:(_Bool)arg1;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)toDubShowWithItem:(id)arg1 openCmd:(_Bool)arg2;
- (void)toDubShowWithItem:(id)arg1;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerLoadMore;
- (void)pullToRefresh;
- (void)triggerPullToRefresh;
- (void)appDidBecomeActive;
- (void)applicationWillTerminate;
- (void)appDidEnterBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

