//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TBLiveOverlayActionDelegate <NSObject>

@optional
- (void)didFailRecordScreen;
- (void)didStartRecordScreen;
- (void)didRecordScreenWithPath:(NSString *)arg1;
- (void)preViewShowErrorView:(_Bool)arg1 errCode:(id)arg2;
- (void)adjustRewardMgrViewY:(_Bool)arg1;
- (void)notifyGoodsVideoStatus:(long long)arg1;
- (void)notifyGoodsListViewStatus:(long long)arg1;
- (void)onClickGiftButton;
- (void)onClickShareButton;
@end

