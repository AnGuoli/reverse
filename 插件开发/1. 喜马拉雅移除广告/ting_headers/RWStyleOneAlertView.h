//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RWAlertView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface RWStyleOneAlertView : RWAlertView
{
    UIImageView *_stateImageView;
    UILabel *_textFinishLab;
    UILabel *_textContinueLab;
    NSString *_title;
    NSString *_message;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (void)setOtherButtonTitles:(id)arg1 BackgroundImages:(id)arg2;
- (void)customStateInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

