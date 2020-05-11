//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSMutableArray, NSString, XMNRequest;

@interface XMPaidRecMoreAnchorViewController : XMSubLevelViewController <XMTableViewDelegateProtocol, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMoreData;
    NSString *_rankName;
    NSMutableArray *_layouts;
    XMNRequest *_request;
    long long _nextPageId;
}

@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) long long nextPageId; // @synthesize nextPageId=_nextPageId;
@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(copy, nonatomic) NSString *rankName; // @synthesize rankName=_rankName;
- (void).cxx_destruct;
- (id)layoutWithItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)parseJsonData:(id)arg1;
- (void)requestAnchorList;
- (void)triggerPullToRefresh;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

