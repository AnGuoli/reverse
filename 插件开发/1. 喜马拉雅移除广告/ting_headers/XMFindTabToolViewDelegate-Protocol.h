//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, XMFindTabModel, XMSearchHotWordModel;

@protocol XMFindTabToolViewDelegate <NSObject>
- (void)findTabToolViewDidClickMetadataWithModel:(XMFindTabModel *)arg1 Index:(long long)arg2;
- (void)findTabToolViewDidClickItingWithModel:(XMFindTabModel *)arg1;
- (void)findTabToolViewDidClickMyLiveCenter;
- (void)findTabToolViewDidClickStartLive:(UIButton *)arg1;
- (void)findTabToolViewDidClickHistory;
- (void)findTabToolViewDidClickMic:(XMSearchHotWordModel *)arg1;
- (void)findTabToolViewDidClickAdd:(UIButton *)arg1;
- (void)findTabToolViewDidClickSearch:(XMSearchHotWordModel *)arg1;
@end

