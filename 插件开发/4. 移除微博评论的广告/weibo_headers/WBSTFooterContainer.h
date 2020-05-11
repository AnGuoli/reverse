//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBSTVSBaseFooterView, WBStoryItemSegment;

@interface WBSTFooterContainer : UIView
{
    WBSTVSBaseFooterView *_footer;
    unsigned long long _footerStyleType;
    WBStoryItemSegment *_segment;
}

@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) unsigned long long footerStyleType; // @synthesize footerStyleType=_footerStyleType;
@property(retain, nonatomic) WBSTVSBaseFooterView *footer; // @synthesize footer=_footer;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1;
- (void)highLightBtn;
- (_Bool)shouldHighLightBtn;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)footerTypeWith:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateFollowState:(_Bool)arg1;
- (void)doSuccessFollowAnimation;
- (void)updateViewersButton;
- (void)updateCommentListButton;
- (void)updateLikeButton;
- (void)doLikeAnimation:(_Bool)arg1;
- (void)tapAdCardButton;
- (void)layoutSubviews;
- (void)configWithSegment:(id)arg1 delegate:(id)arg2;

@end

