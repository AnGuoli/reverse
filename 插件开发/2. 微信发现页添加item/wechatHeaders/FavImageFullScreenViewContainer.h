//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "SimpleImgInfoDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMFullScreenItemView, MMImageScrollViewHelper, MMLoadingView, MMProgressViewEx, NSArray, NSString, SimpleImgInfo, UIImage, WXFullScreenGestureRecognizer;
@protocol FavImageFullScreenViewContainerDelegate, SimpleImgInfoDelegate;

@interface FavImageFullScreenViewContainer : MMUIScrollView <FullScreenGestureDelegate, UIScrollViewDelegate, SimpleImgInfoDelegate, MMImageScrollViewHelperDelegate>
{
    struct CGRect m_originImageRectInScreen;
    struct CGSize m_initalContentSize;
    UIImage *m_image;
    _Bool m_isAnimating;
    _Bool m_isShowing;
    _Bool m_bIsLongPressHandled;
    SimpleImgInfo *imgInfo;
    id <SimpleImgInfoDelegate> imgInfoDelegate;
    MMFullScreenItemView *m_container;
    MMLoadingView *m_loadingView;
    MMProgressViewEx *m_processView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    id <FavImageFullScreenViewContainerDelegate> m_delegate;
    WXFullScreenGestureRecognizer *m_gesture;
}

@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo;
@property(retain, nonatomic) MMFullScreenItemView *m_container; // @synthesize m_container;
@property(readonly, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView;
@property(nonatomic) __weak id <FavImageFullScreenViewContainerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGSize m_initalContentSize; // @synthesize m_initalContentSize;
@property(nonatomic) struct CGRect m_originImageRectInScreen; // @synthesize m_originImageRectInScreen;
- (void).cxx_destruct;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)updateImagePath:(id)arg1;
- (void)onBeginLongPress;
- (void)LongPressEvents;
- (void)animationRotateDidStop;
- (void)onDeviceRotate:(_Bool)arg1;
- (void)onDeviceRotate;
- (void)animationHideDidStop;
- (void)animationHideWithRotate;
- (void)reloadImage;
- (void)releaseImg;
- (void)tryDownloadImage;
- (void)animationShow;
- (void)animationShowStep2;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowDidStop;
- (void)animationShowView;
- (void)setContentOffsetAndSize;
- (void)clearStatus;
- (struct CGRect)getCenterRectWithMaxSize:(struct CGSize)arg1;
- (void)hideProcessView;
- (void)showProcessView;
- (void)initScrollViewHelper;
- (_Bool)isContainerShow;
- (void)onHide;
- (void)onShow;
- (_Bool)bBanDoubleTap;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)startLoadingBlocked;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
- (void)dealloc;
- (void)stopAllAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

