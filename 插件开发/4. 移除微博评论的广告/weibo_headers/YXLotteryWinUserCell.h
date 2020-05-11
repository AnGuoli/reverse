//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, YXLotteryWinUserModel;

@interface YXLotteryWinUserCell : UICollectionViewCell
{
    YXLotteryWinUserModel *_model;
    UIView *_bgView;
    UIImageView *_userAvatarImg;
    UILabel *_nickNameLabel;
}

@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *userAvatarImg; // @synthesize userAvatarImg=_userAvatarImg;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) YXLotteryWinUserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)viewUpdateConstraints;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

