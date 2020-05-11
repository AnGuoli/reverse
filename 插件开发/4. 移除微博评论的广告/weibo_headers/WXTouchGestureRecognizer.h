//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class WXComponent;

@interface WXTouchGestureRecognizer : UIGestureRecognizer
{
    WXComponent *_component;
    unsigned long long _touchIdentifier;
    _Bool _listenTouchStart;
    _Bool _listenTouchMove;
    _Bool _listenTouchEnd;
    _Bool _listenTouchCancel;
    _Bool _listenPseudoTouch;
}

@property(nonatomic) _Bool listenPseudoTouch; // @synthesize listenPseudoTouch=_listenPseudoTouch;
@property(nonatomic) _Bool listenTouchCancel; // @synthesize listenTouchCancel=_listenTouchCancel;
@property(nonatomic) _Bool listenTouchEnd; // @synthesize listenTouchEnd=_listenTouchEnd;
@property(nonatomic) _Bool listenTouchMove; // @synthesize listenTouchMove=_listenTouchMove;
@property(nonatomic) _Bool listenTouchStart; // @synthesize listenTouchStart=_listenTouchStart;
- (void).cxx_destruct;
- (void)touchResponse:(id)arg1;
- (void)recoveryPseudoStyles:(id)arg1;
- (void)fireTouchEvent:(id)arg1 withTouches:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithComponent:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

