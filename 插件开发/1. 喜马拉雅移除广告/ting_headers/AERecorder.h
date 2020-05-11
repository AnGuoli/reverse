//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AEAudioReceiver-Protocol.h"

@class AEAudioFileWriter, AEMixerBuffer, NSString;

@interface AERecorder : NSObject <AEAudioReceiver>
{
    struct AudioBufferList *_buffer;
    _Bool _recording;
    AEMixerBuffer *_mixer;
    AEAudioFileWriter *_writer;
    double _currentTime;
}

+ (_Bool)AACEncodingAvailable;
@property(readonly, nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) AEAudioFileWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) AEMixerBuffer *mixer; // @synthesize mixer=_mixer;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType receiverCallback;
@property(readonly, nonatomic) NSString *path; // @dynamic path;
- (void)finishRecording;
- (_Bool)prepareRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 channels:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)prepareRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)prepareRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)beginRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 channels:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)beginRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 bitDepth:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)beginRecordingToFileAtPath:(id)arg1 fileType:(unsigned int)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithAudioController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

