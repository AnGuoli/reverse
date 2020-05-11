//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSoundPatchBaseView.h"

@class UIButton, UIImageView, UILabel, UIView, XMAdMarkView;

@interface XMSoundPatchImageViewTwo : XMSoundPatchBaseView
{
    _Bool _animating;
    _Bool _onShow;
    UIImageView *_topContainer;
    UIImageView *_coverImage;
    XMAdMarkView *_adMark;
    UIButton *_button;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIView *_lineHorizontal;
    UIView *_bottomContainer;
    UIView *_lineVertical;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *lineVertical; // @synthesize lineVertical=_lineVertical;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIView *lineHorizontal; // @synthesize lineHorizontal=_lineHorizontal;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) XMAdMarkView *adMark; // @synthesize adMark=_adMark;
@property(retain, nonatomic) UIImageView *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UIImageView *topContainer; // @synthesize topContainer=_topContainer;
- (void).cxx_destruct;
- (void)cleanWithAnimation:(_Bool)arg1;
- (void)clean;
- (_Bool)viewIsShowing;
- (void)showImage:(_Bool)arg1 withAnimation:(_Bool)arg2 andReoportAdShow:(_Bool)arg3 andReportOnce:(_Bool)arg4;
- (void)showImage:(_Bool)arg1 withAnimation:(_Bool)arg2 andReoportAdShow:(_Bool)arg3;
- (void)clickButton:(id)arg1;
- (void)closeButtonDidClick:(id)arg1;
- (id)audioItem;
- (void)initUI;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

