//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface WBMLQAReviveCardQuantityView : UIControl
{
    _Bool _reviveDisable;
    long long _quantity;
    UIImageView *_markImageView;
    UILabel *_cardDescLabel;
    UILabel *_cardQuantityLabel;
}

@property(retain, nonatomic) UILabel *cardQuantityLabel; // @synthesize cardQuantityLabel=_cardQuantityLabel;
@property(retain, nonatomic) UILabel *cardDescLabel; // @synthesize cardDescLabel=_cardDescLabel;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
- (void).cxx_destruct;
@property(nonatomic) _Bool reviveDisable; // @synthesize reviveDisable=_reviveDisable;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showRevieAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

