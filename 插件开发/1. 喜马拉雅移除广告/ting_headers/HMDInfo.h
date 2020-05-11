//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDInfo : NSObject
{
}

+ (id)defaultInfo;
+ (id)CPUArchForMajor:(int)arg1 minor:(int)arg2;
+ (id)machineModel;
+ (unsigned long long)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
- (long long)transformToIntegerFromString:(id)arg1;
@property(readonly, nonatomic) long long sdkVersionCode;
@property(readonly, nonatomic) NSString *sdkVersion;
@property(readonly, nonatomic) NSString *commitID;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *shortVersion;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *appDisplayName;
@property(readonly, nonatomic) _Bool isUpgradeUser;
@property(readonly, nonatomic) NSString *appOwnURL;
@property(readonly, nonatomic) NSString *ssAppScheme;
@property(readonly, nonatomic) NSString *ssAppMID;
@property(readonly, nonatomic) _Bool isInHouseApp;
- (void)saveOpenUDIDToKeychain:(id)arg1;
- (id)fetchOpenUDIDFromKeychain;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *openUDID;
@property(readonly, nonatomic) NSString *resolutionString;
- (struct CGSize)resolution;
@property(readonly, nonatomic) _Bool isJailBroken;
@property(readonly, nonatomic) NSString *MACAddress;
@property(readonly, nonatomic) NSString *currentRegion;
@property(readonly, nonatomic) NSString *currentLanguage;
@property(readonly, nonatomic) NSString *idfv;
@property(readonly, nonatomic) NSString *idfa;
@property(readonly, nonatomic) int cpuSubType;
@property(readonly, nonatomic) int cpuType;
@property(readonly, nonatomic) NSString *cpuArchitecture;
@property(readonly, nonatomic) NSString *decivceModel;
- (long long)deviceMemoryLimit;
@property(readonly, nonatomic) long long deviceDangerousMemory;
@property(readonly, nonatomic) NSString *machineModel;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) double bootTime;
@property(readonly, nonatomic) NSString *platform;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) int processID;
- (id)stringSysctl:(id)arg1;
@property(readonly, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) NSString *executablePath;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled;

@end

