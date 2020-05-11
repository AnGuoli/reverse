//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCDMulticastDelegate, NSPointerArray;
@protocol XMPlayerDelegate;

@interface RNAudioPlayerDelegator : NSObject
{
    NSPointerArray *_delegates;
    GCDMulticastDelegate<XMPlayerDelegate> *_multicastDelegate;
}

@property(retain, nonatomic) GCDMulticastDelegate<XMPlayerDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)listenPlayerDelegate;
- (void)removeDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

