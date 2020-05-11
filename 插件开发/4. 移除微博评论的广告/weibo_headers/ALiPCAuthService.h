//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALiHintProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ALiPCAuthService : NSObject <ALiHintProtocol>
{
    NSMutableDictionary *_dicLostHint;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dicLostHint; // @synthesize dicLostHint=_dicLostHint;
- (void).cxx_destruct;
- (void)reportHintLost:(id)arg1 hintId:(id)arg2;
- (id)getHintList:(id)arg1;
- (id)init;
- (void)saveLostHint;
- (void)loadLostHint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

