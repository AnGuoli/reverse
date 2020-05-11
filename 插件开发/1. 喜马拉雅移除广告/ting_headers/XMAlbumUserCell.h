//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TYAttributedLabel, UIButton, UIImageView, UILabel, UIView, XMAlbumCellInfosView, XMAlbumCoverImageView, XMAlbumRecCellModel, YYLabel;
@protocol XMAlbumUserCellDelegate;

@interface XMAlbumUserCell : UITableViewCell
{
    XMAlbumCoverImageView *_coverImageView;
    UIView *_contentV;
    TYAttributedLabel *_albumTitleTYLab;
    UILabel *_priceLabel;
    id <XMAlbumUserCellDelegate> _delegate;
    XMAlbumRecCellModel *_cellModel;
    UIView *_rateTipView;
    UILabel *_introLabel;
    XMAlbumCellInfosView *_infosView;
    UIButton *_moreMenuButton;
    UIView *_clickRateView;
    YYLabel *_rateLabel;
    UIButton *_rateButton;
    UIImageView *_playCountImgV;
    UILabel *_playCountLb;
    UIImageView *_totalCountImgV;
    UILabel *_totalCountLb;
}

+ (double)heightForModel:(id)arg1;
+ (_Bool)showClickInfo:(id)arg1;
@property(retain, nonatomic) UILabel *totalCountLb; // @synthesize totalCountLb=_totalCountLb;
@property(retain, nonatomic) UIImageView *totalCountImgV; // @synthesize totalCountImgV=_totalCountImgV;
@property(retain, nonatomic) UILabel *playCountLb; // @synthesize playCountLb=_playCountLb;
@property(retain, nonatomic) UIImageView *playCountImgV; // @synthesize playCountImgV=_playCountImgV;
@property(retain, nonatomic) UIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(retain, nonatomic) YYLabel *rateLabel; // @synthesize rateLabel=_rateLabel;
@property(retain, nonatomic) UIView *clickRateView; // @synthesize clickRateView=_clickRateView;
@property(retain, nonatomic) UIButton *moreMenuButton; // @synthesize moreMenuButton=_moreMenuButton;
@property(retain, nonatomic) XMAlbumCellInfosView *infosView; // @synthesize infosView=_infosView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UIView *rateTipView; // @synthesize rateTipView=_rateTipView;
@property(retain, nonatomic) XMAlbumRecCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak id <XMAlbumUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)clickRateAttributedString;
- (void)onRate;
- (void)updatePriceLabel:(id)arg1;
- (void)onMoreMenuButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

