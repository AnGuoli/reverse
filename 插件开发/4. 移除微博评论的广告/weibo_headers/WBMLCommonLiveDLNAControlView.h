//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBMLVideoReplayProgressViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIVisualEffectView, WBMLCommonLiveDLNAProgressIndicatorView, WBMLCommonLiveInfo, WBMLQAGradientView, WBMLVideoReplayProgressView;
@protocol WBMLCommonLiveDLNAControlDelegate;

@interface WBMLCommonLiveDLNAControlView : UIView <WBMLVideoReplayProgressViewDelegate>
{
    _Bool _isPlaying;
    WBMLVideoReplayProgressView *_progressView;
    id <WBMLCommonLiveDLNAControlDelegate> _delegate;
    long long _controlViewType;
    NSString *_currentResolution;
    NSString *_currentDeviceName;
    NSString *_playStatusDesc;
    WBMLCommonLiveInfo *_liveInfo;
    WBMLQAGradientView *_gradientBgView;
    UIVisualEffectView *_effectView;
    UIButton *_closeButton;
    UIImageView *_topImageView;
    UILabel *_topLabel;
    UILabel *_deviceNameLabel;
    UILabel *_playStatusLabel;
    UIView *_timePercentView;
    WBMLCommonLiveDLNAProgressIndicatorView *_indicatorView;
    UIButton *_playStatusBtn;
    UIView *_actionView;
    UIButton *_resolutionBtn;
    UIButton *_exitBtn;
    UIButton *_changeDeviceBtn;
    UIView *_leftLine;
    UIView *_rightLine;
    UIButton *_landscapeButton;
}

@property(retain, nonatomic) UIButton *landscapeButton; // @synthesize landscapeButton=_landscapeButton;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIButton *changeDeviceBtn; // @synthesize changeDeviceBtn=_changeDeviceBtn;
@property(retain, nonatomic) UIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(retain, nonatomic) UIButton *resolutionBtn; // @synthesize resolutionBtn=_resolutionBtn;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIButton *playStatusBtn; // @synthesize playStatusBtn=_playStatusBtn;
@property(retain, nonatomic) WBMLCommonLiveDLNAProgressIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *timePercentView; // @synthesize timePercentView=_timePercentView;
@property(retain, nonatomic) UILabel *playStatusLabel; // @synthesize playStatusLabel=_playStatusLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) WBMLQAGradientView *gradientBgView; // @synthesize gradientBgView=_gradientBgView;
@property(retain, nonatomic) WBMLCommonLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) NSString *playStatusDesc; // @synthesize playStatusDesc=_playStatusDesc;
@property(copy, nonatomic) NSString *currentDeviceName; // @synthesize currentDeviceName=_currentDeviceName;
@property(copy, nonatomic) NSString *currentResolution; // @synthesize currentResolution=_currentResolution;
@property(nonatomic) long long controlViewType; // @synthesize controlViewType=_controlViewType;
@property(nonatomic) __weak id <WBMLCommonLiveDLNAControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBMLVideoReplayProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)progressView:(id)arg1 didEndDragProgress:(double)arg2;
- (void)progressView:(id)arg1 didDragProgress:(double)arg2;
- (void)progressView:(id)arg1 willBeginDragProgress:(double)arg2;
- (void)progressView:(id)arg1 playStateDidChange:(_Bool)arg2;
- (void)landscapeButtonTapped:(id)arg1;
- (void)clickPlayBtn:(id)arg1;
- (void)changeDeviceBtnClick;
- (void)exitBtnClick;
- (void)resolutionBtnClick;
- (void)closeButtonTapped;
- (void)layoutSubviewsForLandscapeOrientation;
- (void)layoutSubviewsForPortraitOrientation;
- (void)layoutSubviews;
- (void)handleSubview;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

