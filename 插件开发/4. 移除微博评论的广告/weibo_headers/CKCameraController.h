//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKCaptureSessionDelegate-Protocol.h"

@class CKCaptureSession, CKDispatchQueue, CKEffectPipeline, CKMulticastDelegate, CKRenderView, EAGLContext, NSString, WBCameraAVOutputConfig, WBCameraPixelBufferRenderer, WBGPUImageEffectFrameBufferCache, WBGPUImagePixelBuffer2TextureHandle;
@protocol CKCameraControllerDelegate, CKMediaWriter, OS_dispatch_semaphore;

@interface CKCameraController : NSObject <CKCaptureSessionDelegate>
{
    WBCameraAVOutputConfig *_writerConfig;
    WBCameraPixelBufferRenderer *_snapshotPBRenderer;
    _Bool _alwaysUsePBRenderer;
    CKMulticastDelegate<CKCameraControllerDelegate> *_delegate;
    CKCaptureSession *_session;
    id <CKMediaWriter> _writer;
    CKRenderView *_renderView;
    CKEffectPipeline *_pipelineRender;
    CKEffectPipeline *_pipelineDisplay;
    WBGPUImageEffectFrameBufferCache *_frameBufferCache;
    EAGLContext *_contextRender;
    EAGLContext *_contextDisplay;
    CKDispatchQueue *_queueRender;
    CKDispatchQueue *_queueWriter;
    NSObject<OS_dispatch_semaphore> *_displaySemaphore;
    NSObject<OS_dispatch_semaphore> *_renderQueueSemaphore;
    WBGPUImagePixelBuffer2TextureHandle *_p2tHandler;
    WBCameraPixelBufferRenderer *_pbRenderer;
    CDUnknownBlockType _snapshotHandler;
    struct __CFDictionary *_exifAttachments;
}

@property(nonatomic) struct __CFDictionary *exifAttachments; // @synthesize exifAttachments=_exifAttachments;
@property(copy, nonatomic) CDUnknownBlockType snapshotHandler; // @synthesize snapshotHandler=_snapshotHandler;
@property(retain, nonatomic) WBCameraPixelBufferRenderer *pbRenderer; // @synthesize pbRenderer=_pbRenderer;
@property(retain, nonatomic) WBGPUImagePixelBuffer2TextureHandle *p2tHandler; // @synthesize p2tHandler=_p2tHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderQueueSemaphore; // @synthesize renderQueueSemaphore=_renderQueueSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *displaySemaphore; // @synthesize displaySemaphore=_displaySemaphore;
@property(retain, nonatomic) CKDispatchQueue *queueWriter; // @synthesize queueWriter=_queueWriter;
@property(retain, nonatomic) CKDispatchQueue *queueRender; // @synthesize queueRender=_queueRender;
@property(retain, nonatomic) EAGLContext *contextDisplay; // @synthesize contextDisplay=_contextDisplay;
@property(retain, nonatomic) EAGLContext *contextRender; // @synthesize contextRender=_contextRender;
@property(retain, nonatomic) WBGPUImageEffectFrameBufferCache *frameBufferCache; // @synthesize frameBufferCache=_frameBufferCache;
@property(readonly, nonatomic) CKEffectPipeline *pipelineDisplay; // @synthesize pipelineDisplay=_pipelineDisplay;
@property(readonly, nonatomic) CKEffectPipeline *pipelineRender; // @synthesize pipelineRender=_pipelineRender;
@property(retain, nonatomic) CKRenderView *renderView; // @synthesize renderView=_renderView;
@property(readonly, nonatomic) id <CKMediaWriter> writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) CKCaptureSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) CKMulticastDelegate<CKCameraControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool alwaysUsePBRenderer; // @synthesize alwaysUsePBRenderer=_alwaysUsePBRenderer;
- (void).cxx_destruct;
- (void)takePhotosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)snapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)createPixelBuffer:(struct CGSize)arg1;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 reason:(id)arg2 isVideo:(_Bool)arg3;
- (void)new_didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isVideo:(_Bool)arg2;
- (void)didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isVideo:(_Bool)arg2;
- (id)uploadPixelBuffer:(struct __CVBuffer *)arg1;
- (void)writeFrameBuffer:(id)arg1 time:(CDStruct_1b6d18a9)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createPBRendererIfNeed;
- (id)createPBRenderer;
- (void)writeVideoFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)reloadWriter;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)dealloc;
- (void)setupPreview;
- (id)initWithOutputConfig:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

