//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBActionHandlerProtocol-Protocol.h"

@class WBActionContext;

@interface WBActionHandler : NSObject <WBActionHandlerProtocol>
{
    WBActionContext *_context;
}

+ (id)shareInstance;
+ (void)actionWithEvent:(id)arg1;
@property(retain, nonatomic) WBActionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)actionWithEvent:(id)arg1;

@end

