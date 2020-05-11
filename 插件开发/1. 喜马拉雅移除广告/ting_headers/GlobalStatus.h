//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GlobalStatus : NSObject
{
    unsigned int appType;
    unsigned int maxVolume;
    unsigned int minVolume;
    unsigned int currentVolume;
    unsigned int eqType;
    unsigned int mute;
    unsigned int batteryValue;
    unsigned int sdcardState;
    unsigned int uhostState;
    unsigned int udevState;
    unsigned int linein;
    unsigned int antenna;
    unsigned int scanEnd;
    unsigned int isAlarm;
    unsigned int appArg;
    unsigned int dialogType;
    unsigned int dialogButtonType;
    unsigned int dialogMessageId;
    unsigned int dialogButtonDefault;
    unsigned int _batteryState;
}

@property(nonatomic) unsigned int batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) unsigned int dialogButtonDefault; // @synthesize dialogButtonDefault;
@property(nonatomic) unsigned int dialogMessageId; // @synthesize dialogMessageId;
@property(nonatomic) unsigned int dialogButtonType; // @synthesize dialogButtonType;
@property(nonatomic) unsigned int dialogType; // @synthesize dialogType;
@property(nonatomic) unsigned int appArg; // @synthesize appArg;
@property(nonatomic) unsigned int isAlarm; // @synthesize isAlarm;
@property(nonatomic) unsigned int scanEnd; // @synthesize scanEnd;
@property(nonatomic) unsigned int antenna; // @synthesize antenna;
@property(nonatomic) unsigned int linein; // @synthesize linein;
@property(nonatomic) unsigned int udevState; // @synthesize udevState;
@property(nonatomic) unsigned int uhostState; // @synthesize uhostState;
@property(nonatomic) unsigned int sdcardState; // @synthesize sdcardState;
@property(nonatomic) unsigned int batteryValue; // @synthesize batteryValue;
@property(nonatomic) unsigned int mute; // @synthesize mute;
@property(nonatomic) unsigned int eqType; // @synthesize eqType;
@property(nonatomic) unsigned int currentVolume; // @synthesize currentVolume;
@property(nonatomic) unsigned int minVolume; // @synthesize minVolume;
@property(nonatomic) unsigned int maxVolume; // @synthesize maxVolume;
@property(nonatomic) unsigned int appType; // @synthesize appType;

@end

