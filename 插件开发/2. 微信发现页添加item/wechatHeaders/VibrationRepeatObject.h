//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotMainQueueTimerDelegate-Protocol.h"

@class NSLock, NSString, NSTimer, NotMainQueueTimer;

@interface VibrationRepeatObject : NSObject <NotMainQueueTimerDelegate>
{
    _Bool _m_hasHoldBackgroundTask;
    int _m_outAppVibrationCount;
    NSTimer *_m_inAppTimer;
    NotMainQueueTimer *_m_outAppTimer;
    NSLock *_m_backgroundTaskLock;
}

@property(retain, nonatomic) NSLock *m_backgroundTaskLock; // @synthesize m_backgroundTaskLock=_m_backgroundTaskLock;
@property(nonatomic) _Bool m_hasHoldBackgroundTask; // @synthesize m_hasHoldBackgroundTask=_m_hasHoldBackgroundTask;
@property(nonatomic) int m_outAppVibrationCount; // @synthesize m_outAppVibrationCount=_m_outAppVibrationCount;
@property(retain, nonatomic) NotMainQueueTimer *m_outAppTimer; // @synthesize m_outAppTimer=_m_outAppTimer;
@property(retain, nonatomic) NSTimer *m_inAppTimer; // @synthesize m_inAppTimer=_m_inAppTimer;
- (void).cxx_destruct;
- (void)releaseBackgroundTask;
- (void)holdBackgroundTask;
- (void)onNotMainQueueTimerCallback;
- (void)callOutAppVibration;
- (void)callInAppVibration;
- (void)dealloc;
- (void)stopOutAppVibration;
- (void)stopInAppVibration;
- (void)repeatOutAppVibration;
- (void)repeatInAppVibration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

