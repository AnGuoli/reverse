//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

@class NSString;

@interface WBOpenUrlVideoCardlistContext : WBOpenUrlContextBase
{
    NSString *_containerID;
}

@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (int)contextType;
- (void)startContext;
- (void)parseUrlAndRefreshValues:(id)arg1;

@end

