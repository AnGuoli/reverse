//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CDZButton, LOTAnimationView, UIImageView, UILabel, XMDubShowPlayerRankListResultModel, XMWebImageView;

@interface XMDubShowPlayerRankListCell : UITableViewCell
{
    _Bool _isSelected;
    XMDubShowPlayerRankListResultModel *_model;
    UIImageView *_rankImgV;
    UILabel *_rankLable;
    XMWebImageView *_avaterImgV;
    UILabel *_nameLabel;
    UILabel *_playCountLabel;
    CDZButton *_likeBtn;
    LOTAnimationView *_anmationView;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) LOTAnimationView *anmationView; // @synthesize anmationView=_anmationView;
@property(retain, nonatomic) CDZButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMWebImageView *avaterImgV; // @synthesize avaterImgV=_avaterImgV;
@property(retain, nonatomic) UILabel *rankLable; // @synthesize rankLable=_rankLable;
@property(retain, nonatomic) UIImageView *rankImgV; // @synthesize rankImgV=_rankImgV;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) XMDubShowPlayerRankListResultModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)dubShowViewApplicationDidBecomeActive;
- (void)highlightUserIcon:(_Bool)arg1;
- (void)updateLikeStatus;
- (void)p_handleLikeBtn;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

