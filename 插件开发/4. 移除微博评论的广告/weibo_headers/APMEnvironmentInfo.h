//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APMEnvironmentInfo : NSObject
{
    NSString *_deviceModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) int timeZoneOffsetMinutes;
@property(readonly, nonatomic) NSString *userDefaultLanguage;
@property(readonly, nonatomic) NSString *deviceOSVersion;
@property(readonly, nonatomic) NSString *deviceModel;

@end

