//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, XMLiveAlphaVideoPlayerView;

@protocol XMLiveAlphaVideoPlayerViewDelegate <NSObject>

@optional
- (void)alphaVideoPlayerViewStatusChange:(XMLiveAlphaVideoPlayerView *)arg1 status:(long long)arg2;
- (void)alphaVideoPlayerViewPlayError:(XMLiveAlphaVideoPlayerView *)arg1 error:(NSError *)arg2;
- (void)alphaVideoPlayerViewDidEnd:(XMLiveAlphaVideoPlayerView *)arg1;
- (void)alphaVideoPlayerViewDidStart:(XMLiveAlphaVideoPlayerView *)arg1;
- (void)alphaVideoPlayerViewWillStart:(XMLiveAlphaVideoPlayerView *)arg1;
@end

