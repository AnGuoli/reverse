//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBMLVideoRechargeOrderRequest;

@interface WBMLVideoRechargeObject : NSObject
{
    CDUnknownBlockType _completionBlock;
    WBMLVideoRechargeOrderRequest *_request;
}

@property(retain, nonatomic) WBMLVideoRechargeOrderRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)iapHandleFailedWithSenderUnit:(id)arg1;
- (void)iapHandleFinishedWithSenderUnit:(id)arg1;
- (id)schemeAppendStringWithOrderDic:(id)arg1;
- (void)gotoPayWithOrderDic:(id)arg1;
- (void)requestForRechargeOrderWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1;

@end

