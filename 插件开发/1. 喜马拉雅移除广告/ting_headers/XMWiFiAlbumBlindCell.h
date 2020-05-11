//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class TYAttributedLabel, UIButton, UIImageView, UILabel, XMAlbumItem, XMWebImageView;
@protocol XMAlbumCellDelegate, XMWiFiAlbumBlindCellDelegate;

@interface XMWiFiAlbumBlindCell : XMTableViewCell
{
    UIImageView *_coverBg;
    XMWebImageView *_coverImageView;
    TYAttributedLabel *_albumTitleTYLab;
    UILabel *_introLabel;
    UIImageView *_playImgView;
    UILabel *_playLab;
    UIImageView *_totalCountImageView;
    UILabel *_totalCountLabel;
    XMWebImageView *_payImageView;
    UIImageView *_moreIndicator;
    UILabel *_scoreTitleLabel;
    UILabel *_scoreLabel;
    UILabel *_priceLabel;
    UILabel *_discountLabel;
    UILabel *_VIPLabel;
    UILabel *_boughtNum;
    UILabel *_boughtNumTitle;
    _Bool _showRecReason;
    _Bool _subjectDetailCell;
    _Bool _showBoughtNum;
    _Bool _hiddenTrackBuyTag;
    _Bool _hideBlindBtn;
    id <XMWiFiAlbumBlindCellDelegate> _blindDelegate;
    id <XMAlbumCellDelegate> _delegate;
    XMAlbumItem *_albumItem;
    UIButton *_favBtn;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)newHeightForItem:(id)arg1 isSubjectCell:(_Bool)arg2 showRecReason:(_Bool)arg3 hiddenTrackBuyTag:(_Bool)arg4;
+ (double)height;
@property(nonatomic) __weak UIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(nonatomic) _Bool hideBlindBtn; // @synthesize hideBlindBtn=_hideBlindBtn;
@property(nonatomic) _Bool hiddenTrackBuyTag; // @synthesize hiddenTrackBuyTag=_hiddenTrackBuyTag;
@property(nonatomic) _Bool showBoughtNum; // @synthesize showBoughtNum=_showBoughtNum;
@property(nonatomic) _Bool subjectDetailCell; // @synthesize subjectDetailCell=_subjectDetailCell;
@property(nonatomic) _Bool showRecReason; // @synthesize showRecReason=_showRecReason;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) id <XMAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <XMWiFiAlbumBlindCellDelegate> blindDelegate; // @synthesize blindDelegate=_blindDelegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)onFavorite:(id)arg1;
- (void)onBlind:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

