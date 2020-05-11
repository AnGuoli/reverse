//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class CAGradientLayer, UILabel, UIView, XMRecVideoListVCModel, XMWebImageView;

@interface XMRecVideoListCell : XMTableViewCell
{
    XMWebImageView *_coverIV;
    CAGradientLayer *_coverMask;
    UILabel *_durationLB;
    UIView *_labelContentView;
    UILabel *_titleLB;
    UILabel *_playCountsLB;
    XMRecVideoListVCModel *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMRecVideoListVCModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *playCountsLB; // @synthesize playCountsLB=_playCountsLB;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIView *labelContentView; // @synthesize labelContentView=_labelContentView;
@property(retain, nonatomic) UILabel *durationLB; // @synthesize durationLB=_durationLB;
@property(retain, nonatomic) CAGradientLayer *coverMask; // @synthesize coverMask=_coverMask;
@property(retain, nonatomic) XMWebImageView *coverIV; // @synthesize coverIV=_coverIV;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

