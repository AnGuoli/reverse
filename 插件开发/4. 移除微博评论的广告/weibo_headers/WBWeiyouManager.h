//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WB3rdManagerImpl.h"

@interface WBWeiyouManager : WB3rdManagerImpl
{
}

+ (id)clientWithAppendHeaderFromBaseLog:(id)arg1;
+ (void)actionPerfomLog:(id)arg1 responseObject:(id)arg2 error:(id)arg3 operationWrapper:(id)arg4;
+ (id)wm;
+ (void)logWithParams:(id)arg1;
+ (id)refreshUserProfileWithUserID:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (id)refreshOAuthInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateAccountUnreadCountForUnreadCountObject:(id)arg1 withResponseObject:(id)arg2;
+ (void)unreadCountDidGetResult:(id)arg1;
+ (id)unreadCount;
+ (id)gdid;
+ (id)gsid;
+ (id)oauth2Token;
+ (id)getGroupNicknamesWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)getRecentContactsWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_fans_group_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_report_spam_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_clear_public_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_destroy_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_unsubscribe_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_invite_handle_invite_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_destroy_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_unblock_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)post_direct_messages_block_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_users_relation_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_unblock_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_block_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_subscription_messages_user_list_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_user_list_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_conversation_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_count_batch_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)get_direct_messages_box_messages_withParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1;

@end

