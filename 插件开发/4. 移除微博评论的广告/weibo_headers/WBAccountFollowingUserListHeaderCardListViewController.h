//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBProfileHeaderCardListViewController.h"

@interface WBAccountFollowingUserListHeaderCardListViewController : WBProfileHeaderCardListViewController
{
    _Bool _searching;
}

@property _Bool searching; // @synthesize searching=_searching;
- (id)bubbleTypeWithIndexPage:(id)arg1 tableView:(id)arg2;
- (void)prepareCardForDisplay:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configSubviewsFrame;
- (double)VCWantToSetTheBubbleWidth;
- (_Bool)needSetBubbleViewWidthByVC;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

