//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMSocialCommunityRecommendTableViewCellDelegate-Protocol.h"

@class NSArray, NSString, UITableView, XMSocialCommunityCustomNav;

@interface XMSocialCommunityRecommendViewController : XMBaseVC <UITableViewDelegate, UITableViewDataSource, XMSocialCommunityRecommendTableViewCellDelegate>
{
    _Bool _hasMore;
    XMSocialCommunityCustomNav *_navBar;
    UITableView *_tableView;
    NSArray *_models;
    long long _pageId;
}

@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XMSocialCommunityCustomNav *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (void)removeCurrentRecommendVC;
- (void)gotoCommunityDetailViewControllerWithModel:(id)arg1;
- (void)xmSocialCommunityRecommendTableViewCellDidClickApplyToJoin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableHeaderView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reqeustDataWithPageNo:(long long)arg1 pullToRefresh:(_Bool)arg2;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)onLoggedIn;
- (void)customInit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

