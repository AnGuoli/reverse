//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JGProgressHUDIndicatorView.h"

@class UIColor;

@interface JGProgressHUDRingIndicatorView : JGProgressHUDIndicatorView
{
    _Bool _roundProgressLine;
    UIColor *_ringBackgroundColor;
    UIColor *_ringColor;
    double _ringWidth;
}

+ (Class)layerClass;
@property(nonatomic) double ringWidth; // @synthesize ringWidth=_ringWidth;
@property(nonatomic) _Bool roundProgressLine; // @synthesize roundProgressLine=_roundProgressLine;
@property(retain, nonatomic) UIColor *ringColor; // @synthesize ringColor=_ringColor;
@property(retain, nonatomic) UIColor *ringBackgroundColor; // @synthesize ringBackgroundColor=_ringBackgroundColor;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (id)initWithContentView:(id)arg1;
- (id)initWithHUDStyle:(unsigned long long)arg1;

@end

