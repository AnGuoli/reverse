//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryControlViewButton.h"

@class NSArray, UILabel;

@interface WBStoryControlViewGoodButton : WBStoryControlViewButton
{
    NSArray *_selectedProducts;
    UILabel *_discountLabel;
}

@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(copy, nonatomic) NSArray *selectedProducts; // @synthesize selectedProducts=_selectedProducts;
- (void).cxx_destruct;
- (void)setGoodsCount:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

