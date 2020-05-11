//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UITextField, UIView, XMDubShowMSCollectionFlowLayout;

@interface XMSocialCommunitySearchViewController : XMBaseVC <UICollectionViewDataSource, UICollectionViewDelegate, UITextFieldDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _historyFold;
    UIView *_maskView;
    UITextField *_searchTextFiled;
    UIButton *_searchButton;
    XMDubShowMSCollectionFlowLayout *_fy;
    UICollectionView *_collectionView;
    NSMutableArray *_models;
    NSString *_searchKey;
    UIView *_lineV;
    NSMutableArray *_searchHistoryKey;
    NSMutableArray *_recommandTagModels;
}

@property(nonatomic) _Bool historyFold; // @synthesize historyFold=_historyFold;
@property(retain, nonatomic) NSMutableArray *recommandTagModels; // @synthesize recommandTagModels=_recommandTagModels;
@property(retain, nonatomic) NSMutableArray *searchHistoryKey; // @synthesize searchHistoryKey=_searchHistoryKey;
@property(retain, nonatomic) UIView *lineV; // @synthesize lineV=_lineV;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMDubShowMSCollectionFlowLayout *fy; // @synthesize fy=_fy;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UITextField *searchTextFiled; // @synthesize searchTextFiled=_searchTextFiled;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)reloadUI;
- (void)clearSearchHistoryRecords;
- (id)fetchHistoryRecords;
- (void)addHistroy:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showAuxSearch;
- (void)showHistory;
- (void)searchTextChanged;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)requestRecommendWords;
- (void)requestDataWithLoading:(_Bool)arg1;
- (_Bool)showHistoryType;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)toMSLandPlayVCWithMaterialId:(long long)arg1 title:(id)arg2;
- (void)didSelectRecommendItemWithTitleId:(long long)arg1 title:(id)arg2;
- (void)didSelectItemWithSearchKey:(id)arg1;
- (void)toLinkWebViewWithTitle:(id)arg1 linkURL:(id)arg2;
- (void)didSelectHistoryItem:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_handleClearHistory;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)recommandCellWithIndexPath:(id)arg1;
- (id)historyKeyCellWithIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)handleCancel;
- (void)setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

