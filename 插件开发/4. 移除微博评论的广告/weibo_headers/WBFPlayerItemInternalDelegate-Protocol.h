//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBFPlayerItem;

@protocol WBFPlayerItemInternalDelegate <NSObject>
- (void)playerItem:(WBFPlayerItem *)arg1 didUpdatePresentationSize:(struct CGSize)arg2;
- (void)playerItemDidPlayToEnd:(WBFPlayerItem *)arg1;
- (void)playerItemDidFinishSeek:(WBFPlayerItem *)arg1;
- (void)playerItemDidPerformSeek:(WBFPlayerItem *)arg1;
- (void)playerItemDidRenderFirstVideoFrame:(WBFPlayerItem *)arg1;
- (void)playerItem:(WBFPlayerItem *)arg1 didUpdateStatus:(long long)arg2;
@end

