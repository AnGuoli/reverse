//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

@class MMChatKey, MMDraft, MMGroup, MMGroupBulletin, MMGroupNotice, MMMessage, MMSchemeGuide, MMUser, NSString;

@interface MMConversation : MMModel
{
    int _chatOpenedCount;
    int _chatTotalCount;
    long long _parentId;
    MMChatKey *_chatKey;
    MMUser *_user;
    MMGroup *_group;
    MMGroupBulletin *_bulletin;
    unsigned long long _apiUnreadCount;
    unsigned long long _imUnreadCount;
    long long _apiTime;
    long long _imTime;
    MMMessage *_latestMessage;
    MMGroupNotice *_latestGroupNotice;
    long long _atMessageId;
    long long _remindMsgType;
    long long _maxLocalTime;
    long long _markTime;
    NSString *_pic_infos;
    NSString *_comment;
    long long _tabInfo;
    MMSchemeGuide *_latestSchemeGuide;
    MMDraft *_draft;
}

+ (id)createWithChatKey:(id)arg1 latestMessage:(id)arg2 respChat:(id)arg3;
@property(retain, nonatomic) MMDraft *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) MMSchemeGuide *latestSchemeGuide; // @synthesize latestSchemeGuide=_latestSchemeGuide;
@property(nonatomic) long long tabInfo; // @synthesize tabInfo=_tabInfo;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *pic_infos; // @synthesize pic_infos=_pic_infos;
@property(nonatomic) int chatTotalCount; // @synthesize chatTotalCount=_chatTotalCount;
@property(nonatomic) int chatOpenedCount; // @synthesize chatOpenedCount=_chatOpenedCount;
@property(nonatomic) long long markTime; // @synthesize markTime=_markTime;
@property(nonatomic) long long maxLocalTime; // @synthesize maxLocalTime=_maxLocalTime;
@property(nonatomic) long long remindMsgType; // @synthesize remindMsgType=_remindMsgType;
@property(nonatomic) long long atMessageId; // @synthesize atMessageId=_atMessageId;
@property(retain, nonatomic) MMGroupNotice *latestGroupNotice; // @synthesize latestGroupNotice=_latestGroupNotice;
@property(retain, nonatomic) MMMessage *latestMessage; // @synthesize latestMessage=_latestMessage;
@property(nonatomic) long long imTime; // @synthesize imTime=_imTime;
@property(nonatomic) long long apiTime; // @synthesize apiTime=_apiTime;
@property(nonatomic) unsigned long long imUnreadCount; // @synthesize imUnreadCount=_imUnreadCount;
@property(nonatomic) unsigned long long apiUnreadCount; // @synthesize apiUnreadCount=_apiUnreadCount;
@property(retain, nonatomic) MMGroupBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) MMGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) MMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) MMChatKey *chatKey; // @synthesize chatKey=_chatKey;
@property(nonatomic) long long parentId; // @synthesize parentId=_parentId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)fromResultSet:(id)arg1;
- (id)initWithChatKey:(id)arg1;
@property(nonatomic) int type;
@property(nonatomic) long long chatId;
@property(readonly, nonatomic) unsigned long long unreadCount;
- (void)dealloc;

@end

