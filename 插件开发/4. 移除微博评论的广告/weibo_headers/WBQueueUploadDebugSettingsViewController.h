//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class NSMutableArray, WBQueueUploadDebugSettingItem;

@interface WBQueueUploadDebugSettingsViewController : WBTableViewController
{
    WBQueueUploadDebugSettingItem *_backupItem;
    NSMutableArray *_textFields;
}

+ (id)currentItem;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchValueChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupData;
- (void)viewDidLoad;

@end

