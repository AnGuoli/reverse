//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCGroupUndoneItemCell;

@protocol WCGroupUndoneItemCellDelegate <NSObject>
- (void)onRevokeUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onCompleteUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onClickUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onCloseUndoneCell:(WCGroupUndoneItemCell *)arg1;
@end

