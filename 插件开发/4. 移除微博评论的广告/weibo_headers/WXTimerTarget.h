//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WXSDKInstance;

@interface WXTimerTarget : NSObject
{
    NSString *_callbackID;
    WXSDKInstance *_weexInstance;
    _Bool _shouldRepeat;
}

+ (void)checkExcuteInBack:(id)arg1;
- (void).cxx_destruct;
- (void)trigger;
- (id)initWithCallback:(id)arg1 shouldRepeat:(_Bool)arg2 weexInstance:(id)arg3;

@end

