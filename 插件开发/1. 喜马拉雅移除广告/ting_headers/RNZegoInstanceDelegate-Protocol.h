//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, RNZegoInstance;

@protocol RNZegoInstanceDelegate
- (void)zegoInstanceAudioInterruptEnd:(RNZegoInstance *)arg1;
- (void)zegoInstanceAudioInterruptStart:(RNZegoInstance *)arg1;
- (void)zegoInstance:(RNZegoInstance *)arg1 onPublishQualityUpdate:(CDStruct_6c4cbc08)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 captureSoundLevelUpdate:(float)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 headsetStateChanged:(_Bool)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 recvSideInfo:(NSString *)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 mixFailed:(NSString *)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 stateChanged:(long long)arg2;
- (void)zegoInstance:(RNZegoInstance *)arg1 onPublishStatusUpdate:(int)arg2 streamId:(NSString *)arg3;
- (void)zegoInstance:(RNZegoInstance *)arg1 onMixStreamResult:(int)arg2;
- (void)zegoInstanceOnTempBroken:(RNZegoInstance *)arg1;
- (void)zegoInstanceOnReconnect:(RNZegoInstance *)arg1;
- (void)zegoInstanceOnDisconnect:(RNZegoInstance *)arg1;
- (void)zegoInstanceOnKickout:(RNZegoInstance *)arg1;
@end

