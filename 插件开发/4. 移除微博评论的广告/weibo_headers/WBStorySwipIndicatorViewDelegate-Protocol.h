//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UIView;
@protocol WBStorySwipIndicatorViewProtocol;

@protocol WBStorySwipIndicatorViewDelegate <NSObject>

@optional
- (void)swipIndicatorView:(UIView<WBStorySwipIndicatorViewProtocol> *)arg1 didTapDissmissButton:(UIButton *)arg2;
- (void)swipIndicatorView:(UIView<WBStorySwipIndicatorViewProtocol> *)arg1 didSelectAtIndex:(unsigned long long)arg2;
- (_Bool)isSwipIndicatorViewScrolling;
@end

