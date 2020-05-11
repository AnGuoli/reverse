//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCNotification.h"

@class NSNumber, NSString, SDLAirbagStatus, SDLBeltStatus, SDLBodyInformation, SDLClusterModeStatus, SDLComponentVolumeStatus, SDLDeviceStatus, SDLECallInfo, SDLEmergencyEvent, SDLGPSData, SDLHeadLampStatus, SDLMyKey, SDLPRNDL, SDLTireStatus, SDLVehicleDataEventStatus, SDLWiperStatus;

@interface SDLOnVehicleData : SDLRPCNotification
{
}

@property(retain) SDLMyKey *myKey;
@property(retain) SDLClusterModeStatus *clusterModeStatus;
@property(retain) SDLEmergencyEvent *emergencyEvent;
@property(retain) SDLAirbagStatus *airbagStatus;
@property(retain) SDLECallInfo *eCallInfo;
@property(retain) NSNumber *steeringWheelAngle;
@property(retain) NSNumber *accPedalPosition;
@property(retain) NSNumber *engineTorque;
@property(retain) SDLHeadLampStatus *headLampStatus;
@property(retain) SDLWiperStatus *wiperStatus;
@property(retain) SDLVehicleDataEventStatus *driverBraking;
@property(retain) SDLDeviceStatus *deviceStatus;
@property(retain) SDLBodyInformation *bodyInformation;
@property(retain) SDLBeltStatus *beltStatus;
@property(retain) NSNumber *odometer;
@property(retain) SDLTireStatus *tirePressure;
@property(retain) SDLPRNDL *prndl;
@property(retain) NSString *vin;
@property(retain) NSNumber *externalTemperature;
@property(retain) NSNumber *instantFuelConsumption;
@property(retain) SDLComponentVolumeStatus *fuelLevel_State;
@property(retain) NSNumber *fuelLevel;
@property(retain) NSNumber *rpm;
@property(retain) NSNumber *speed;
@property(retain) SDLGPSData *gps;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

