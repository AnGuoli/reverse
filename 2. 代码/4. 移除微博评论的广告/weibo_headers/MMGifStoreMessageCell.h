//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCell.h"

@class WBContentImageView;

@interface MMGifStoreMessageCell : MMMessageCell
{
    WBContentImageView *_gifView;
}

@property(retain, nonatomic) WBContentImageView *gifView; // @synthesize gifView=_gifView;
- (void).cxx_destruct;
- (void)messageViewLongPressed:(id)arg1;
- (void)clickGifView:(id)arg1;
- (void)layoutGifView;
- (void)layoutMessageStateView;
- (struct CGSize)layoutMessageContentView:(_Bool)arg1;
- (void)layoutSubviews;
- (id)getPictureFromPicInfoDic:(id)arg1;
- (void)configGifView;
- (void)configBubbleImageView;
- (void)bindMessage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

