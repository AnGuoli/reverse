//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "WBGroupHeaderViewAdapterDelegate-Protocol.h"
#import "WBGroupMemberViewControllerProtocol-Protocol.h"
#import "WBGroupSearchViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WBDirectionalGroup, WBGroupHeaderViewAdapter, WBGroupSearchViewController, WBProgressHUD;
@protocol WBGroupMemberEventHandlerProtocol;

@interface WBGroupMemberViewController : WBViewController <WBGroupHeaderViewAdapterDelegate, WBGroupSearchViewControllerDelegate, WBGroupMemberViewControllerProtocol>
{
    int _groupManagementType;
    _Bool _firstDelete;
    _Bool _editing;
    _Bool _hasMore;
    unsigned long long _currPage;
    id <WBGroupMemberEventHandlerProtocol> _eventHandler;
    WBGroupHeaderViewAdapter *_headerViewAdapter;
    NSArray *_gridViewDataSource;
    NSArray *_contacts;
    WBProgressHUD *_progressHUD;
    _Bool _isSearch;
    _Bool _singleUserIsOwner;
    id _loadOperationHandle;
    WBGroupSearchViewController *_groupSearchVC;
    _Bool _networkOperationHaveDone;
    _Bool _isKickOutWithRecall;
    int _memberType;
    WBDirectionalGroup *_group;
}

@property(nonatomic) _Bool isKickOutWithRecall; // @synthesize isKickOutWithRecall=_isKickOutWithRecall;
@property(readonly, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) WBGroupSearchViewController *groupSearchVC; // @synthesize groupSearchVC=_groupSearchVC;
@property(readonly, nonatomic) int memberType; // @synthesize memberType=_memberType;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) WBGroupHeaderViewAdapter *headerViewAdapter; // @synthesize headerViewAdapter=_headerViewAdapter;
@property(retain, nonatomic) id <WBGroupMemberEventHandlerProtocol> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)kickOutAndRecallLog:(_Bool)arg1;
- (id)adjustMemeberOrderWithGroup:(id)arg1 contacts:(id)arg2;
- (void)setHasMore:(_Bool)arg1;
- (_Bool)hasMore;
- (void)groupHeaderVieWAdapterDidTriggleLoadingMore:(id)arg1;
- (void)_reloadContactsWithGroupID:(id)arg1 contactIDArray:(id)arg2 limit:(long long)arg3;
- (void)updateContactsCacheFromContactsPicker:(id)arg1;
- (void)onRemoveContacts:(id)arg1;
- (void)removeContactFromLocal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeContactFromServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupSearchViewControllerDidDismiss;
- (void)didPressActionButtonCell:(id)arg1 action:(int)arg2 contact:(id)arg3 userinfo:(id)arg4;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)removeContactsFromGridViewAtIndex:(long long)arg1;
- (void)deleteCellWithContact:(id)arg1;
- (void)selectCellWithContact:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (_Bool)editing;
- (void)resetPageIndex;
- (void)saveContacts:(id)arg1;
- (void)setGridViewDataSource:(id)arg1;
- (id)getGridViewDataSource;
- (void)_showKickOutOptionWithContact:(id)arg1;
- (_Bool)shouldConfirmBeforeDeleteContact;
- (void)dismissTips;
- (void)showErrorTipsText:(id)arg1;
- (void)showErrorTips:(id)arg1;
- (void)showLoadingTips:(id)arg1;
- (long long)getUserCount;
- (_Bool)isSuperManager;
- (_Bool)isMyAffiliatedGroupAndGroupMember;
- (_Bool)isGroupManager;
- (_Bool)isGroupOwner;
- (_Bool)singleUserIsOwner;
- (id)getGroup;
- (void)viewWillLayoutSubviews;
- (void)showMoreContacts;
- (_Bool)networkOperationHaveDone;
- (void)setNetWorkOperationHaveDone:(_Bool)arg1;
- (void)loadNicknameInGroupForContacts:(id)arg1;
- (void)fetchContactsFromServer;
- (void)loadContactsFromLocal;
- (long long)contactsLimitForNLine:(long long)arg1;
- (void)refreshMemberContacts;
- (void)removeObservers;
- (void)registerObservers;
- (_Bool)panToNavigation;
- (void)onRightBarButtonItemPressed;
- (void)showRightBarButtonItem:(_Bool)arg1;
- (_Bool)firstDeleteFromCache;
- (void)loadSubviews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)moduleID;
- (void)configure;
- (id)initWithGroup:(id)arg1 groupType:(int)arg2 memberType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

