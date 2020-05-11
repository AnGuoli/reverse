//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBGPUImageMatrixProtocol-Protocol.h"

@class EAGLContext, NSString;
@protocol WBGPUImageEffectDelegate;

@interface WBGPUImageTexture2PixelBufferHandle : NSObject <WBGPUImageMatrixProtocol>
{
    struct WBGLProgram *_program;
    int _filterPositionAttribute;
    int _filterTextureCoordinateAttribute;
    int _filterInputTextureUniform;
    unsigned int _filterModelMatrixUniform;
    unsigned int _framebuffer;
    struct __CVBuffer *_renderTarget;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_renderTexture;
    struct CGSize _size;
    EAGLContext *_context;
    union _GLKMatrix4 _modelMatrix;
    unsigned long long _renderType;
    id <WBGPUImageEffectDelegate> _delegate;
}

@property(nonatomic) __weak id <WBGPUImageEffectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inActiveFrameBuffer;
- (void)activeFrameBuffer;
- (void)destroyDataFBO;
- (void)destroyProgram;
- (void)createPorgram:(id)arg1;
- (void)createDataFBO;
- (void)createGrayScaleRenderTarget;
- (void)createRenderTarget;
- (void)destroy;
- (void)attachGrayScalePixelBuffer:(struct __CVBuffer *)arg1;
- (void)attachYUVPixelBuffer:(struct __CVBuffer *)arg1 isY:(_Bool)arg2;
- (void)attachBGRAPixelBuffer:(struct __CVBuffer *)arg1;
- (void)render:(unsigned int)arg1 renderExternalBlock:(CDUnknownBlockType)arg2;
- (void)renderYUVTexture:(unsigned int)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderRGBTexture:(unsigned int)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderTexture:(unsigned int)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (struct __CVBuffer *)renderGrayScaleTexture:(unsigned int)arg1 inputSize:(struct CGSize)arg2;
- (struct __CVBuffer *)renderTextureToPixelBuffer:(unsigned int)arg1 inputSize:(struct CGSize)arg2;
- (void)setGLKMatrix4:(union _GLKMatrix4)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

