//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "XMSegmentTabViewCtrolDelegate-Protocol.h"

@class CAGradientLayer, CALayer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView, XMSegmentControl, XMSegmentTabViewController, XMTouTiaoTingTabsModel;

@interface XMTouTiaoTingTabViewController : XMBaseViewController <XMSegmentTabViewCtrolDelegate>
{
    _Bool _needLocation;
    XMSegmentTabViewController *_tabController;
    XMSegmentControl *_segmentControl;
    NSMutableDictionary *_viewControllersDict;
    NSMutableArray *_tabs;
    XMTouTiaoTingTabsModel *_tabsModel;
    NSString *_tabId;
    long long _trackId;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIView *_navView;
    UIView *_headBackgroundView;
    CAGradientLayer *_gradientLayer;
    CALayer *_whiteMaskLayer;
    double _factor;
}

@property(nonatomic) double factor; // @synthesize factor=_factor;
@property(retain, nonatomic) CALayer *whiteMaskLayer; // @synthesize whiteMaskLayer=_whiteMaskLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *headBackgroundView; // @synthesize headBackgroundView=_headBackgroundView;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool needLocation; // @synthesize needLocation=_needLocation;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) XMTouTiaoTingTabsModel *tabsModel; // @synthesize tabsModel=_tabsModel;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSMutableDictionary *viewControllersDict; // @synthesize viewControllersDict=_viewControllersDict;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) XMSegmentTabViewController *tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (id)tabColors;
- (void)requestTabs;
- (void)observePageScorllProgress;
- (void)segmentedControlChangedValueToIndex:(unsigned long long)arg1;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (void)initSegmentTabViewController;
- (void)triggerPullToRefresh;
- (void)changeMaskLayerColor:(double)arg1;
- (void)viewDidLoad;
- (id)initWithTabId:(id)arg1 autoPlayTrackId:(long long)arg2 needLocation:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

