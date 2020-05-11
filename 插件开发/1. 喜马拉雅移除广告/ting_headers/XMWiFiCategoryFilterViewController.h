//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMAlbumCellDelegate-Protocol.h"
#import "XMCategoryFilterTableViewCellDelegate-Protocol.h"
#import "XMFilterTagViewDelegate-Protocol.h"
#import "XMWiFiAlbumBlindCellDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, PPMediaDevice, UIButton, UIImageView, UIView, XMCategoryFilterTagView, XMCategoryItem, XMServerRequest;

@interface XMWiFiCategoryFilterViewController : XMSubLevelViewController <XMCategoryFilterTableViewCellDelegate, XMAlbumCellDelegate, XMFilterTagViewDelegate, XMWiFiAlbumBlindCellDelegate>
{
    UIButton *_tabAllBtn;
    _Bool _isLoading;
    _Bool _isNeedCutFilteViewWhenPush;
    _Bool _isNoResualt;
    XMCategoryItem *_category;
    UIView *_topView;
    XMServerRequest *_filterRequest;
    XMServerRequest *_filterInfoRequest;
    long long _pageID;
    long long _pageSize;
    long long _state;
    NSMutableArray *_resualtTableViewDatas;
    long long _totalCount;
    long long _maxPageID;
    UIButton *_showButton;
    NSString *_conditionStr;
    UIImageView *_dimImageView;
    MBProgressHUD *_hud;
    XMCategoryFilterTagView *_filterTagView;
    long long _channelIndex;
    PPMediaDevice *_setDevice;
}

@property(retain, nonatomic) PPMediaDevice *setDevice; // @synthesize setDevice=_setDevice;
@property(nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(retain, nonatomic) XMCategoryFilterTagView *filterTagView; // @synthesize filterTagView=_filterTagView;
@property(nonatomic) _Bool isNoResualt; // @synthesize isNoResualt=_isNoResualt;
@property(nonatomic) _Bool isNeedCutFilteViewWhenPush; // @synthesize isNeedCutFilteViewWhenPush=_isNeedCutFilteViewWhenPush;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIImageView *dimImageView; // @synthesize dimImageView=_dimImageView;
@property(retain, nonatomic) NSString *conditionStr; // @synthesize conditionStr=_conditionStr;
@property(retain, nonatomic) UIButton *showButton; // @synthesize showButton=_showButton;
@property(nonatomic) long long maxPageID; // @synthesize maxPageID=_maxPageID;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSMutableArray *resualtTableViewDatas; // @synthesize resualtTableViewDatas=_resualtTableViewDatas;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) XMServerRequest *filterInfoRequest; // @synthesize filterInfoRequest=_filterInfoRequest;
@property(retain, nonatomic) XMServerRequest *filterRequest; // @synthesize filterRequest=_filterRequest;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) XMCategoryItem *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)openUrlView:(id)arg1;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)setDataSource:(id)arg1;
- (void)updateFilterconditionStr;
- (id)getMetaDatas;
- (void)renewSelfView;
- (double)getCanShowHeightWhenFilterViewPush;
- (void)onShowButtonClicked:(id)arg1;
- (void)cleanData;
- (void)onSelectConditionIndex:(long long)arg1;
- (void)onSelectButtonClicked;
- (void)retrieveFilterInfoDataFailedSelector:(id)arg1;
- (void)retrieveFilterInfoDataFinishedSelector:(id)arg1;
- (void)requestFilterInfo;
- (void)filterRequestFailed:(id)arg1;
- (void)filterRequestFinished:(id)arg1;
- (void)requestFilterResulat;
- (void)sendChannelFailed:(id)arg1;
- (void)sendChannelFinished:(id)arg1;
- (void)sendChannelRequest:(long long)arg1;
- (void)albumBlindCellChangeFav:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)startDataLoad;
- (void)viewDidLoad;
- (id)initWithChannelIndex:(long long)arg1 wifiDevice:(id)arg2;
- (void)dealloc;
- (void)safeClean;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

