//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBXAPDeflateUncompressor : NSObject
{
    _Bool _nowrap;
    _Bool _caching;
    unsigned long long _outputBufferSize;
}

@property(nonatomic) unsigned long long outputBufferSize; // @synthesize outputBufferSize=_outputBufferSize;
@property(nonatomic) _Bool caching; // @synthesize caching=_caching;
@property(nonatomic) _Bool nowrap; // @synthesize nowrap=_nowrap;
- (void)uncompress:(id)arg1 Output:(id)arg2;

@end

