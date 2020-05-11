//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMPerformanceLogKit : NSObject
{
    NSMutableDictionary *_stashLogs;
}

+ (void)logStickerWithCode:(id)arg1 error:(id)arg2 ext:(id)arg3;
+ (void)logPerformanceWithCode:(id)arg1 duration:(double)arg2 ext:(id)arg3;
+ (void)logPerformanceWithapiName:(id)arg1 start_date:(id)arg2 className:(id)arg3 ext:(id)arg4;
+ (void)logPerformanceWithapiName:(id)arg1 start_date:(id)arg2 className:(id)arg3 subOperationName:(id)arg4;
+ (void)logPerformanceWithapiName:(id)arg1 start_date:(id)arg2 className:(id)arg3;
+ (long long)currentTimeOfMicroseconds;
+ (id)parentId;
+ (id)traceLogHeaderWithTraceId:(id)arg1;
+ (id)traceLogHeaderWithTraceId:(id)arg1 fullSampled:(_Bool)arg2;
+ (id)number64HexString:(id)arg1;
+ (_Bool)isVip;
+ (id)sampledFromTraceId:(id)arg1;
+ (void)actionLogWithBaseLog:(id)arg1 extParams:(id)arg2;
+ (void)actionWithBaseLog:(id)arg1 code:(id)arg2 extParams:(id)arg3;
+ (_Bool)_tracerouteBaseLog:(id)arg1;
+ (id)defaultKit;
@property(retain, nonatomic) NSMutableDictionary *stashLogs; // @synthesize stashLogs=_stashLogs;
- (void).cxx_destruct;
- (id)baseLogWithTraceId:(id)arg1;
- (void)popStashBaseLogWithTraceId:(id)arg1;
- (void)stashBaseLog:(id)arg1;
- (id)init;

@end

