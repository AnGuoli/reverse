//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, ZegoMixStreamResultEx;

@protocol ZegoMixStreamExDelegate <NSObject>

@optional
- (void)onMixStreamExConfigUpdate:(int)arg1 mixStream:(NSString *)arg2 streamInfo:(ZegoMixStreamResultEx *)arg3;
@end

