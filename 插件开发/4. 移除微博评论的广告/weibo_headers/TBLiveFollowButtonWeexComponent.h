//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXModuleProtocol-Protocol.h"

@class NSString, UIImageView, UIView, WXSDKInstance;

@interface TBLiveFollowButtonWeexComponent : WXComponent <WXModuleProtocol>
{
    NSString *_bgColor;
    UIView *_containView;
    UIView *_followView;
    UIImageView *_followHintView;
}

@property(retain, nonatomic) UIImageView *followHintView; // @synthesize followHintView=_followHintView;
@property(retain, nonatomic) UIView *followView; // @synthesize followView=_followView;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (void)hiddenFollowHintView;
- (void)addFollowHintView;
- (void)followStatusChanged:(_Bool)arg1;
- (void)followStatusNotification:(id)arg1;
- (void)setupNotification;
- (void)configColorsToParams:(id)arg1 withLiveDetail:(id)arg2;
- (void)setupFollowModule;
- (void)dealloc;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

