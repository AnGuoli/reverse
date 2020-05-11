//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface YXTokenCodeGenerator : NSObject
{
    NSString *_algorithm;
    NSData *_secret;
    unsigned long long _digits;
}

+ (unsigned long long)defaultDigits;
+ (id)defaultAlgorithm;
@property(readonly, nonatomic) unsigned long long digits; // @synthesize digits=_digits;
@property(copy, nonatomic) NSData *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
- (void).cxx_destruct;
- (id)generateOTPForCounter:(unsigned long long)arg1;
- (id)generateOTP;
- (void)dealloc;
- (id)initWithSecret:(id)arg1 algorithm:(id)arg2 digits:(unsigned long long)arg3;

@end

