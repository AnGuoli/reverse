//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, NSTimer, UICollectionView, UIColor, UIView, XMNoviceTipView, XMTimeLabel;
@protocol XMRecordSampleClipViewDelegate;

@interface XMBasicRecordWaveEditView : UIControl <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <XMRecordSampleClipViewDelegate> _delegate;
    UIColor *_trackColor;
    UIColor *_unTrackColor;
    UIColor *_displayedColor;
    UICollectionView *_collectionView;
    UIView *_indicatorView;
    XMTimeLabel *_currentClipTimeLabel;
    double _trackTime;
    NSArray *_samplePoints;
    double _totalDuration;
    NSTimer *_timer;
    UIView *_pointV;
    XMNoviceTipView *_clipTipV;
}

@property(nonatomic) __weak XMNoviceTipView *clipTipV; // @synthesize clipTipV=_clipTipV;
@property(retain, nonatomic) UIView *pointV; // @synthesize pointV=_pointV;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSArray *samplePoints; // @synthesize samplePoints=_samplePoints;
@property(nonatomic) double trackTime; // @synthesize trackTime=_trackTime;
@property(retain, nonatomic) XMTimeLabel *currentClipTimeLabel; // @synthesize currentClipTimeLabel=_currentClipTimeLabel;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIColor *displayedColor; // @synthesize displayedColor=_displayedColor;
@property(retain, nonatomic) UIColor *unTrackColor; // @synthesize unTrackColor=_unTrackColor;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(nonatomic) __weak id <XMRecordSampleClipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)atutoScrollToEnd;
- (void)atutoScrollToTop;
- (void)stopAutoScroll;
- (void)startTimerToScrollTop:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)currentClipDurationChangeWithPoint:(struct CGPoint)arg1 finished:(_Bool)arg2;
- (void)refreshVisibleCellsColor;
- (void)scrollViewChangeOffset:(id)arg1 finished:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)clipStartDuration;
- (void)setSamplePoints:(id)arg1 totalDuration:(double)arg2;
- (void)refreshCurrentDuration:(double)arg1;
- (void)setupIndicator;
- (void)setupCollectView;
- (void)setupDefault;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

