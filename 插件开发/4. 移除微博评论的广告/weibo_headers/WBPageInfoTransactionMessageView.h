//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoBaseCardView.h"

@class UIButton, UIImageView, UILabel, WBTimelineLargeCardTextView;

@interface WBPageInfoTransactionMessageView : WBPageInfoBaseCardView
{
    UILabel *titleLabel;
    UILabel *timeLabel;
    WBTimelineLargeCardTextView *contentTextView;
    UILabel *noteLable;
    UIImageView *topImageView;
    UIButton *detailButton;
    UILabel *detailButtonLabel;
    UIImageView *seperatorH;
    UIImageView *arrowImageView;
    UILabel *sourceLabel;
}

+ (double)heightConstraintToWidth:(double)arg1 forPageInfo:(id)arg2 displayType:(long long)arg3;
+ (id)getContentText:(id)arg1;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView;
@property(retain, nonatomic) UIImageView *seperatorH; // @synthesize seperatorH;
@property(retain, nonatomic) UILabel *detailButtonLabel; // @synthesize detailButtonLabel;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView;
@property(retain, nonatomic) UILabel *noteLable; // @synthesize noteLable;
@property(retain, nonatomic) WBTimelineLargeCardTextView *contentTextView; // @synthesize contentTextView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)detailButtonMethod;
- (void)layoutSubviews;
- (void)setNote;
- (void)setDetailButtonText;
- (void)setSourceLabelText;
- (void)setContentText;
- (void)setTime;
- (void)setTitle;
- (void)setTopColor;
- (void)setDescriptionText;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)loadWithPageInfo:(id)arg1 forPageID:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

