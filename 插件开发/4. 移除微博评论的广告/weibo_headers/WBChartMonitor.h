//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAPMMonitor.h"

#import "WBAPMMonitorProtocol-Protocol.h"

@class CADisplayLink, NSString;

@interface WBChartMonitor : WBAPMMonitor <WBAPMMonitorProtocol>
{
    unsigned long long state;
    int frameCounter;
    int maxFrameCounter;
    int tickCounter;
    double *frameTimeBuffer;
    double lastFrameStartTime;
    CADisplayLink *timerDisplayLink;
}

+ (id)_containedHandlerForType:(unsigned long long)arg1;
+ (id)handlers;
- (void).cxx_destruct;
- (void)setHandler:(id)arg1;
- (void)update:(id)arg1;
- (void)flushRecords;
- (void)clearRecords;
- (id)getRecords;
- (void)stopAndIfNeedClearRecords:(_Bool)arg1;
- (void)stop;
- (void)startMonitorService;
- (void)start;
- (void)dealloc;
- (void)didCreateMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

