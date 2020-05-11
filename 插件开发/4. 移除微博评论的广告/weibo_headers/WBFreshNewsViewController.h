//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUniversalFreshNewsViewController.h"

#import "WBBaseSegmentListViewWrapperDelegate-Protocol.h"
#import "WBComposeViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, QRCodeEncodeEngine, UIBarButtonItem, WBCardListHeaderChannelCard, WBFreshListViewWrapper;
@protocol WBSegmentFreshNewsViewControllerCallback;

@interface WBFreshNewsViewController : WBUniversalFreshNewsViewController <WBComposeViewControllerDelegate, WBBaseSegmentListViewWrapperDelegate>
{
    _Bool flowNaviStatus;
    _Bool _isFullScreenMode;
    _Bool _notAllowSegmentMode;
    _Bool _backItemDidHide;
    _Bool _isFirstLoad;
    id <WBSegmentFreshNewsViewControllerCallback> _callback;
    QRCodeEncodeEngine *_codeEncodeEngine;
    WBFreshListViewWrapper *_wrapper;
    WBCardListHeaderChannelCard *_channelCard;
    UIBarButtonItem *_storageBackItem;
    NSMutableDictionary *_segmentViewControllerInfos;
}

+ (_Bool)needRecordCardlistTimeForContainerid:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *segmentViewControllerInfos; // @synthesize segmentViewControllerInfos=_segmentViewControllerInfos;
@property(retain, nonatomic) UIBarButtonItem *storageBackItem; // @synthesize storageBackItem=_storageBackItem;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) _Bool backItemDidHide; // @synthesize backItemDidHide=_backItemDidHide;
@property(retain, nonatomic) WBCardListHeaderChannelCard *channelCard; // @synthesize channelCard=_channelCard;
@property(retain, nonatomic) WBFreshListViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) QRCodeEncodeEngine *codeEncodeEngine; // @synthesize codeEncodeEngine=_codeEncodeEngine;
@property(nonatomic) __weak id <WBSegmentFreshNewsViewControllerCallback> callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool notAllowSegmentMode; // @synthesize notAllowSegmentMode=_notAllowSegmentMode;
- (void)setIsFullScreenMode:(_Bool)arg1;
- (void).cxx_destruct;
- (void)showUnreadDotImage:(_Bool)arg1;
- (void)removeSegmentbar;
- (void)resetMenuData;
- (void)configFreshNewsFollowReadClickStatus:(_Bool)arg1;
- (void)configFreshNewsFollowStatus:(_Bool)arg1;
- (void)initFlowNaviView;
- (void)channelsBarDidSelectChannelManual:(id)arg1 toIndex:(long long)arg2;
- (void)configToolbarMenu;
- (long long)findNoTitleIndex:(long long)arg1 beginIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)didFinishPullRefreshing;
- (_Bool)generalMediaAutoPlayIgnored;
- (_Bool)panNavigationSimultaneouslyWithGestureRecognizer:(id)arg1;
- (_Bool)panToNavigation;
- (void)deleteTimeLineItemWithNotification:(id)arg1;
- (id)cardListBaseItem;
- (void)willEndPullRefreshInWrapper:(id)arg1;
- (void)willTriggerPullRefreshInWrapper:(id)arg1;
- (void)onReceivedBackwardInfo:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)configFilterGroup:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool shouldConfigFilterGroupsWhenInSegmentMode;
- (id)firstCardListViewController;
- (id)currentCardListViewController;
- (id)currentTabContainerId;
- (void)updateTitleView;
- (id)allowedBackworkSchemes;
- (id)getCurrentIdsWithCurrentChannels:(id)arg1;
- (void)showBackItemButton;
- (void)hideBackItemButton;
- (void)refresh;
- (void)refreshCurrentListView;
- (void)sendChannelDataWithCurrentChannels:(id)arg1 unusedChannels:(id)arg2;
- (void)wrapperWillResetDefaultSelectedIndex:(long long)arg1;
- (void)wrapperDidUpdateChannels:(id)arg1 unusedChannels:(id)arg2;
- (void)wrapperDidChangeSwipeViewCurrentItem:(id)arg1;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (void)configCardListHeaderWithCard:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)supportPullRefrash;
- (void)switchToSegmentModeIfNeeded:(_Bool)arg1;
- (void)configData;
- (void)configWhenNormalPage:(CDUnknownBlockType)arg1 whenSegmentPage:(CDUnknownBlockType)arg2 whenChildPage:(CDUnknownBlockType)arg3;
- (void)configTableViewStyle;
- (void)configTableViewInsets;
- (void)configSubviewsFrame;
- (_Bool)isFullScreenMode;
- (void)updateChannelsData;
- (void)removeSubviewsIfNeeded;
- (Class)segmentViewWrapperClass;
- (void)initializeSubviewsIfNeeded;
- (double)navigationHeight;
- (void)initializeSelf;
- (void)updateTagDelete:(id)arg1;
- (void)reloadUIElements;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)createAndShareQRCode;
- (void)contactRecentPickerViewController:(id)arg1 shareToPrivateMessageWithUserTarget:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (Class)baseViewClass;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

