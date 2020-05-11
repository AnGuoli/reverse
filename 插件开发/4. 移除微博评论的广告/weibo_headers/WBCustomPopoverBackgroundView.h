//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPopoverBackgroundView.h>

@class UIImageView;

@interface WBCustomPopoverBackgroundView : UIPopoverBackgroundView
{
    unsigned long long _arrowDirection;
    double _arrowOffset;
    UIImageView *_arrowImageView;
}

+ (_Bool)wantsDefaultContentAppearance;
+ (struct UIEdgeInsets)contentViewInsets;
+ (double)arrowHeight;
+ (double)arrowBase;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)convertToWindowRect:(struct CGRect)arg1 InView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

