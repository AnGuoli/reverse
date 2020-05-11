//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIViewController;

@interface XMSubTableViewController : XMBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool hasPullToRefresh;
    _Bool hasLoadMore;
    _Bool reloading;
    _Bool visible;
    _Bool needRefreshData;
    _Bool _hasPullToRefreshText;
    NSString *tabTitle;
    UIViewController *superViewController;
    UITableView *tableView;
    long long tableViewStyle;
    NSMutableArray *_refreshImages;
}

@property(retain, nonatomic) NSMutableArray *refreshImages; // @synthesize refreshImages=_refreshImages;
@property(nonatomic) _Bool hasPullToRefreshText; // @synthesize hasPullToRefreshText=_hasPullToRefreshText;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView;
@property(nonatomic) _Bool needRefreshData; // @synthesize needRefreshData;
@property(nonatomic) _Bool visible; // @synthesize visible;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController;
@property(nonatomic) _Bool reloading; // @synthesize reloading;
@property(nonatomic) _Bool hasLoadMore; // @synthesize hasLoadMore;
@property(nonatomic) _Bool hasPullToRefresh; // @synthesize hasPullToRefresh;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle;
- (void).cxx_destruct;
- (double)contentBottomOffset;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)pullToRefresh;
- (void)doneLoadData;
- (void)reloadData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

