//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "YXGiftPanelNumberSelectViewDelegate-Protocol.h"
#import "YXGiftPanelPKSendViewDelegate-Protocol.h"
#import "YXLivePackGiftViewCellDelegate-Protocol.h"
#import "YXRepeatBtnDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UIImageView, UIPageControl, YXButton, YXGiftPanelNumberSelectView, YXGiftPanelPKSendView, YXGiftPanelRepeatSendBtn, YXLiveCollcetionViewPagedFlowLayout, YXLiveNoDataView, YXLivePackGiftModel, YXRepeatBtn;
@protocol YXLivePackGiftViewDelegate;

@interface YXLivePackGiftView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, YXRepeatBtnDelegate, YXGiftPanelNumberSelectViewDelegate, YXGiftPanelPKSendViewDelegate, YXLivePackGiftViewCellDelegate>
{
    _Bool _backgroundInteractionEnabled;
    _Bool _shouldShowDoubleHitTips;
    _Bool _pkStatus;
    id <YXLivePackGiftViewDelegate> _delegate;
    NSArray *_dataSource;
    NSMutableDictionary *_giftSelectNumbers;
    NSMutableDictionary *_giftPKSelectDict;
    YXLivePackGiftModel *_selectedModel;
    UIView *_contentView;
    YXLiveCollcetionViewPagedFlowLayout *_popViewLayout;
    YXRepeatBtn *_repeatBtn;
    UIView *_balanceView;
    UIImageView *_bgImageView;
    UICollectionView *_mainCollectionView;
    UIPageControl *_pageController;
    YXButton *_sendBtn;
    YXLiveNoDataView *_noDataView;
    UIView *_bottomContainerView;
    YXGiftPanelNumberSelectView *_numberSelectView;
    YXGiftPanelPKSendView *_pkSendView;
    YXGiftPanelRepeatSendBtn *_panelRepeatSendBtn;
    NSMutableDictionary *_longLinkShowedGifts;
}

@property(retain, nonatomic) NSMutableDictionary *longLinkShowedGifts; // @synthesize longLinkShowedGifts=_longLinkShowedGifts;
@property(retain, nonatomic) YXGiftPanelRepeatSendBtn *panelRepeatSendBtn; // @synthesize panelRepeatSendBtn=_panelRepeatSendBtn;
@property(retain, nonatomic) YXGiftPanelPKSendView *pkSendView; // @synthesize pkSendView=_pkSendView;
@property(retain, nonatomic) YXGiftPanelNumberSelectView *numberSelectView; // @synthesize numberSelectView=_numberSelectView;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) YXLiveNoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) _Bool pkStatus; // @synthesize pkStatus=_pkStatus;
@property(nonatomic) __weak YXButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(nonatomic) __weak UIPageControl *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) __weak UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *balanceView; // @synthesize balanceView=_balanceView;
@property(nonatomic) __weak YXRepeatBtn *repeatBtn; // @synthesize repeatBtn=_repeatBtn;
@property(nonatomic) __weak YXLiveCollcetionViewPagedFlowLayout *popViewLayout; // @synthesize popViewLayout=_popViewLayout;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) YXLivePackGiftModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) NSMutableDictionary *giftPKSelectDict; // @synthesize giftPKSelectDict=_giftPKSelectDict;
@property(retain, nonatomic) NSMutableDictionary *giftSelectNumbers; // @synthesize giftSelectNumbers=_giftSelectNumbers;
@property(nonatomic) _Bool shouldShowDoubleHitTips; // @synthesize shouldShowDoubleHitTips=_shouldShowDoubleHitTips;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool backgroundInteractionEnabled; // @synthesize backgroundInteractionEnabled=_backgroundInteractionEnabled;
@property(nonatomic) __weak id <YXLivePackGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)packGiftViewCell:(id)arg1 longressed:(id)arg2;
- (void)showLongLinkLabelIfNeededAtIndexPath:(id)arg1 forCell:(id)arg2;
- (void)checkIfNeedShowLongPressTips;
- (void)updatePackPopViewPKSelectMemberViewDidSelectMember:(id)arg1 pkStatus:(_Bool)arg2;
- (void)updateGiftPopViewPKStatusWithPkStatus:(_Bool)arg1 selfModel:(id)arg2 otherModel:(id)arg3;
- (void)updatePackPopViewPKStatusWithPkStatus:(_Bool)arg1 selfModel:(id)arg2 otherModel:(id)arg3;
- (void)clearTempCache;
- (void)showTips:(id)arg1;
- (void)forceUpdateConstraints;
- (void)updatePanelRepeatBtnLayout;
- (void)updateLayoutForRepeatBtnDismiss;
- (void)updateLayoutForReatBtnShow;
- (void)updateGiftPanelRepeatBtnForSelectModel;
- (id)livePackAmountConfigModelToConfigModel:(id)arg1;
- (void)scrollNumberSelectorToIndexAfterReloaded:(unsigned long long)arg1;
- (unsigned long long)currentSelectAmout;
- (void)updateNumberSelectorLayout;
- (void)showTipsFirstly;
- (void)checkShouldShowTipsFirstTime;
- (void)updateNumberSelectorForSelectedModel;
- (void)giftPanelNumberSelectView:(id)arg1 selectNumer:(unsigned long long)arg2 selectIndex:(unsigned long long)arg3;
- (void)savePKSelect:(_Bool)arg1;
- (void)resetPkSendBtn;
- (void)updatePKSendViewLayout;
- (void)updatePKSendBtnStatus;
- (_Bool)pkSelectShouldSelectOther;
- (void)giftPanelPKSendView:(id)arg1 sendBtnClickd:(_Bool)arg2;
- (void)handleWithScrollEnded;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)configPageController:(struct CGPoint)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resetSendButton;
- (void)updateSendButtonStatus;
- (void)p_sendBtnScaleAnimation;
- (void)sendGift:(long long)arg1 sendBlock:(CDUnknownBlockType)arg2;
- (void)pathItemBtnOnClick:(id)arg1 amount:(long long)arg2;
- (void)updateCanSendGift:(_Bool)arg1;
- (void)sendGiftAction:(id)arg1;
- (void)setPopcoin:(long long)arg1;
- (void)setGoldcoin:(long long)arg1;
- (void)packViewReloadData;
- (void)getDataSourceError;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_creatNodataView;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

