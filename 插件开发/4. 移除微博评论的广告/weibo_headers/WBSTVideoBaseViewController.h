//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class UIView;

@interface WBSTVideoBaseViewController : WBViewController
{
    UIView *_netWorkErrorTipView;
    long long _errorState;
    UIView *_StationBitmpView;
}

@property(retain, nonatomic) UIView *StationBitmpView; // @synthesize StationBitmpView=_StationBitmpView;
@property(nonatomic) long long errorState; // @synthesize errorState=_errorState;
@property(retain, nonatomic) UIView *netWorkErrorTipView; // @synthesize netWorkErrorTipView=_netWorkErrorTipView;
- (void).cxx_destruct;
- (void)hiddenStationBitmpView;
- (id)showStationBitmpView:(id)arg1;
- (void)hiddenRequestLoadingView;
- (void)showRequestLoadingView;
- (void)closeVC;
- (void)retryRequest;
- (void)hiddenNetWorkUnavailableView;
- (void)showNetWorkUnavailableView:(long long)arg1;
- (void)viewDidLoad;

@end

