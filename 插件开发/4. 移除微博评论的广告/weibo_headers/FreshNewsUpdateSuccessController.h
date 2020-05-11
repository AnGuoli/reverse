//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FreshNewsEditBaseViewController.h"

#import "WBFreshNewsUpdateTableViewCellProtocol-Protocol.h"

@class FreshNewsUpdateSuccessHeadView, NSDictionary, NSString, UIView, WBFreshNewsPushData, WBStyleButton;

@interface FreshNewsUpdateSuccessController : FreshNewsEditBaseViewController <WBFreshNewsUpdateTableViewCellProtocol>
{
    FreshNewsUpdateSuccessHeadView *_headView;
    UIView *_footView;
    NSDictionary *_pushDict;
    WBFreshNewsPushData *_pushData;
    WBStyleButton *_cancelBtn;
    WBStyleButton *_okBtn;
}

@property(retain, nonatomic) WBStyleButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) WBStyleButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) WBFreshNewsPushData *pushData; // @synthesize pushData=_pushData;
@property(retain, nonatomic) NSDictionary *pushDict; // @synthesize pushDict=_pushDict;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) FreshNewsUpdateSuccessHeadView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)layoutFootView:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleActionWithCell:(id)arg1 withButton:(id)arg2 path:(id)arg3;
- (void)savePushStatus:(id)arg1 withButton:(id)arg2 path:(id)arg3;
- (void)getPushStatus;
- (void)okBtnClick;
- (void)cancelBtnClick;
- (void)dismissPresent;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

