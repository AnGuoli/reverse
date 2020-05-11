//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBView.h"

@class UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface WBShortLinkCalendarSuccessView : WBView
{
    UIImageView *icon;
    UIImageView *corner;
    UILabel *orderTitle;
    UIView *blackBackgroud;
    UITapGestureRecognizer *backgroundTap;
    UIImageView *buttonLineX;
    UIImageView *buttonLineY;
    _Bool _openFromBottom;
    UILabel *_startTime;
    UILabel *_title;
    UIView *_whiteBackground;
    UIButton *_cancelButton;
    UIButton *_iKnowButton;
    CDUnknownBlockType _cancelBtnBlock;
    struct CGRect _originRect;
}

@property(nonatomic) _Bool openFromBottom; // @synthesize openFromBottom=_openFromBottom;
@property(copy, nonatomic) CDUnknownBlockType cancelBtnBlock; // @synthesize cancelBtnBlock=_cancelBtnBlock;
@property(retain, nonatomic) UIButton *iKnowButton; // @synthesize iKnowButton=_iKnowButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *whiteBackground; // @synthesize whiteBackground=_whiteBackground;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)setupLayoutSubviews;
- (void)setupDatas:(id)arg1;
- (void)initSubViews;
- (void)cancelClicked;
- (void)backgroundClicked;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

