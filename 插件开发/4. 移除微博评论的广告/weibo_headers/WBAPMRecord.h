//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBAPMRecord : NSObject
{
    _Bool _isFinished;
    int _flickDuration;
    unsigned long long _type;
    NSString *_pageID;
}

@property(nonatomic) int flickDuration; // @synthesize flickDuration=_flickDuration;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1;

@end

