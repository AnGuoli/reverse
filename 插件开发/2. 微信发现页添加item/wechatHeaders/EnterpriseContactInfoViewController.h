//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseMemberViewDelegate-Protocol.h"
#import "IEnterpriseContactMgrExt-Protocol.h"
#import "IEnterpriseGroupMgrExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CEnterpriseContact, MMTableViewInfo, NSMutableArray, NSString;

@interface EnterpriseContactInfoViewController : MMUIViewController <MMWebViewDelegate, EnterpriseMemberViewDelegate, WCActionSheetDelegate, IEnterpriseGroupMgrExt, IEnterpriseContactMgrExt>
{
    CEnterpriseContact *_enterpriseContact;
    NSString *_myUserName;
    NSMutableArray *_memberDataItemList;
    NSMutableArray *_memberViewList;
    _Bool _isMuteChanged;
    _Bool _isFavoriteChanged;
    _Bool _isTopChanged;
    _Bool _isChatStatusNotifyOpen;
    _Bool _isFavorite;
    _Bool _isTop;
    _Bool _isDeleteButtonHidden;
    _Bool _chatConfig;
    MMTableViewInfo *_tableViewInfo;
    unsigned int _colCount;
}

- (void).cxx_destruct;
- (void)onUpdateEnterpriseGroupName:(id)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)onEnterpriseMemberViewAdd:(id)arg1;
- (void)onEnterpriseMemberViewDelete:(id)arg1;
- (void)onEnterpriseMemberHeadImageLongPress:(id)arg1;
- (void)onEnterpriseMemberHeadImageClick:(id)arg1;
- (_Bool)isContactInRoomMember:(id)arg1;
- (void)switchDeleteButtonHidden;
- (void)updateDeleteButtonHidden:(_Bool)arg1;
- (void)enterEnterpriseChat:(id)arg1;
- (void)updateContactSetting;
- (void)setTopStatus:(id)arg1;
- (void)setFavStatus:(id)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)openEditTitle;
- (void)quitChatRoom;
- (void)onQuitButtonClicked:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeMemberCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (struct WCTableViewSectionManager *)makeMemberListSection;
- (struct WCTableViewSectionManager *)makeSettingSection;
- (struct WCTableViewSectionManager *)makeChatRoomSection;
- (void)reloadTableViewInfo;
- (void)updateTableFooterView;
- (void)updateTitleView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableViewInfo;
- (void)initData;
- (void)dealloc;
- (id)initWithEnterpriseContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

