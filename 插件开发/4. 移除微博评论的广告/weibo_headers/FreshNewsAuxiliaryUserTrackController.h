//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FreshNewsEditBaseViewController.h"

#import "FreshNewsKeywordSetTableViewCellDelegate-Protocol.h"
#import "WBContactAtPersonViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, WBCustomSwitchControl, WBFreshNewsBlockData;

@interface FreshNewsAuxiliaryUserTrackController : FreshNewsEditBaseViewController <FreshNewsKeywordSetTableViewCellDelegate, WBContactAtPersonViewControllerDelegate>
{
    WBFreshNewsBlockData *_blockData;
    WBCustomSwitchControl *_forwordSwitch;
    NSMutableArray *_bothArray;
}

@property(retain, nonatomic) NSMutableArray *bothArray; // @synthesize bothArray=_bothArray;
@property(retain, nonatomic) WBCustomSwitchControl *forwordSwitch; // @synthesize forwordSwitch=_forwordSwitch;
@property(retain, nonatomic) WBFreshNewsBlockData *blockData; // @synthesize blockData=_blockData;
- (void).cxx_destruct;
- (void)saveAuxiliaryStrategy:(id)arg1;
- (void)initArrayData;
- (void)cancelAction:(id)arg1;
- (void)dismissPresent;
- (void)atPersonViewControllerDidCancel:(id)arg1;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithName:(id)arg2;
- (void)didClickDeleteButton:(id)arg1 type:(long long)arg2;
- (void)didClickAddButton:(id)arg1 type:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

