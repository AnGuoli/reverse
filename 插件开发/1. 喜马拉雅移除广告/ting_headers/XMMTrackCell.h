//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseCell.h"

@class CDZAttributedString, UIButton, UILabel, UIView, XMMTrackCellLayout, XMWebImageView;

@interface XMMTrackCell : XMMBaseCell
{
    CDZAttributedString *_bottomLabelString;
    UIView *_holderView;
    UIButton *_playMaskButton;
    XMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIButton *playMaskButton; // @synthesize playMaskButton=_playMaskButton;
@property(retain, nonatomic) UIView *holderView; // @synthesize holderView=_holderView;
- (void).cxx_destruct;
- (void)updatePlayIcon;
- (void)layoutSubviews;
- (void)clickPlayButton:(id)arg1;
- (void)setTheme:(id)arg1;
@property(retain, nonatomic) XMMTrackCellLayout *layout; // @dynamic layout;
- (void)dealloc;
- (void)didInitialize;

@end

