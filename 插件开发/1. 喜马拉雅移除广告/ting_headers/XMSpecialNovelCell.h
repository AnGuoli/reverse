//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, XMFeedsFlowInfoView, XMSearchNovelModel, XMWebImageView;
@protocol XMSpecialNovelCellDelegate;

@interface XMSpecialNovelCell : UITableViewCell
{
    id <XMSpecialNovelCellDelegate> _delegate;
    XMSearchNovelModel *_novel;
    XMWebImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UIView *_tagsView;
    XMFeedsFlowInfoView *_infoView;
    UIView *_chapterView;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIView *chapterView; // @synthesize chapterView=_chapterView;
@property(retain, nonatomic) XMFeedsFlowInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) XMSearchNovelModel *novel; // @synthesize novel=_novel;
@property(nonatomic) __weak id <XMSpecialNovelCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)chapterItemDidClick:(id)arg1;
- (void)readDidClick;
- (void)moreDidClick;
- (void)layoutSubviews;
- (void)updateTags;
- (void)updateChapterView;
- (void)setupMore;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

