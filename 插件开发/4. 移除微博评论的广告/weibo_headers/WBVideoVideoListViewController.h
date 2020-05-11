//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBComposeVideoAlbumViewControllerDelegate-Protocol.h"
#import "WBVideoInfoEditViewControllerDelegate-Protocol.h"
#import "WBVideoVideoListTableViewCellDelegate-Protocol.h"

@class NSString, WBComposeVideoAlbumModel, WBVideoFooterErrorPRLMTableViewWrapper, WBVideoVideoListViewModel;

@interface WBVideoVideoListViewController : WBTableViewController <PRLMTableViewWrapperDelegate, WBVideoVideoListTableViewCellDelegate, WBComposeVideoAlbumViewControllerDelegate, WBVideoInfoEditViewControllerDelegate>
{
    _Bool _showBulletin;
    _Bool _isInAlbum;
    _Bool _needRefreshList;
    _Bool _bulletinEnable;
    WBVideoFooterErrorPRLMTableViewWrapper *_prlmWrapper;
    WBVideoVideoListViewModel *_viewModel;
    WBComposeVideoAlbumModel *_albumModel;
}

@property(nonatomic) _Bool bulletinEnable; // @synthesize bulletinEnable=_bulletinEnable;
@property(nonatomic) _Bool needRefreshList; // @synthesize needRefreshList=_needRefreshList;
@property(nonatomic) _Bool isInAlbum; // @synthesize isInAlbum=_isInAlbum;
@property(retain, nonatomic) WBComposeVideoAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
@property(retain, nonatomic) WBVideoVideoListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WBVideoFooterErrorPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(nonatomic) _Bool showBulletin; // @synthesize showBulletin=_showBulletin;
- (void).cxx_destruct;
- (void)didDeleteVideoNotification:(id)arg1;
- (void)updateVideo:(id)arg1 refreshVisibleCells:(_Bool)arg2 isVisibleCellsRefreshed:(_Bool *)arg3;
- (void)updateVideoAlbumNotification:(id)arg1;
- (void)resetFailedStatusForVideo:(id)arg1;
- (void)videoEditDidFailedNotification:(id)arg1;
- (void)videoEditDidSuccessNotification:(id)arg1;
- (void)videoEditNewEditObjectNotification:(id)arg1;
- (void)removeVideoOutAlbum:(id)arg1;
- (void)deleteVideo:(id)arg1 deleteMblog:(_Bool)arg2;
- (void)showDeleteVideoAlertView:(id)arg1;
- (_Bool)isAlbums:(id)arg1 equlToAlbums:(id)arg2;
- (void)videoAlbumViewController:(id)arg1 didSelectedVideoAlbums:(id)arg2;
- (void)showComposeAlbumViewController:(id)arg1;
- (void)videoInfoEditViewControllerDidPressBackButton:(id)arg1;
- (void)videoInfoEditViewController:(id)arg1 didPressSubmitButtonWithModel:(id)arg2;
- (void)showVideoEditViewController:(id)arg1;
- (id)schemeForVideoModel:(id)arg1;
- (void)showVideoPlayer:(id)arg1;
- (_Bool)canAddToAlbum:(id)arg1;
- (void)videoListCell:(id)arg1 didPressMoreButton:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)didPressLoadMoreFooterView:(id)arg1;
- (void)showNetWorkError:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)refreshIfNeeded;
- (double)desiredBaseContentInsetTop;
- (void)configTableViewInsets;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)analysisParameters;
- (id)uiCode;
- (id)initWithAlbum:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

