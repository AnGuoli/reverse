//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAnimatedEmoticonCell.h"

@class UILabel, UIView, XMStickerEmoticonCollection;

@interface XMEmoticonStickerCell : XMAnimatedEmoticonCell
{
    UILabel *_titleLabel;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) XMStickerEmoticonCollection *emoticon; // @dynamic emoticon;
- (void)setSelected:(_Bool)arg1;
- (void)didInitialize;

@end

