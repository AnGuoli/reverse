//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMLivePageFragment;

@protocol XMFragmentContainer <NSObject>

@optional
- (void)notifyRefreshFragmentWithType:(unsigned long long)arg1 extraType:(long long)arg2;
- (void)dynamicUpdateFragment:(XMLivePageFragment *)arg1 size:(struct CGSize)arg2 block:(void (^)(void))arg3;
@end

