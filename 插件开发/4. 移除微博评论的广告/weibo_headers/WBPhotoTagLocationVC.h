//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPOIListViewController.h"

@class UIImage;

@interface WBPhotoTagLocationVC : WBPOIListViewController
{
    UIImage *_backImage;
    _Bool _hasLogl;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg1 headView:(id)arg2;
- (void)backButtonPressed:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)hideSearchingOverlay;
- (void)cancelSearching;
- (void)startSearching;
- (void)setupUIElements;
- (void)setupSearchBar;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithBackgroundImage:(id)arg1;

@end

