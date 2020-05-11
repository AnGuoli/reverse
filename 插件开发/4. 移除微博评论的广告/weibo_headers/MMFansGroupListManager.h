//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFansGroupListViewController, NSMutableArray, NSMutableDictionary, WBConversation;

@interface MMFansGroupListManager : NSObject
{
    MMFansGroupListViewController *fansGroupListVC;
    NSMutableArray *conversationArray;
    NSMutableDictionary *conversationMappingDic;
    WBConversation *parentConversation;
}

@property(retain, nonatomic) WBConversation *parentConversation; // @synthesize parentConversation;
@property(retain, nonatomic) NSMutableDictionary *conversationMappingDic; // @synthesize conversationMappingDic;
@property(retain, nonatomic) NSMutableArray *conversationArray; // @synthesize conversationArray;
@property(nonatomic) __weak MMFansGroupListViewController *fansGroupListVC; // @synthesize fansGroupListVC;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateChatsUnreadCount:(id)arg1;
- (void)chatUnreadCountChangedNotification:(id)arg1;
- (id)conversationWithMessage:(id)arg1;
- (id)conversationFromChatMappingDicWithChatId:(long long)arg1 chatType:(int)arg2;
- (void)removeAllConversationsFromMappingDic;
- (void)removeConversationFromChatMapplingDic:(id)arg1;
- (void)addConversationToMappingDic:(id)arg1;
- (void)refreshConversationListWithMessage:(id)arg1;
- (void)messageReceivedNotification:(id)arg1;
- (void)fetchUsersInfoFinishedNotification:(id)arg1;
- (void)addGroupMemberSync:(id)arg1;
- (void)destoryGroupNotification:(id)arg1;
- (void)removeAffilicationNotification:(id)arg1;
- (void)backToFansGroupListFromChat:(id)arg1;
- (void)clearFansGroupUnreadCount;
- (id)convertChats:(id)arg1;
- (void)queryFansGroupConversationsWithOffset:(int)arg1 limit:(int)arg2 chatType:(int)arg3 completedBlock:(CDUnknownBlockType)arg4;
- (void)postNewMessageReceivedAfterRefreshSubscriptionList;
- (void)processFansGroupServerConversations:(id)arg1 page:(int)arg2 hasMore:(_Bool)arg3 isLoadMore:(_Bool)arg4 completedBlock:(CDUnknownBlockType)arg5;
- (void)updateFansGroupAfterDeleteConversation:(id)arg1;
- (void)updateFansGroupChat:(long long)arg1;
- (void)deleteChatFromFansGroupList:(id)arg1 withExtraParameters:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

