//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSearchBaseViewController.h"

#import "XMSearchDubCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, XMNRequest, XMSearchFilterCateogryModel, XMSearchFilterModel;

@interface XMSearchDubViewController : XMSearchBaseViewController <XMSearchDubCellDelegate>
{
    NSMutableArray *_dubs;
    XMNRequest *_searchReq;
    NSArray *_conditionFilters;
    XMSearchFilterModel *_filterModel;
    XMSearchFilterCateogryModel *_categoryFilterModel;
}

@property(retain, nonatomic) XMSearchFilterCateogryModel *categoryFilterModel; // @synthesize categoryFilterModel=_categoryFilterModel;
@property(retain, nonatomic) XMSearchFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) NSArray *conditionFilters; // @synthesize conditionFilters=_conditionFilters;
@property(retain, nonatomic) XMNRequest *searchReq; // @synthesize searchReq=_searchReq;
@property(retain, nonatomic) NSMutableArray *dubs; // @synthesize dubs=_dubs;
- (void).cxx_destruct;
- (void)exposureObjectDataTrack;
- (void)scrollViewDidEndDeceleratingAction;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)changeFollowState:(id)arg1;
- (void)shareDub:(id)arg1;
- (void)longPress:(id)arg1 Model:(id)arg2;
- (void)adViewDidUpdateWithAdModels:(id)arg1 andPositionName:(id)arg2;
- (id)adViewWillRequestWithParamsForPositionName:(id)arg1;
- (void)adViewWillAddAds;
- (void)adViewControllerWillAppear;
- (void)filterDidSelectCategory:(id)arg1;
- (void)filterDidSelectModel:(id)arg1;
- (void)paraseResponseJSON:(id)arg1;
- (void)searchReqFetchData;
- (void)fetchFilterData;
- (void)searchWithSearchWord:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

