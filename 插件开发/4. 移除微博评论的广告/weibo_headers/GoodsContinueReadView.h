//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WBUniversalArticle;
@protocol GoodsContinueReadViewDelegate;

@interface GoodsContinueReadView : UIView
{
    WBUniversalArticle *_article;
    id <GoodsContinueReadViewDelegate> _delegate;
    UIImageView *_topLineView;
    UIButton *_continueReadButton;
    UIImageView *_hintView;
    UILabel *_continueReadLabel;
}

@property(retain, nonatomic) UILabel *continueReadLabel; // @synthesize continueReadLabel=_continueReadLabel;
@property(retain, nonatomic) UIImageView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UIButton *continueReadButton; // @synthesize continueReadButton=_continueReadButton;
@property(retain, nonatomic) UIImageView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak id <GoodsContinueReadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)continueReadButtonClick:(id)arg1;
- (void)sizeToFit;
- (void)setArticle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

