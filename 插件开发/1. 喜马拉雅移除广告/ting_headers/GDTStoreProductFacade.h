//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class GDTAppStoreExitState, GDTCommandInvoker, GDTStoreIdleState, GDTStoreProductController, GDTStoreReadyState, GDTStoreShownState, GDTStoreStateMachine, NSString;

@interface GDTStoreProductFacade : NSObject <SKStoreProductViewControllerDelegate>
{
    GDTStoreProductController *_sharedProductController;
    GDTStoreStateMachine *_stateMachine;
    GDTStoreIdleState *_idleState;
    GDTStoreReadyState *_readyState;
    GDTStoreShownState *_shownState;
    GDTAppStoreExitState *_exitState;
    GDTCommandInvoker *_commandInvoker;
}

+ (void)forceExitAppstoreIfNeeded;
+ (id)storeProductViewController:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
+ (void)preLoadStoreProductViewControllerItunesId:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
+ (void)presentStoreWithItunesId:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3 viewController:(id)arg4 delegate:(id)arg5;
+ (id)sharedInstance;
@property(retain, nonatomic) GDTCommandInvoker *commandInvoker; // @synthesize commandInvoker=_commandInvoker;
@property(retain, nonatomic) GDTAppStoreExitState *exitState; // @synthesize exitState=_exitState;
@property(retain, nonatomic) GDTStoreShownState *shownState; // @synthesize shownState=_shownState;
@property(retain, nonatomic) GDTStoreReadyState *readyState; // @synthesize readyState=_readyState;
@property(retain, nonatomic) GDTStoreIdleState *idleState; // @synthesize idleState=_idleState;
@property(retain, nonatomic) GDTStoreStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) GDTStoreProductController *sharedProductController; // @synthesize sharedProductController=_sharedProductController;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

