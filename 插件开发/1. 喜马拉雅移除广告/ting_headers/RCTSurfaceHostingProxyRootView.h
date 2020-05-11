//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTSurfaceHostingView.h"

@class NSDictionary, NSString, RCTBridge, UIView, UIViewController;
@protocol RCTRootViewDelegate;

@interface RCTSurfaceHostingProxyRootView : RCTSurfaceHostingView
{
    _Bool _passThroughTouches;
    id <RCTRootViewDelegate> _delegate;
    UIViewController *_reactViewController;
    double _loadingViewFadeDelay;
    double _loadingViewFadeDuration;
}

@property(nonatomic) double loadingViewFadeDuration; // @synthesize loadingViewFadeDuration=_loadingViewFadeDuration;
@property(nonatomic) double loadingViewFadeDelay; // @synthesize loadingViewFadeDelay=_loadingViewFadeDelay;
@property(nonatomic) _Bool passThroughTouches; // @synthesize passThroughTouches=_passThroughTouches;
@property(nonatomic) __weak UIViewController *reactViewController; // @synthesize reactViewController=_reactViewController;
@property(nonatomic) __weak id <RCTRootViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelTouches;
- (void)surface:(id)arg1 didChangeIntrinsicSize:(struct CGSize)arg2;
- (void)surface:(id)arg1 didChangeStage:(long long)arg2;
@property(retain, nonatomic) UIView *loadingView;
@property(copy, nonatomic) NSDictionary *appProperties;
@property(nonatomic) long long sizeFlexibility;
- (id)reactTag;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) RCTBridge *bridge;
@property(readonly, copy, nonatomic) NSString *moduleName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;

@end

