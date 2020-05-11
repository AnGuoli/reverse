//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, XMPersonItem, XMTableCellObject, XMWebImageView;
@protocol XMNewRankingArtistCellDelegate;

@interface XMNewRankingArtistCell : UITableViewCell
{
    XMWebImageView *_coverImageView;
    UILabel *_userNameLabel;
    UIImageView *_verifiedLogoImageView;
    UILabel *_describeLabel;
    UIImageView *_soundImgView;
    UIImageView *_fansImgView;
    UILabel *_soundLabel;
    UILabel *_fansLabel;
    UIButton *_followButton;
    UIView *_line;
    UILabel *_indexLabel;
    UIImageView *_indexImageView;
    XMPersonItem *personItem;
    id <XMNewRankingArtistCellDelegate> delegate;
    XMTableCellObject *_cellObj;
    UIImageView *_vLogoIcon;
    UIImageView *_vLogoCircle;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIImageView *vLogoCircle; // @synthesize vLogoCircle=_vLogoCircle;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(nonatomic) __weak id <XMNewRankingArtistCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) XMPersonItem *personItem; // @synthesize personItem;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)anchorGradeTap;
- (void)clickAtFollow;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setPersonItemFromFindRadioPersonView:(id)arg1;

@end

