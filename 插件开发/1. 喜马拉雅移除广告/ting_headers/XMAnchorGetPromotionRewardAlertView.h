//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMAnchorPromotionIncomeInfo;

@interface XMAnchorGetPromotionRewardAlertView : UIView
{
    XMAnchorPromotionIncomeInfo *_info;
    CDUnknownBlockType _block;
    UILabel *_lb1;
    UILabel *_lb2;
    UILabel *_lb3;
    UIImageView *_redIV;
}

+ (id)showRewardViewWithInfo:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIImageView *redIV; // @synthesize redIV=_redIV;
@property(retain, nonatomic) UILabel *lb3; // @synthesize lb3=_lb3;
@property(retain, nonatomic) UILabel *lb2; // @synthesize lb2=_lb2;
@property(retain, nonatomic) UILabel *lb1; // @synthesize lb1=_lb1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) XMAnchorPromotionIncomeInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)closeBtnClicked;
- (void)checkNowBtnClicked;
- (id)formatFloat:(float)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

