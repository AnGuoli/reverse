//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoPlaybackTransitionEndPoint-Protocol.h"

@class NSString, UIView, WBUniversialViewController, WBVideoPlayerController;
@protocol WBMediaAutoPlayContainer, WBVideoPlayerSourceView;

@interface WBVideoPlaybackTransfererPlayerControllerEndPoint : NSObject <WBVideoPlaybackTransitionEndPoint>
{
    WBVideoPlayerController *_playerController;
    UIView<WBVideoPlayerSourceView> *_sourceView;
    struct WBUniversialViewController *_container;
}

@property(readonly, nonatomic) __weak WBUniversialViewController<WBMediaAutoPlayContainer> *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)didTransferToEndPoint:(id)arg1 transitionManager:(id)arg2;
- (void)willTransferToEndPoint:(id)arg1 transitionManager:(id)arg2;
- (void)didFinishNonTransferDismiss;
- (void)willBeginNonTransferPresent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) UIView<WBVideoPlayerSourceView> *sourceView;
@property(readonly, nonatomic) WBVideoPlayerController *playerController;
- (id)initWithPlayerController:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

