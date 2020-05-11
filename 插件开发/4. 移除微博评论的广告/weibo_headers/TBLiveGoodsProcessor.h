//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface TBLiveGoodsProcessor : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_goodsTableView;
    NSMutableArray *_goodsList;
    UIView *_mainView;
    UIView *_skuParentView;
}

@property(nonatomic) __weak UIView *skuParentView; // @synthesize skuParentView=_skuParentView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) NSMutableArray *goodsList; // @synthesize goodsList=_goodsList;
@property(retain, nonatomic) UITableView *goodsTableView; // @synthesize goodsTableView=_goodsTableView;
- (void).cxx_destruct;
- (void)showGoodsListWithSuperView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

