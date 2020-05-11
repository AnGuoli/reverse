//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGMSensorLogger : NSObject
{
    NSString *_gyroFileName;
    NSString *_accelerFileName;
    NSString *_timeFileName;
}

@property(copy, nonatomic) NSString *timeFileName; // @synthesize timeFileName=_timeFileName;
@property(copy, nonatomic) NSString *accelerFileName; // @synthesize accelerFileName=_accelerFileName;
@property(copy, nonatomic) NSString *gyroFileName; // @synthesize gyroFileName=_gyroFileName;
- (void).cxx_destruct;
- (id)safeGuardPath;
- (id)sgm_readTimestamp;
- (void)sgm_saveTimestamp:(double)arg1;
- (id)sgm_readAccelerometerData;
- (void)sgm_saveAccelerometerData:(id)arg1;
- (id)sgm_readGyroData;
- (void)sgm_saveGyroData:(id)arg1;

@end

