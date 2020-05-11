//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UILabel, WBContentImageView, WBPageSquarePhotoItemMultilineTextView, WBPageSquarePhotoItemVideoTagTextView, WBRoundedImageView, WBTimelineLargeCardTextView;

@interface WBPageSquarePhotoItemView : WBPageCardViewBase
{
    struct CGRect initFrame;
    WBPageSquarePhotoItemMultilineTextView *centerText;
    WBContentImageView *_imageView;
    UILabel *_contentTitleLabel;
    WBTimelineLargeCardTextView *_contentTextView;
    WBRoundedImageView *_contentBackground;
    WBContentImageView *_cornerMarkImage;
    double _pageControlWidth;
    UILabel *_priceLabel;
    UILabel *_discribeLabel;
    UILabel *_adTopTitleLabel;
    WBRoundedImageView *_adTopTitleBgView;
    WBContentImageView *_rightDownIconImageView;
    WBPageSquarePhotoItemVideoTagTextView *_videoTagTextView;
}

+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsTrendBubbleOffset;
+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) WBPageSquarePhotoItemVideoTagTextView *videoTagTextView; // @synthesize videoTagTextView=_videoTagTextView;
@property(retain, nonatomic) WBContentImageView *rightDownIconImageView; // @synthesize rightDownIconImageView=_rightDownIconImageView;
@property(retain, nonatomic) WBRoundedImageView *adTopTitleBgView; // @synthesize adTopTitleBgView=_adTopTitleBgView;
@property(retain, nonatomic) UILabel *adTopTitleLabel; // @synthesize adTopTitleLabel=_adTopTitleLabel;
@property(retain, nonatomic) UILabel *discribeLabel; // @synthesize discribeLabel=_discribeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) double pageControlWidth; // @synthesize pageControlWidth=_pageControlWidth;
@property(retain, nonatomic) WBContentImageView *cornerMarkImage; // @synthesize cornerMarkImage=_cornerMarkImage;
@property(retain, nonatomic) WBRoundedImageView *contentBackground; // @synthesize contentBackground=_contentBackground;
@property(retain, nonatomic) WBTimelineLargeCardTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) WBContentImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)getContentTextPageCard:(id)arg1;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (_Bool)highlightCellBackgroundWhenPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

