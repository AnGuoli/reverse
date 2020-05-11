//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBGroupManagementCellDelegate-Protocol.h"
#import "WBGroupViewControllerProtocol-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, WBDirectionalGroup, WBSyncToGroupSettingHandler;
@protocol WBGroupTableViewAdapterProtocol, WBSyncToGroupSettingViewControllerDelegate;

@interface WBSyncToGroupSettingViewController : WBTableViewController <WBGroupViewControllerProtocol, WBGroupManagementCellDelegate>
{
    id _loadOperationHandle;
    WBDirectionalGroup *_group;
    unsigned long long _numberOfSection;
    NSIndexPath *_currentIndexPath;
    NSMutableArray *_settings;
    id <WBSyncToGroupSettingViewControllerDelegate> _delegate;
    NSArray *_dataSource;
    id <WBGroupTableViewAdapterProtocol> _tableViewAdapter;
    WBSyncToGroupSettingHandler *_eventHandler;
}

@property(retain, nonatomic) WBSyncToGroupSettingHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) id <WBGroupTableViewAdapterProtocol> tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WBSyncToGroupSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) unsigned long long numberOfSection; // @synthesize numberOfSection=_numberOfSection;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)syncSetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)groupManagementCell:(id)arg1 success:(_Bool)arg2 showNotice:(id)arg3;
- (void)groupManagementCell:(id)arg1 switchValueChanged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getTableViewDataSource;
- (id)getGroup;
- (id)getGroupTableView;
- (void)reloadTableView;
- (void)buildTableViewDataSourceFromGroup;
- (void)removeObservers;
- (void)configSubviewsFrame;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

