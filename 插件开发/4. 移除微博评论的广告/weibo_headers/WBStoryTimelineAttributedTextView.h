//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineAttributedTextView.h"

#import "WBTextLayoutDelegate-Protocol.h"

@class NSString, UIButton, WBStoryItemSegment;

@interface WBStoryTimelineAttributedTextView : WBTimelineAttributedTextView <WBTextLayoutDelegate>
{
    _Bool _expanded;
    _Bool _isFixAsyncDrawCrash;
    UIButton *_placeholderButton;
    UIButton *_foldButton;
    WBStoryItemSegment *_segment;
    unsigned long long _limitToNumberOfLines;
}

+ (struct CGSize)defaultButtonSize;
+ (id)defaultFoldButton;
+ (id)defaultPlaceHolderButton;
@property(nonatomic) _Bool isFixAsyncDrawCrash; // @synthesize isFixAsyncDrawCrash=_isFixAsyncDrawCrash;
@property(nonatomic) unsigned long long limitToNumberOfLines; // @synthesize limitToNumberOfLines=_limitToNumberOfLines;
@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(retain, nonatomic) UIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(retain, nonatomic) UIButton *placeholderButton; // @synthesize placeholderButton=_placeholderButton;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (void)textRenderer:(id)arg1 didPressActiveRange:(id)arg2;
@property(readonly, nonatomic) _Bool expandable;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (void)drawingWillStartAsynchronously:(_Bool)arg1;
- (double)textLayout:(id)arg1 maximumWidthForTruncatedLine:(struct __CTLine *)arg2 atIndex:(unsigned long long)arg3;
- (void)updateLimitToNumberOfLines:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textRendererClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

