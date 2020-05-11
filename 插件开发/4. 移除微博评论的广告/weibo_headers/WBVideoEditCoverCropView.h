//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CALayer, CAShapeLayer, NSDictionary, NSString, UIImage, UIImageView, UIScrollView, UITapGestureRecognizer, UIVisualEffectView;

@interface WBVideoEditCoverCropView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIImage *_image;
    double _cropRatio;
    UIVisualEffectView *_blurView;
    CAShapeLayer *_blurMaskLayer;
    UIView *_blurMaskView;
    CALayer *_blurDimCoverLayer;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIView *_contentView;
    unsigned long long _fillMode;
    double _maximumZoomScale;
    NSDictionary *_originalCropStatus;
    UITapGestureRecognizer *_doubleTapGesture;
    struct UIEdgeInsets _cropAreaInsets;
    struct CGRect _cropArea;
    struct CGRect _maxCropArea;
}

@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) NSDictionary *originalCropStatus; // @synthesize originalCropStatus=_originalCropStatus;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) struct CGRect maxCropArea; // @synthesize maxCropArea=_maxCropArea;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CALayer *blurDimCoverLayer; // @synthesize blurDimCoverLayer=_blurDimCoverLayer;
@property(retain, nonatomic) UIView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) CAShapeLayer *blurMaskLayer; // @synthesize blurMaskLayer=_blurMaskLayer;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) struct CGRect cropArea; // @synthesize cropArea=_cropArea;
@property(nonatomic) double cropRatio; // @synthesize cropRatio=_cropRatio;
@property(nonatomic) struct UIEdgeInsets cropAreaInsets; // @synthesize cropAreaInsets=_cropAreaInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)doubleTapGestureAction:(id)arg1;
- (id)currentCropStatus;
- (id)resizeImage:(id)arg1 size:(struct CGSize)arg2;
- (id)croppedImage;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)recoverImage:(id)arg1 cropStatus:(id)arg2;
- (void)reloadScrollView:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (struct CGPoint)reloadImageView;
- (void)resetUIContents;
- (void)reloadUIContents;
- (void)reloadContentsWithImage:(id)arg1 fillMode:(unsigned long long)arg2 maxZoomScale:(double)arg3;
- (void)reloadContentsWithImage:(id)arg1;
- (void)reload;
- (void)reloadBlurEffect;
- (void)reloadCropArea;
- (void)prepareToCropWithRatio:(double)arg1 cropAreaInsets:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

