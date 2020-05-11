//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UILabel, UITextView, XMBBSIntimateQuestion, XMWebImageView, YYLabel;

@interface XMBBSIntimateQuestionHeaderView : XMMBaseView
{
    _Bool _isFollowed;
    id _delegate;
    XMBBSIntimateQuestion *_quetionInfo;
    XMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_statusLabel;
    YYLabel *_questionLabel;
    UITextView *_contentTextView;
}

@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) YYLabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) XMBBSIntimateQuestion *quetionInfo; // @synthesize quetionInfo=_quetionInfo;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)clickAvatarImageView:(id)arg1;
- (void)didInitialize;

@end

