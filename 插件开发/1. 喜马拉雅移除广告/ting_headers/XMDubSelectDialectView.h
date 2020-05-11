//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIButton, UICollectionView, UIImageView, UILabel;

@interface XMDubSelectDialectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _fold;
    _Bool _firstIn;
    NSIndexPath *_selectedIndexPath;
    CDUnknownBlockType _foldChangedBlock;
    UIButton *_foldButton;
    UIImageView *_selectImageView;
    UILabel *_selectLabel;
    UICollectionView *_collectionView;
    NSArray *_dialectTags;
}

@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(nonatomic) _Bool fold; // @synthesize fold=_fold;
@property(retain, nonatomic) NSArray *dialectTags; // @synthesize dialectTags=_dialectTags;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UIButton *foldButton; // @synthesize foldButton=_foldButton;
@property(copy, nonatomic) CDUnknownBlockType foldChangedBlock; // @synthesize foldChangedBlock=_foldChangedBlock;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (void).cxx_destruct;
- (void)updateUI;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_handleTapAction;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1 dialectTags:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

