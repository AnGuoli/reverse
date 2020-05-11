//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, YXLiveVTypeView;

@interface YXUserInfoHeadView : UIView
{
    _Bool _isTransform;
    long long _vType;
    UIButton *_headButton;
    UIImageView *_headBgImageView;
    YXLiveVTypeView *_vTypeImageView;
    unsigned long long _fromType;
    UIImageView *_wealthIcon;
    UIImageView *_nobleImageView;
}

@property(retain, nonatomic) UIImageView *nobleImageView; // @synthesize nobleImageView=_nobleImageView;
@property(retain, nonatomic) UIImageView *wealthIcon; // @synthesize wealthIcon=_wealthIcon;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
@property(retain, nonatomic) YXLiveVTypeView *vTypeImageView; // @synthesize vTypeImageView=_vTypeImageView;
@property(retain, nonatomic) UIImageView *headBgImageView; // @synthesize headBgImageView=_headBgImageView;
@property(retain, nonatomic) UIButton *headButton; // @synthesize headButton=_headButton;
@property(nonatomic) long long vType; // @synthesize vType=_vType;
- (void).cxx_destruct;
- (void)updateWealthIconWithLevel:(long long)arg1;
- (void)updateNobleLevel:(long long)arg1 nobleCurrentStarLevel:(long long)arg2;
- (void)commonInit;
- (void)layoutSubviews;
- (id)init;

@end

