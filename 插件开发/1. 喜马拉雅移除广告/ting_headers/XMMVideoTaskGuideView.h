//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMGuideView.h"

@class UIImageView;

@interface XMMVideoTaskGuideView : XMMGuideView
{
    UIImageView *_contentImageView;
    UIImageView *_arrowsImageView;
}

+ (id)discoveryTabbarBtn;
+ (id)tabbarButtons;
@property(retain, nonatomic) UIImageView *arrowsImageView; // @synthesize arrowsImageView=_arrowsImageView;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (id)piercedPathWithCtxFrame:(struct CGRect)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

