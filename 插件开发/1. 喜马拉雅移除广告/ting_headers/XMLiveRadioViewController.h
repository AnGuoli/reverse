//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMAdFeaturesProtocol-Protocol.h"
#import "XMLiveCategoryDynamicViewDelegate-Protocol.h"
#import "XMLiveCategoryViewDelegate-Protocol.h"
#import "XMLiveRadioCardDelegate-Protocol.h"
#import "XMLiveRadioCellDelegate-Protocol.h"
#import "XMLiveRadioHistoryCellDelegate-Protocol.h"
#import "XMLiveRankSectionViewDelegate-Protocol.h"
#import "XMScrollImageViewDelegate-Protocol.h"
#import "XMSectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIView, XMLiveCategoryDynamicView, XMLiveCategoryView, XMServerRequest, XMTableViewCell;

@interface XMLiveRadioViewController : XMSubLevelViewController <XMLiveCategoryViewDelegate, XMLiveRankSectionViewDelegate, XMLiveRadioCellDelegate, XMLiveRadioHistoryCellDelegate, XMSectionViewDelegate, XMLiveCategoryDynamicViewDelegate, XMAdFeaturesProtocol, XMScrollImageViewDelegate, XMLiveRadioCardDelegate>
{
    _Bool _showPlaceHolding;
    UIView *_headerView;
    UIView *_adView;
    XMLiveCategoryView *_categoryView;
    XMLiveCategoryDynamicView *_dynamicView;
    XMServerRequest *_liveRadioRequest;
    XMTableViewCell *_currRadioCell;
    NSString *_cityName;
    NSString *_citySectionName;
    NSArray *_categoryArray;
    NSArray *_cityRadioArray;
    XMServerRequest *_cityRadioRequest;
    NSArray *_topRadioArray;
    NSMutableArray *_cityRadioAndAdModels;
    NSArray *_radioHistoryArray;
}

@property(retain, nonatomic) NSArray *radioHistoryArray; // @synthesize radioHistoryArray=_radioHistoryArray;
@property(retain, nonatomic) NSMutableArray *cityRadioAndAdModels; // @synthesize cityRadioAndAdModels=_cityRadioAndAdModels;
@property(retain, nonatomic) NSArray *topRadioArray; // @synthesize topRadioArray=_topRadioArray;
@property(retain, nonatomic) XMServerRequest *cityRadioRequest; // @synthesize cityRadioRequest=_cityRadioRequest;
@property(retain, nonatomic) NSArray *cityRadioArray; // @synthesize cityRadioArray=_cityRadioArray;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(copy, nonatomic) NSString *citySectionName; // @synthesize citySectionName=_citySectionName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) XMTableViewCell *currRadioCell; // @synthesize currRadioCell=_currRadioCell;
@property(retain, nonatomic) XMServerRequest *liveRadioRequest; // @synthesize liveRadioRequest=_liveRadioRequest;
@property(retain, nonatomic) XMLiveCategoryDynamicView *dynamicView; // @synthesize dynamicView=_dynamicView;
@property(retain, nonatomic) XMLiveCategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)scrollImageView:(id)arg1 clickFocusItem:(id)arg2 atIndex:(long long)arg3;
- (void)onDynamicOpenStatusChange:(id)arg1 byUserAction:(_Bool)arg2;
- (void)onCategoryClickedWithDict:(id)arg1;
- (void)onReceivedError:(id)arg1;
- (void)onReceiveChange:(id)arg1;
- (void)safeReloadData;
- (void)p_clickMoreWithTitle:(id)arg1;
- (void)p_gotoCityRadio;
- (void)p_gotoRankList;
- (void)p_gotoHistoryList;
- (void)liveRadioCardCell:(id)arg1 playButtonPressedWithRadioItem:(id)arg2;
- (void)liveRadioCardClickMore:(id)arg1;
- (void)liveRadioCardClickItem:(id)arg1 withItem:(id)arg2;
- (void)liveRadioHistoryCell:(id)arg1 playButtonPressedWithRadioItem:(id)arg2;
- (void)sectionViewClickMore:(id)arg1;
- (void)liveRadioCell:(id)arg1 playButtonPressedWithRadioItem:(id)arg2;
- (void)liveCategoryView:(id)arg1 urlStr:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)timePeriodName;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLiveRequestFail:(id)arg1;
- (void)onLiveRequestFinish:(id)arg1;
- (void)requestLiveRadio;
- (void)parseRadioHomeData:(id)arg1;
- (void)saveRadioDataToFile:(id)arg1;
- (void)loadRadioDataFromLocal;
- (void)triggerPullToRefresh;
- (void)addCategoryView;
- (void)addNotificationObservers;
- (id)adViewWillRequestWithParamsForPositionName:(id)arg1;
- (void)adViewDidUpdateWithAdModels:(id)arg1 andPositionName:(id)arg2;
- (void)adViewWillAddAds;
- (void)showPlaceHolderView;
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

