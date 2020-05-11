//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, YXLiveTimer;

@interface YXLBubbleView : UIView
{
    NSAttributedString *_title;
    YXLiveTimer *_timer;
    YXLiveTimer *_delayTimer;
    double _cornerRaduis;
    unsigned long long _triangleStyle;
    unsigned long long _triangleDirection;
    double _triangleOffsetX;
    CDUnknownBlockType _dimissHandler;
    struct CGSize _curSize;
}

+ (_Bool)isBubbleInView:(id)arg1;
+ (void)dimissBubbleViewOnView:(id)arg1 afterDelay:(double)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isHideForever;
+ (void)hideForever;
+ (void)showBubbleViewOn:(id)arg1 frame:(struct CGRect)arg2 withAnimation:(_Bool)arg3 attribute:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType dimissHandler; // @synthesize dimissHandler=_dimissHandler;
@property(nonatomic) double triangleOffsetX; // @synthesize triangleOffsetX=_triangleOffsetX;
@property(nonatomic) unsigned long long triangleDirection; // @synthesize triangleDirection=_triangleDirection;
@property(nonatomic) unsigned long long triangleStyle; // @synthesize triangleStyle=_triangleStyle;
@property(nonatomic) double cornerRaduis; // @synthesize cornerRaduis=_cornerRaduis;
@property(nonatomic) struct CGSize curSize; // @synthesize curSize=_curSize;
@property(retain, nonatomic) YXLiveTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) YXLiveTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAnimation;
- (void)shareAnimation;
- (void)beginAnimation;
- (void)clearTimer;
- (void)dimissImmediately;
- (id)delayTimerWithDelay:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

