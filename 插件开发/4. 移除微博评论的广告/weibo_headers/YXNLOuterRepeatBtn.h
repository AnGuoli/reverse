//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "YXLivePathItemButtonDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UILabel, YXCircleShapeLayer, YXIntervalButton, YXLiveTimer;
@protocol YXNLOuterRepeatBtnDelegate;

@interface YXNLOuterRepeatBtn : UIView <YXLivePathItemButtonDelegate, CAAnimationDelegate>
{
    _Bool _isBloomNumberNull;
    int _fullCount;
    YXIntervalButton *_nlouterRepeatBtn;
    UILabel *_timeLabel;
    YXCircleShapeLayer *_circleLayer;
    CDUnknownBlockType _finishblock;
    NSTimer *_calculateTimer;
    double _customOriginalAngle;
    id <YXNLOuterRepeatBtnDelegate> _delegate;
    UIView *_bgView;
    NSArray *_pathItems;
    double _bloomRadius;
    double _bloomAngel;
    double _basicDuration;
    unsigned long long _bloomDirection;
    UILabel *_leftTimeLabel;
    YXLiveTimer *_leftTimer;
    struct CGPoint _pathCenterButtonBloomCenter;
}

@property(nonatomic) _Bool isBloomNumberNull; // @synthesize isBloomNumberNull=_isBloomNumberNull;
@property(retain, nonatomic) YXLiveTimer *leftTimer; // @synthesize leftTimer=_leftTimer;
@property(retain, nonatomic) UILabel *leftTimeLabel; // @synthesize leftTimeLabel=_leftTimeLabel;
@property(nonatomic) unsigned long long bloomDirection; // @synthesize bloomDirection=_bloomDirection;
@property(nonatomic) struct CGPoint pathCenterButtonBloomCenter; // @synthesize pathCenterButtonBloomCenter=_pathCenterButtonBloomCenter;
@property(nonatomic) double basicDuration; // @synthesize basicDuration=_basicDuration;
@property(nonatomic) double bloomAngel; // @synthesize bloomAngel=_bloomAngel;
@property(nonatomic) double bloomRadius; // @synthesize bloomRadius=_bloomRadius;
@property(retain, nonatomic) NSArray *pathItems; // @synthesize pathItems=_pathItems;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <YXNLOuterRepeatBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double customOriginalAngle; // @synthesize customOriginalAngle=_customOriginalAngle;
@property(retain, nonatomic) NSTimer *calculateTimer; // @synthesize calculateTimer=_calculateTimer;
@property(nonatomic) int fullCount; // @synthesize fullCount=_fullCount;
@property(copy, nonatomic) CDUnknownBlockType finishblock; // @synthesize finishblock=_finishblock;
@property(retain, nonatomic) YXCircleShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) YXIntervalButton *nlouterRepeatBtn; // @synthesize nlouterRepeatBtn=_nlouterRepeatBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)nlouterRepeatBtnTappedOnclick;
- (id)imageWithColor:(id)arg1;
- (void)itemButtonTapped:(id)arg1;
- (void)pathItemScaleAnimation:(id)arg1;
- (id)foldAnimationFromPoint:(struct CGPoint)arg1 withFarPoint:(struct CGPoint)arg2;
- (void)dismiss_after:(id)arg1;
- (void)pathCenterButtonFold;
- (struct CGPoint)createEndPointWithRadius:(double)arg1 andAngel:(double)arg2;
- (id)bloomAnimationWithEndPoint:(struct CGPoint)arg1 andFarPoint:(struct CGPoint)arg2 andNearPoint:(struct CGPoint)arg3;
- (void)pathCenterBloom;
- (void)setupViews;
- (void)updatePathItems:(id)arg1;
- (void)updateLeftTime;
- (void)startTimer;
- (void)showCountLabel:(long long)arg1;
- (void)repeatScaleAnimation;
- (void)dismiss;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

