//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WBPhotoPreviewerTransitionAnimationOptions : NSObject
{
    CDUnknownBlockType _dismissComplete;
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    UIView *_interactingView;
    CDUnknownBlockType _interactingViewCancelAnimations;
    CDUnknownBlockType _interactingViewFinishAnimations;
}

@property(copy, nonatomic) CDUnknownBlockType interactingViewFinishAnimations; // @synthesize interactingViewFinishAnimations=_interactingViewFinishAnimations;
@property(copy, nonatomic) CDUnknownBlockType interactingViewCancelAnimations; // @synthesize interactingViewCancelAnimations=_interactingViewCancelAnimations;
@property(retain, nonatomic) UIView *interactingView; // @synthesize interactingView=_interactingView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType preparation; // @synthesize preparation=_preparation;
@property(copy, nonatomic) CDUnknownBlockType dismissComplete; // @synthesize dismissComplete=_dismissComplete;
- (void).cxx_destruct;

@end

