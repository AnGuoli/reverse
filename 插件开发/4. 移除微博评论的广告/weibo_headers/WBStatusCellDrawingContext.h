//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimeLineCellDrawingContext.h"

@class NSArray, WBTimelineAttributedText;

@interface WBStatusCellDrawingContext : WBTimeLineCellDrawingContext
{
    struct CGRect likeButtonFrame;
    NSArray *_recentCommentTextFrames;
    NSArray *_recentCommentAttributedTexts;
    long long _specialBackgroundType;
    struct CGRect timeTextFrame;
    struct CGRect recentCommentsFrame;
}

@property(nonatomic) long long specialBackgroundType; // @synthesize specialBackgroundType=_specialBackgroundType;
@property(retain, nonatomic) NSArray *recentCommentAttributedTexts; // @synthesize recentCommentAttributedTexts=_recentCommentAttributedTexts;
@property(retain, nonatomic) NSArray *recentCommentTextFrames; // @synthesize recentCommentTextFrames=_recentCommentTextFrames;
@property(nonatomic) struct CGRect recentCommentsFrame; // @synthesize recentCommentsFrame;
@property(nonatomic) struct CGRect likeButtonFrame; // @synthesize likeButtonFrame;
@property(nonatomic) struct CGRect timeTextFrame; // @synthesize timeTextFrame;
- (void).cxx_destruct;
- (id)statusTypeTextColors;
- (id)statusTypeTexts;
- (id)availableImageURLs;
- (id)availableImageURL;
- (id)availableThumbnailImageURL;
- (id)availableMiddleImageURL;
- (_Bool)hasLocation;
- (_Bool)shouldShowExtraActionButton;
- (_Bool)shouldShowTime;
- (long long)quotedTotalPicNum;
- (long long)totalPicNum;
- (id)quotedImages;
- (_Bool)quotedItemHasPhoto;
- (id)images;
- (_Bool)itemHasPhoto;
- (id)quotedProducts;
- (_Bool)quotedItemHasProduct;
- (id)products;
- (_Bool)itemHasProduct;
- (id)status;
- (id)subContextClassArray;
- (void)resetWithContentWidth:(double)arg1;
- (void)resetWithContentWidth:(double)arg1 userInfo:(id)arg2;
- (id)flagImageUrl;
@property(nonatomic) double rollingUnionAreaTableViewInitialOffset;
@property(nonatomic) struct CGRect rollingUnionAreaFrame;
@property(nonatomic) struct CGRect commentSummaryFrame;
@property(nonatomic) struct CGRect forwardSummaryFrame;
@property(nonatomic) struct CGRect likeSummaryFrame;
@property(retain, nonatomic) WBTimelineAttributedText *commentCountSummaryAttributedText;
@property(nonatomic) struct CGRect commentCountSummaryAttributedTextFrame;
@property(retain, nonatomic) NSArray *commentSummaryAttributedTextFrameArray;
@property(retain, nonatomic) NSArray *commentSummaryAttributedTextArray;
@property(nonatomic) struct CGRect commmentSummaryIconFrame;
@property(nonatomic) struct CGRect forwardSummaryAttributedTextFrame;
@property(retain, nonatomic) NSArray *forwardSummaryAttributedTextFrameArray;
@property(retain, nonatomic) NSArray *forwardSummaryAttributedTextArray;
@property(nonatomic) struct CGRect forwardSummaryIconFrame;
@property(retain, nonatomic) WBTimelineAttributedText *forwardSummaryAttributedText;
@property(nonatomic) struct CGRect likeSummaryAttributedTextFrame;
@property(nonatomic) struct CGRect likeSummaryIconFrame;
@property(retain, nonatomic) WBTimelineAttributedText *likeSummaryAttributedText;

@end

