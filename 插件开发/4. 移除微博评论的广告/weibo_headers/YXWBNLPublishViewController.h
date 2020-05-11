//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLPublishViewController.h"

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBNLInderWebViewControllerDelegate-Protocol.h"
#import "YXWBNLPublishViewControllerProtocol-Protocol.h"

@class NSObject, NSString, UIButton, WBALAssetPickerContextManager, WBNLPublishLiveView, YXLiveModel, YXZFLivePublishAvailableConfigModel, YXZFLivePublishConfigCurrentSettingModel;
@protocol YXWBNLPublishViewControllerDelegate;

@interface YXWBNLPublishViewController : WBNLPublishViewController <WBNLInderWebViewControllerDelegate, WBALAssetPickerContextManagerDelegate, YXWBNLPublishViewControllerProtocol>
{
    _Bool _isBackCamera;
    NSObject<YXWBNLPublishViewControllerDelegate> *_yx_delegate;
    YXLiveModel *_liveModel;
    WBALAssetPickerContextManager *_manager;
    YXZFLivePublishAvailableConfigModel *_availableConfiguration;
    YXZFLivePublishConfigCurrentSettingModel *_currentSetting;
    long long _live_pay_type;
}

@property(nonatomic) long long live_pay_type; // @synthesize live_pay_type=_live_pay_type;
@property(retain, nonatomic) YXZFLivePublishConfigCurrentSettingModel *currentSetting; // @synthesize currentSetting=_currentSetting;
@property(retain, nonatomic) YXZFLivePublishAvailableConfigModel *availableConfiguration; // @synthesize availableConfiguration=_availableConfiguration;
@property(retain, nonatomic) WBALAssetPickerContextManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) YXLiveModel *liveModel; // @synthesize liveModel=_liveModel;
@property(nonatomic) _Bool isBackCamera; // @synthesize isBackCamera=_isBackCamera;
@property(nonatomic) __weak NSObject<YXWBNLPublishViewControllerDelegate> *yx_delegate; // @synthesize yx_delegate=_yx_delegate;
- (void).cxx_destruct;
- (unsigned long long)textLength:(id)arg1;
@property(readonly, nonatomic) _Bool locationEnabled;
- (void)locationDenied;
- (void)locationServicesEnabledPositionSwitch;
- (void)yxLocationManagerDidUpdateLocation;
- (void)updateCityAddressWithLocation:(id)arg1;
- (void)authorizationStatusUpdated:(id)arg1;
- (void)observeNotifications;
- (_Bool)isAuthedForPayLive:(id)arg1;
- (void)presentPayLiveConfigView;
- (void)cancelPayLiveConfiguration;
- (id)getSummaryTextFromCurrentConfiguration;
- (void)publishLiveViewShouldBePoppedUp:(_Bool)arg1;
- (void)confirmPayLiveConfiguration;
- (long long)getLivePayType;
- (long long)getPayLiveVipType;
- (long long)getPayLivePreviewTime;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImage:(id)arg2;
- (void)storeChargeStatus:(_Bool)arg1;
- (void)pushLiveStartView;
- (void)requestPermissionIfNeed;
- (void)updateButtonsStatus;
- (id)shareContentWithType:(long long)arg1;
- (id)coverImage:(id)arg1;
- (void)shareToThrid;
- (void)cancelCertify;
- (void)animalFromViewControlle:(id)arg1 toViewControlle:(id)arg2;
- (void)publishLiveClick:(id)arg1 event:(unsigned long long)arg2;
- (void)publishTopOperationView:(id)arg1 event:(unsigned long long)arg2;
- (void)tapCloseBtn;
- (void)startRequestPublishNeedInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshPublishModeTitle;
- (void)liveControllerDidLoginSuccess;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIButton *closeBtn;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLiveCreated;
@property(retain, nonatomic) WBNLPublishLiveView *publishLiveView;
@property(nonatomic) _Bool showFromShareToThird;
@property(readonly) Class superclass;

@end

