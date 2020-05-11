//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView, UILabel, UITapGestureRecognizer;

@interface XMMVideoTaskToastView : UIView
{
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    CAShapeLayer *_maskLayer;
    UITapGestureRecognizer *_tap;
}

+ (id)newView;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)tapAction;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideWithAnimatied:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInView:(id)arg1 animatied:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showInView:(id)arg1 centerY:(double)arg2 time:(double)arg3;
- (void)onHideDelay;
- (void)hideDelay:(double)arg1;
- (void)cancelHideDelay;
- (void)updateCorner;
- (void)baseCustomInit;
- (id)contentString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

