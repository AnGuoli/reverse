//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface WBMLCommonLiveScreenRecordUploadProgressLabel : UIView
{
    NSString *_text;
    UIView *_backgroundRoundView;
    UIActivityIndicatorView *_aIndictorView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *aIndictorView; // @synthesize aIndictorView=_aIndictorView;
@property(retain, nonatomic) UIView *backgroundRoundView; // @synthesize backgroundRoundView=_backgroundRoundView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

