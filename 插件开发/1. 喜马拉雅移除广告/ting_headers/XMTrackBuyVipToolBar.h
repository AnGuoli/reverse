//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol XMTrackBuyToolBarDelegate;

@interface XMTrackBuyVipToolBar : UIView
{
    NSString *_vipUrl;
    id <XMTrackBuyToolBarDelegate> _delegate;
    NSString *_priceText;
    NSString *_vipPriceText;
    NSString *_vipTagText;
}

+ (id)toolBarWithPriceText:(id)arg1 vipPriceText:(id)arg2 vipTagText:(id)arg3 delegate:(id)arg4;
@property(copy, nonatomic) NSString *vipTagText; // @synthesize vipTagText=_vipTagText;
@property(copy, nonatomic) NSString *vipPriceText; // @synthesize vipPriceText=_vipPriceText;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(nonatomic) __weak id <XMTrackBuyToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *vipUrl; // @synthesize vipUrl=_vipUrl;
- (void).cxx_destruct;
- (void)setupBuyVipView:(id)arg1;
- (id)priceAttributedWithPrice:(id)arg1;
- (void)setupPirceView:(id)arg1;
- (void)setupPrePlayButton:(id)arg1;
- (void)setup;
- (void)buttonDidClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 priceText:(id)arg2 vipPriceText:(id)arg3 vipTagText:(id)arg4 delegate:(id)arg5;

@end

