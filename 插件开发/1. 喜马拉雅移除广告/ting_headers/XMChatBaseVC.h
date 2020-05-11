//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSNumber, NSString, UIButton, UITapGestureRecognizer, XMChatNavigationBar;

@interface XMChatBaseVC : XMBaseVC <UIGestureRecognizerDelegate>
{
    XMChatNavigationBar *_customNavigationBar;
    UIButton *_leftButton;
    UIButton *_rightButton;
    _Bool _isViewAppeared;
    _Bool _autoReleaseView;
    _Bool _shouldRecoverPreviousStatusBarStyle;
    double _keyboardInterval;
    UITapGestureRecognizer *_endEditingTapGestureRecognizer;
    NSNumber *_viewOriginalY;
    NSNumber *_statusBarStyle;
    NSNumber *_previousStatusBarStyle;
    struct CGRect _keyboardFrame;
}

+ (id)emptyImage;
+ (id)whiteCloseImage;
+ (id)blackCloseImage;
+ (id)closeImage;
+ (id)whiteBackImage;
+ (id)blackBackImage;
+ (id)backHighlightedImage;
+ (id)backImage;
@property(nonatomic) _Bool shouldRecoverPreviousStatusBarStyle; // @synthesize shouldRecoverPreviousStatusBarStyle=_shouldRecoverPreviousStatusBarStyle;
@property(retain, nonatomic) NSNumber *previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) NSNumber *viewOriginalY; // @synthesize viewOriginalY=_viewOriginalY;
@property(readonly, nonatomic) UITapGestureRecognizer *endEditingTapGestureRecognizer; // @synthesize endEditingTapGestureRecognizer=_endEditingTapGestureRecognizer;
@property(nonatomic) double keyboardInterval; // @synthesize keyboardInterval=_keyboardInterval;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) _Bool autoReleaseView; // @synthesize autoReleaseView=_autoReleaseView;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *leftButton;
@property(readonly, nonatomic) UIButton *rightButton;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) XMChatNavigationBar *customNavigationBar;
- (_Bool)shouldShowNoNetView;
- (void)viewMoveReset;
- (void)viewMoveUpToViewVisible:(id)arg1 keyboardFrame:(struct CGRect)arg2;
- (void)viewMoveUp:(double)arg1;
- (void)viewMoveUpTo:(double)arg1;
- (void)didTriggerEndEditingTapGestureRecognizer:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)addEndEditingTapGestureRecognizerToView:(id)arg1;
- (void)addEndEditingTapGestureRecognizer;
@property(readonly, nonatomic) _Bool isKeyboardShowing;
- (void)keyboardSizeWillChange;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)addKeyboardNotificationObserving;
- (void)addCustomRightButton:(id)arg1 image:(id)arg2;
- (void)addRightButton:(id)arg1 image:(id)arg2;
- (void)addRightButton;
- (void)addLeftButton;
- (void)addCustomNavigationBar;
- (_Bool)isVisiable;
- (void)onBack:(_Bool)arg1;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

