//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBLiveBubbleIconViewDelegate-Protocol.h"
#import "TBLiveColleagueProtocol-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveBubbleIconView, WXSDKInstance;

@interface TBLiveBubbleIconWeexView : WXComponent <TBLiveBubbleIconViewDelegate, TBLiveColleagueProtocol, WXModuleProtocol>
{
    long long _likeTotalCount;
    TBLiveBubbleIconView *_bubbleIconView;
}

+ (id)identifier;
+ (id)wx_export_method_75;
+ (id)wx_export_method_69;
@property(retain, nonatomic) TBLiveBubbleIconView *bubbleIconView; // @synthesize bubbleIconView=_bubbleIconView;
@property(nonatomic) long long likeTotalCount; // @synthesize likeTotalCount=_likeTotalCount;
- (void).cxx_destruct;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleUpdateTotalCount:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)updateIconWithImageURL:(id)arg1;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

