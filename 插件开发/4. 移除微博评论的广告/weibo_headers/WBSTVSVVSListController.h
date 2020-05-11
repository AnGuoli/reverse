//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTVSListController.h"

@class NSDictionary, WBVideoItem;

@interface WBSTVSVVSListController : WBSTVSListController
{
    long long _nextPage;
    long long _loadMoreCount;
    _Bool _refreshedReqLog;
    WBVideoItem *_baseVideoItem;
    NSDictionary *_recomReq;
}

@property(copy, nonatomic) NSDictionary *recomReq; // @synthesize recomReq=_recomReq;
@property(retain, nonatomic) WBVideoItem *baseVideoItem; // @synthesize baseVideoItem=_baseVideoItem;
- (void).cxx_destruct;
- (void)prepareCommitPlayerLogWithVideoItem:(id)arg1;
- (id)addPageIndexForActionLog:(id)arg1;
- (void)addPageIndexForVideoItem:(id)arg1;
- (void)viewModelDetailLoadFailed:(id)arg1 error:(id)arg2 store:(id)arg3;
- (void)viewModelDetailLoadSuccess:(id)arg1 store:(id)arg2;
- (void)refreshStartingViewModelifNeedWithReqDic:(id)arg1;
- (void)loadMore;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)useMidFirst;
- (void)initializeCollectionView:(id)arg1;
- (id)init;
- (void)setStartingModel:(id)arg1;
- (void)configItemsWithCard:(id)arg1;

@end

