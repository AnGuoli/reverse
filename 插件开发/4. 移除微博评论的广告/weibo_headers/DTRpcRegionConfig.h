//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DTRpcRegionConfig : NSObject
{
    NSURL *_ipayGwUrl;
    NSString *_appkey;
    NSString *_appID;
    NSString *_workspaceID;
}

@property(retain, nonatomic) NSString *workspaceID; // @synthesize workspaceID=_workspaceID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSURL *ipayGwUrl; // @synthesize ipayGwUrl=_ipayGwUrl;
- (void).cxx_destruct;
- (id)description;

@end

