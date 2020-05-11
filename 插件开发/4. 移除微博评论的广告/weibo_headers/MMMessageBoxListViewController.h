//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MMChatTableViewCellDelegate-Protocol.h"
#import "MMMessageBoxNewTopBarDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class MMMessageBoxListEngine, MMMessageBoxNewTopBar, NSMutableArray, NSString, UIButton, WBPRLMTableViewWrapper, WBProgressHUD;

@interface MMMessageBoxListViewController : WBTableViewController <MMMessageBoxNewTopBarDelegate, MMChatTableViewCellDelegate, PRLMTableViewWrapperDelegate>
{
    _Bool _hasMore;
    _Bool _isLoading;
    _Bool _isDeleting;
    _Bool _hasTrashUser;
    int _currentPage;
    int _currentTabId;
    MMMessageBoxListEngine *_messageBoxListEngine;
    NSMutableArray *_messageBoxArray;
    WBPRLMTableViewWrapper *_prlmWrapper;
    WBProgressHUD *_progressHUD;
    long long _totalUnreadCount;
    long long _maxTime;
    MMMessageBoxNewTopBar *_topNewBar;
    NSMutableArray *_msgTabs;
    UIButton *_deleteAllTrashUserButton;
}

@property(retain, nonatomic) UIButton *deleteAllTrashUserButton; // @synthesize deleteAllTrashUserButton=_deleteAllTrashUserButton;
@property(nonatomic) _Bool hasTrashUser; // @synthesize hasTrashUser=_hasTrashUser;
@property(nonatomic) int currentTabId; // @synthesize currentTabId=_currentTabId;
@property(retain, nonatomic) NSMutableArray *msgTabs; // @synthesize msgTabs=_msgTabs;
@property(retain, nonatomic) MMMessageBoxNewTopBar *topNewBar; // @synthesize topNewBar=_topNewBar;
@property(nonatomic) long long maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) long long totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) NSMutableArray *messageBoxArray; // @synthesize messageBoxArray=_messageBoxArray;
@property(retain, nonatomic) MMMessageBoxListEngine *messageBoxListEngine; // @synthesize messageBoxListEngine=_messageBoxListEngine;
- (void).cxx_destruct;
- (void)unfollowMessageListNeedReloadDataNotification:(id)arg1;
- (void)postUnfollowCountNotification;
- (void)updateUnreadCount;
- (void)loadingDataFinished;
- (void)loadMore;
- (void)forceReloadData;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)avatarButton:(id)arg1 didPressInCell:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)needsTitleBarWhenPeeking;
- (id)getCustomedTitleText;
- (void)setEmptyView;
- (void)configTableView;
- (void)skinPlainTableView:(id)arg1;
- (void)didSelectTopBarWithTabId:(int)arg1;
- (void)deleteAllTrashUsers;
- (void)didPressDeleteAllTrashUsersButton:(id)arg1;
- (void)updateNotTrashUser:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (id)pushBlockTypeArr;
- (void)performAnalysisActionWithCode:(id)arg1 andExtParam:(id)arg2;
- (int)defaultTab;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (_Bool)panToNavigation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

