//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol NANOMessageBase <NSObject>
@property(readonly, nonatomic) CDUnknownFunctionPointerType copyMessageInfoFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType deallocMessageFieldFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType initMessageInfoFn;
@property(readonly, nonatomic) CDStruct_e1a27b1c *messageInfo;
@property(readonly, nonatomic) const char *messageID;
- (NSData *)protoBuffer;
- (id)initWithBuffer:(NSData *)arg1;
- (id)initWithMessageInfo:(CDStruct_e1a27b1c *)arg1;
@end

