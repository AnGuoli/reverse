//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HMDNetworkSpeedManager : NSObject
{
    struct __CFRunLoopTimer *timer_;
    NSMutableArray *blockArray_;
    NSMutableArray *uploadBytesArray_WIFI_;
    NSMutableArray *downloadBytesArray_WIFI_;
    NSMutableArray *uploadBytesArray_cellular_;
    NSMutableArray *downloadBytesArray_cellular_;
    NSMutableArray *dataTimeArray_;
    struct _opaque_pthread_mutex_t mutex_;
    _Bool _repeat;
    _Bool _cellularAvailable;
    _Bool _WIFIAvailable;
    double _interval;
    double _intendedAverageTime;
    double _uploadSpeed_WIFI;
    double _downloadSpeed_WIFI;
    double _uploadSpeed_cellular;
    double _downloadSpeed_cellular;
}

+ (void)averageSpeedOverTimeDuration:(double)arg1 withBlockNoRepeat:(CDUnknownBlockType)arg2;
@property(getter=isWIFIAvailable) _Bool WIFIAvailable; // @synthesize WIFIAvailable=_WIFIAvailable;
@property(getter=isCellularAvailable) _Bool cellularAvailable; // @synthesize cellularAvailable=_cellularAvailable;
@property double downloadSpeed_cellular; // @synthesize downloadSpeed_cellular=_downloadSpeed_cellular;
@property double uploadSpeed_cellular; // @synthesize uploadSpeed_cellular=_uploadSpeed_cellular;
@property double downloadSpeed_WIFI; // @synthesize downloadSpeed_WIFI=_downloadSpeed_WIFI;
@property double uploadSpeed_WIFI; // @synthesize uploadSpeed_WIFI=_uploadSpeed_WIFI;
- (void).cxx_destruct;
- (void)uploadingSpeedInformation_async;
- (void)cleanDataAndSetTheFirstObject_async;
- (void)removeTimer_async;
- (void)addTimerAndCleanDataArray_async;
- (void)timerCallback;
- (void)removeAllRegistedBlock;
- (void)removeRegistedBlock:(id)arg1;
- (id)addRegisterWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isStarted) _Bool started;
@property double intendedAverageTime; // @synthesize intendedAverageTime=_intendedAverageTime;
@property double interval; // @synthesize interval=_interval;
@property _Bool repeat; // @synthesize repeat=_repeat;
- (id)initWithInterval:(double)arg1 intendedAverageTime:(double)arg2 repeat:(_Bool)arg3;
- (id)init;

@end

