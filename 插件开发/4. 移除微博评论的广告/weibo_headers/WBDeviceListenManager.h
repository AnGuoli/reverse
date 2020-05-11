//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WBDeviceListener;

@interface WBDeviceListenManager : NSObject
{
    NSDictionary *latestPowerDictionary;
    WBDeviceListener *listener;
    NSDictionary *_chargerData;
    NSDictionary *_adapterDetails;
    long long _instantAmperage;
}

+ (id)sharedWBDeviceListenManager;
@property(readonly) long long instantAmperage; // @synthesize instantAmperage=_instantAmperage;
@property(readonly) NSDictionary *adapterDetails; // @synthesize adapterDetails=_adapterDetails;
@property(readonly) NSDictionary *chargerData; // @synthesize chargerData=_chargerData;
- (void).cxx_destruct;
- (double)getVoltage;
- (double)getBatteryTemperature;
- (long long)getBatteryMaximumCapacity;
- (long long)getBatteryDesignCapacity;
- (long long)getBatteryCycleCount;
- (void)listenerDataUpdated:(id)arg1;
- (void)stopListener;
- (void)startListener;
- (void)dealloc;
- (id)init;

@end

