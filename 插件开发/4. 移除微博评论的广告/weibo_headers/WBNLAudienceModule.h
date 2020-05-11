//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXAudienceTableDataSourceManagerDelegate-Protocol.h"
#import "YXAudienceTableDelegate-Protocol.h"
#import "YXLiveGrabSeatPanelViewDelegate-Protocol.h"

@class NSString, UIView, YXAudienceTable, YXAudienceTableDataSourceManager, YXLiveAudienceListFirstView, YXLiveGrabSeatManager, YXLiveGrabSeatPanelView, YXLiveReserveNumView, YXLiveRoomOnlineNumView;
@protocol WBNLAudienceModuleDataSource, WBNLAudienceModuleDelegate;

@interface WBNLAudienceModule : NSObject <YXAudienceTableDelegate, YXAudienceTableDataSourceManagerDelegate, YXLiveGrabSeatPanelViewDelegate>
{
    _Bool _isReplay;
    _Bool _isMCRoom;
    _Bool _isReserve;
    _Bool _isThirdParty;
    _Bool _isScreenLandscape;
    _Bool _loadingMoreAudience;
    UIView *_superview;
    UIView *_containerView;
    id <WBNLAudienceModuleDelegate> _delegate;
    id <WBNLAudienceModuleDataSource> _dataSource;
    YXAudienceTable *_audienceTable;
    long long _currentLivePeopleCount;
    unsigned long long _firstClassStyle;
    YXAudienceTableDataSourceManager *_audienceDataSoureManager;
    long long _currentAudiencePage;
    long long _totoalLivePeopleCount;
    YXLiveAudienceListFirstView *_audienceListFirstView;
    YXLiveGrabSeatPanelView *_grabSeatPanelView;
    YXLiveGrabSeatManager *_grabSeatManager;
    YXLiveRoomOnlineNumView *_onlineNumView;
    long long _currentReserveNum;
    YXLiveReserveNumView *_reserveNumView;
    long long _reserveNumUpdateTime;
    struct CGSize _itemSize;
}

@property(nonatomic) long long reserveNumUpdateTime; // @synthesize reserveNumUpdateTime=_reserveNumUpdateTime;
@property(retain, nonatomic) YXLiveReserveNumView *reserveNumView; // @synthesize reserveNumView=_reserveNumView;
@property(nonatomic) long long currentReserveNum; // @synthesize currentReserveNum=_currentReserveNum;
@property(retain, nonatomic) YXLiveRoomOnlineNumView *onlineNumView; // @synthesize onlineNumView=_onlineNumView;
@property(retain, nonatomic) YXLiveGrabSeatManager *grabSeatManager; // @synthesize grabSeatManager=_grabSeatManager;
@property(retain, nonatomic) YXLiveGrabSeatPanelView *grabSeatPanelView; // @synthesize grabSeatPanelView=_grabSeatPanelView;
@property(retain, nonatomic) YXLiveAudienceListFirstView *audienceListFirstView; // @synthesize audienceListFirstView=_audienceListFirstView;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long totoalLivePeopleCount; // @synthesize totoalLivePeopleCount=_totoalLivePeopleCount;
@property(nonatomic) long long currentAudiencePage; // @synthesize currentAudiencePage=_currentAudiencePage;
@property(nonatomic) _Bool loadingMoreAudience; // @synthesize loadingMoreAudience=_loadingMoreAudience;
@property(retain, nonatomic) YXAudienceTableDataSourceManager *audienceDataSoureManager; // @synthesize audienceDataSoureManager=_audienceDataSoureManager;
@property(nonatomic) unsigned long long firstClassStyle; // @synthesize firstClassStyle=_firstClassStyle;
@property(nonatomic) long long currentLivePeopleCount; // @synthesize currentLivePeopleCount=_currentLivePeopleCount;
@property(retain, nonatomic) YXAudienceTable *audienceTable; // @synthesize audienceTable=_audienceTable;
@property(nonatomic) _Bool isScreenLandscape; // @synthesize isScreenLandscape=_isScreenLandscape;
@property(nonatomic) __weak id <WBNLAudienceModuleDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WBNLAudienceModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) _Bool isThirdParty; // @synthesize isThirdParty=_isThirdParty;
@property(nonatomic) _Bool isReserve; // @synthesize isReserve=_isReserve;
@property(nonatomic) _Bool isMCRoom; // @synthesize isMCRoom=_isMCRoom;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
- (void).cxx_destruct;
- (double)audienceFirstViewCenterY;
- (double)audienceListFirstViewWidth;
- (void)updateAudienceFrameForGuardView:(_Bool)arg1;
- (void)initReserveNumView;
- (void)initOnlineNumView;
- (_Bool)isAudienceListViewShow;
- (_Bool)showSceneInfo;
- (void)grabSeatPanelViewShouldShowUserInfo:(id)arg1;
- (void)hideGrabSeatPanelView;
- (void)showAudienceListView;
- (void)showUserInfo:(id)arg1;
- (void)didSelectItemWithInfo:(id)arg1;
- (void)dataSourceManagerShouldUpdate;
- (void)showAudienceListFirstDefault;
- (void)deleteAudienceListFirstMember:(id)arg1;
- (void)updateAudienceListFirstInfo:(id)arg1;
- (void)audienceTableDataSourceManagerDidReload;
- (void)cleanAudience;
- (void)updateReserveNum:(long long)arg1;
- (void)onUpdateAudienceCount:(long long)arg1;
- (void)enterFullScreeen:(_Bool)arg1;
- (void)hideAudience:(_Bool)arg1;
- (void)updateAudienceFrame;
- (struct CGSize)getItemSize:(id)arg1;
- (struct CGSize)audienceView:(id)arg1 sizeForItemAtIndex:(id)arg2;
- (struct UIEdgeInsets)audienceView:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void)audienceViewScrollLoadMore:(id)arg1;
- (long long)numberOfItemsInAudienceView:(id)arg1;
- (void)audienceView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)audienceView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)updateSubviewsStatus;
- (void)updateReservationNum;
- (void)updateAudienceCount;
- (void)onReservationNumResponse:(id)arg1;
- (void)onOutLiveRoomResponse:(id)arg1;
- (void)onInLiveRoomMsgResponse:(id)arg1;
- (void)updateAudienceListFirstView;
- (void)buildAudience;
- (void)updateAudienceTable:(id)arg1;
- (void)requestMoreAudience;
- (void)refreshAudience;
- (void)requesFirstPageAudience;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

