//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class XMEmptyView;

@interface UIViewController (XMEmptyView)
@property(readonly, nonatomic) _Bool xm_isEmptyViewShowing;
@property(readonly, nonatomic) _Bool xm_isEmptyViewLoaded;
- (void)xm_hideEmptyView;
- (void)xm_showEmptyViewWithImage:(id)arg1 text:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)xm_showEmptyViewWithImage:(id)arg1 text:(id)arg2 buttonBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) XMEmptyView *xm_emptyView;
@end

