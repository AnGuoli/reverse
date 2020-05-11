//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBAccountSettingsProperty-Protocol.h"

@class NSArray, NSDictionary, NSString, WBAccount;

@interface WBAccountUnreadCount : WBModelObject <WBAccountSettingsProperty>
{
    _Bool isFirstInitailized;
    _Bool _updating;
    _Bool _isShowHotDot;
    unsigned long long _totalUnreadCount;
    WBAccount *_currentAccount;
    unsigned long long _statusCount;
    unsigned long long _statusHomeCount;
    unsigned long long _statusHotHomeCount;
    unsigned long long _feedStatusCount;
    unsigned long long _status_24unreadCount;
    unsigned long long _hotStatusCount;
    unsigned long long _directMessageCount;
    unsigned long long _followerCount;
    unsigned long long _recommendUserCount;
    unsigned long long _strangersMessageCount;
    unsigned long long _dmSingleUnreadCount;
    unsigned long long _dmGroupSendUnreadCount;
    unsigned long long _noticeCount;
    unsigned long long _invitationCount;
    unsigned long long _attitudeCount;
    unsigned long long _chatGroupCount;
    unsigned long long _muteChatGroupCount;
    unsigned long long _message_flow_follow;
    unsigned long long _message_flow_unfollow;
    unsigned long long _double_flow;
    NSDictionary *_pageCardCount;
    long long _fans_group_unread;
    unsigned long long _all_mention_status;
    unsigned long long _attention_mention_status;
    unsigned long long _all_mention_cmt;
    unsigned long long _attention_mention_cmt;
    unsigned long long _all_cmt;
    unsigned long long _attention_cmt;
    unsigned long long _chatGroupNoticeCount;
    unsigned long long _dynamic_friends_attention;
    unsigned long long _commentCount;
    unsigned long long _mentionCount;
    unsigned long long _mentionCommentCount;
    unsigned long long _schemeGuideUnreadCount;
    long long _msgRemendType;
    NSArray *_notice_unread;
}

+ (id)deserializeFromDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *notice_unread; // @synthesize notice_unread=_notice_unread;
@property(nonatomic) long long msgRemendType; // @synthesize msgRemendType=_msgRemendType;
@property(nonatomic) unsigned long long schemeGuideUnreadCount; // @synthesize schemeGuideUnreadCount=_schemeGuideUnreadCount;
@property(nonatomic) unsigned long long mentionCommentCount; // @synthesize mentionCommentCount=_mentionCommentCount;
@property(nonatomic) unsigned long long mentionCount; // @synthesize mentionCount=_mentionCount;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long dynamic_friends_attention; // @synthesize dynamic_friends_attention=_dynamic_friends_attention;
@property(nonatomic) unsigned long long chatGroupNoticeCount; // @synthesize chatGroupNoticeCount=_chatGroupNoticeCount;
@property(nonatomic) unsigned long long attention_cmt; // @synthesize attention_cmt=_attention_cmt;
@property(nonatomic) unsigned long long all_cmt; // @synthesize all_cmt=_all_cmt;
@property(nonatomic) unsigned long long attention_mention_cmt; // @synthesize attention_mention_cmt=_attention_mention_cmt;
@property(nonatomic) unsigned long long all_mention_cmt; // @synthesize all_mention_cmt=_all_mention_cmt;
@property(nonatomic) unsigned long long attention_mention_status; // @synthesize attention_mention_status=_attention_mention_status;
@property(nonatomic) unsigned long long all_mention_status; // @synthesize all_mention_status=_all_mention_status;
@property(nonatomic) long long fans_group_unread; // @synthesize fans_group_unread=_fans_group_unread;
@property(retain, nonatomic) NSDictionary *pageCardCount; // @synthesize pageCardCount=_pageCardCount;
@property(nonatomic) unsigned long long double_flow; // @synthesize double_flow=_double_flow;
@property(nonatomic) unsigned long long message_flow_unfollow; // @synthesize message_flow_unfollow=_message_flow_unfollow;
@property(nonatomic) unsigned long long message_flow_follow; // @synthesize message_flow_follow=_message_flow_follow;
@property(nonatomic) unsigned long long muteChatGroupCount; // @synthesize muteChatGroupCount=_muteChatGroupCount;
@property(nonatomic) unsigned long long chatGroupCount; // @synthesize chatGroupCount=_chatGroupCount;
@property(nonatomic) unsigned long long attitudeCount; // @synthesize attitudeCount=_attitudeCount;
@property(nonatomic) unsigned long long invitationCount; // @synthesize invitationCount=_invitationCount;
@property(nonatomic) unsigned long long noticeCount; // @synthesize noticeCount=_noticeCount;
@property(nonatomic) unsigned long long dmGroupSendUnreadCount; // @synthesize dmGroupSendUnreadCount=_dmGroupSendUnreadCount;
@property(nonatomic) unsigned long long dmSingleUnreadCount; // @synthesize dmSingleUnreadCount=_dmSingleUnreadCount;
@property(nonatomic) unsigned long long strangersMessageCount; // @synthesize strangersMessageCount=_strangersMessageCount;
@property(nonatomic) unsigned long long recommendUserCount; // @synthesize recommendUserCount=_recommendUserCount;
@property(nonatomic) unsigned long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) unsigned long long directMessageCount; // @synthesize directMessageCount=_directMessageCount;
@property(nonatomic, getter=hotStatusCount) unsigned long long hotStatusCount; // @synthesize hotStatusCount=_hotStatusCount;
@property(nonatomic) _Bool isShowHotDot; // @synthesize isShowHotDot=_isShowHotDot;
@property(nonatomic, getter=status_24unreadCount) unsigned long long status_24unreadCount; // @synthesize status_24unreadCount=_status_24unreadCount;
@property(nonatomic, getter=feedStatusCount) unsigned long long feedStatusCount; // @synthesize feedStatusCount=_feedStatusCount;
@property(nonatomic) unsigned long long statusHotHomeCount; // @synthesize statusHotHomeCount=_statusHotHomeCount;
@property(nonatomic) unsigned long long statusHomeCount; // @synthesize statusHomeCount=_statusHomeCount;
@property(nonatomic, getter=statusCount) unsigned long long statusCount; // @synthesize statusCount=_statusCount;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) __weak WBAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)needSerialization;
- (long long)getNoticeFeedUnreadNumber;
- (id)getNoticeFeedRemindNumber;
- (void)deserializeFromServerResponseObj:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

