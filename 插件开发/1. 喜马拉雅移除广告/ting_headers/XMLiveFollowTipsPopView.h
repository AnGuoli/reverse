//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLivePopBase.h"

@class UIButton, UIImageView, UILabel, UIView, XMLiveUser;
@protocol XMLiveFollowTipsPopViewDelegate;

@interface XMLiveFollowTipsPopView : XMLivePopBase
{
    id <XMLiveFollowTipsPopViewDelegate> _delegate;
    XMLiveUser *_person;
    UIView *_boxContain;
    UIImageView *_avatarImgView;
    UILabel *_nameLabel;
    UILabel *_introLabel;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) UIView *boxContain; // @synthesize boxContain=_boxContain;
@property(retain, nonatomic) XMLiveUser *person; // @synthesize person=_person;
@property(nonatomic) __weak id <XMLiveFollowTipsPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)show;
- (void)onTriggerHide;
- (void)onTriggerPop;
- (void)changeUserFollowState;
- (void)updateFollowButtonState;
- (void)addLayoutConstrants;
- (void)buildContain;
- (id)initWithFrame:(struct CGRect)arg1;

@end

