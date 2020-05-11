//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBShopInfiniteScrollDelegate-Protocol.h"

@class NSMutableArray, NSString, SNHTTPRequestOperationWrapper, UIButton, UILabel, UIView, WBButton, WBPRLMTableViewWrapper, WBShopInfiniteScrollView, WBShopNewProductModel, WBShopPublishButton, WBStatus, WBTableView;

@interface WBShopNewProductInfoViewController : WBViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, WBShopInfiniteScrollDelegate, PRLMTableViewWrapperDelegate>
{
    WBStatus *_status;
    _Bool shouldHidePicWord;
    _Bool showPicWord;
    _Bool showPicWordMore;
    _Bool hasRecommondContent;
    unsigned long long page;
    NSString *mid;
    NSString *recommendScheme;
    WBShopNewProductModel *_product;
    unsigned long long _fromtype;
    WBShopInfiniteScrollView *_imageScrollView;
    UIView *_headerView;
    UIView *_headerLine;
    UILabel *_priceLabel;
    UILabel *_contentLabel;
    UILabel *_sourceLabel;
    UILabel *_pageLabel;
    UILabel *_commissionLabel;
    UILabel *_salesLabel;
    WBButton *_backBtn;
    UIView *_topView;
    WBTableView *_tableView;
    WBPRLMTableViewWrapper *_wrapper;
    UIView *_bottomView;
    WBShopPublishButton *_releaseBtn;
    NSMutableArray *_products;
    NSMutableArray *_picwords;
    UIButton *_leftBarButton;
    UIView *_footer;
    SNHTTPRequestOperationWrapper *_detailWrapper;
    SNHTTPRequestOperationWrapper *_listWrapper;
    SNHTTPRequestOperationWrapper *_otherWrapper;
}

@property(retain, nonatomic) SNHTTPRequestOperationWrapper *otherWrapper; // @synthesize otherWrapper=_otherWrapper;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *listWrapper; // @synthesize listWrapper=_listWrapper;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *detailWrapper; // @synthesize detailWrapper=_detailWrapper;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIButton *leftBarButton; // @synthesize leftBarButton=_leftBarButton;
@property(retain, nonatomic) NSMutableArray *picwords; // @synthesize picwords=_picwords;
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) WBShopPublishButton *releaseBtn; // @synthesize releaseBtn=_releaseBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) WBPRLMTableViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) WBButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *salesLabel; // @synthesize salesLabel=_salesLabel;
@property(retain, nonatomic) UILabel *commissionLabel; // @synthesize commissionLabel=_commissionLabel;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *headerLine; // @synthesize headerLine=_headerLine;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WBShopInfiniteScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) unsigned long long fromtype; // @synthesize fromtype=_fromtype;
@property(retain, nonatomic) WBShopNewProductModel *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)freshHeaderUI;
- (void)releaseAction:(id)arg1;
- (void)wbMoreAction:(id)arg1;
- (void)openStatus;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollView:(id)arg1 scrollToIndex:(unsigned long long)arg2;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tapImageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fetchMore;
- (void)fetchRecommendList;
- (void)fetchPicWord;
- (void)loadNext:(unsigned long long)arg1;
- (void)checkPicWordRequest;
- (void)setTopNaviWhiteBackground:(double)arg1;
- (void)setTopNaviNormalBackground:(double)arg1;
- (id)getBackItemWithStyle:(_Bool)arg1;
- (void)setNavigationBarAlpha:(double)arg1;
- (void)fetchData;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

