//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol MMA_MonitorHandlerDelegate, MMA_trackCallBackProtocol, OS_dispatch_semaphore;

@interface MMA_MonitorHandler : NSObject
{
    long long _timeId;
    id <MMA_MonitorHandlerDelegate> _delegate;
    id <MMA_trackCallBackProtocol> _stateCallBack;
    double _adArea;
    unsigned long long _viewCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSPointerArray *_viewArray;
    struct CGSize _adSize;
}

+ (id)objectWithViewCount:(unsigned long long)arg1 adSize:(struct CGSize)arg2 delegate:(id)arg3;
@property(retain, nonatomic) NSPointerArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) double adArea; // @synthesize adArea=_adArea;
@property(nonatomic) __weak id <MMA_trackCallBackProtocol> stateCallBack; // @synthesize stateCallBack=_stateCallBack;
@property(nonatomic) __weak id <MMA_MonitorHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long timeId; // @synthesize timeId=_timeId;
- (void).cxx_destruct;
- (void)callViewabilityLogOptionalMethod:(SEL)arg1;
- (void)stopMonitor;
- (_Bool)hasMonitorView;
- (void)enumerateViewsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)viewIndexByView:(id)arg1;
- (id)monitorViewByIndex:(unsigned long long)arg1;
- (id)replaceMonitorViewByIndex:(unsigned long long)arg1 view:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)monitorFinish;

@end

