//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, WBShopWindowProductView, WBViewController;

@interface WBShopWindowProductCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableArray *btns;
    NSArray *_products;
    WBViewController *_controller;
    UICollectionView *_productCollectionView;
    WBShopWindowProductView *_leftView;
    WBShopWindowProductView *_rightView;
}

@property(retain, nonatomic) WBShopWindowProductView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) WBShopWindowProductView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) UICollectionView *productCollectionView; // @synthesize productCollectionView=_productCollectionView;
@property(nonatomic) __weak WBViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
- (void).cxx_destruct;
- (void)clickAction:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

