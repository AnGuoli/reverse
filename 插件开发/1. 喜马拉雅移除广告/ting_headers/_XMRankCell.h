//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView, XMAlbumItem, XMWebImageView;

@interface _XMRankCell : UIButton
{
    XMAlbumItem *_album;
    UILabel *_rankLabel;
    XMWebImageView *_coverImageView;
    UILabel *_albumTitleLabel;
    UILabel *_albumSubTitleLabel;
    UIView *_diviedeLine;
}

@property(retain, nonatomic) UIView *diviedeLine; // @synthesize diviedeLine=_diviedeLine;
@property(retain, nonatomic) UILabel *albumSubTitleLabel; // @synthesize albumSubTitleLabel=_albumSubTitleLabel;
@property(retain, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

