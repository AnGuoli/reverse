//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class AnimationStatusView, FaceRecogScanAnimationView, UIButton, UIImageView;

@interface FaceRecogPrepareView : MMUIView
{
    FaceRecogScanAnimationView *_faceCircle;
    AnimationStatusView *_waitView;
    UIImageView *_loadingBlurView;
    UIImageView *_faceIcon;
    UIButton *_closeButton;
    UIButton *_feedbackButton;
    _Bool _bBigIcon;
}

- (void).cxx_destruct;
- (void)stopLoading;
- (void)showOKView;
- (void)showFailedView:(id)arg1 tip:(id)arg2;
- (void)showCloseBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)showFeedBackBtn:(id)arg1 sel:(SEL)arg2;
- (void)showLoadingView:(id)arg1 tip:(id)arg2;
- (void)resetView;
- (id)initWithFrame:(struct CGRect)arg1 BigIcon:(_Bool)arg2;

@end

