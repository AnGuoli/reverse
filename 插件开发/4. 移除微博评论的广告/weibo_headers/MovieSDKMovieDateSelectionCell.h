//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKSelectionCell.h"

@class UIImageView, UILabel, UIView;

@interface MovieSDKMovieDateSelectionCell : MovieSDKSelectionCell
{
    UILabel *_textLabel;
    UIView *_selLine;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *selLine; // @synthesize selLine=_selLine;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)relayout;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

