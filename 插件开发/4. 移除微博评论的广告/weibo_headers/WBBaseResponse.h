//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDataTransferObject.h"

@class NSDictionary, NSString;

@interface WBBaseResponse : WBDataTransferObject
{
    NSString *requestID;
    NSString *responseID;
    long long statusCode;
    NSDictionary *requestUserInfo;
}

+ (id)mappedObjectWithDictionary:(id)arg1;
+ (id)response;
+ (id)transferType;
+ (void)nothing;
@property(nonatomic) long long statusCode; // @synthesize statusCode;
@property(retain, nonatomic) NSString *responseID; // @synthesize responseID;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID;
- (void).cxx_destruct;
- (void)removeFromPasteboard;
- (void)setRequestUserInfo:(id)arg1;
@property(readonly, nonatomic) __weak NSDictionary *requestUserInfo; // @synthesize requestUserInfo;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validateAfterReceive;
- (id)validateBeforeSend;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)init;

@end

