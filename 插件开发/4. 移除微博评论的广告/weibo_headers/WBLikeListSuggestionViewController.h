//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@class NSMutableArray, NSString;
@protocol WBLikeListSuggestionViewDelegate;

@interface WBLikeListSuggestionViewController : WBTableViewController
{
    id <WBLikeListSuggestionViewDelegate> _delegate;
    NSMutableArray *_suggestionArray;
    NSString *_keyword;
    NSString *_headTitle;
}

@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *suggestionArray; // @synthesize suggestionArray=_suggestionArray;
@property(nonatomic) __weak id <WBLikeListSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)getSuggestionArrayWithKeyword:(id)arg1 params:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)resetSuggestionData;
- (void)viewDidLoad;

@end

