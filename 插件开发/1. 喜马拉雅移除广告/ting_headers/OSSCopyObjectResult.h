//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSResult.h"

@class NSString;

@interface OSSCopyObjectResult : OSSResult
{
    NSString *_lastModifed;
    NSString *_eTag;
}

@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSString *lastModifed; // @synthesize lastModifed=_lastModifed;
- (void).cxx_destruct;

@end

