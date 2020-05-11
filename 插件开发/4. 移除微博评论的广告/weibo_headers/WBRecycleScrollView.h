//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableView.h"

@class NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface WBRecycleScrollView : WBTableView
{
    _Bool _needsReload;
    NSIndexPath *_selectedRow;
    NSIndexPath *_highlightedRow;
    NSMutableDictionary *_cachedCells;
    NSMutableSet *_reusableCells;
    NSMutableArray *_sections;
    struct {
        unsigned int heightForRowAtIndexPath:1;
        unsigned int didEndDisplayingCell:1;
        unsigned int willSelectRowAtIndexPath:1;
        unsigned int didSelectRowAtIndexPath:1;
        unsigned int willDeselectRowAtIndexPath:1;
        unsigned int didDeselectRowAtIndexPath:1;
    } _delegateHas;
    struct {
        unsigned int numberOfSectionsInTableView:1;
    } _dataSourceHas;
    struct CGRect _visibleBounds;
}

@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToNearestSelectedRowAtScrollPosition:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollRectToVisible:(struct CGRect)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)_setUserSelectedRowAtIndexPath:(id)arg1;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForSelectedRow;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)_removeUITableViewCellSepratorViews;
- (void)layoutSubviews;
- (void)_setNeedsReload;
- (void)_reloadDataIfNeeded;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadData;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)visibleCells;
- (id)indexPathsForVisibleRows;
- (id)indexPathForRowAtPoint:(struct CGPoint)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (struct CGRect)rectForRowAtIndexPath:(id)arg1;
- (struct CGRect)rectForSection:(long long)arg1;
- (double)_offsetForSection:(long long)arg1;
- (struct CGRect)_CGRectFromVerticalOffset:(double)arg1 height:(double)arg2;
- (void)_layoutTableView;
- (void)_setContentSize;
- (void)_updateSectionsCacheIfNeeded;
- (void)_updateSectionsCache;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

