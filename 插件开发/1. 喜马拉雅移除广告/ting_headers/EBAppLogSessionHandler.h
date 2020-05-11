//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_semaphore;

@interface EBAppLogSessionHandler : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sessionIDLock;
    NSString *_sessionID;
    _Bool _isTerminating;
    NSMutableDictionary *_sessionStartedTimestamps;
    unsigned long long _launchFrom;
    NSString *_terminateTrackID;
    long long _terminateEventIndex;
    unsigned long long _bgTask;
}

+ (id)sharedHandler;
@property(nonatomic) _Bool isTerminating; // @synthesize isTerminating=_isTerminating;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) long long terminateEventIndex; // @synthesize terminateEventIndex=_terminateEventIndex;
@property(copy, nonatomic) NSString *terminateTrackID; // @synthesize terminateTrackID=_terminateTrackID;
@property(nonatomic) unsigned long long launchFrom; // @synthesize launchFrom=_launchFrom;
@property(retain, nonatomic) NSMutableDictionary *sessionStartedTimestamps; // @synthesize sessionStartedTimestamps=_sessionStartedTimestamps;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionID;
- (void)trackTerminateEvent:(_Bool)arg1;
- (void)trackLaunchEvent:(_Bool)arg1;
- (void)stopSessionInternal;
- (void)startSessionInternal:(_Bool)arg1;
- (void)restartSession;
- (void)startSession;
- (void)willTerminate:(id)arg1;
- (void)trackLogFinishNotification:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (id)init;
- (void)dealloc;

@end

