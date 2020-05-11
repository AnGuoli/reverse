//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSMutableArray, UIImageView, UILabel;
@protocol XMLiveEntMicFloatPanelDelegate;

@interface XMLiveEntMicFloatPanel : UIView
{
    id <XMLiveEntMicFloatPanelDelegate> _delegate;
    long long _style;
    NSMutableArray *_normalWaitUserArray;
    NSMutableArray *_guestWaitUserArray;
    UILabel *_statusLabel;
    UIImageView *_gradientBgView;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_maskLayer;
    UIImageView *_statusGifImageView;
    UIImageView *_statusImageView;
    UIImageView *_statusBgView;
    long long _waitNum;
}

+ (struct CGSize)panelSize;
- (void).cxx_destruct;
@property(nonatomic) long long waitNum; // @synthesize waitNum=_waitNum;
@property(retain, nonatomic) UIImageView *statusBgView; // @synthesize statusBgView=_statusBgView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIImageView *statusGifImageView; // @synthesize statusGifImageView=_statusGifImageView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *gradientBgView; // @synthesize gradientBgView=_gradientBgView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSMutableArray *guestWaitUserArray; // @synthesize guestWaitUserArray=_guestWaitUserArray;
@property(retain, nonatomic) NSMutableArray *normalWaitUserArray; // @synthesize normalWaitUserArray=_normalWaitUserArray;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <XMLiveEntMicFloatPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refreshPanelStatus;
- (void)sync:(id)arg1;
- (void)onPanAction:(id)arg1;
- (void)onTap:(id)arg1;
- (void)hideWithAnimation:(_Bool)arg1;
- (void)showWithAnimation;
- (void)showInView:(id)arg1 frame:(struct CGRect)arg2;
- (id)statusBgImage;
- (unsigned long long)maskCorner;
- (void)configMaskLayer;
- (void)configGradientColors;
- (void)configGradientLayer;
- (void)initBase;
- (id)init;

@end

