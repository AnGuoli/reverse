//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface XMAPMNWHost : NSObject
{
    NSString *_host;
    NSMutableDictionary *_service;
}

@property(retain, nonatomic) NSMutableDictionary *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)init;

@end

