//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class UIBarButtonItem;

@interface XMMCommodityViewController : XMChatBaseScrollVC
{
    unsigned long long _selectedGoodsCode;
    UIBarButtonItem *_clearBtn;
    CDUnknownBlockType _chooseCallback;
}

@property(copy, nonatomic) CDUnknownBlockType chooseCallback; // @synthesize chooseCallback=_chooseCallback;
@property(retain, nonatomic) UIBarButtonItem *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(nonatomic) unsigned long long selectedGoodsCode; // @synthesize selectedGoodsCode=_selectedGoodsCode;
- (void).cxx_destruct;
- (void)cleanAction:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)viewDidLoad;
- (void)didInitialize;

@end

