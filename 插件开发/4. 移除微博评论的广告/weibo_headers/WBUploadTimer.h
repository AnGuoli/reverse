//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface WBUploadTimer : NSObject
{
    CADisplayLink *_timer;
    id _target;
    SEL _action;
    _Bool _passTimer;
    _Bool _paused;
    unsigned long long _frameInterval;
}

+ (id)timerWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned long long frameInterval; // @synthesize frameInterval=_frameInterval;
- (void).cxx_destruct;
- (void)invalidate;
- (void)update;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

