//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "WBContactContactsViewDelegate-Protocol.h"

@class NSArray, NSString, WBDirectionalGroup, WBGroupMembersMemberView;
@protocol WBContactDirectionalGroupMemberViewControllerDelegate;

@interface WBGroupMembersViewController : WBViewController <WBContactContactsViewDelegate>
{
    _Bool _isChooseingGroupMaster;
    WBDirectionalGroup *_group;
    NSArray *_existedAdmins;
    id <WBContactDirectionalGroupMemberViewControllerDelegate> _delegate;
    WBGroupMembersMemberView *_contactsView;
    NSString *_containerid;
    CDUnknownBlockType _callbackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(retain, nonatomic) WBGroupMembersMemberView *contactsView; // @synthesize contactsView=_contactsView;
@property(nonatomic) _Bool isChooseingGroupMaster; // @synthesize isChooseingGroupMaster=_isChooseingGroupMaster;
@property(nonatomic) id <WBContactDirectionalGroupMemberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *existedAdmins; // @synthesize existedAdmins=_existedAdmins;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)contactsView:(id)arg1 didPressAvatarViewOfContact:(id)arg2;
- (void)didEndSearchInContactsView:(id)arg1;
- (void)didBeginSearchInContactsView:(id)arg1;
- (_Bool)hidesNavigationBarWhileSearching;
- (void)configSubviewsFrame;
- (void)dealloc;
- (void)initSubViews;
- (void)defaultSetting;
- (id)uiCode;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

