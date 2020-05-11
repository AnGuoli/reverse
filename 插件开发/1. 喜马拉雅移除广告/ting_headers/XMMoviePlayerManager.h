//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IJKMediaPlayerDidShutDownDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface XMMoviePlayerManager : NSObject <IJKMediaPlayerDidShutDownDelegate>
{
    NSMutableArray *_mPlayers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *mPlayers; // @synthesize mPlayers=_mPlayers;
- (void).cxx_destruct;
- (void)playerDidShutDown:(id)arg1;
- (id)moviePlayerWithContentCallBack:(struct IMediaDataSourceIOS *)arg1 withOptions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

