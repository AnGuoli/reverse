//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITableView, UIView, XMDubShowMSCartoonDetailHeaderView, XMDubShowMSCartoonDetailModel, XMWebImageView;

@interface XMDubShowMSCartoonDetailViewController : XMBaseVC <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMore;
    long long _materialId;
    UITableView *_tableView;
    XMWebImageView *_webImageView;
    XMDubShowMSCartoonDetailHeaderView *_headView;
    UIView *_navBarView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    XMDubShowMSCartoonDetailModel *_model;
    long long _pageCount;
}

@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) XMDubShowMSCartoonDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) XMDubShowMSCartoonDetailHeaderView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) XMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
- (void).cxx_destruct;
- (void)loadMore;
- (_Bool)isLoadMoreViewNeeded;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)customInitTableView;
- (void)requestDetailInfo;
- (void)customInit;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

