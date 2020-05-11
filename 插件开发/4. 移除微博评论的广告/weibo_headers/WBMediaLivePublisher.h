//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaLiveNetPublishDelegate-Protocol.h"
#import "WBMediaLivePublisherCapturerDelegate-Protocol.h"
#import "WBMediaLivePublisherEncoderDelegate-Protocol.h"

@class NSString, UIView, WBMediaLiveNetPublish, WBMediaLivePublisherAudioConfiguration, WBMediaLivePublisherCapturer, WBMediaLivePublisherEncoder, WBMediaLivePublisherVideoConfiguration;
@protocol WBMediaLivePublisherDelegate;

@interface WBMediaLivePublisher : NSObject <WBMediaLivePublisherCapturerDelegate, WBMediaLivePublisherEncoderDelegate, WBMediaLiveNetPublishDelegate>
{
    _Bool _mirrorEnabled;
    _Bool _pushing;
    float _videoZoomFactor;
    id <WBMediaLivePublisherDelegate> _delegate;
    WBMediaLivePublisherVideoConfiguration *_videoConfiguration;
    WBMediaLivePublisherAudioConfiguration *_audioConfiguration;
    NSString *_URL;
    WBMediaLivePublisherCapturer *_capturer;
    WBMediaLiveNetPublish *_rtmpSocket;
    WBMediaLivePublisherEncoder *_encoder;
}

+ (void)requestMediaAuth:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) WBMediaLivePublisherEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) WBMediaLiveNetPublish *rtmpSocket; // @synthesize rtmpSocket=_rtmpSocket;
@property(retain, nonatomic) WBMediaLivePublisherCapturer *capturer; // @synthesize capturer=_capturer;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) WBMediaLivePublisherAudioConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(retain, nonatomic) WBMediaLivePublisherVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) _Bool pushing; // @synthesize pushing=_pushing;
@property(nonatomic) _Bool mirrorEnabled; // @synthesize mirrorEnabled=_mirrorEnabled;
@property(nonatomic) __weak id <WBMediaLivePublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)WBMediaLiveNetPublishEvent:(long long)arg1 Message:(id)arg2;
- (void)encoder:(id)arg1 sps:(id)arg2 pps:(id)arg3;
- (void)encoder:(id)arg1 packet:(id)arg2;
- (void)mediaType:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)resetVideoConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)focusOnPointOfInterest:(struct CGPoint)arg1 relativeTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(readonly, nonatomic) unsigned long long cameraPosition;
@property(readonly, nonatomic) UIView *previewView;
- (void)stopPush;
- (void)startPushWithURLString:(id)arg1;
- (void)switchCameraPosition;
- (void)startPreview;
- (id)initWithVideoConfiguration:(id)arg1 audioConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

