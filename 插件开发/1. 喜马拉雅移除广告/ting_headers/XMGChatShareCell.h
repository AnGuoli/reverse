//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMGChatBaseCell.h"

@class UIImageView, UILabel, XMWebImageButton;

@interface XMGChatShareCell : XMGChatBaseCell
{
    XMWebImageButton *_cover;
    UIImageView *_playIcon;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) XMWebImageButton *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)playBtnPressed;
- (void)updatePlayIcon;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)customInit;

@end

