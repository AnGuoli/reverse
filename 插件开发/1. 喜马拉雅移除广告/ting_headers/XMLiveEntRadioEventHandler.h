//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveRoomEntNormalEventHandler.h"

#import "XMLiveEntPlayGroundNormalDelegate-Protocol.h"
#import "XMLiveEntRadioAnchorMicListDelegate-Protocol.h"
#import "XMLiveGuardianMemberListDelegate-Protocol.h"
#import "XMLiveMyGuardianListViewDelegate-Protocol.h"
#import "XMLiveRoomEntMicManagerDelegate-Protocol.h"

@class NSString, XMLiveEntMicFloatPanel, XMLiveEntRadioAnchorMicListView, XMLiveEntRadioAudienceMicListView;

@interface XMLiveEntRadioEventHandler : XMLiveRoomEntNormalEventHandler <XMLiveEntPlayGroundNormalDelegate, XMLiveRoomEntMicManagerDelegate, XMLiveEntRadioAnchorMicListDelegate, XMLiveGuardianMemberListDelegate, XMLiveMyGuardianListViewDelegate>
{
    XMLiveEntRadioAnchorMicListView *_anchorMicList;
    XMLiveEntRadioAudienceMicListView *_audienceMicList;
    XMLiveEntMicFloatPanel *_entMicFloatPanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveEntMicFloatPanel *entMicFloatPanel; // @synthesize entMicFloatPanel=_entMicFloatPanel;
@property(retain, nonatomic) XMLiveEntRadioAudienceMicListView *audienceMicList; // @synthesize audienceMicList=_audienceMicList;
@property(retain, nonatomic) XMLiveEntRadioAnchorMicListView *anchorMicList; // @synthesize anchorMicList=_anchorMicList;
- (void)guardianMemberListDidClickRank:(id)arg1;
- (void)entPlayGroundDidClickFansBoard:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 fansInfo:(id)arg5;
- (void)entPlayGroundDidLongPressUnit:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 index:(long long)arg5;
- (void)entPlayGroundDidClickUnit:(id)arg1 status:(long long)arg2 roleType:(long long)arg3 userInfo:(id)arg4 index:(long long)arg5;
- (void)myGuardianListViewDidClickAnchorWithItem:(id)arg1;
- (void)myGuardianListViewDidClickOpenGuardian:(id)arg1 anchorUid:(long long)arg2;
- (void)entRankPopViewDidClickOpenGuardian:(id)arg1 onceOpen:(_Bool)arg2;
- (void)entMicFloatPanelDidClick;
- (void)entMicMgrOnlineUserSync:(id)arg1 selfOnMic:(_Bool)arg2;
- (void)entRadioAudienceMicListDidClickLeaveMic:(id)arg1 roleType:(int)arg2;
- (void)entRadioAudienceMicListDidClickJoinMic:(id)arg1 roleType:(int)arg2;
- (void)entAnchorMicListDidClickHangUpJoinMic:(id)arg1 userId:(long long)arg2;
- (void)entAnchorMicListDidClickAcceptJoinMic:(id)arg1 userId:(long long)arg2;
- (id)anchorMicFloatPanel;
- (id)showAnchorMicListPanel;
- (id)showAudienceMicListPanel:(long long)arg1;
- (id)transformOnlineUserRspToLiveUser:(id)arg1;
- (void)customInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

