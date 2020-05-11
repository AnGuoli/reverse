//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMessageCenterCommentViewController.h"

@interface WBMessageCenterAtViewController : WBMessageCenterCommentViewController
{
    unsigned long long initialUnreadCount;
    _Bool isFirstReload;
    _Bool _hasSchemeType;
    int _schemeCondition;
}

@property(nonatomic) int schemeCondition; // @synthesize schemeCondition=_schemeCondition;
@property(nonatomic) _Bool hasSchemeType; // @synthesize hasSchemeType=_hasSchemeType;
- (void)openBlockH5ForStatus:(id)arg1;
- (_Bool)needsTitleBarWhenPeeking;
- (int)MessageCenterTitle_at;
- (void)messageCenterFilter:(int)arg1 result:(CDUnknownBlockType)arg2;
- (void)didPressUrlLink:(id)arg1 inCell:(id)arg2;
- (void)didPressUserScreenNameLabel:(id)arg1 inCell:(id)arg2;
- (id)extraButtonActionTypesInCell:(id)arg1;
- (void)filterComponent:(id)arg1 droplistItemValueAtIndex:(unsigned long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)onBringToFront;
- (void)loadDataFromCache;
- (void)loadMoreData;
- (void)reloadData;
- (_Bool)hasNoData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)moreButtonPressed:(id)arg1;
- (id)titleFromFilterCondition:(int)arg1;
- (unsigned long long)indexFromFilterCondition:(int)arg1;
- (int)filterConditionFromIndex:(unsigned long long)arg1;
- (void)saveSelectedFilterCondition:(int)arg1;
- (void)configEmptyView:(int)arg1;
- (void)configBadgeView;
- (void)configureFilterComponent;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inCell:(id)arg4 userInfo:(id)arg5;
- (id)analysisParametersWithSourceTimelineItem:(id)arg1;
- (void)configDefaultFeatureCode;
- (id)getNotificationSettingTipDataModel;
- (_Bool)isShowNotficationTipAfterFirstReloadData;
- (_Bool)isShowNotficationTipAtFirst;
- (double)desiredBaseContentInsetTop;
- (void)dealRefresh;
- (void)viewDidLoad;
- (_Bool)generalMediaAutoPlayIgnored;
- (id)uicodeInit;
- (id)initWithRootViewController:(id)arg1;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)forceEjectMeType:(id)arg1;

@end

