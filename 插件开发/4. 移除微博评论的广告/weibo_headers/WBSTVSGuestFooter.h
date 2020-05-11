//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTVSBaseFooterView.h"

@class UIButton, UIImageView, UIView, WBSTLikeAnimationView, WBStoryItemSegment;

@interface WBSTVSGuestFooter : WBSTVSBaseFooterView
{
    UIView *_dotView;
    _Bool _visible;
    _Bool _highLightedBtn;
    UIButton *_commentListButton;
    UIButton *_likeButton;
    UIButton *_shareButton;
    UIButton *_interactiveButton;
    WBStoryItemSegment *_segment;
    WBSTLikeAnimationView *_likeAnimation;
    UIButton *_viewersButton;
    UIButton *_likeCountButton;
    UIButton *_linkBtn;
    UIImageView *_shareRedPacketTips;
}

@property(nonatomic) _Bool highLightedBtn; // @synthesize highLightedBtn=_highLightedBtn;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIImageView *shareRedPacketTips; // @synthesize shareRedPacketTips=_shareRedPacketTips;
@property(retain, nonatomic) UIButton *linkBtn; // @synthesize linkBtn=_linkBtn;
@property(retain, nonatomic) UIButton *likeCountButton; // @synthesize likeCountButton=_likeCountButton;
@property(retain, nonatomic) UIButton *viewersButton; // @synthesize viewersButton=_viewersButton;
@property(retain, nonatomic) WBSTLikeAnimationView *likeAnimation; // @synthesize likeAnimation=_likeAnimation;
@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *commentListButton; // @synthesize commentListButton=_commentListButton;
- (void).cxx_destruct;
- (double)maxHeight;
- (_Bool)shouldHighLightBtn;
- (void)highLightBtn;
- (void)doLikeAnimation:(_Bool)arg1;
- (void)updateCommentListButton;
- (void)updateLikeButton;
- (void)updateViewersButton;
- (void)updateShareRedpacketTips;
- (void)configWithSegment:(id)arg1 delegate:(id)arg2;
- (void)tapAdCardButton;
- (void)updateFollowState:(_Bool)arg1;
- (void)doSuccessFollowAnimation;
- (void)interactiveButtonPressed;
- (void)viewersButtonPressed;
- (void)likeButtonPressed;
- (void)shareButtonPressed;
- (void)commentsButtonPressed;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubViewsForGuest;
- (void)layoutSubviewsForHost;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

