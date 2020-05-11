//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"

@class MMLoadingView, MMUIButton, MoveWithTouchAlgorithm, NSString;
@protocol WAFloatingVideoDelegate;

@interface WAFloatingVideoView : UIView <MoveWithTouchAlgorithmDelegate>
{
    UIView *_videoView;
    UIView *_videoParentView;
    id <WAFloatingVideoDelegate> _delegate;
    UIView *_interactiveView;
    MMLoadingView *_loadingView;
    MMUIButton *_closeBtn;
    UIView *_progressView;
    MoveWithTouchAlgorithm *_moveAlgorithm;
}

@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *interactiveView; // @synthesize interactiveView=_interactiveView;
@property(nonatomic) __weak id <WAFloatingVideoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *videoParentView; // @synthesize videoParentView=_videoParentView;
@property(nonatomic) __weak UIView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (id)getVideoView;
- (void)removeVideoView;
- (void)onFloatingVideoClick;
- (void)onVideoViewClosed;
- (void)onOrientationChanged;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (_Bool)shouldLockToPortrait;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isVideoViewFloating:(id)arg1;
- (void)showInteractiveView;
- (void)hideInteractiveView;
- (void)showProgressViewWithProgress:(double)arg1;
- (void)updatePlayerView:(id)arg1;
- (void)setupSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

