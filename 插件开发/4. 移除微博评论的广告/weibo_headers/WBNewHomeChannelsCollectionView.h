//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ChannelsCellCollectionViewDataSource-Protocol.h"
#import "ChannelsCellCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WBGroupCreationAlertViewDelegate-Protocol.h"
#import "WBListViewCollectionHeadViewDelegate-Protocol.h"
#import "WBNewHomeItemCollectionViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionViewFlowLayout, UIImageView, UILabel, UIVisualEffectView, UIWindow, WBAlertController, WBChannelsCollectionView, WBCustomTextInputAlertView, WBProgressHUD, WBRoundedImageView;
@protocol WBNewHomeChannelsCollectionViewDelegate;

@interface WBNewHomeChannelsCollectionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, ChannelsCellCollectionViewDelegate, ChannelsCellCollectionViewDataSource, WBGroupCreationAlertViewDelegate, WBNewHomeItemCollectionViewCellDelegate, WBListViewCollectionHeadViewDelegate>
{
    WBCustomTextInputAlertView *groupCreationAlertView;
    WBProgressHUD *progressHUD;
    UIWindow *popoverWindow;
    UIView *bgMaskView;
    UIVisualEffectView *blurView;
    UIVisualEffectView *vibrancyView;
    UIView *lineView;
    UIView *titleBgView;
    WBRoundedImageView *bottomShadowView;
    _Bool _didChanged;
    _Bool _isShowInSuperView;
    _Bool _showHeightAnimation;
    id <WBNewHomeChannelsCollectionViewDelegate> _delegate;
    NSMutableArray *_allDataArray;
    NSMutableArray *_titleArray;
    NSMutableArray *_normalOccupiedArray;
    NSMutableArray *_totalDataArray;
    long long _groupType;
    unsigned long long _listState;
    CDUnknownBlockType _dissmissBlock;
    UIImageView *_bgView;
    WBChannelsCollectionView *_collectionView;
    UIView *_maskView;
    UICollectionViewFlowLayout *_layout;
    UILabel *_titleLabel;
    UIButton *_editButton;
    NSString *_firstSectionTitle;
    WBAlertController *_alertVC;
}

@property(retain, nonatomic) WBAlertController *alertVC; // @synthesize alertVC=_alertVC;
@property(retain, nonatomic) NSString *firstSectionTitle; // @synthesize firstSectionTitle=_firstSectionTitle;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WBChannelsCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType dissmissBlock; // @synthesize dissmissBlock=_dissmissBlock;
@property(nonatomic) _Bool showHeightAnimation; // @synthesize showHeightAnimation=_showHeightAnimation;
@property(nonatomic) unsigned long long listState; // @synthesize listState=_listState;
@property(nonatomic) _Bool isShowInSuperView; // @synthesize isShowInSuperView=_isShowInSuperView;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool didChanged; // @synthesize didChanged=_didChanged;
@property(retain, nonatomic) NSMutableArray *totalDataArray; // @synthesize totalDataArray=_totalDataArray;
@property(retain, nonatomic) NSMutableArray *normalOccupiedArray; // @synthesize normalOccupiedArray=_normalOccupiedArray;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSMutableArray *allDataArray; // @synthesize allDataArray=_allDataArray;
@property(nonatomic) __weak id <WBNewHomeChannelsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideHint;
- (void)showHint:(id)arg1;
- (void)newHomeItemCollectionViewCellDidClickDelete:(id)arg1;
- (void)groupCreationAlertView:(id)arg1 didFailedToCreateGroupWithName:(id)arg2 error:(id)arg3;
- (void)groupCreationAlertView:(id)arg1 didCreateGroup:(id)arg2;
- (void)collectionViewHeaderEditButtonBePressed:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)dragCellCollectionView:(id)arg1 moveCellFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dragCellWillBeginMove:(id)arg1;
- (void)dragCellCollectionView:(id)arg1 newDataArrayAfterMove:(id)arg2;
- (void)switchCollectionViewCellState:(unsigned long long)arg1;
- (void)channelItemBeClick:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)dataSourceArrayOfCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)editButtonClick;
- (void)reloadWithAllDataArray:(id)arg1 titleArray:(id)arg2 groupType:(long long)arg3;
- (void)reloadCollectionData;
- (void)maskViewBeClick:(id)arg1;
- (void)dismiss;
- (void)dissmiss:(_Bool)arg1;
- (void)updateWithStatusBarFrame:(struct CGRect)arg1;
- (void)show;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

