//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoCommonPlayerController.h"

#import "WBMediaPlaybackControlling-Protocol.h"
#import "WBVideoPlayerControllerDelegate-Protocol.h"

@class NSString, UIView;
@protocol WBMediaPlaybackItem, WBMediaPlaybackSourceView;

@interface WBSlidesVideoPlaybackController : WBVideoCommonPlayerController <WBVideoPlayerControllerDelegate, WBMediaPlaybackControlling>
{
}

- (_Bool)videoUpNextPluginInvisibleWhenInlinePlaybackFinished:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingPlayButton:(id)arg2;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)addPluginForKey:(id)arg1 setup:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <WBMediaPlaybackItem> currentPlaybackItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool mediaPlaybackViewAttachedToSourceView;
@property(readonly, nonatomic) UIView<WBMediaPlaybackSourceView> *sourceView;
@property(readonly) Class superclass;
@property(nonatomic) _Bool tableViewScrolling;
@property(readonly, nonatomic) UIView *view;

@end

