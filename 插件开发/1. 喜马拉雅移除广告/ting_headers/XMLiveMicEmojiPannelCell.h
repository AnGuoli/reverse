//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, XMWebImageView;

@interface XMLiveMicEmojiPannelCell : UICollectionViewCell
{
    _Bool _userTypeAllow;
    XMWebImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIImageView *_unfoldImageView;
    UIView *_selectBackView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userTypeAllow; // @synthesize userTypeAllow=_userTypeAllow;
@property(retain, nonatomic) UIView *selectBackView; // @synthesize selectBackView=_selectBackView;
@property(retain, nonatomic) UIImageView *unfoldImageView; // @synthesize unfoldImageView=_unfoldImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)prepareForReuse;
- (void)configByEmoticon:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

