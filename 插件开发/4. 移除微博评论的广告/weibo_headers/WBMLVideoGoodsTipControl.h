//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class WBMLVideoGoodsModel, WBMLVideoGoodsTipControlInternalView;

@interface WBMLVideoGoodsTipControl : UIControl
{
    WBMLVideoGoodsModel *_goodsModel;
    WBMLVideoGoodsTipControlInternalView *_internalView;
    struct CGPoint _datumPoint;
}

@property(retain, nonatomic) WBMLVideoGoodsTipControlInternalView *internalView; // @synthesize internalView=_internalView;
@property(nonatomic) struct CGPoint datumPoint; // @synthesize datumPoint=_datumPoint;
@property(retain, nonatomic) WBMLVideoGoodsModel *goodsModel; // @synthesize goodsModel=_goodsModel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

