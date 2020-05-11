//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MongooseHTTPResponse : NSObject
{
    NSString *_code;
    NSString *_status;
    NSDictionary *_headers;
    NSData *_content;
}

+ (id)responseWithCode:(id)arg1 withStatus:(id)arg2 withHeaders:(id)arg3 withContent:(id)arg4;
@property(retain) NSData *content; // @synthesize content=_content;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain) NSString *status; // @synthesize status=_status;
@property(retain) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)init;

@end

