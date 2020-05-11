//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoDanmakuDispatcherDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, UIView, WBVideoDanmakuBuildInClock, WBVideoDanmakuCanvas, WBVideoDanmakuDispatcher;
@protocol WBVideoDanmakuRendererDelegate;

@interface WBVideoDanmakuRenderer : NSObject <WBVideoDanmakuDispatcherDelegate>
{
    WBVideoDanmakuDispatcher *_dispatcher;
    WBVideoDanmakuCanvas *_canvas;
    NSMutableDictionary *_spriteClassMap;
    NSMutableDictionary *_context;
    WBVideoDanmakuBuildInClock *_clock;
    NSMutableArray *_preloadedDescriptors;
    NSMutableArray *_records;
    NSDate *_startTime;
    double _pausedDuration;
    NSDate *_pausedTime;
    _Bool _masked;
    _Bool _redisplay;
    _Bool _zIndex;
    _Bool _recording;
    long long _renderState;
    double _smoothness;
    id <WBVideoDanmakuRendererDelegate> _delegate;
    UIView *_view;
    double _time;
    struct UIEdgeInsets _canvasMargin;
}

@property(nonatomic) double pausedDuration; // @synthesize pausedDuration=_pausedDuration;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) _Bool zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <WBVideoDanmakuRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool redisplay; // @synthesize redisplay=_redisplay;
@property(nonatomic) double smoothness; // @synthesize smoothness=_smoothness;
@property(nonatomic) _Bool masked; // @synthesize masked=_masked;
@property(nonatomic) struct UIEdgeInsets canvasMargin; // @synthesize canvasMargin=_canvasMargin;
@property(readonly, nonatomic) long long renderState; // @synthesize renderState=_renderState;
- (void).cxx_destruct;
- (void)removeSpirteFromStartOffset:(double)arg1 endOffset:(double)arg2;
- (void)updateSpriteName:(Class)arg1 withParams:(id)arg2;
- (void)indexRemoveSprite:(id)arg1;
- (void)indexAddSprite:(id)arg1;
- (double)timeForDanmakuDispatcher:(id)arg1;
- (void)willDeactiveSprite:(id)arg1;
- (unsigned long long)viewIndexOfSprite:(id)arg1;
- (void)willActiveSprite:(id)arg1;
- (_Bool)shouldActiveSprite:(id)arg1;
- (void)update;
- (void)load:(id)arg1;
- (id)records;
- (void)recordDescriptor:(id)arg1;
- (void)resetActiveSpritesState;
- (void)removeSpriteWithIdentifier:(id)arg1;
- (void)removePresentSpritesWithName:(id)arg1;
- (long long)spritesNumberWithName:(id)arg1;
- (void)convertDelayTime:(id)arg1;
- (double)currentTime;
@property(nonatomic) double speed;
- (void)stop;
- (double)clockTime;
- (void)updateClockTime:(double)arg1;
- (void)updateScreenState:(_Bool)arg1;
- (void)pause;
- (void)start;
- (void)receive:(id)arg1 withCorrection:(_Bool)arg2;
- (void)receive:(id)arg1;
- (void)initClock;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

