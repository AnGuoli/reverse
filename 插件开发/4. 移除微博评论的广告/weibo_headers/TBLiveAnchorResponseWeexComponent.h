//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBLiveColleagueProtocol-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveAnchorResponseView, UIView, WXSDKInstance;

@interface TBLiveAnchorResponseWeexComponent : WXComponent <WXModuleProtocol, TBLiveColleagueProtocol>
{
    UIView *_containerView;
    TBLiveAnchorResponseView *_anchorResponseView;
}

+ (id)identifier;
@property(retain, nonatomic) TBLiveAnchorResponseView *anchorResponseView; // @synthesize anchorResponseView=_anchorResponseView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setupAnchorResponseView;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

