//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "XMBasicRecordViewControllerDelegate-Protocol.h"
#import "XMDubShowMSCartoonViewControllerDelegate-Protocol.h"
#import "XMDubShowMaterialSquareViewControllerDelegate-Protocol.h"
#import "XMSegmentTabViewCtrolDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIView, XMSegmentControl, XMSegmentTabViewController;

@interface XMRecordContainerViewController : XMBaseViewController <XMSegmentTabViewCtrolDelegate, XMBasicRecordViewControllerDelegate, XMDubShowMaterialSquareViewControllerDelegate, XMDubShowMSCartoonViewControllerDelegate>
{
    _Bool _showSelectCommunity;
    _Bool _recordingDidBegan;
    long long _defaultTabId;
    NSString *_srcInfoStr;
    unsigned long long _topicId;
    NSString *_topicTitle;
    XMSegmentTabViewController *_tabController;
    XMSegmentControl *_segmentControl;
    NSArray *_tabTitles;
    NSArray *_tabModels;
    NSMutableDictionary *_viewControllers;
    UIView *_lineView;
    UIButton *_backBtn;
    long long _previousIndex;
}

@property(nonatomic) _Bool recordingDidBegan; // @synthesize recordingDidBegan=_recordingDidBegan;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) NSArray *tabModels; // @synthesize tabModels=_tabModels;
@property(retain, nonatomic) NSArray *tabTitles; // @synthesize tabTitles=_tabTitles;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) XMSegmentTabViewController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) _Bool showSelectCommunity; // @synthesize showSelectCommunity=_showSelectCommunity;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *srcInfoStr; // @synthesize srcInfoStr=_srcInfoStr;
@property(nonatomic) long long defaultTabId; // @synthesize defaultTabId=_defaultTabId;
- (void).cxx_destruct;
- (void)trackEventSwitchToVC:(long long)arg1 withType:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)XMDubShowMSCartoonViewControllerNotifyBack;
- (void)XMDubShowMaterialSquareViewControllerNotifyBack;
- (void)XMBasicRecordViewControllerNotifyBack;
- (void)XMBasicRecordViewControllerNotifyEditing:(_Bool)arg1;
- (void)XMBasicRecordViewControllerNotifyRecording:(_Bool)arg1;
- (void)segmentedControlChangedValueToIndex:(unsigned long long)arg1;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (void)segmentCtrolItem:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (void)backBtnClicked;
- (void)addKeyboarNotificaitons;
- (void)setupSegmentTabViewController;
- (void)setDefaultTabModels;
- (void)getConfigTabs;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

