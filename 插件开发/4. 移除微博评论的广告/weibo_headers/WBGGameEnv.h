//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBGGameEnv : NSObject
{
}

+ (id)buildAppOptions:(id)arg1 version:(id)arg2 url:(id)arg3 hash:(id)arg4;
+ (unsigned int)_crc32FromData:(id)arg1;
+ (id)buildGameSubpackageRequest:(id)arg1 version:(id)arg2 root:(id)arg3;
+ (id)buildGamePackageRequest:(id)arg1 version:(id)arg2;
+ (id)buildIconURL:(id)arg1;
+ (id)buildGameListRequest;
+ (id)buildRuntimeOptions;
+ (id)getServiceURL;
+ (id)_getServer;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSkippedFrameWarning:(long long)arg1;
- (long long)getSkippedFrameWarning;
- (void)setGameLoadingTimeLog:(_Bool)arg1;
- (_Bool)isShowGameLoadingTimeLog;
- (void)setSdkLaunchTest:(_Bool)arg1;
- (_Bool)isSdkLaunchTest;
- (void)enableVConsole:(_Bool)arg1;
- (_Bool)isVConsoleEnabled;
- (void)showFPS:(_Bool)arg1;
- (_Bool)isShowFPS;
- (void)setLaunchOptions:(id)arg1;
- (id)getLaunchOptions;
- (void)setUserId:(id)arg1;
- (id)getUserId;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

