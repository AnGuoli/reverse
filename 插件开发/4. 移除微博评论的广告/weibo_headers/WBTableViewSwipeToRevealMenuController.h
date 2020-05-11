//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView, WBTableViewController;
@protocol WBTableViewSwipeToRevealMenuDelegate, WBTableViewSwipeToRevealMenuTarget;

@interface WBTableViewSwipeToRevealMenuController : NSObject <UIGestureRecognizerDelegate>
{
    WBTableViewController<WBTableViewSwipeToRevealMenuDelegate> *_tableViewController;
    UIView<WBTableViewSwipeToRevealMenuTarget> *_currentSwipeTarget;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) UIView<WBTableViewSwipeToRevealMenuTarget> *currentSwipeTarget; // @synthesize currentSwipeTarget=_currentSwipeTarget;
@property(nonatomic) WBTableViewController<WBTableViewSwipeToRevealMenuDelegate> *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (void)actionSheetWillShowNotification:(id)arg1;
- (void)windowDidResignKeyNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)panGestureRecognized:(id)arg1;
- (id)firstTargetViewInHitTestView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dismissCurrentMenuAnimated:(_Bool)arg1;
- (void)dissociateTableViewController;
- (id)initWithTableViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

