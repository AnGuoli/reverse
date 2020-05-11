//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioReceiverExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"

@class CMessageWrap;
@protocol PlayControllerDelegate;

@interface PlayingController : MMObject <ISysCallCheckExt, IAudioReceiverExt>
{
    _Bool m_bPlaying;
    unsigned int m_uiMesLocalID;
    CMessageWrap *m_msgWrap;
    id <PlayControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <PlayControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)Reset;
- (void)OnEarTip;
- (void)OnBeginPlaying:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)reportStopVoice:(int)arg1;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)onResignActive;
- (void)StopPlayMessageWithUsrName:(id)arg1;
- (void)StopPlayMessage:(id)arg1;
- (void)StartPlayMessage:(id)arg1;
- (id)getChatName:(id)arg1;
- (_Bool)isPlaying;
- (void)UnRegister;
- (void)Register;
- (id)init;

@end

