//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class NSString;

@interface WXResourceRequest : NSMutableURLRequest
{
    id _taskIdentifier;
    unsigned long long _type;
}

+ (id)requestWithURL:(id)arg1 resourceType:(unsigned long long)arg2 referrer:(id)arg3 cachePolicy:(unsigned long long)arg4;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userAgent;
@property(retain, nonatomic) NSString *referrer;
- (id)initWithURL:(id)arg1 resourceType:(unsigned long long)arg2 referrer:(id)arg3 cachePolicy:(unsigned long long)arg4;

@end

