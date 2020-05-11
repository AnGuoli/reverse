//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBVideoPlaybackStateHistoryRecord : NSObject
{
    long long _state;
    NSArray *_overrideStates;
    double _startTime;
    double _finishTime;
}

@property(readonly, nonatomic) double finishTime; // @synthesize finishTime=_finishTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSArray *overrideStates; // @synthesize overrideStates=_overrideStates;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)finish;
- (double)duration;
- (id)initWithState:(long long)arg1 overrideStates:(id)arg2;

@end

