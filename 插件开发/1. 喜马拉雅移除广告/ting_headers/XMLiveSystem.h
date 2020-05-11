//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMLiveSystem : NSObject
{
}

+ (_Bool)isChinaMobile;
+ (_Bool)isChinaComm;
+ (_Bool)isChinaUnion;
+ (long long)orderStatus;
+ (id)safeGetPersonItem:(id)arg1;
+ (id)safeGetLiveUser:(id)arg1;
+ (void)selectMainTab:(int)arg1 showRootView:(_Bool)arg2;
+ (id)imageName4NoData;
+ (void)pushViewController:(id)arg1;
+ (void)presentViewController:(id)arg1;
+ (id)presentSignViewControllerFrom:(id)arg1;
+ (id)appTabCtrl;
+ (_Bool)notificationAvaliable;
+ (void)handleOpenAppSettingUI;
+ (void)showPhotoLibraryPop;
+ (_Bool)checkPhotoLibraryAuthorizationStatus;
+ (_Bool)checkCameraAuthorizationStatus;
+ (_Bool)checkCameraAuthorizationStatus:(CDUnknownBlockType)arg1;
+ (_Bool)checkPhotoLibraryAuthorizationStatus:(CDUnknownBlockType)arg1;
+ (id)currentWindow;
+ (void)needHalfLogin:(id)arg1;
+ (struct CGRect)aspectFillFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
+ (struct CGRect)aspectFitFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
+ (double)navigationbarHeight;
+ (double)safeAreaBottomInset;
+ (double)statusBarHeight;
+ (_Bool)isIPhoneX;
+ (_Bool)interfaceIsDarkMode;
+ (_Bool)isIPhone6PlusScaleMode;
+ (_Bool)isIPhone6PlusScreen;
+ (_Bool)isIPhone6Screen;
+ (_Bool)is568Screen;
+ (_Bool)isIPhone4Screen;
+ (_Bool)iOS11OrLater;
+ (_Bool)iOS10OrLater;
+ (_Bool)iOS9OrLater;
+ (_Bool)iOS8OrLater;
+ (_Bool)isDeviceIPad;
+ (id)channelId;
+ (id)simpleModel;
+ (id)model;
+ (id)systemVersion;
+ (id)bundleIdentifier;
+ (id)bundleBuildVersion;
+ (id)bundleReleaseVersion;
+ (id)systemName;
+ (id)guardianRemainMills:(unsigned long long)arg1;
+ (id)urlStringAppendParamsDict:(id)arg1 originUrlString:(id)arg2;
+ (id)priceString:(double)arg1;
+ (id)priceString:(double)arg1 andNumberOfSignificantDigits:(unsigned int)arg2;
+ (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3;
+ (long long)daysFromDate:(id)arg1 now:(id)arg2;
+ (id)packageTimeStringForDuration:(long long)arg1;
+ (id)stringFromInterval:(double)arg1 withFormat:(int)arg2;
+ (id)stringForInterval:(double)arg1 formate:(id)arg2;
+ (id)stringFromSeconds:(unsigned long long)arg1;
+ (id)stringForSeconds3:(unsigned long long)arg1;
+ (id)stringForSeconds2:(unsigned long long)arg1;
+ (id)stringForSeconds:(unsigned long long)arg1;
+ (id)stringForStartInterval:(double)arg1 endInterval:(double)arg2;
+ (id)readableStringForMoney:(double)arg1;
+ (id)formatNumberForEntRank:(long long)arg1;
+ (id)formatNumber:(long long)arg1;
+ (void)showInfoMessage:(id)arg1 inView:(id)arg2;
+ (void)showInfoMessage:(id)arg1 hideAfterDelay:(double)arg2;
+ (void)showInfoMessage:(id)arg1;
+ (id)uniqueDeviceIdentifier;
+ (_Bool)networkAvailable;
+ (_Bool)wifiAvailable;
+ (void)logInf:(id)arg1 file:(id)arg2 line:(int)arg3;

@end

