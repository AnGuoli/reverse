//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, EASession, NSString, SDLStreamDelegate;
@protocol SDLIAPSessionDelegate;

@interface SDLIAPSession : NSObject
{
    _Bool _isInputStreamOpen;
    _Bool _isOutputStreamOpen;
    EAAccessory *_accessory;
    NSString *_protocol;
    EASession *_easession;
    id <SDLIAPSessionDelegate> _delegate;
    SDLStreamDelegate *_streamDelegate;
}

@property _Bool isOutputStreamOpen; // @synthesize isOutputStreamOpen=_isOutputStreamOpen;
@property _Bool isInputStreamOpen; // @synthesize isInputStreamOpen=_isInputStreamOpen;
@property(retain) SDLStreamDelegate *streamDelegate; // @synthesize streamDelegate=_streamDelegate;
@property __weak id <SDLIAPSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) EASession *easession; // @synthesize easession=_easession;
@property(retain) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (void)dealloc;
- (CDUnknownBlockType)streamErroredHandler;
- (CDUnknownBlockType)streamOpenedHandler;
- (void)stopStream:(id)arg1;
- (void)startStream:(id)arg1;
- (void)stop;
- (_Bool)start;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;

@end

