//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMNewSettingCell.h"

@class UIImageView, UILabel;

@interface XMCmtPushSettingCell : XMNewSettingCell
{
    UIImageView *_coverIV;
    UILabel *_titleLB;
    UILabel *_subTitleLB;
    UIImageView *_arrowIV;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(retain, nonatomic) UILabel *subTitleLB; // @synthesize subTitleLB=_subTitleLB;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *coverIV; // @synthesize coverIV=_coverIV;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

