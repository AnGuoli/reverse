//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMDubShowPlayingView;

@protocol XMDubShowPlayingViewDelegate <NSObject>

@optional
- (void)dubShowPlayingView:(XMDubShowPlayingView *)arg1 moveToNext:(_Bool)arg2;
- (void)dubShowPlayingView:(XMDubShowPlayingView *)arg1 panState:(long long)arg2 moveTo:(struct CGPoint)arg3;
@end

