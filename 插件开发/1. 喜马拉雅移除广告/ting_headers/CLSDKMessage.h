//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CL_SDK_MessageHeader, NSData;

@interface CLSDKMessage : NSObject
{
    CL_SDK_MessageHeader *_header;
    NSData *_bodydata;
}

@property(retain, nonatomic) NSData *bodydata; // @synthesize bodydata=_bodydata;
@property(retain, nonatomic) CL_SDK_MessageHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWith:(id)arg1 andBody:(id)arg2;
- (id)toNSData;

@end

