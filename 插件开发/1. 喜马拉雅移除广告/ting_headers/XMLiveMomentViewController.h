//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMLiveDynamicItemCellDelegate-Protocol.h"
#import "XMLiveHomeCollectionCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel;

@interface XMLiveMomentViewController : XMBaseTabelVC <XMLiveDynamicItemCellDelegate, XMLiveHomeCollectionCellDelegate>
{
    _Bool _hasFollowAnchor;
    NSMutableArray *_dataArray;
    NSMutableArray *_recommendArray;
    UIButton *_loginBtn;
    UILabel *_noteLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool hasFollowAnchor; // @synthesize hasFollowAnchor=_hasFollowAnchor;
- (_Bool)shouldShowNoNetView;
- (id)viewHoldingEmptyView;
- (_Bool)shouldShowEmptyView;
- (void)onAvatarViewDidClick:(id)arg1;
- (void)onCollectionViewDidClick:(id)arg1;
- (void)headImageDidClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestRecommendData;
- (void)requestAllFollowedAnchorData:(CDUnknownBlockType)arg1;
- (void)pullToRefresh;
- (void)changeFollowStateNotification:(id)arg1;
- (void)onLoginSuccessNotification:(id)arg1;
- (void)onLoginBtnClick:(id)arg1;
- (void)configCollectionHeaderView;
- (void)reloadTableViewData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

