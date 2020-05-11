//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VIModule-Protocol.h"

@class NSDictionary, NSNumber, NSString, UIViewController;
@protocol VIModuleDelegate;

@interface VIModule : NSObject <VIModule>
{
    _Bool _useBird;
    NSString *_moduleName;
    NSString *_data;
    id <VIModuleDelegate> _eventHandler;
    NSString *_verifyCode;
    NSString *_verifyMsg;
    NSDictionary *_preModuleData;
    UIViewController *_rootViewController;
    NSNumber *_isFirstModule;
    CDUnknownBlockType _callback;
    unsigned long long _runMode;
}

+ (id)keyMapper;
@property(nonatomic) unsigned long long runMode; // @synthesize runMode=_runMode;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSNumber *isFirstModule; // @synthesize isFirstModule=_isFirstModule;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *preModuleData; // @synthesize preModuleData=_preModuleData;
@property(retain, nonatomic) NSString *verifyMsg; // @synthesize verifyMsg=_verifyMsg;
@property(retain, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(nonatomic) __weak id <VIModuleDelegate> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) _Bool useBird; // @synthesize useBird=_useBird;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specificVerifyType;
- (void)invalidate;
- (_Bool)isReleaseEnv;
- (void)callbackOnMainThreadWithResponse:(id)arg1 animated:(_Bool)arg2;
- (void)callbackWithResponse:(id)arg1;
- (void)callbackWithResponse:(id)arg1 animated:(_Bool)arg2;
- (void)cancelWithSubCode:(id)arg1 animated:(_Bool)arg2;
- (void)cancelAnimated:(_Bool)arg1;
- (void)failAnimated:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)show;
- (void)onLogout;
- (void)start;
- (_Bool)isParamsValid;
- (_Bool)isLiving;
- (_Bool)buildModuleWithString:(id)arg1;
- (id)initWithString:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

