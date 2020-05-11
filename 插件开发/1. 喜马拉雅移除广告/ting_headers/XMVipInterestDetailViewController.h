//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, UIView, XMNRequest, XMTableViewDataSource, XMVipInterestCategory;

@interface XMVipInterestDetailViewController : XMSubLevelViewController <XMTableViewDelegateProtocol>
{
    _Bool _hasMoreData;
    XMVipInterestCategory *_interestItem;
    XMTableViewDataSource *_tableDataSource;
    XMNRequest *_dataReq;
    UIView *_noMoreDataView;
}

@property(retain, nonatomic) UIView *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) XMNRequest *dataReq; // @synthesize dataReq=_dataReq;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMVipInterestCategory *interestItem; // @synthesize interestItem=_interestItem;
- (void).cxx_destruct;
- (void)animatedDeleteCellObject:(id)arg1;
- (void)recFlowTrackCellUnlikeDidClick:(id)arg1 reason:(id)arg2;
- (void)recFlowTrackCellUnlikeDidClick:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)addNoDataCellIfNeeded;
- (void)parseResponsData:(id)arg1;
- (void)fetchData;
- (void)requestFirstPage;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

