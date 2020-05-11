//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UIImageView, UILabel, UIView;

@interface WBPageStockIndexCardView : WBPageCardViewBase
{
    UILabel *_currentStockPriceLabel;
    UILabel *_risePriceLabel;
    UILabel *_riseRateLabel;
    UILabel *_currentStockStatusLabel;
    UILabel *_updateTimeLabel;
    UIView *_stockInfoView;
    UIImageView *_topBackgroundView;
}

+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UIImageView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) UIView *stockInfoView; // @synthesize stockInfoView=_stockInfoView;
@property(retain, nonatomic) UILabel *updateTimeLabel; // @synthesize updateTimeLabel=_updateTimeLabel;
@property(retain, nonatomic) UILabel *currentStockStatusLabel; // @synthesize currentStockStatusLabel=_currentStockStatusLabel;
@property(retain, nonatomic) UILabel *riseRateLabel; // @synthesize riseRateLabel=_riseRateLabel;
@property(retain, nonatomic) UILabel *risePriceLabel; // @synthesize risePriceLabel=_risePriceLabel;
@property(retain, nonatomic) UILabel *currentStockPriceLabel; // @synthesize currentStockPriceLabel=_currentStockPriceLabel;
- (void).cxx_destruct;
- (void)p_setUpdateTimeLableWidth;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)setHighlighted:(_Bool)arg1;
- (void)resetBackgroundImageView:(id)arg1 withHighlighted:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (void)resetStockInfoViewWithInfoArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

