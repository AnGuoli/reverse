//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView, WCPayCss;

@interface WCPayLQTDepositDetailCell : UITableViewCell
{
    _Bool _invaild;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_lineView;
    WCPayCss *_css;
    NSString *_title;
    NSString *_desc;
}

@property _Bool invaild; // @synthesize invaild=_invaild;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)updateLineView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateTitle:(id)arg1 desc:(id)arg2 invaild:(_Bool)arg3;
- (void)updateContainer;
- (void)layoutSubviews;

@end

