//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ARSession, NSString, UIView, WBARKitPlane;
@protocol WBARKitEngineDelegate;

@interface WBARKitEngine : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_gestureView;
    _Bool _isPaning;
    ARSession *_session;
    id <WBARKitEngineDelegate> _delegate;
    double _standardZ;
    double _objectHeight;
    double _standardZScale;
    double _objectMinScale;
    WBARKitPlane *_tempPlane;
    WBARKitPlane *_standardPlane;
    struct CGPoint _objectScreenPos;
}

@property(retain, nonatomic) WBARKitPlane *standardPlane; // @synthesize standardPlane=_standardPlane;
@property(retain, nonatomic) WBARKitPlane *tempPlane; // @synthesize tempPlane=_tempPlane;
@property(nonatomic) double objectMinScale; // @synthesize objectMinScale=_objectMinScale;
@property(nonatomic) double standardZScale; // @synthesize standardZScale=_standardZScale;
@property(nonatomic) double objectHeight; // @synthesize objectHeight=_objectHeight;
@property(nonatomic) struct CGPoint objectScreenPos; // @synthesize objectScreenPos=_objectScreenPos;
@property(nonatomic) double standardZ; // @synthesize standardZ=_standardZ;
@property(nonatomic) __weak id <WBARKitEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak ARSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)session:(id)arg1 didRemovePlaneAnchor:(id)arg2;
- (void)session:(id)arg1 didUpdatePlaneAnchor:(id)arg2;
- (void)session:(id)arg1 didAddPlaneAnchor:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)checkIfObjectShouldMoveOntoPlane:(id)arg1;
- (void)moveOntoPlane:(id)arg1;
- (void)moveOntoTempPlane:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)hitVirtualObjectOnScreenPoint:(struct CGPoint)arg1;
- (struct SCNVector3)hitTestWithInfiniteHorizontalPlane:(struct CGPoint)arg1 planePosition:(struct SCNVector3)arg2;
- (id)hitTestRayFromScreenPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) UIView *gestureView;
- (void)initializeVirtualObject;
- (struct SCNVector3)virtualObjectPositionOnPlane:(struct SCNVector3)arg1;
- (struct SCNVector3)virtualObjectAdaptiveScaleWithPosition:(struct SCNVector3)arg1;
- (struct SCNVector3)virtualObjectDefaultPosition;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

