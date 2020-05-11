//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, UIButton, WXVideoSlider;
@protocol WCCanvasAdVideoProgressBarDelegate;

@interface WCCanvasAdVideoProgressBar : UIView
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isSliderScrubbing;
    id <WCCanvasAdVideoProgressBarDelegate> _m_delegate;
    UIView *_bgView;
    UIView *_containerView;
    UIButton *_operateButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    UIButton *_voiceBtn;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _updateTimerCount;
}

@property(nonatomic) unsigned long long updateTimerCount; // @synthesize updateTimerCount=_updateTimerCount;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <WCCanvasAdVideoProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onVoiceIconBtnClick;
- (void)updateProgress;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onPlayButtonClick;
- (void)onStopButtonClick;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)updateTotalTime:(double)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (_Bool)isAudioOn;
- (void)setAudioBtn:(_Bool)arg1;
- (void)onFocused:(_Bool)arg1;
- (void)onClickAtBackgroud;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;

@end

