//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePixellatePositionFilter : GPUImageFilter
{
    int fractionalWidthOfAPixelUniform;
    int aspectRatioUniform;
    int centerUniform;
    int radiusUniform;
    double _fractionalWidthOfAPixel;
    double _aspectRatio;
    double _radius;
    struct CGPoint _center;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double fractionalWidthOfAPixel; // @synthesize fractionalWidthOfAPixel=_fractionalWidthOfAPixel;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)adjustAspectRatio;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

