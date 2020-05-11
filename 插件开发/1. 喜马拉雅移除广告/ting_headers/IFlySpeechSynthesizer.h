//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlySpeechSynthesizerDelegate-Protocol.h"

@class IFlySpeechSynthesizerImp, IFlyTTSParam, NSString;
@protocol IFlySpeechSynthesizerDelegate;

@interface IFlySpeechSynthesizer : NSObject <IFlySpeechSynthesizerDelegate>
{
    _Bool _isListening;
    IFlySpeechSynthesizerImp *_operation;
    IFlySpeechSynthesizerImp *_preOperation;
    IFlyTTSParam *_sessionConfig;
    _Bool _isUri;
    _Bool _isPreTTSStarting;
    id <IFlySpeechSynthesizerDelegate> _delegate;
}

+ (_Bool)checkFilePathAvailable:(id)arg1;
+ (_Bool)destroy;
+ (id)sharedInstance;
@property(nonatomic) id <IFlySpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCompleted:(id)arg1;
- (void)onSpeakCancel;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(id)arg4;
- (void)onSpeakProgress:(int)arg1 beginPos:(int)arg2 endPos:(int)arg3;
- (void)onBufferProgress:(int)arg1 message:(id)arg2;
- (void)onSpeakResumed;
- (void)onSpeakPaused;
- (void)onSpeakBegin;
- (void)runSpeaking:(id)arg1;
- (void)startPreTTS:(id)arg1;
- (void)movePreToNormal;
@property(readonly, nonatomic) _Bool isSpeaking;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (void)stopSpeaking;
- (void)resumeSpeaking;
- (void)pauseSpeaking;
- (void)synthesize:(id)arg1 toUri:(id)arg2;
- (void)startSpeaking:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

