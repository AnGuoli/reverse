//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMSpecialSoundItem, XMWebImageView;
@protocol XMSpecialTopSoundCellDelegate;

@interface XMSpecialTopSoundCell : UITableViewCell
{
    id <XMSpecialTopSoundCellDelegate> _delegate;
    XMSpecialSoundItem *_soundItem;
    XMWebImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UILabel *_createTimeLabel;
    UIView *_divideLine;
    UIView *_infosView;
    UIImageView *_tonearmView;
    UIButton *_playButton;
    UIButton *_singleBuyButton;
    UIButton *_downloadButton;
    UIButton *_videoButton;
    NSMutableArray *_tagsView;
}

+ (void)updateHeightToItem:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) NSMutableArray *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIButton *singleBuyButton; // @synthesize singleBuyButton=_singleBuyButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *tonearmView; // @synthesize tonearmView=_tonearmView;
@property(retain, nonatomic) UIView *infosView; // @synthesize infosView=_infosView;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) XMSpecialSoundItem *soundItem; // @synthesize soundItem=_soundItem;
@property(nonatomic) __weak id <XMSpecialTopSoundCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)videoButtonDidClick;
- (void)downloadButtonDidClick;
- (void)singleBuyButtonDidClick;
- (void)playButtonDidClick;
- (void)layoutSubviews;
- (void)updateDownloadButton;
- (void)endPlayingRoll;
- (void)startPlayingRoll;
- (void)updatePlayButtonState;
- (void)updateInfos;
- (void)updateTags;
- (void)setupCover;
- (void)setup;
- (void)setupNotification;
- (void)setupPlayerStateObserver;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

