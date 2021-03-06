//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

@class WBPageEngine;

@interface WBVideoPlaylistCardListViewController : WBCardListViewController
{
    _Bool _userPullrefresh;
    _Bool _currentAccountChanged;
    _Bool _appearedOnce;
    _Bool _needAutoRefresh;
    WBPageEngine *_engine;
    long long _refreshTimestamps;
    long long _expiredTime;
}

@property(nonatomic) _Bool needAutoRefresh; // @synthesize needAutoRefresh=_needAutoRefresh;
@property(nonatomic) long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) long long refreshTimestamps; // @synthesize refreshTimestamps=_refreshTimestamps;
@property(nonatomic) _Bool appearedOnce; // @synthesize appearedOnce=_appearedOnce;
@property(nonatomic) _Bool currentAccountChanged; // @synthesize currentAccountChanged=_currentAccountChanged;
@property(nonatomic) _Bool userPullrefresh; // @synthesize userPullrefresh=_userPullrefresh;
- (void).cxx_destruct;
- (id)uiCode;
- (id)analysisParameters;
- (_Bool)didPressLoadMoreFooterView:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)triggerPullRefresh;
- (void)configEngine:(id)arg1;
- (void)refreshCardListControllerIfNeeded;
- (void)refresh;
- (id)engine;
- (_Bool)cacheForEngine:(id)arg1;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)accountDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configTableViewInsets;
- (void)viewDidLoad;
- (void)dealloc;

@end

