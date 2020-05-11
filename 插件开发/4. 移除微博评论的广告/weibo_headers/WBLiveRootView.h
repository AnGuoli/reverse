//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSSet, NSTimer, UIEvent;
@protocol WBLiveRootViewDelegate;

@interface WBLiveRootView : UIView
{
    id <WBLiveRootViewDelegate> _delegate;
    NSTimer *_moveStopTimer;
    NSSet *_touches;
    UIEvent *_event;
}

@property(retain, nonatomic) UIEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSSet *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) NSTimer *moveStopTimer; // @synthesize moveStopTimer=_moveStopTimer;
@property(nonatomic) __weak id <WBLiveRootViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopTimer:(id)arg1;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)stopTimer;

@end

