//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCompressedImageView.h"

@class FLAnimatedImage, UIButton, UIView;

@interface XMMAnimatedImageView : XMCompressedImageView
{
    _Bool _showAnimateMark;
    _Bool _loadFinish;
    _Bool _isAnimatedSource;
    UIView *_markView;
    FLAnimatedImage *_cachedImage;
    UIButton *_longImageIconView;
    id _xmubt_moment;
}

@property(retain, nonatomic) id xmubt_moment; // @synthesize xmubt_moment=_xmubt_moment;
@property(retain, nonatomic) UIButton *longImageIconView; // @synthesize longImageIconView=_longImageIconView;
@property(retain, nonatomic) FLAnimatedImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(nonatomic) _Bool isAnimatedSource; // @synthesize isAnimatedSource=_isAnimatedSource;
@property(nonatomic) _Bool loadFinish; // @synthesize loadFinish=_loadFinish;
@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool showAnimateMark; // @synthesize showAnimateMark=_showAnimateMark;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

