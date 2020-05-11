//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WBJSAuthorization : NSObject
{
    NSString *_appKey;
    NSString *_url;
    NSString *_siganature;
    NSString *_nonce;
    double _timestamp;
    NSArray *_scope;
}

@property(retain, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *siganature; // @synthesize siganature=_siganature;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 configParameters:(id)arg2;
- (id)authenticationParametersWithExtraScope:(id)arg1;
@property(readonly, nonatomic) NSDictionary *authenticationParameters;

@end

