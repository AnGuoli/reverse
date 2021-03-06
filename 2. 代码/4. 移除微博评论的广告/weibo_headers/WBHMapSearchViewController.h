//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WBHMapSearchTopNavigationView, WBTableView;

@interface WBHMapSearchViewController : WBViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSMutableDictionary *_dataDictionary;
    CDUnknownBlockType _selectedModelCompletion;
    NSString *_searchTextFieldPlaceholder;
    WBHMapSearchTopNavigationView *_navigationView;
    WBTableView *_tableView;
}

@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WBHMapSearchTopNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(copy, nonatomic) NSString *searchTextFieldPlaceholder; // @synthesize searchTextFieldPlaceholder=_searchTextFieldPlaceholder;
@property(copy, nonatomic) CDUnknownBlockType selectedModelCompletion; // @synthesize selectedModelCompletion=_selectedModelCompletion;
@property(retain, nonatomic) NSMutableDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
- (void).cxx_destruct;
- (void)reloadTableViewData;
- (id)contentCellIdentifier;
- (id)headerCellIdentifier;
- (void)viewWillLayoutSubviews;
- (void)_addSubviews;
- (void)viewDidLoad;
- (void)popSearchViewController;
- (void)backButtonAction:(id)arg1;
- (void)_parseDataWithResponseDictionary:(id)arg1;
- (void)requestSearchRecommendData;
- (void)requestSearchDataWithKeyword:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)requestRecommendEventsDataWithDay:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestSearchDataWithKeyWord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

