//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFeedStyleEntity.h"

@class UIColor, UIImage, WBDetailStatusCommentLikeButtonStyleEntity;

@interface WBCommentListTableViewCellStyleEntity : WBFeedStyleEntity
{
    float _avatarViewAlpha;
    UIColor *_timeLabelTextColor;
    UIImage *_commentButtonNormalImage;
    UIImage *_commentButtonHighlightImage;
    UIColor *_screenNameLabelTextColor;
    UIColor *_screenNameLabelredNameTextColor;
    UIColor *_contentTextViewTextColorColor;
    UIColor *_subBackgroudViewBgColor;
    WBDetailStatusCommentLikeButtonStyleEntity *_likeButtonStyleEntity;
}

@property(retain, nonatomic) WBDetailStatusCommentLikeButtonStyleEntity *likeButtonStyleEntity; // @synthesize likeButtonStyleEntity=_likeButtonStyleEntity;
@property(retain, nonatomic) UIColor *subBackgroudViewBgColor; // @synthesize subBackgroudViewBgColor=_subBackgroudViewBgColor;
@property(retain, nonatomic) UIColor *contentTextViewTextColorColor; // @synthesize contentTextViewTextColorColor=_contentTextViewTextColorColor;
@property(retain, nonatomic) UIColor *screenNameLabelredNameTextColor; // @synthesize screenNameLabelredNameTextColor=_screenNameLabelredNameTextColor;
@property(retain, nonatomic) UIColor *screenNameLabelTextColor; // @synthesize screenNameLabelTextColor=_screenNameLabelTextColor;
@property(retain, nonatomic) UIImage *commentButtonHighlightImage; // @synthesize commentButtonHighlightImage=_commentButtonHighlightImage;
@property(retain, nonatomic) UIImage *commentButtonNormalImage; // @synthesize commentButtonNormalImage=_commentButtonNormalImage;
@property(retain, nonatomic) UIColor *timeLabelTextColor; // @synthesize timeLabelTextColor=_timeLabelTextColor;
@property(nonatomic) float avatarViewAlpha; // @synthesize avatarViewAlpha=_avatarViewAlpha;
- (void).cxx_destruct;
- (void)setupStyle:(long long)arg1;

@end

