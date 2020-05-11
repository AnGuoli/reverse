//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class MMGroupBulletin, NSString, WBGroupBulletinView, WBTableViewEmptyView;
@protocol WBGroupBulletinViewControllerDelegate;

@interface WBGroupBulletinViewController : WBViewController
{
    _Bool _stateIsDelete;
    _Bool _isEditing;
    _Bool _editEnable;
    NSString *_groupID;
    WBGroupBulletinView *_editView;
    id <WBGroupBulletinViewControllerDelegate> _delegate;
    MMGroupBulletin *_bulletin;
    WBTableViewEmptyView *_warningView;
}

@property(retain, nonatomic) WBTableViewEmptyView *warningView; // @synthesize warningView=_warningView;
@property(nonatomic) MMGroupBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(nonatomic) _Bool editEnable; // @synthesize editEnable=_editEnable;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <WBGroupBulletinViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBGroupBulletinView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (_Bool)verifyUrlLegitimacy:(id)arg1;
- (_Bool)judgeEnablePushlishWithContent:(id)arg1 scheme:(id)arg2;
- (void)groupBullentinTextViewDidChange:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)bulletinContentWithIsDeleteBullet:(_Bool)arg1;
- (void)fetchBulletin;
- (void)deleteButtonPressed:(id)arg1;
- (void)publishButtonPressed:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)enabledPushlishBarButton:(_Bool)arg1;
- (id)createBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)configRightNavigationItemWithIsPushlish:(_Bool)arg1;
- (void)configSubviewsFrame;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateBulletinView;
- (void)updateNavigationBar;
- (void)updateUI;
- (void)viewDidLoad;
- (id)initWithGroupID:(id)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

@end

