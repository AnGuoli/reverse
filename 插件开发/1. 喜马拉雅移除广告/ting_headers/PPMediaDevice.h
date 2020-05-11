//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PPMediaContainer, PPMediaController, PPMediaItem;

@interface PPMediaDevice : NSObject
{
    struct PP_MediaDevice *device;
    double absoluteTime;
    double lastSync;
    _Bool _mute;
    _Bool _isPlaying;
    _Bool _isPaused;
    _Bool _isSpeaker;
    _Bool _stopRequested;
    long long _mPlayBackMode;
    long long _mPlayIndex;
    NSMutableArray *_mSongList;
    unsigned long long _max_volume;
    unsigned long long _volume;
    unsigned long long _deviceVolume;
    PPMediaItem *_song;
    long long _position;
    PPMediaController *_controller;
    double _lastVolChange;
    NSString *_name;
}

+ (id)lookupMediaDeviceForPltDevice:(struct PLT_DeviceData *)arg1;
+ (void)clearmediaDevices;
+ (id)mediaDeviceForPltDevice:(NPT_Reference_6d0af16d)arg1;
@property(nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double lastVolChange; // @synthesize lastVolChange=_lastVolChange;
@property(nonatomic) _Bool stopRequested; // @synthesize stopRequested=_stopRequested;
@property(readonly, nonatomic) _Bool isSpeaker; // @synthesize isSpeaker=_isSpeaker;
@property(retain, nonatomic) PPMediaController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) PPMediaItem *song; // @synthesize song=_song;
@property(nonatomic) unsigned long long deviceVolume; // @synthesize deviceVolume=_deviceVolume;
@property(nonatomic) unsigned long long volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned long long max_volume; // @synthesize max_volume=_max_volume;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) NSMutableArray *mSongList; // @synthesize mSongList=_mSongList;
@property(nonatomic) long long mPlayIndex; // @synthesize mPlayIndex=_mPlayIndex;
@property(nonatomic) long long mPlayBackMode; // @synthesize mPlayBackMode=_mPlayBackMode;
- (_Bool)isEqualToPltDevice:(void *)arg1;
- (_Bool)isEqualToMediaDevice:(id)arg1;
@property(readonly) NSString *key;
- (struct PP_MediaDevice *)getDevice;
@property id owner;
@property(readonly, nonatomic) _Bool supportsFolderURLs;
- (_Bool)needPreftchSongs;
- (id)getPreSong;
- (id)getNextSong;
- (id)getCurrentPlaySong;
@property(readonly, nonatomic) PPMediaContainer *rootContainer;
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isDMS;
- (_Bool)isDMR;
- (id)getBaseUrl;
@property(readonly, nonatomic) struct PP_MediaDevice *deviceData;
- (void)dealloc;
- (void)resetDeviceData:(NPT_Reference_6d0af16d)arg1;
- (id)initWithController:(id)arg1 andDevice:(NPT_Reference_6d0af16d)arg2;

@end

