//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBSTCardPageView;

@protocol WBSTCardPageViewDelegate <NSObject>
- (void)cardPageViewLoadList:(WBSTCardPageView *)arg1 pageNum:(long long)arg2 labelKey:(NSString *)arg3;

@optional
- (NSString *)extraUnifiedParamString:(NSString *)arg1;
@end

