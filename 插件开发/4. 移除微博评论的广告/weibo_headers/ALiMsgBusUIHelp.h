//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AMPMsgBusHelpProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ALiMsgBusUIHelp : UIViewController <AMPMsgBusHelpProtocol>
{
    NSMutableArray *_listEventID;
}

@property(retain, nonatomic) NSMutableArray *listEventID; // @synthesize listEventID=_listEventID;
- (void).cxx_destruct;
- (void)registerEventNotify:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventNotify:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventNotify:(id)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
- (void)registerEventTopNotify:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventTopNotify:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventTopNotify:(id)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
- (void)registerEventFilter:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4 dataClass3:(Class)arg5;
- (void)registerEventFilter:(id)arg1 action:(SEL)arg2 dataClass1:(Class)arg3 dataClass2:(Class)arg4;
- (void)registerEventFilter:(id)arg1 action:(SEL)arg2 dataClass:(Class)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

