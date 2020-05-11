//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface XMCategoryRecChildAgeControl : UIControl
{
    CAGradientLayer *_gradientLayer;
    UIImageView *_shadowImageView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)setupPageSubviews;
- (void)layoutSubviews;
- (void)configColorWithIndex:(unsigned long long)arg1 ageModel:(id)arg2;
- (void)configWithAgeModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

