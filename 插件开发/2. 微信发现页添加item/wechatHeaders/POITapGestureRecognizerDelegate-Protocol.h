//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol POITapGestureRecognizerDelegate <NSObject>
- (void)didTouchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

