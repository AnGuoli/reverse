//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBSearchTypeMenuDelegate-Protocol.h"

@class NSString, UILabel, UIView, WBBulletinCommentHeaderCellStyleEntity, WBCommentHeaderItem, WBCommentSortItem, WBPopoverWindow, WBSearchTypeMenu, WBSortButtonView;
@protocol WBBulletinCommentHeaderCellDelegate;

@interface WBBulletinCommentHeaderCell : WBTableViewCell <WBSearchTypeMenuDelegate>
{
    id <WBBulletinCommentHeaderCellDelegate> delegate;
    WBCommentSortItem *currentSortItem;
    WBCommentHeaderItem *dataItem;
    WBSearchTypeMenu *searchTypeMenu;
    WBPopoverWindow *menuPopWindow;
    UIView *seperatorLine;
    _Bool _showSeperatorLine;
    _Bool _isDetailedComment;
    UILabel *_label;
    WBBulletinCommentHeaderCellStyleEntity *_styleEntity;
    WBSortButtonView *_sortBtnView;
}

+ (double)rowHeightOfCommentHeaderItem:(id)arg1;
@property(retain, nonatomic) WBSortButtonView *sortBtnView; // @synthesize sortBtnView=_sortBtnView;
@property(retain, nonatomic) WBBulletinCommentHeaderCellStyleEntity *styleEntity; // @synthesize styleEntity=_styleEntity;
@property(nonatomic) _Bool isDetailedComment; // @synthesize isDetailedComment=_isDetailedComment;
@property(nonatomic) _Bool showSeperatorLine; // @synthesize showSeperatorLine=_showSeperatorLine;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <WBBulletinCommentHeaderCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)layoutSubviews;
- (void)refreshStyle;
- (void)setItem:(id)arg1;
- (void)showOptionMenu;
- (id)groupPopover;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

