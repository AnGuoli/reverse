//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLContext.h"

@class NSString, WBStatus;

@interface WBForwardContext : WBFCLContext
{
    WBStatus *status;
    NSString *contentText;
}

@property(retain, nonatomic) NSString *contentText; // @synthesize contentText;
@property(retain, nonatomic) WBStatus *status; // @synthesize status;
- (void).cxx_destruct;
- (void)start:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

