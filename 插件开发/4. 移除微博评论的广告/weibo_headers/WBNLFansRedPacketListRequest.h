//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLFansRedPacketListRequest : WBNLURLRequest
{
    NSString *_live_id;
    NSString *_uid;
    long long _next_id;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long next_id; // @synthesize next_id=_next_id;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

