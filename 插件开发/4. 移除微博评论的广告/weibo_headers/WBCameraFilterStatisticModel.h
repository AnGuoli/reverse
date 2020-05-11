//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBCameraFilterStatisticModel : NSObject
{
    long long _totalFrameCount;
    double _processTotoalDuration;
    long long _errorTotoalCount;
    long long _processSlowTotoalCount;
    double _startTime;
    double _stopTime;
    NSMutableDictionary *_errorsDic;
    double _authenticateDuration;
    struct CGSize _videoSize;
}

@property(nonatomic) double authenticateDuration; // @synthesize authenticateDuration=_authenticateDuration;
@property(retain, nonatomic) NSMutableDictionary *errorsDic; // @synthesize errorsDic=_errorsDic;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long processSlowTotoalCount; // @synthesize processSlowTotoalCount=_processSlowTotoalCount;
@property(nonatomic) long long errorTotoalCount; // @synthesize errorTotoalCount=_errorTotoalCount;
@property(nonatomic) double processTotoalDuration; // @synthesize processTotoalDuration=_processTotoalDuration;
@property(nonatomic) long long totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) double avgsProcessDuration;
@property(readonly, nonatomic) long long avgsFps;
- (id)init;

@end

