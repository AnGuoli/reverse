//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class UILabel, UIView, UIViewController;

@interface WBPeekContainerViewController : WBViewController
{
    UIViewController *_containingViewController;
    UIView *_titleBarView;
    UILabel *_titleBarLabel;
    UIView *_titleBarSeparatorView;
}

@property(retain, nonatomic) UIView *titleBarSeparatorView; // @synthesize titleBarSeparatorView=_titleBarSeparatorView;
@property(retain, nonatomic) UILabel *titleBarLabel; // @synthesize titleBarLabel=_titleBarLabel;
@property(retain, nonatomic) UIView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChildViewController:(id)arg1;

@end

