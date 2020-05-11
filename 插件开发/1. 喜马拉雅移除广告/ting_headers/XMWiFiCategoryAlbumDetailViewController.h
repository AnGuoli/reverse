//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "GDTNativeAdDelegate-Protocol.h"
#import "XMFindCardCellDelegate-Protocol.h"
#import "XMSectionViewDelegate-Protocol.h"
#import "XMWiFiAlbumBlindCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PPMediaDevice, XMAdItem, XMCategoryItem, XMKeywordItem, XMServerRequest;

@interface XMWiFiCategoryAlbumDetailViewController : XMSubLevelViewController <XMSectionViewDelegate, XMFindCardCellDelegate, GDTNativeAdDelegate, XMWiFiAlbumBlindCellDelegate>
{
    long long _pageId;
    long long _maxPageId;
    XMServerRequest *_adRequest;
    _Bool _batchUpdate;
    int _needUpdate;
    NSString *_sectionTitle;
    long long _bookFilerStatus;
    NSString *_calcDimension;
    XMCategoryItem *_categoryItem;
    XMKeywordItem *_keywordItem;
    NSMutableArray *_dataArray;
    NSMutableArray *_dataSections;
    XMServerRequest *_loadRequest;
    XMServerRequest *_subfieldsRequest;
    NSMutableArray *_mixDatas;
    NSArray *_ads;
    XMAdItem *_currentAdItem;
    NSArray *_gdtFeedAdDataArray;
    PPMediaDevice *_setDevice;
    long long _channelIndex;
}

@property(nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(retain, nonatomic) PPMediaDevice *setDevice; // @synthesize setDevice=_setDevice;
@property(retain, nonatomic) NSArray *gdtFeedAdDataArray; // @synthesize gdtFeedAdDataArray=_gdtFeedAdDataArray;
@property(retain, nonatomic) XMAdItem *currentAdItem; // @synthesize currentAdItem=_currentAdItem;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSMutableArray *mixDatas; // @synthesize mixDatas=_mixDatas;
@property(retain, nonatomic) XMServerRequest *subfieldsRequest; // @synthesize subfieldsRequest=_subfieldsRequest;
@property(retain, nonatomic) XMServerRequest *loadRequest; // @synthesize loadRequest=_loadRequest;
@property(retain, nonatomic) NSMutableArray *dataSections; // @synthesize dataSections=_dataSections;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) XMKeywordItem *keywordItem; // @synthesize keywordItem=_keywordItem;
@property(retain, nonatomic) XMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(copy, nonatomic) NSString *calcDimension; // @synthesize calcDimension=_calcDimension;
@property(nonatomic) long long bookFilerStatus; // @synthesize bookFilerStatus=_bookFilerStatus;
- (void).cxx_destruct;
- (void)nativeAdSuccessToLoad:(id)arg1;
- (void)nativeAdFailToLoad:(id)arg1;
- (void)openUrlView:(id)arg1;
- (void)sectionViewClickMore:(id)arg1;
- (void)findCardCell:(id)arg1 didClickCard:(id)arg2;
- (void)sendChannelFailed:(id)arg1;
- (void)sendChannelFinished:(id)arg1;
- (void)sendChannelRequest:(long long)arg1;
- (void)albumBlindCellChangeFav:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearData;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)reloadData;
- (void)requestFromIndex:(long long)arg1;
- (void)onRequestFailedSelector:(id)arg1;
- (void)requestDataFinish;
- (void)onRequestFinishedSelector:(id)arg1;
- (void)reloadMixData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)reportAdDidShow;
- (void)requestFeedAdData;
- (void)requestMadHouseData;
- (void)requestThirdPartyFeedAd;
- (void)startDataLoad;
- (void)viewDidLoad;
- (id)initWithCategoryItem:(id)arg1 keywordItem:(id)arg2 calcDimension:(id)arg3 bookFilerStatus:(long long)arg4 channelIndex:(long long)arg5 wifiDevice:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

