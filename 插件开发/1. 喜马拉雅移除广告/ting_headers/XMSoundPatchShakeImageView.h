//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, XMADAudioItem;

@interface XMSoundPatchShakeImageView : UIView
{
    CDUnknownBlockType _soundPatchShakeImageViewWillClose;
    UIButton *_adHidButton;
    UIImageView *_adImageView;
    UIView *_bottomView;
    UILabel *_shakeTimeLeftLabel;
    UILabel *_shakeTipLabel;
    UIImageView *_shakeIconView;
}

@property(retain, nonatomic) UIImageView *shakeIconView; // @synthesize shakeIconView=_shakeIconView;
@property(retain, nonatomic) UILabel *shakeTipLabel; // @synthesize shakeTipLabel=_shakeTipLabel;
@property(retain, nonatomic) UILabel *shakeTimeLeftLabel; // @synthesize shakeTimeLeftLabel=_shakeTimeLeftLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIButton *adHidButton; // @synthesize adHidButton=_adHidButton;
@property(copy, nonatomic) CDUnknownBlockType soundPatchShakeImageViewWillClose; // @synthesize soundPatchShakeImageViewWillClose=_soundPatchShakeImageViewWillClose;
- (void).cxx_destruct;
- (void)onHidButtonClicked:(id)arg1;
- (void)onAdImageViewTapped:(id)arg1;
@property(readonly, nonatomic) XMADAudioItem *audioItem;
- (void)setShakeTimeLeft:(long long)arg1;
- (void)layoutSubViewsInBottomView;
- (void)layoutViewsIntoRect:(struct CGRect)arg1;
- (_Bool)viewIsShowing;
- (void)showImage:(_Bool)arg1 withAnimation:(_Bool)arg2 andReoportAdShow:(_Bool)arg3 andReportOnce:(_Bool)arg4;
- (void)showImage:(_Bool)arg1 withAnimation:(_Bool)arg2 andReoportAdShow:(_Bool)arg3;
- (void)initUI;
- (void)clean;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

