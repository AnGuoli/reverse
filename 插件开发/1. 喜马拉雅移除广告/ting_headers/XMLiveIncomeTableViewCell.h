//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, XMWebImageView;

@interface XMLiveIncomeTableViewCell : UITableViewCell
{
    XMWebImageView *_avatarImgView;
    UILabel *_nameLabel;
    UILabel *_nobleHideLabel;
    UILabel *_totalCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *totalCountLabel; // @synthesize totalCountLabel=_totalCountLabel;
@property(retain, nonatomic) UILabel *nobleHideLabel; // @synthesize nobleHideLabel=_nobleHideLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
- (void)configureCell:(id)arg1;
- (void)customedSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

