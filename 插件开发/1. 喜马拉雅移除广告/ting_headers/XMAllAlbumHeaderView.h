//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XMAllAlbumHeaderView : UIView
{
    CDUnknownBlockType _clickBlock;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_redDot;
}

@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)click;

@end

