//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStickerSearchHomeCell.h"

@class NSMutableArray, WBStickerSearchHotTagContentModel;
@protocol WBStickerSearchHotTagContentViewDelegate;

@interface WBStickerSearchHotTagContentView : WBStickerSearchHomeCell
{
    id <WBStickerSearchHotTagContentViewDelegate> _delegate;
    NSMutableArray *_tagViews;
    WBStickerSearchHotTagContentModel *_viewModel;
}

@property(retain, nonatomic) WBStickerSearchHotTagContentModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(nonatomic) __weak id <WBStickerSearchHotTagContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tagDidSelected:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

