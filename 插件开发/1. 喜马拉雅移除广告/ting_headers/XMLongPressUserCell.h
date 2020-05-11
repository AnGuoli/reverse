//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMSearchPersonItem, XMTableCellObject, XMWebImageView;
@protocol XMLongPressUserCellDelegate;

@interface XMLongPressUserCell : XMTableViewCell
{
    UIImageView *_soundImgView;
    UIImageView *_fansImgView;
    UILabel *_soundLabel;
    UILabel *_fansLabel;
    id <XMLongPressUserCellDelegate> _delegate;
    XMSearchPersonItem *_item;
    XMWebImageView *_coverView;
    UIImageView *_vLogoIcon;
    UILabel *_nameLabel;
    UILabel *_introLabel;
    UIImageView *_liveStatusView;
    UIImageView *_gradeView;
    XMTableCellObject *_cellObj;
    UIButton *_communityIconButton;
    UILabel *_communityLabel;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UILabel *communityLabel; // @synthesize communityLabel=_communityLabel;
@property(retain, nonatomic) UIButton *communityIconButton; // @synthesize communityIconButton=_communityIconButton;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) UIImageView *gradeView; // @synthesize gradeView=_gradeView;
@property(retain, nonatomic) UIImageView *liveStatusView; // @synthesize liveStatusView=_liveStatusView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) XMSearchPersonItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <XMLongPressUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)anchorGradeTap;
- (void)layoutSubviews;
- (void)setupCommunityButton;
- (void)longPress:(id)arg1;
- (void)communityButtonDidClick;
- (void)customInit;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

