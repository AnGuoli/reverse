//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "XMSubscribeCardViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel;
@protocol XMSubscribeAlbumViewDelegate;

@interface XMSubscribeAlbumView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, XMSubscribeCardViewDelegate>
{
    _Bool _onShow;
    _Bool _isFromNewAlbum;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
    UIButton *_closeButton;
    UIButton *_showButton;
    UICollectionView *_collectionView;
    long long _albumId;
    unsigned long long _uiStyle;
    id <XMSubscribeAlbumViewDelegate> _delegate;
    NSMutableArray *_albumArray;
    id _superViewController;
    double _topInset;
    struct CGRect _originFrame;
}

+ (void)requestWithAlbumId:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
+ (double)viewHeightB;
+ (double)viewHeightA;
+ (double)viewHeight;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) __weak id superViewController; // @synthesize superViewController=_superViewController;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool isFromNewAlbum; // @synthesize isFromNewAlbum=_isFromNewAlbum;
@property(nonatomic) _Bool onShow; // @synthesize onShow=_onShow;
@property(retain, nonatomic) NSMutableArray *albumArray; // @synthesize albumArray=_albumArray;
@property(nonatomic) __weak id <XMSubscribeAlbumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *showButton; // @synthesize showButton=_showButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)foundSuperViewController;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestStart;
- (void)albumViewClick:(id)arg1;
- (void)subscribeButtonClick:(id)arg1;
- (void)onChangeFavStateFail:(id)arg1;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)showPushAlert;
- (void)forceToShow;
- (void)show:(long long)arg1;
- (void)close;
- (id)initWithFrame:(struct CGRect)arg1 albumId:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 albumId:(long long)arg2 UIStyle:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

