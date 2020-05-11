//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore, OS_dispatch_source;

@interface YXLiveTimer : NSObject
{
    _Bool _valid;
    double _timeInterval;
    _Bool _repeats;
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_semaphore> *_lock;
    long long _maxCount;
}

+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 maxRepeat:(long long)arg4;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly) double timeInterval;
@property(readonly) _Bool repeats;
- (void)fire;
- (void)invalidate;
- (id)initWithFireTime:(double)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 count:(long long)arg5;
- (id)initWithFireTime:(double)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 repeats:(_Bool)arg5;
- (id)init;

@end

