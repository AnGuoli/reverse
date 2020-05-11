//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class LOTAnimationView, UIButton, UIImageView, UILabel, UIView, XMRecFlowRecommendFriendModel, XMWebImageButton, YYLabel;
@protocol XMRecFollowFriendsCardCellDelegate;

@interface XMRecFollowFriendsCardCell : UICollectionViewCell
{
    XMWebImageButton *_coverImage;
    UILabel *_nameLabel;
    YYLabel *_infoLabel;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    UIView *_shadowView;
    UIView *_containerView;
    id <XMRecFollowFriendsCardCellDelegate> _delegate;
    XMRecFlowRecommendFriendModel *_item;
    UIImageView *_signatureImageView;
    UIImageView *_signatureSoundImageView;
    UIButton *_signatureSoundButton;
    LOTAnimationView *_animationView;
}

@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIButton *signatureSoundButton; // @synthesize signatureSoundButton=_signatureSoundButton;
@property(retain, nonatomic) UIImageView *signatureSoundImageView; // @synthesize signatureSoundImageView=_signatureSoundImageView;
@property(retain, nonatomic) UIImageView *signatureImageView; // @synthesize signatureImageView=_signatureImageView;
@property(retain, nonatomic) XMRecFlowRecommendFriendModel *item; // @synthesize item=_item;
@property(nonatomic) __weak id <XMRecFollowFriendsCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) YYLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageButton *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)updateCell;
- (double)textWidth:(id)arg1;
- (void)clickItem;
- (void)didClickSignatureSoundButton;
- (void)didClickCancelButton;
- (void)didClickFollowButton;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

