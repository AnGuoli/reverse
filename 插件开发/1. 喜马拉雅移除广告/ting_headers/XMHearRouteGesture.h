//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@interface XMHearRouteGesture : UIGestureRecognizer
{
    NSMutableSet *_tableViewPanGestures;
    UIGestureRecognizer *_currentTableViewPanGesture;
}

@property(nonatomic) __weak UIGestureRecognizer *currentTableViewPanGesture; // @synthesize currentTableViewPanGesture=_currentTableViewPanGesture;
@property(retain, nonatomic) NSMutableSet *tableViewPanGestures; // @synthesize tableViewPanGestures=_tableViewPanGestures;
- (void).cxx_destruct;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

