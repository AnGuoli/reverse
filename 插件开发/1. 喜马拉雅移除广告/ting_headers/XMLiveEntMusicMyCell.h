//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, XMWebImageView, YYLabel;

@interface XMLiveEntMusicMyCell : UITableViewCell
{
    XMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    YYLabel *_fmLabel;
    UIImageView *_fmTag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *fmTag; // @synthesize fmTag=_fmTag;
@property(retain, nonatomic) YYLabel *fmLabel; // @synthesize fmLabel=_fmLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)showEntMusicInfo:(id)arg1;
- (void)addSubviewConstrants;
- (void)createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

