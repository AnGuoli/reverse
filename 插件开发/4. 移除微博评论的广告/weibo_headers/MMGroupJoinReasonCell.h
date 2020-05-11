//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonGroupedTableViewCell.h"

#import "WBTimelineAttributedTextViewDelegate-Protocol.h"

@class MMGroupNoitceProfile, MMMessageRichTextModel, NSString, UILabel, UIView, WBTimelineAttributedTextView;
@protocol MMGroupJoinReasonCellDelegate;

@interface MMGroupJoinReasonCell : WBCommonGroupedTableViewCell <WBTimelineAttributedTextViewDelegate>
{
    id <MMGroupJoinReasonCellDelegate> _delegate;
    MMGroupNoitceProfile *_noticeProfile;
    UIView *_graybackgroundView;
    WBTimelineAttributedTextView *_titleView;
    UILabel *_detailLabel;
    MMMessageRichTextModel *_textModel;
}

+ (struct CGSize)sizeForDetailText:(id)arg1 withWidth:(double)arg2;
+ (double)getTextViewHeightWithTextModel:(id)arg1 limitWidth:(double)arg2;
+ (double)cellHeightForNotice:(id)arg1 cellWidth:(double)arg2;
+ (id)configAttributedText:(id)arg1;
@property(retain, nonatomic) MMMessageRichTextModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) WBTimelineAttributedTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *graybackgroundView; // @synthesize graybackgroundView=_graybackgroundView;
@property(retain, nonatomic) MMGroupNoitceProfile *noticeProfile; // @synthesize noticeProfile=_noticeProfile;
@property(nonatomic) __weak id <MMGroupJoinReasonCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didPressActiveRange:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

