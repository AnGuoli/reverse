//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WXLength, WXSDKInstance;

@interface WXTransform : NSObject
{
    float _rotateAngle;
    float _scaleX;
    float _scaleY;
    WXLength *_translateX;
    WXLength *_translateY;
    WXLength *_originX;
    WXLength *_originY;
    float _rotateX;
    float _rotateY;
    float _rotateZ;
    float _perspective;
    struct CATransform3D _nativeTransform;
    _Bool _useNativeTransform;
    WXSDKInstance *_weexInstance;
}

@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(nonatomic) float perspective; // @synthesize perspective=_perspective;
- (void).cxx_destruct;
- (double)deg2rad:(double)arg1;
- (double)getAngle:(id)arg1;
- (void)parseScaley:(id)arg1;
- (void)parseScalex:(id)arg1;
- (void)parseScale:(id)arg1;
- (void)parseTranslatey:(id)arg1;
- (void)parseTranslatex:(id)arg1;
- (void)parseTranslate:(id)arg1;
- (void)parsePerspective:(id)arg1;
- (void)parseRotatez:(id)arg1;
- (void)parseRotatey:(id)arg1;
- (void)parseRotatex:(id)arg1;
- (void)parseRotate:(id)arg1;
- (void)parseTransformOrigin:(id)arg1;
- (void)parseTransform:(id)arg1;
- (void)applyTransformForView:(id)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (struct CATransform3D)nativeTransformWithoutRotateWithView:(id)arg1;
- (struct CATransform3D)nativeTransformWithView:(id)arg1;
- (void)setTransformOrigin:(id)arg1;
@property(readonly, nonatomic) float scaleY;
@property(readonly, nonatomic) float scaleX;
@property(readonly, nonatomic) WXLength *translateY;
@property(readonly, nonatomic) WXLength *translateX;
@property(readonly, nonatomic) float rotateZ;
@property(readonly, nonatomic) float rotateY;
@property(readonly, nonatomic) float rotateX;
@property(readonly, nonatomic) float rotateAngle;
- (id)initWithNativeTransform:(struct CATransform3D)arg1 instance:(id)arg2;
- (id)initWithCSSValue:(id)arg1 origin:(id)arg2 instance:(id)arg3;

@end

