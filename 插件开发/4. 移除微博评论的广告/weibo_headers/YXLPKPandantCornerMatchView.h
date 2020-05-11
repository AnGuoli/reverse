//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class LOTAnimationView, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, YXLiveTimerNew, YXLiveUserView, YXPKUser;
@protocol YXLPKPandantCornerMatchViewDelegat;

@interface YXLPKPandantCornerMatchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool isFirst;
    _Bool isLaunching;
    _Bool isInviting;
    _Bool _isAnchor;
    id <YXLPKPandantCornerMatchViewDelegat> _delegate;
    UIView *_recordInfoView;
    UICollectionView *_recordCollection;
    UILabel *_anchorNameLabel;
    UIImageView *_recordLevelImgView;
    YXLiveUserView *_anchorHeadView;
    NSMutableArray *_dataArray;
    UIView *_invitedView;
    YXLiveUserView *_inviterHeadView;
    UILabel *_inviterNameLabel;
    UIImageView *_levelIconView;
    UILabel *_inviteContentLabel;
    UIButton *_acceptPKBtn;
    UIButton *_refusePKBtn;
    UILabel *_refuseCountDownLabel;
    UIView *_launchView;
    LOTAnimationView *_animationView;
    UIImageView *_seasonImgView;
    UILabel *_pkTitleLabel;
    UILabel *_seasonNameLabel;
    UILabel *_legLabel;
    UILabel *_statusLabel;
    UIButton *_launchPKBtn;
    UIImageView *_bgImgView;
    UIButton *_maskView;
    YXLiveTimerNew *_launchTimer;
    YXPKUser *_anchorUser;
    long long _countDown;
}

@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) YXPKUser *anchorUser; // @synthesize anchorUser=_anchorUser;
@property(retain, nonatomic) YXLiveTimerNew *launchTimer; // @synthesize launchTimer=_launchTimer;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIButton *launchPKBtn; // @synthesize launchPKBtn=_launchPKBtn;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *legLabel; // @synthesize legLabel=_legLabel;
@property(retain, nonatomic) UILabel *seasonNameLabel; // @synthesize seasonNameLabel=_seasonNameLabel;
@property(retain, nonatomic) UILabel *pkTitleLabel; // @synthesize pkTitleLabel=_pkTitleLabel;
@property(retain, nonatomic) UIImageView *seasonImgView; // @synthesize seasonImgView=_seasonImgView;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *launchView; // @synthesize launchView=_launchView;
@property(retain, nonatomic) UILabel *refuseCountDownLabel; // @synthesize refuseCountDownLabel=_refuseCountDownLabel;
@property(retain, nonatomic) UIButton *refusePKBtn; // @synthesize refusePKBtn=_refusePKBtn;
@property(retain, nonatomic) UIButton *acceptPKBtn; // @synthesize acceptPKBtn=_acceptPKBtn;
@property(retain, nonatomic) UILabel *inviteContentLabel; // @synthesize inviteContentLabel=_inviteContentLabel;
@property(retain, nonatomic) UIImageView *levelIconView; // @synthesize levelIconView=_levelIconView;
@property(retain, nonatomic) UILabel *inviterNameLabel; // @synthesize inviterNameLabel=_inviterNameLabel;
@property(retain, nonatomic) YXLiveUserView *inviterHeadView; // @synthesize inviterHeadView=_inviterHeadView;
@property(retain, nonatomic) UIView *invitedView; // @synthesize invitedView=_invitedView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) YXLiveUserView *anchorHeadView; // @synthesize anchorHeadView=_anchorHeadView;
@property(retain, nonatomic) UIImageView *recordLevelImgView; // @synthesize recordLevelImgView=_recordLevelImgView;
@property(retain, nonatomic) UILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) UICollectionView *recordCollection; // @synthesize recordCollection=_recordCollection;
@property(retain, nonatomic) UIView *recordInfoView; // @synthesize recordInfoView=_recordInfoView;
@property(nonatomic) __weak id <YXLPKPandantCornerMatchViewDelegat> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)startMatchingLOTAnimation;
- (void)hideMatchingLOTAnimation;
- (void)setAttributedTextLineSpacing:(float)arg1 label:(id)arg2;
- (void)matchViewTapClick:(id)arg1;
- (void)updateInviteCoundTimeLabel:(_Bool)arg1;
- (void)updateLaunchPkBtnTitle:(_Bool)arg1;
- (void)refusePKAction:(id)arg1;
- (void)acceptPKAction:(id)arg1;
- (void)launchPKAction:(id)arg1;
- (void)timeHandler;
- (void)stopTime;
- (void)startTime;
- (void)invitedPKWithUserInfo:(id)arg1 PKContent:(id)arg2;
- (void)updatePandantMatchFailStyle;
- (void)showRcordInfoView:(id)arg1;
- (void)updateViewStyleWithSeasonUrl:(id)arg1 anchor:(id)arg2 isAnchor:(_Bool)arg3 isFirst:(_Bool)arg4;
- (void)updateLaunchViewHiddenOrShow;
- (void)recordInfoViewUpdateConstraints;
- (void)invitedViewUpdateConstraints;
- (void)launchViewUpdateConstraints;
- (void)viewUpdateConstraints;
- (void)initRecordInfoView;
- (void)initInviteView;
- (void)initLaunchView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

