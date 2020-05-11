//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@protocol AppMuLanguageViewControllerDelegate;

@interface AppMuLanguageViewController : WBTableViewController
{
    int selRow;
    id <AppMuLanguageViewControllerDelegate> delegate;
}

+ (_Bool)prefix:(id)arg1 existsInArray:(id)arg2;
+ (long long)adjustLanguageAccordingToSystemConfig;
@property(nonatomic) __weak id <AppMuLanguageViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didAppLanguageChanged:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end

