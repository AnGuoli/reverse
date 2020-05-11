//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView, XMRankPerson, XMTableCellObject, XMWebImageView;
@protocol XMPeakRankAnchorCellDelegate;

@interface XMPeakRankAnchorCell : UITableViewCell
{
    id <XMPeakRankAnchorCellDelegate> _delegate;
    XMWebImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UILabel *_scoreLabel;
    UILabel *_indexLablel;
    UIImageView *_indexView;
    UIButton *_followButton;
    UIImageView *_shiftView;
    UIImageView *_gradeView;
    UIView *_divideLine;
    XMRankPerson *_item;
    XMTableCellObject *_cellObj;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) XMRankPerson *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIImageView *gradeView; // @synthesize gradeView=_gradeView;
@property(retain, nonatomic) UIImageView *shiftView; // @synthesize shiftView=_shiftView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIImageView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) UILabel *indexLablel; // @synthesize indexLablel=_indexLablel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <XMPeakRankAnchorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ancohorBeFollowed:(_Bool)arg1;
- (void)updateItem:(id)arg1 ofIndex:(long long)arg2;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)followDidClick;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

