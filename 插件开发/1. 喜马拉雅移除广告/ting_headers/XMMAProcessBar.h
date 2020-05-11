//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, UIButton;
@protocol XMMAProcessBarDelegate;

@interface XMMAProcessBar : UIControl
{
    _Bool _isLandscape;
    _Bool _dragging;
    long long _progressStyle;
    double _processValue;
    double _cacheValue;
    double _seekValue;
    id <XMMAProcessBarDelegate> _delegate;
    UIButton *_dotButton;
    CALayer *_totalLayer;
    CALayer *_processLayer;
    CALayer *_cacheLayer;
}

@property(retain, nonatomic) CALayer *cacheLayer; // @synthesize cacheLayer=_cacheLayer;
@property(retain, nonatomic) CALayer *processLayer; // @synthesize processLayer=_processLayer;
@property(retain, nonatomic) CALayer *totalLayer; // @synthesize totalLayer=_totalLayer;
@property(retain, nonatomic) UIButton *dotButton; // @synthesize dotButton=_dotButton;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) __weak id <XMMAProcessBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double seekValue; // @synthesize seekValue=_seekValue;
@property(nonatomic) double cacheValue; // @synthesize cacheValue=_cacheValue;
@property(nonatomic) double processValue; // @synthesize processValue=_processValue;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onPan:(id)arg1;
- (void)onTap:(id)arg1;
- (void)updateFrame;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1;

@end

