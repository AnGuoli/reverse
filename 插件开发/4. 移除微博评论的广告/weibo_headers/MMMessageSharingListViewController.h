//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class NSMutableArray, NSString, WBMessageCenterEngine, WBPRLMTableViewWrapper;

@interface MMMessageSharingListViewController : WBTableViewController
{
    _Bool _isLoading;
    NSString *_aggr_id;
    NSString *_type;
    NSString *_titleString;
    NSString *_extparam;
    NSMutableArray *_datas;
    WBPRLMTableViewWrapper *_prlmWrapper;
    WBMessageCenterEngine *_messageCenterEngine;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WBMessageCenterEngine *messageCenterEngine; // @synthesize messageCenterEngine=_messageCenterEngine;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSString *extparam; // @synthesize extparam=_extparam;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *aggr_id; // @synthesize aggr_id=_aggr_id;
- (void).cxx_destruct;
- (id)messageCenterStatusCell:(id)arg1 extPramsWithItem:(id)arg2;
- (id)analysisParameters;
- (id)defaultParametersWithFlow:(id)arg1;
- (void)cellSelectedAnalysis:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeFlowItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)pushBlockTypeArr;
- (id)getCellData:(id)arg1;
- (void)loadMoreData;
- (void)reloadData;
- (void)configEmptyView;
- (void)configPRLMWrapper;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)uicodeInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

