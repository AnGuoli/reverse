//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class NSString, XMVCPropGroupModel;
@protocol XMVCPropGroupCellControllerDelegate;

@interface XMVCPropGroupCellController : XMChatBaseScrollVC
{
    int _type;
    id <XMVCPropGroupCellControllerDelegate> _delegate;
    XMVCPropGroupModel *_model;
    struct NSString *_materialType;
    CDUnknownBlockType _delectedCallback;
    NSString *_currentId;
}

+ (id)controllerWithType:(int)arg1;
@property(copy, nonatomic) NSString *currentId; // @synthesize currentId=_currentId;
@property(copy, nonatomic) CDUnknownBlockType delectedCallback; // @synthesize delectedCallback=_delectedCallback;
@property(retain, nonatomic) NSString *materialType; // @synthesize materialType=_materialType;
@property(retain, nonatomic) XMVCPropGroupModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMVCPropGroupCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)noNetView;
- (id)emptyView;
- (void)onStarChangeNot:(id)arg1;
- (unsigned long long)propIndexWithId:(id)arg1;
- (void)onSelectedChangeNot:(id)arg1;
- (void)selectedCallbackWithModel:(id)arg1;
- (void)reloadData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)prepareDatas:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)triggerPullToRefresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

@end

