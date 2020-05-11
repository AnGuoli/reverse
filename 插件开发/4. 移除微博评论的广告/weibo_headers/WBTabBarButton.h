//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class LOTAnimationView, UIImageView, WBBadgeView, WBTabBarItem, WBTabBarLightSkinSelectedView;

@interface WBTabBarButton : UIButton
{
    WBTabBarItem *item;
    _Bool showsTitle;
    double imageHeight;
    double titleHeight;
    struct CGPoint titleOffset;
    WBBadgeView *badgeView;
    UIImageView *dotIndicator;
    UIImageView *musicView;
    _Bool _isMainTab;
    _Bool _isObserverAdded;
    long long _buttonState;
    WBTabBarLightSkinSelectedView *_selectedView;
    LOTAnimationView *_lottieAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
@property(nonatomic) _Bool isObserverAdded; // @synthesize isObserverAdded=_isObserverAdded;
@property(nonatomic) _Bool isMainTab; // @synthesize isMainTab=_isMainTab;
@property(retain, nonatomic) WBTabBarLightSkinSelectedView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(readonly, nonatomic) UIImageView *musicView; // @synthesize musicView;
@property(readonly, nonatomic) UIImageView *dotIndicator; // @synthesize dotIndicator;
@property(readonly, nonatomic) WBBadgeView *badgeView; // @synthesize badgeView;
@property(nonatomic) struct CGPoint titleOffset; // @synthesize titleOffset;
@property(nonatomic) double titleHeight; // @synthesize titleHeight;
@property(nonatomic) double imageHeight; // @synthesize imageHeight;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle;
@property(readonly, nonatomic) __weak WBTabBarItem *item; // @synthesize item;
- (void).cxx_destruct;
- (void)reloadLightSkinUI;
- (void)setSelected:(_Bool)arg1;
- (void)setButtonIconType:(id)arg1;
- (void)showHomeIconAnimationKey:(id)arg1;
- (void)dealloc;
- (void)removeObservers;
- (void)addObservers;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithItem:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) CDUnknownBlockType frameChangeBlock;

@end

