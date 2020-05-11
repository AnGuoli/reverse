//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, XMNRequest, XMTableViewDataSource;

@interface XMSearchRecAnchorViewController : XMSubLevelViewController <XMTableViewDelegateProtocol>
{
    XMTableViewDataSource *_tableDataSource;
    long long _maxPageId;
    long long _nextPageId;
    long long _recId;
    XMNRequest *_recReq;
    long long _anchorType;
    NSString *_navTitle;
}

@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) long long anchorType; // @synthesize anchorType=_anchorType;
@property(retain, nonatomic) XMNRequest *recReq; // @synthesize recReq=_recReq;
@property(nonatomic) long long recId; // @synthesize recId=_recId;
@property(nonatomic) long long nextPageId; // @synthesize nextPageId=_nextPageId;
@property(nonatomic) long long maxPageId; // @synthesize maxPageId=_maxPageId;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)paraseResponseJSON:(id)arg1;
- (void)requestRecAnchorData;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewDidLoad;
- (id)initWithAnchorType:(long long)arg1 recId:(long long)arg2 navTitle:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

