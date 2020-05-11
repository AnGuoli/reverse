//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSError, XMLiveRadioPlayer, XMLiveRadioProgramItem;

@protocol XMLiveRadioPlayerDelegate <NSObject>

@optional
- (void)XMLiveRadioPlayer:(XMLiveRadioPlayer *)arg1 didGetFLVUnknowData:(NSData *)arg2;
- (void)XMLiveRadioPlayer:(XMLiveRadioPlayer *)arg1 didStartPlayNextProgram:(XMLiveRadioProgramItem *)arg2 inPlayList:(NSArray *)arg3;
- (void)XMLivePlayerDidDataBufferEnd:(XMLiveRadioPlayer *)arg1;
- (void)XMLivePlayerDidDataBufferStart:(XMLiveRadioPlayer *)arg1;
- (void)XMLivePlayerWillPlaying:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerDidStopped:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerDidStart:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerWillStart:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerDidPlaying:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerDidPaused:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayerDidEnd:(XMLiveRadioPlayer *)arg1;
- (void)XMLiveRadioPlayer:(XMLiveRadioPlayer *)arg1 notifyPlayProgress:(double)arg2 currentTime:(long long)arg3;
- (void)XMLiveRadioPlayer:(XMLiveRadioPlayer *)arg1 notifyCacheProgress:(double)arg2;
- (void)XMLiveRadioPlayer:(XMLiveRadioPlayer *)arg1 didFailWithError:(NSError *)arg2;
@end

