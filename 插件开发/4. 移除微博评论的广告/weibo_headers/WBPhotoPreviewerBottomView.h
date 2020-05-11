//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBPhotoPreviewerReorderableCollectionViewDataSource-Protocol.h"
#import "WBPhotoPreviewerReorderableCollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, UIVisualEffectView, WBAssetPickerContextSetting, WBPhotoPreviewerBottomCollectionViewCell;
@protocol WBPhotoPreviewerBottomViewDelegate;

@interface WBPhotoPreviewerBottomView : UIView <WBPhotoPreviewerReorderableCollectionViewDataSource, WBPhotoPreviewerReorderableCollectionViewDelegateFlowLayout>
{
    WBAssetPickerContextSetting *_contextSetting;
    id <WBPhotoPreviewerBottomViewDelegate> _delegate;
    WBPhotoPreviewerBottomCollectionViewCell *_movingCell;
    unsigned long long _selectedIndex;
    UICollectionView *_previewCollectionView;
    UIVisualEffectView *_bottomBarBackView;
    NSIndexPath *_moveFromIndexPath;
    NSIndexPath *_moveToIndexPath;
}

@property(copy, nonatomic) NSIndexPath *moveToIndexPath; // @synthesize moveToIndexPath=_moveToIndexPath;
@property(copy, nonatomic) NSIndexPath *moveFromIndexPath; // @synthesize moveFromIndexPath=_moveFromIndexPath;
@property(retain, nonatomic) UIVisualEffectView *bottomBarBackView; // @synthesize bottomBarBackView=_bottomBarBackView;
@property(retain, nonatomic) UICollectionView *previewCollectionView; // @synthesize previewCollectionView=_previewCollectionView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) WBPhotoPreviewerBottomCollectionViewCell *movingCell; // @synthesize movingCell=_movingCell;
@property(nonatomic) __weak id <WBPhotoPreviewerBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WBAssetPickerContextSetting *contextSetting; // @synthesize contextSetting=_contextSetting;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)removeChoosedCacheAtIndex:(unsigned long long)arg1;
- (void)addChoosedCacheAtIndex:(unsigned long long)arg1;
- (void)chooseCache:(id)arg1;
- (void)disChooseCache:(id)arg1;
- (void)selectedCacheIfContained:(id)arg1;
- (void)reloadData;
- (void)didMoveItem;
- (void)scrollToRectWithIndex:(long long)arg1 withAnimation:(_Bool)arg2;
- (void)longPressAction:(id)arg1;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

