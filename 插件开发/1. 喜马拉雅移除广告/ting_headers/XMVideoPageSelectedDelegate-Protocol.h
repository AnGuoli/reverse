//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, XMSoundItem, XMVideoCollectionModel;

@protocol XMVideoPageSelectedDelegate <NSObject>

@optional
- (void)XMVideoPageSelectedLoadNextMoreDataWithModel:(XMVideoCollectionModel *)arg1 refresh:(unsigned long long)arg2;
- (void)XMVideoPageSelectedLoadPreMoreDataWithModel:(XMVideoCollectionModel *)arg1 refresh:(unsigned long long)arg2;
- (void)XMVideoPageSelectedDidSelectItem:(XMSoundItem *)arg1 indexPath:(NSIndexPath *)arg2 model:(XMVideoCollectionModel *)arg3 refresh:(unsigned long long)arg4;
- (void)XMVideoPageSelectedGotoSelecter;
@end

