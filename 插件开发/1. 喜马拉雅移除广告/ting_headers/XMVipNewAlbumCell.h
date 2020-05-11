//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UICollectionView, XMBaseLayout, XMVipNewAlbumCellLayout;
@protocol XMVipNewAlbumCellDelegate;

@interface XMVipNewAlbumCell : XMTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    long long _selectedIndex;
    XMBaseLayout *_layout;
    id <XMVipNewAlbumCellDelegate> _delegate;
    XMVipNewAlbumCellLayout *_myLayout;
    UICollectionView *_collectionView;
}

+ (id)layoutWithNewAlbums:(id)arg1;
+ (id)cellObjectWithNewAlbums:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMVipNewAlbumCellLayout *myLayout; // @synthesize myLayout=_myLayout;
@property(nonatomic) __weak id <XMVipNewAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMBaseLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateIndicator;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

