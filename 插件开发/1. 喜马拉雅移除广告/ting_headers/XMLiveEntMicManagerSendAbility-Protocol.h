//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol XMLiveEntMicManagerSendAbility <NSObject>
- (_Bool)sendLockPositionReq:(long long)arg1 isOpen:(_Bool)arg2 roleType:(long long)arg3;
- (_Bool)sendOnlineUserReq;
- (_Bool)sendMuteSelfReq:(_Bool)arg1;
- (_Bool)sendMuteReq:(unsigned long long)arg1 mute:(_Bool)arg2;
- (_Bool)sendUserStatusSyncReq;
- (_Bool)sendHangUpReq:(unsigned long long)arg1;
- (_Bool)sendConnectReq:(unsigned long long)arg1;
- (_Bool)sendWaitUserReq:(long long)arg1;
- (_Bool)sendLeaveReq;
- (_Bool)sendJoinReq:(long long)arg1 userType:(long long)arg2;
- (_Bool)sendNormalJoinReq:(long long)arg1;
- (_Bool)sendGuestJoinReq;
- (_Bool)sendPresideTtlReq;
- (_Bool)sendUnPresideReq;
- (_Bool)sendPresideReq;
@end

