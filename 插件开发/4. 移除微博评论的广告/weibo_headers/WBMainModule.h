//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMFrameworkModule.h"

#import "SNPopoverWindowDelegate-Protocol.h"
#import "WeiboSDKDelegate-Protocol.h"

@class NSString, NSURL, UIApplicationShortcutItem;

@interface WBMainModule : WBMFrameworkModule <WeiboSDKDelegate, SNPopoverWindowDelegate>
{
    _Bool _shouldResetNetWork;
    _Bool isFirst;
    _Bool applicationDidBecomeVisible;
    UIApplicationShortcutItem *_launchedShortcutItem;
    NSURL *_pendingUniversalLink;
}

+ (id)debugPageItem;
@property(retain, nonatomic) NSURL *pendingUniversalLink; // @synthesize pendingUniversalLink=_pendingUniversalLink;
@property(retain, nonatomic) UIApplicationShortcutItem *launchedShortcutItem; // @synthesize launchedShortcutItem=_launchedShortcutItem;
- (void).cxx_destruct;
- (void)_logWeiboOpenUrl:(id)arg1 isUniversalLink:(_Bool)arg2;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (id)applicationWindow;
- (id)didReceiveMessage:(id)arg1 Args:(id)arg2;
- (void)applicationDidBecomeVisibleToUser;
- (void)module:(id)arg1 pushDailyDidChanged:(id)arg2;
- (void)module:(id)arg1 pushActiveDidChanged:(id)arg2;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)weiboSDKLog:(id)arg1 withType:(id)arg2;
- (void)module:(id)arg1 application:(id)arg2 handleActionWithIdentifier:(id)arg3 forRemoteNotification:(id)arg4 withResponseInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)module:(id)arg1 application:(id)arg2 handleActionWithIdentifier:(id)arg3 forRemoteNotification:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)module:(id)arg1 application:(id)arg2 didRegisterUserNotificationSettings:(id)arg3;
- (void)module:(id)arg1 application:(id)arg2 handleActionWithIdentifier:(id)arg3 forLocalNotification:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)module:(id)arg1 application:(id)arg2 didReceiveLocalNotification:(id)arg3;
- (void)module:(id)arg1 application:(id)arg2 didReceiveRemoteNotification:(id)arg3;
- (void)module:(id)arg1 application:(id)arg2 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg3;
- (void)module:(id)arg1 application:(id)arg2 didFailToRegisterForRemoteNotificationsWithError:(id)arg3;
- (void)module:(id)arg1 application:(id)arg2 performActionForShortcutItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)handleShortcutItem:(id)arg1;
- (_Bool)module:(id)arg1 application:(id)arg2 continueUserActivity:(id)arg3 restorationHandler:(CDUnknownBlockType)arg4;
- (_Bool)module:(id)arg1 application:(id)arg2 openURL:(id)arg3 sourceApplication:(id)arg4 annotation:(id)arg5;
- (_Bool)module:(id)arg1 application:(id)arg2 handleOpenURL:(id)arg3;
- (void)module:(id)arg1 applicationWillEnterForeground:(id)arg2;
- (void)module:(id)arg1 applicationWillTerminate:(id)arg2;
- (void)module:(id)arg1 applicationDidEnterBackground:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didDeSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willDeSelectViewController:(id)arg2;
- (void)checkUpgradeVersionAfterDelay:(long long)arg1 manually:(_Bool)arg2;
- (void)moduleDidCombinedUIComponent:(id)arg1;
- (void)moduleSetupTabBar:(id)arg1;
- (void)moduleWillCombinedUIComponent:(id)arg1;
- (void)reloadUIElements;
- (long long)statusBarStyle;
- (void)module:(id)arg1 applicationDidBecomeActive:(id)arg2;
- (void)module:(id)arg1 didFinshLaunchingWithOptions:(id)arg2;
- (id)wbm_prepare_messageViewController;
- (void)module:(id)arg1 didFinishSetupWithOptions:(id)arg2;
- (void)module:(id)arg1 showLaunchPage:(int)arg2 WithOptions:(id)arg3;
- (void)module:(id)arg1 setupWindowWithLaunchOptions:(id)arg2;
- (void)module:(id)arg1 didUpgradeFromVersion:(int)arg2 toVersion:(int)arg3;
- (void)moduleSetupDatabase:(id)arg1;
- (void)moduleSetupAccount:(id)arg1;
- (void)module:(id)arg1 setupWithOptions:(id)arg2;
- (void)module:(id)arg1 willBeginSetupWithOptions:(id)arg2;
- (void)module:(id)arg1 lazySetupWithOptions:(id)arg2;
- (void)moduleShowCrashResetter:(id)arg1;
- (void)wbm_main;
- (void)wbm_pre_main;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

