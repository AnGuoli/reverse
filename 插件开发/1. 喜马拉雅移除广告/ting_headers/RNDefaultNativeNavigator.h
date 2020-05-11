//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RNNavigatorProtocol-Protocol.h"

@class NSMutableDictionary, NSString, UINavigationController;

@interface RNDefaultNativeNavigator : NSObject <RNNavigatorProtocol>
{
    UINavigationController *_navigationController;
    NSMutableDictionary *_viewControllerClassInfos;
}

- (void).cxx_destruct;
- (void)assignParams:(id)arg1 toViewController:(id)arg2 classInfo:(id)arg3;
- (void)goBack:(id)arg1 params:(id)arg2;
- (id)navigate:(id)arg1 from:(id)arg2 fallbackHandler:(CDUnknownBlockType)arg3;
- (void)registerHost:(id)arg1 forViewController:(id)arg2;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

