//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, NSDate, NSString;

@interface XMIMMessage : NSObject
{
    GPBMessage *_pbMsg;
    NSString *_uniqueKey;
    NSDate *_sendDate;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) GPBMessage *pbMsg; // @synthesize pbMsg=_pbMsg;
- (void).cxx_destruct;
- (id)initWithPBMessage:(id)arg1 uniqueKey:(id)arg2;

@end

