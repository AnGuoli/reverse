//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YXLPKHTTPOperation : NSObject
{
}

+ (void)pandantPKWithKOTimeResult:(long long)arg1 anchorId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pandantPKWithSurpriseTaskResult:(long long)arg1 anchorId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)checkPandantPKRecordWithAnchorId:(long long)arg1 seasonId:(id)arg2 scid:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getLiveMemberInfoWithMemberId:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)startPKGiftCollectTaskCompletion:(CDUnknownBlockType)arg1;
+ (void)checkPKGiftsCollectBuffsWithScid:(id)arg1 andAnchorId:(id)arg2 andompletion:(CDUnknownBlockType)arg3;
+ (void)getPKPerformerCurrentPKBuffersWithPid:(long long)arg1 andompletion:(CDUnknownBlockType)arg2;
+ (void)getPKPropCardDetailListCompletion:(CDUnknownBlockType)arg1;
+ (void)checkMCPKPermissionWithScid:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)createMCPKWithScid:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)getTopPKStatusWithScid:(id)arg1 Completion:(CDUnknownBlockType)arg2;
+ (void)getPKTopicWithPKID:(long long)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)getPKResultAndScoreWithPKID:(long long)arg1 andAnchorID:(long long)arg2 Complation:(CDUnknownBlockType)arg3;
+ (void)getRetryPKInfoWithScid:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)getResourceinfoCompletion:(CDUnknownBlockType)arg1;
+ (void)sendStopMarkScore:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestAttentionAUser:(id)arg1;
+ (void)sendPKKeepaliveWithScid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getPKInfoWithScid:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)surrenderPKWithPKID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendUnusualStopPKWithPKID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendStopPKWithPKID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendStartPKWithPKID:(long long)arg1 complation:(CDUnknownBlockType)arg2;
+ (void)sendPKTimeoutWithPKId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendReplyWithType:(unsigned long long)arg1 suspend:(long long)arg2 pkid:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)searchFirendListWithKey:(id)arg1 page:(long long)arg2 limit:(long long)arg3 complation:(CDUnknownBlockType)arg4;
+ (void)getFriendList:(long long)arg1 limit:(long long)arg2 complation:(CDUnknownBlockType)arg3;
+ (void)invitePKWithMemberID:(id)arg1 scoreboard_mode:(int)arg2 complation:(CDUnknownBlockType)arg3;
+ (void)matchPKWithMemberClick:(long long)arg1 complation:(CDUnknownBlockType)arg2;

@end

