//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBGroupManagementCell;

@protocol WBGroupManagementCellDelegate <NSObject>
- (void)groupManagementCell:(WBGroupManagementCell *)arg1 success:(_Bool)arg2 showNotice:(NSString *)arg3;
- (void)groupManagementCell:(WBGroupManagementCell *)arg1 switchValueChanged:(_Bool)arg2 completion:(void (^)(_Bool, long long, int))arg3;
@end

