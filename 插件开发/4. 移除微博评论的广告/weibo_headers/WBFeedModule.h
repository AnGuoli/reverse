//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMModule.h"

@class NSDictionary, NSString;

@interface WBFeedModule : WBMModule
{
    long long launchOrientation;
    _Bool isFirst;
    _Bool _isPushChangeGroup;
    _Bool _isPushReloadGroup;
    NSDictionary *_pushChangeGroupParams;
    NSDictionary *_dailyCheckInObj;
    NSDictionary *_fclNoCacheErrorCodes;
    NSDictionary *_launchVideoAdFrameInfo;
}

+ (id)debugPageItem;
@property(retain, nonatomic) NSDictionary *launchVideoAdFrameInfo; // @synthesize launchVideoAdFrameInfo=_launchVideoAdFrameInfo;
@property(retain) NSDictionary *fclNoCacheErrorCodes; // @synthesize fclNoCacheErrorCodes=_fclNoCacheErrorCodes;
@property(retain, nonatomic) NSDictionary *dailyCheckInObj; // @synthesize dailyCheckInObj=_dailyCheckInObj;
@property(nonatomic) _Bool isPushReloadGroup; // @synthesize isPushReloadGroup=_isPushReloadGroup;
@property(retain, nonatomic) NSDictionary *pushChangeGroupParams; // @synthesize pushChangeGroupParams=_pushChangeGroupParams;
@property(nonatomic) _Bool isPushChangeGroup; // @synthesize isPushChangeGroup=_isPushChangeGroup;
- (void).cxx_destruct;
- (_Bool)didReceivePushScheme:(id)arg1;
- (void)applicationDidBecomeVisibleToUser;
- (unsigned long long)curNaviIdx;
- (unsigned long long)curTabIdx;
- (void)_currentAccountDidChangeNotification:(id)arg1;
- (_Bool)_canChangeHomeViewController;
- (void)fetchConfigWithVersionString:(id)arg1;
- (void)module:(id)arg1 pushActiveDidChanged:(id)arg2;
- (void)module:(id)arg1 pushDailyDidChanged:(id)arg2;
- (void)dealloc;
- (void)homeViewControllerResh;
- (void)module:(id)arg1 applicationDidBecomeActive:(id)arg2;
- (void)module:(id)arg1 applicationWillEnterForeground:(id)arg2;
- (void)module:(id)arg1 applicationDidEnterBackground:(id)arg2;
- (void)module:(id)arg1 applicationWillResignActive:(id)arg2;
- (void)module:(id)arg1 lazySetupWithOptions:(id)arg2;
- (id)wbm_prepare_discoverViewController;
- (id)_squareContainerID;
@property(readonly, copy, nonatomic) NSString *squareContainerId;
- (id)wbm_prepare_homeViewController;
- (void)module:(id)arg1 setupWithOptions:(id)arg2;
- (void)module:(id)arg1 willBeginSetupWithOptions:(id)arg2;
- (void)module:(id)arg1 didFinshLaunchingWithOptions:(id)arg2;
- (void)module:(id)arg1 registCube:(id)arg2;
- (void)wbm_pre_main;

@end

