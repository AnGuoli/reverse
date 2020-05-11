//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTabBarController.h"

#import "WBMTabBarControllerProtocol-Protocol.h"
#import "WBTabBarControllerDelegate-Protocol.h"

@class NSString, UIImageView;

@interface TabBarRotateController : WBTabBarController <WBMTabBarControllerProtocol, WBTabBarControllerDelegate>
{
    UIImageView *shadowImgView_;
    _Bool _isDisAutorotate;
}

@property(nonatomic) _Bool isDisAutorotate; // @synthesize isDisAutorotate=_isDisAutorotate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)popToRootViewControllerWithCurTabBarItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)popToRootViewControllerWithCurTabBarItem;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didDeSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willDeSelectViewController:(id)arg2;
- (void)selectTabbarItemAtIndex:(long long)arg1 withOpenURLScheme:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadTabBarUIElements;
- (long long)statusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didRotate:(long long)arg1;
- (double)archForOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)reloadUIElements;
- (void)setTabBarTopLineHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resetAppTabbarIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double tabBarHeight;

@end

