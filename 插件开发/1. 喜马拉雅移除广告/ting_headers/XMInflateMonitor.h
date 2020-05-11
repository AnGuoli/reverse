//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAPMComponent.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface XMInflateMonitor : XMAPMComponent
{
    NSObject<OS_dispatch_queue> *__appInfaltesQueue;
    double __submit_interval;
    double __last_submit_time_stamp;
    NSMutableDictionary *_pagesInflateDict;
    NSMutableDictionary *_sampleInflateDict;
}

+ (void)pageForViewController:(id)arg1 willLayoutDuration:(float)arg2 didLayoutDuration:(float)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)monitor;
@property(retain, nonatomic) NSMutableDictionary *sampleInflateDict; // @synthesize sampleInflateDict=_sampleInflateDict;
@property(retain, nonatomic) NSMutableDictionary *pagesInflateDict; // @synthesize pagesInflateDict=_pagesInflateDict;
- (void).cxx_destruct;
- (void)pageInflate:(id)arg1 willLayoutDuration:(float)arg2 didLayoutDuration:(float)arg3 address:(id)arg4;
- (void)submitTimerTrigger:(id)arg1;
- (id)fetchSampleInflateDict;
- (void)stop;
- (void)start;
- (void)startWithConfiguration:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

