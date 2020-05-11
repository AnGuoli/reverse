//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WBMLQAOverseasScreenShotBottomView, WBMLQAOverseasShareModel;

@interface WBMLQAOverseasScreenShotView : UIView
{
    WBMLQAOverseasShareModel *_model;
    UIImageView *_backgroundView;
    UIImageView *_topImageView;
    UILabel *_statusLabel;
    UIImageView *_successImageView;
    WBMLQAOverseasScreenShotBottomView *_bottomView;
    UIView *_inviteCodeView;
    UIView *_fakeInviteCodeView;
    UIImageView *_avatarView;
    UIImageView *_semicircleView;
    UILabel *_inviteCodeTextLabel;
    UILabel *_inviteCodeLabel;
}

@property(retain, nonatomic) UILabel *inviteCodeLabel; // @synthesize inviteCodeLabel=_inviteCodeLabel;
@property(retain, nonatomic) UILabel *inviteCodeTextLabel; // @synthesize inviteCodeTextLabel=_inviteCodeTextLabel;
@property(retain, nonatomic) UIImageView *semicircleView; // @synthesize semicircleView=_semicircleView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *fakeInviteCodeView; // @synthesize fakeInviteCodeView=_fakeInviteCodeView;
@property(retain, nonatomic) UIView *inviteCodeView; // @synthesize inviteCodeView=_inviteCodeView;
@property(retain, nonatomic) WBMLQAOverseasScreenShotBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WBMLQAOverseasShareModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)generateQRCodeImageWithScheme:(id)arg1;
- (void)setStatusNormal;
- (void)setStatusFail;
- (void)setStatusSuccessWithBounty:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

