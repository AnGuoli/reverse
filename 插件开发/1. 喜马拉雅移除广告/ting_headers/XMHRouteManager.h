//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol XMHybridDeleagete;

@interface XMHRouteManager : NSObject
{
    NSArray *_routes;
    id <XMHybridDeleagete> _delegate;
}

+ (id)defaultInstance;
@property(nonatomic) __weak id <XMHybridDeleagete> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void).cxx_destruct;
- (id)routeForURI:(id)arg1;
- (unsigned long long)htmlURLTypeForURL:(id)arg1;
- (id)routesWithData:(id)arg1;
- (id)routesMapFile;
- (id)init;

@end

