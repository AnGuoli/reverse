//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, XMWebImageView;

@interface XMBiTingHeaderView : UIView
{
    XMWebImageView *_backImageView;
    UIButton *_playButton;
    UIImageView *_backgroundView;
    UIImageView *_timeImageView;
    UILabel *_sloganLabel;
    UILabel *_updateInfoLabel;
    UIView *_sloganLine;
    UIView *_updateInfoLine;
    UILabel *_monthLabel;
    UILabel *_dailyLabel;
    UILabel *_titleLabel;
    UIImageView *_coverView;
}

@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *dailyLabel; // @synthesize dailyLabel=_dailyLabel;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UIView *updateInfoLine; // @synthesize updateInfoLine=_updateInfoLine;
@property(retain, nonatomic) UIView *sloganLine; // @synthesize sloganLine=_sloganLine;
@property(retain, nonatomic) UILabel *updateInfoLabel; // @synthesize updateInfoLabel=_updateInfoLabel;
@property(retain, nonatomic) UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) UIImageView *timeImageView; // @synthesize timeImageView=_timeImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) XMWebImageView *backImageView; // @synthesize backImageView=_backImageView;
- (void).cxx_destruct;
- (void)zoomLayout:(double)arg1;
- (void)updatePlayAnimation;
- (void)playerNotificationHandle:(id)arg1;
- (void)playAll;
- (void)setContentWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

