//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MonoServiceMsg.h"

@class NSString, WXLocalNotificationInfo;

@interface VoipMonoMsg : MonoServiceMsg
{
    _Bool _m_fromAnswered;
    unsigned int _m_receiveTime;
    unsigned int _m_msgType;
    unsigned int _m_mode;
    int _m_roomId;
    unsigned int _m_fromScene;
    long long _m_roomKey;
    NSString *_m_fromUser;
    WXLocalNotificationInfo *_m_notificationInfo;
}

@property(retain, nonatomic) WXLocalNotificationInfo *m_notificationInfo; // @synthesize m_notificationInfo=_m_notificationInfo;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(nonatomic) unsigned int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(nonatomic) _Bool m_fromAnswered; // @synthesize m_fromAnswered=_m_fromAnswered;
@property(nonatomic) long long m_roomKey; // @synthesize m_roomKey=_m_roomKey;
@property(nonatomic) int m_roomId; // @synthesize m_roomId=_m_roomId;
@property(nonatomic) unsigned int m_mode; // @synthesize m_mode=_m_mode;
@property(nonatomic) unsigned int m_msgType; // @synthesize m_msgType=_m_msgType;
@property(nonatomic) unsigned int m_receiveTime; // @synthesize m_receiveTime=_m_receiveTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)localNotificationInfo;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)receiveTimeOutOfDate;
- (_Bool)isOutOfDate;
- (id)init;

@end

