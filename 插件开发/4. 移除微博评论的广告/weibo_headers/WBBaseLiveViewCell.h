//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WBLiveViewCellProtocol-Protocol.h"

@class NSDictionary, NSString, UIViewController, WBLiveRoomBackgroundImageView;
@protocol WBLiveCallbackProtocol, WBLiveListContainerProtocol, WBLiveRoomModelProtocol, WBLiveRoomProtocol;

@interface WBBaseLiveViewCell : UICollectionViewCell <WBLiveViewCellProtocol>
{
    _Bool _isSchemeLink;
    id <WBLiveRoomModelProtocol> liveModel;
    id <WBLiveCallbackProtocol> callBackDelegate;
    UIViewController *listViewController;
    id <WBLiveRoomProtocol> _liveRoomController;
    id <WBLiveListContainerProtocol> _containerDecisionMaker;
    NSString *_schemeLink;
    NSDictionary *_schemeParams;
    long long _liveStatus;
    WBLiveRoomBackgroundImageView *_coverView;
}

@property(retain, nonatomic) WBLiveRoomBackgroundImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams=_schemeParams;
@property(copy, nonatomic) NSString *schemeLink; // @synthesize schemeLink=_schemeLink;
@property(nonatomic) _Bool isSchemeLink; // @synthesize isSchemeLink=_isSchemeLink;
@property(nonatomic) __weak id <WBLiveListContainerProtocol> containerDecisionMaker; // @synthesize containerDecisionMaker=_containerDecisionMaker;
@property(retain, nonatomic) id <WBLiveRoomProtocol> liveRoomController; // @synthesize liveRoomController=_liveRoomController;
@property(nonatomic) __weak UIViewController *listViewController; // @synthesize listViewController;
@property(nonatomic) __weak id <WBLiveCallbackProtocol> callBackDelegate; // @synthesize callBackDelegate;
@property(retain, nonatomic) id <WBLiveRoomModelProtocol> liveModel; // @synthesize liveModel;
- (void).cxx_destruct;
- (void)loadCoverImage;
- (void)resetCoverImageHidden:(_Bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)containerDidClose;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)pageDidDisappear;
- (void)pageDidAppear;
- (void)resetModel:(id)arg1;
- (void)configureWithModel:(id)arg1 inAppParas:(id)arg2 delegate:(id)arg3 viewController:(id)arg4;
- (void)configureWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2 delegate:(id)arg3 viewController:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

