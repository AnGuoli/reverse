//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBPlugin : NSObject
{
    long long _currentMode;
}

+ (void)destroyInstance;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPlugin;
+ (void)rescueContinuouslyCrash;
+ (id)classPrefix;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (void)setLastReplugTime:(double)arg1;
- (double)lastReplugTime;
- (void)replugIfNeeded:(double)arg1;
- (void)replug;
- (void)rescueContinuouslyCrashIfNeeded;
- (_Bool)hasContinuousCrash:(id)arg1;
- (void)updateCurrentMode:(id)arg1;
- (void)dealloc;
- (void)setup;

@end

