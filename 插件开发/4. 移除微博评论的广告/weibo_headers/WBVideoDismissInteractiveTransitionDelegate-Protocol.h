//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WBVideoDismissInteractiveTransitioning;

@protocol WBVideoDismissInteractiveTransitionDelegate <NSObject>

@optional
- (void)videoDismissInteractiveTransition:(id <WBVideoDismissInteractiveTransitioning>)arg1 didFinishDismissWithSuccess:(_Bool)arg2;
- (void)videoDismissInteractiveTransitionDidBeginInteractiveGesture:(id <WBVideoDismissInteractiveTransitioning>)arg1;
- (_Bool)videoDismissInteractiveTransitionShouldBeginInteractiveGesture:(id <WBVideoDismissInteractiveTransitioning>)arg1;
@end

