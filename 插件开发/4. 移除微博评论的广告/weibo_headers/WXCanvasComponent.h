//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "GLKViewDelegate-Protocol.h"

@class CADisplayLink, GLKBaseEffect, GLKView, NSMutableArray, NSMutableDictionary, NSString, WXCanvasModule;

@interface WXCanvasComponent : WXComponent <GLKViewDelegate>
{
    float _curLineWidth;
    float _curGlobalAlpha;
    GLKView *_glkview;
    NSMutableDictionary *_cacheMap;
    NSMutableArray *_drawActionList;
    GLKBaseEffect *_effect;
    CADisplayLink *_displayLink;
    long long _fps;
    WXCanvasModule *_canvasModule;
    union _GLKVector4 _curFillColor;
    union _GLKVector4 _curStrokeColor;
}

@property(nonatomic) float curGlobalAlpha; // @synthesize curGlobalAlpha=_curGlobalAlpha;
@property(nonatomic) float curLineWidth; // @synthesize curLineWidth=_curLineWidth;
@property(nonatomic) union _GLKVector4 curStrokeColor; // @synthesize curStrokeColor=_curStrokeColor;
@property(nonatomic) union _GLKVector4 curFillColor; // @synthesize curFillColor=_curFillColor;
@property(retain, nonatomic) WXCanvasModule *canvasModule; // @synthesize canvasModule=_canvasModule;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) GLKBaseEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) NSMutableArray *drawActionList; // @synthesize drawActionList=_drawActionList;
@property(retain, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
@property(retain, nonatomic) GLKView *glkview; // @synthesize glkview=_glkview;
- (void).cxx_destruct;
- (void)fillRect:(id)arg1;
- (void)setFillStyle:(id)arg1;
- (void)strokeRect:(id)arg1;
- (void)strokeLines:(id)arg1;
- (void)setLineWidth:(id)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)clearRect:(id)arg1;
- (void)setGlobalAlpha:(id)arg1;
- (void)drawImages:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)handleDisplayLink;
- (id)getTexture:(id)arg1;
- (void)addDrawActions:(id)arg1 canvasModule:(id)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

