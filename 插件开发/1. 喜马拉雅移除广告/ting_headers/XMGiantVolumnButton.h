//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface XMGiantVolumnButton : UIView
{
    _Bool _close;
    _Bool _selected;
    UIImage *_icon;
    UIImage *_iconSelected;
    NSString *_title;
    UIImageView *_iconImageView;
    UILabel *_label;
    UIView *_contenView;
}

@property(retain, nonatomic) UIView *contenView; // @synthesize contenView=_contenView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *iconSelected; // @synthesize iconSelected=_iconSelected;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)showViewWithClose:(_Bool)arg1 andAnimation:(_Bool)arg2;
- (void)updateUI;
@property(readonly, nonatomic) _Bool close;
- (id)initWithFrame:(struct CGRect)arg1;

@end

