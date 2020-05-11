//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NodeFetcher.h"

@class NSString, NodeParseFetcher;

@interface NodeLoadLocalFetcher : NodeFetcher
{
    _Bool _loadFromCache;
    NSString *_cacheDir;
    NodeParseFetcher *_parseFetcher;
}

@property(retain, nonatomic) NodeParseFetcher *parseFetcher; // @synthesize parseFetcher=_parseFetcher;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetcherEntryWithCompleteBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)initWithCacheDir:(id)arg1 andVersion:(long long)arg2 loadFromCache:(_Bool)arg3;

@end

