//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMCPUStackItem : NSObject
{
    _Bool _isReport;
    int _cpuUsage;
    unsigned long long _periodTime;
    unsigned long long _topFrameAddress;
    unsigned long long _repeatCount;
    unsigned long long _tickCount;
    unsigned long long _threadId;
    NSString *_threadName;
    NSString *_stackSymbols;
}

@property(retain, nonatomic) NSString *stackSymbols; // @synthesize stackSymbols=_stackSymbols;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) unsigned long long threadId; // @synthesize threadId=_threadId;
@property(nonatomic) unsigned long long tickCount; // @synthesize tickCount=_tickCount;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) unsigned long long topFrameAddress; // @synthesize topFrameAddress=_topFrameAddress;
@property(nonatomic) unsigned long long periodTime; // @synthesize periodTime=_periodTime;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(nonatomic) int cpuUsage; // @synthesize cpuUsage=_cpuUsage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)init;

@end

