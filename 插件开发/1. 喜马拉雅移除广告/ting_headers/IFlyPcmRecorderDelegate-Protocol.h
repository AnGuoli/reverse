//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IFlyPcmRecorder;

@protocol IFlyPcmRecorderDelegate <NSObject>
- (void)onIFlyRecorderError:(IFlyPcmRecorder *)arg1 theError:(int)arg2;
- (void)onIFlyRecorderBuffer:(const void *)arg1 bufferSize:(int)arg2;

@optional
- (void)onIFlyRecorderVolumeChanged:(int)arg1;
@end

