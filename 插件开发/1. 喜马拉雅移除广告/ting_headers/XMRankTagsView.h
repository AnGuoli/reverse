//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView, UILabel;
@protocol XMRankTagsViewDelegate;

@interface XMRankTagsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <XMRankTagsViewDelegate> _delegate;
    long long _seletedIndex;
    UILabel *_titleLabel;
    UIView *_contentWrapView;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *contentWrapView; // @synthesize contentWrapView=_contentWrapView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long seletedIndex; // @synthesize seletedIndex=_seletedIndex;
@property(nonatomic) __weak id <XMRankTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)itemWidth;
- (void)pickUpDidClick;
- (void)setup;
- (void)reloadTags;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

