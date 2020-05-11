//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOSRuntime : NSObject
{
}

+ (id)nativeGetLogs;
+ (void)nativeOnSetEnableVConsole;
+ (void)nativeOnRunScript:(id)arg1 listener:(id)arg2;
+ (void)nativeOnPreviewImageComplete:(_Bool)arg1;
+ (void)nativeOnChooseImageComplete:(id)arg1;
+ (void)nativeOnSaveImageComplete:(_Bool)arg1;
+ (void)nativeOnLoadSubpackageProgressUpdate:(long long)arg1 error:(long long)arg2;
+ (void)nativeOnLoadSubpackageComplete:(id)arg1 error:(id)arg2;
+ (void)nativeOnGetApiVersionComplete:(id)arg1 version:(int)arg2;
+ (void)nativeOnGetSetting:(int)arg1 info:(id)arg2;
+ (void)nativeOnOpenSetting:(int)arg1 info:(id)arg2;
+ (void)nativeOnAuthorize:(id)arg1 denied:(id)arg2 errMsg:(id)arg3;
+ (void)nativeOnGetUserInfo:(long long)arg1 info:(id)arg2;
+ (void)nativeOnUniversalResult:(long long)arg1 info:(id)arg2 methodName:(id)arg3;
+ (void)_onCPPGameQueryExit:(id)arg1;
+ (void)nativeExit;
+ (void)nativeStart;
+ (void)nativeSetAppEnv:(id)arg1;
+ (void)nativeOnCallCustomCommandComplete:(id)arg1 identifier:(int)arg2 success:(_Bool)arg3 errMsg:(id)arg4;

@end

