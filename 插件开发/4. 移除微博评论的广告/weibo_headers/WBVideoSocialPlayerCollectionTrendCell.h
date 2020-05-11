//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class UILabel, UIView, WBContentImageView, WBTimelineAttributedTextView, WBVideoConstantColorView, WBVideoPlaylistCollectionItem;

@interface WBVideoSocialPlayerCollectionTrendCell : WBTableViewCell
{
    WBVideoPlaylistCollectionItem *_colletionItem;
    WBContentImageView *_videoImageView;
    WBTimelineAttributedTextView *_titleTextView;
    WBTimelineAttributedTextView *_descTextView;
    WBContentImageView *_videoIconView;
    UILabel *_videoCountLabel;
    WBVideoConstantColorView *_videoBackgroundView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WBVideoConstantColorView *videoBackgroundView; // @synthesize videoBackgroundView=_videoBackgroundView;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) WBContentImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) WBTimelineAttributedTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) WBTimelineAttributedTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) WBContentImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) WBVideoPlaylistCollectionItem *colletionItem; // @synthesize colletionItem=_colletionItem;
- (void).cxx_destruct;
- (void)prepareLayoutWithSize:(struct CGSize)arg1;
- (void)updateUIElements;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

