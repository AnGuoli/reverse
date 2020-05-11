//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface XMVCBasePathView : UIView
{
    _Bool _pathInteraction;
}

+ (Class)layerClass;
@property(nonatomic) _Bool pathInteraction; // @synthesize pathInteraction=_pathInteraction;
@property(retain, nonatomic) UIColor *lineColor;
@property(nonatomic) double lineWidth;
@property(retain, nonatomic) UIColor *fillColor;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pathWithRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

