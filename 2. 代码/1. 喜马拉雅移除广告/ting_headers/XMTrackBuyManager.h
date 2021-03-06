//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTrackBuyViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIWindow;

@interface XMTrackBuyManager : NSObject <XMTrackBuyViewDelegate>
{
    NSMutableDictionary *_handleControllerDict;
    UIWindow *_currentShowWindow;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) UIWindow *currentShowWindow; // @synthesize currentShowWindow=_currentShowWindow;
@property(retain, nonatomic) NSMutableDictionary *handleControllerDict; // @synthesize handleControllerDict=_handleControllerDict;
- (void).cxx_destruct;
- (id)trackBuyDeviceWarningViewController;
- (id)needCommentAfterListenWithAlbum:(id)arg1;
- (id)needBuyBeforeCommentWithAlbum:(id)arg1;
- (id)auditionFinishedWithAlbum:(id)arg1;
- (void)trackBuyRechargeAndDismiss:(id)arg1;
- (void)trackBuyMoreAndDismiss:(id)arg1;
- (void)dismissCurrentTrackBuy:(id)arg1;
- (void)updateCurrentShowWindow:(id)arg1;
- (void)removeHandleController:(id)arg1;
- (void)buyTracks:(id)arg1 withController:(id)arg2;
- (void)buyTracksDerectly:(id)arg1;
- (void)buyTracks:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

