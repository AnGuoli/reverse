//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WBPageInfoLiveIndicatorView : UIView
{
    UIView *_titleBackgroundView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    NSString *_title;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
- (void).cxx_destruct;
- (double)fontSize;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

