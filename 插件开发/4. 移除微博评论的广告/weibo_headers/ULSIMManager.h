//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBIMLiveListener-Protocol.h"

@class NSString, ULSUser;
@protocol OS_dispatch_queue;

@interface ULSIMManager : NSObject <WBIMLiveListener>
{
    NSObject<OS_dispatch_queue> *queue;
    int _roomStatus;
    NSString *_anthorUid;
    NSString *_roomId;
    ULSUser *_user;
    CDUnknownBlockType _receiveBlock;
    long long _type;
    double _beforeTime;
    CDUnknownBlockType _messageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType messageBlock; // @synthesize messageBlock=_messageBlock;
@property(nonatomic) double beforeTime; // @synthesize beforeTime=_beforeTime;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType receiveBlock; // @synthesize receiveBlock=_receiveBlock;
@property(retain, nonatomic) ULSUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int roomStatus; // @synthesize roomStatus=_roomStatus;
@property(copy, nonatomic) NSString *anthorUid; // @synthesize anthorUid=_anthorUid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onNewMessage:(id)arg1 requestId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (void)removeDelegate;
- (void)sendCommentToSina:(id)arg1 extension:(id)arg2;
- (void)sendMessageToSina:(id)arg1;
- (void)joinQueueTask:(id)arg1;
- (id)convertMessageToString:(id)arg1 contentDict:(id)arg2 type:(long long)arg3;
- (void)exitIM:(CDUnknownBlockType)arg1;
- (void)sendAskQuestion:(id)arg1;
- (void)followAnthor;
- (void)sendPraise;
- (void)sendPraiseForFirst;
- (void)exitRoom;
- (void)sendEnterRoom;
- (id)messageForDownloadType:(long long)arg1;
- (void)sendDownloadMessageByType:(long long)arg1;
- (void)dealCommentIfNeedSendDownloadMessage:(id)arg1;
- (void)sendComment:(id)arg1;
- (void)setMessageCallback:(CDUnknownBlockType)arg1;
- (void)sendMessageCallback:(CDUnknownBlockType)arg1;
- (void)joinRoom:(CDUnknownBlockType)arg1;
- (id)initSinaSDKWithToken:(id)arg1 roomId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

