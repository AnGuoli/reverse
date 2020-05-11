//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ENTBaseWaitUser, UIButton, UILabel, XMWebImageView;
@protocol XMLiveEntAnchorMicListCellDelegate;

@interface XMLiveEntAnchorMicListCell : UITableViewCell
{
    _Bool _showGuardian;
    int _userType;
    id <XMLiveEntAnchorMicListCellDelegate> _delegate;
    long long _index;
    ENTBaseWaitUser *_userInfo;
    XMWebImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_micNoLabel;
    UILabel *_listNoLabel;
    UIButton *_connectBtn;
    UIButton *_disConnectBtn;
    UIButton *_guardianInfoBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *guardianInfoBtn; // @synthesize guardianInfoBtn=_guardianInfoBtn;
@property(retain, nonatomic) UIButton *disConnectBtn; // @synthesize disConnectBtn=_disConnectBtn;
@property(retain, nonatomic) UIButton *connectBtn; // @synthesize connectBtn=_connectBtn;
@property(retain, nonatomic) UILabel *listNoLabel; // @synthesize listNoLabel=_listNoLabel;
@property(retain, nonatomic) UILabel *micNoLabel; // @synthesize micNoLabel=_micNoLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) XMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(nonatomic) _Bool showGuardian; // @synthesize showGuardian=_showGuardian;
@property(retain, nonatomic) ENTBaseWaitUser *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <XMLiveEntAnchorMicListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDisconnect:(id)arg1;
- (void)onConnect:(id)arg1;
- (void)initBase;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

