//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, RNSVGGlyphContext, RNSVGGroup, RNSVGSvgView;

@interface RNSVGNode : UIView
{
    RNSVGGlyphContext *glyphContext;
    _Bool _transparent;
    struct CGPath *_cachedClipPath;
    _Bool _responsible;
    _Bool _active;
    int _clipRule;
    NSString *_name;
    double _opacity;
    NSString *_clipPath;
    struct CGPath *_path;
    RNSVGSvgView *_svgView;
    RNSVGGroup *_textRoot;
    struct CGAffineTransform _matrix;
    struct CGAffineTransform _invmatrix;
}

@property(nonatomic) __weak RNSVGGroup *textRoot; // @synthesize textRoot=_textRoot;
@property(nonatomic) __weak RNSVGSvgView *svgView; // @synthesize svgView=_svgView;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) struct CGAffineTransform invmatrix; // @synthesize invmatrix=_invmatrix;
@property(nonatomic) struct CGAffineTransform matrix; // @synthesize matrix=_matrix;
@property(nonatomic) _Bool responsible; // @synthesize responsible=_responsible;
@property(retain, nonatomic) NSString *clipPath; // @synthesize clipPath=_clipPath;
@property(nonatomic) int clipRule; // @synthesize clipRule=_clipRule;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)traverseSubviews:(CDUnknownBlockType)arg1;
- (void)parseReference;
- (double)getContextTop;
- (double)getContextLeft;
- (double)getContextHeight;
- (double)getContextWidth;
- (double)relativeOnOther:(id)arg1;
- (double)relativeOnHeight:(id)arg1;
- (double)relativeOnWidth:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (struct CGPath *)getPath:(struct CGContext *)arg1;
- (void)clip:(struct CGContext *)arg1;
- (struct CGPath *)getClipPath:(struct CGContext *)arg1;
- (struct CGPath *)getClipPath;
- (void)renderTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)endTransparencyLayer:(struct CGContext *)arg1;
- (void)beginTransparencyLayer:(struct CGContext *)arg1;
- (void)reactSetInheritedBackgroundColor:(id)arg1;
- (double)getFontSizeFromContext;
- (id)getParentTextRoot;
- (void)invalidate;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (id)init;

@end

