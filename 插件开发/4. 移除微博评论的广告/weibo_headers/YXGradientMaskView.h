//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface YXGradientMaskView : UIView
{
    CAGradientLayer *gradientLayer;
    NSArray *_colors;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(copy) NSArray *colors; // @synthesize colors=_colors;
@property struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

