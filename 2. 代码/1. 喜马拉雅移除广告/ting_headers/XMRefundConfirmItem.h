//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMRefundConfirmItem : NSObject
{
    _Bool _isPlaceholder;
    _Bool _refundable;
    NSString *_merchantOrderNo;
    NSString *_refundContext;
    NSArray *_refundRules;
    NSString *_redirectUrl;
}

+ (id)refundConfirmItemFromDic:(id)arg1;
+ (id)placeholderItem;
+ (id)testItem;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSArray *refundRules; // @synthesize refundRules=_refundRules;
@property(copy, nonatomic) NSString *refundContext; // @synthesize refundContext=_refundContext;
@property(copy, nonatomic) NSString *merchantOrderNo; // @synthesize merchantOrderNo=_merchantOrderNo;
@property(nonatomic) _Bool refundable; // @synthesize refundable=_refundable;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
- (void).cxx_destruct;

@end

