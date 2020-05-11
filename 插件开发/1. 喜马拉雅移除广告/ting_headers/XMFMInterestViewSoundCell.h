//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class LOTAnimationView, UIImageView, UILabel, XMYiJianTingSoundItem;

@interface XMFMInterestViewSoundCell : UITableViewCell
{
    LOTAnimationView *_playingView;
    UILabel *_soundTitleLabel;
    UILabel *_durationLabel;
    UIImageView *_topIcon;
    XMYiJianTingSoundItem *_soundItem;
    double _titleRightPadding;
}

+ (double)heightForTrackItem:(id)arg1;
@property(nonatomic) double titleRightPadding; // @synthesize titleRightPadding=_titleRightPadding;
@property(retain, nonatomic) XMYiJianTingSoundItem *soundItem; // @synthesize soundItem=_soundItem;
@property(retain, nonatomic) UIImageView *topIcon; // @synthesize topIcon=_topIcon;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *soundTitleLabel; // @synthesize soundTitleLabel=_soundTitleLabel;
@property(retain, nonatomic) LOTAnimationView *playingView; // @synthesize playingView=_playingView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePlayAnimation;
- (void)setContentWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

