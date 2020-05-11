//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "XMActionSheetViewDelegate-Protocol.h"
#import "XMMeSoundEditViewControllerDelegate-Protocol.h"
#import "XMMeSoundTableViewCellDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"
#import "XMProgressSoundTableViewCellDelegate-Protocol.h"
#import "XMRecordSaveDelegate-Protocol.h"
#import "XMSoundTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIViewController, XMActionSheetView, XMServerRequest;
@protocol XMMeSoundViewControllerDelegate;

@interface XMMeSoundViewController : XMSubLevelViewController <XMSoundTableViewCellDelegate, XMMeSoundTableViewCellDelegate, XMActionSheetViewDelegate, XMMeSoundEditViewControllerDelegate, XMNoDataTableViewCellDelegate, XMProgressSoundTableViewCellDelegate, XMRecordSaveDelegate, UIActionSheetDelegate>
{
    long long _serverSoundCount;
    long long _currentPage;
    long long _soundTotalCount;
    long long _currentSoundIndex;
    _Bool _hasEverReqResponse;
    XMServerRequest *soundDataRequest;
    XMServerRequest *deleteTrackRequest;
    NSMutableArray *soundList;
    NSMutableArray *serverList;
    long long totleCount;
    UIViewController *_superViewController;
    id <XMMeSoundViewControllerDelegate> _delegate;
    CDUnknownBlockType _didClickCell;
    XMActionSheetView *_sheetView;
    long long _selectedRow;
}

@property(nonatomic) _Bool hasEverReqResponse; // @synthesize hasEverReqResponse=_hasEverReqResponse;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) XMActionSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(copy, nonatomic) CDUnknownBlockType didClickCell; // @synthesize didClickCell=_didClickCell;
@property(nonatomic) __weak id <XMMeSoundViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(nonatomic) long long totleCount; // @synthesize totleCount;
@property(retain, nonatomic) NSMutableArray *serverList; // @synthesize serverList;
@property(retain, nonatomic) NSMutableArray *soundList; // @synthesize soundList;
@property(retain, nonatomic) XMServerRequest *deleteTrackRequest; // @synthesize deleteTrackRequest;
@property(retain, nonatomic) XMServerRequest *soundDataRequest; // @synthesize soundDataRequest;
- (void).cxx_destruct;
- (void)openurl:(id)arg1;
- (void)cellOpenVerifyPage;
- (void)cellOpenUrl:(id)arg1;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)XMMeSoundEditViewControllerDidSuccessUpdateSoundInfo;
- (void)playRecordIndex:(id)arg1 andplay:(_Bool)arg2;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)onDownloadButtonCliked:(id)arg1;
- (void)onEditButtonCliked:(id)arg1;
- (void)onShareButtonCliked:(id)arg1;
- (void)optionActionWithRecord:(id)arg1;
- (void)actionSheetDismiss:(id)arg1;
- (void)soundTableViewCellDidClickMore:(id)arg1;
- (void)onPlayingTrackPaused;
- (void)openSoundState;
- (void)onPlayingTrackChanged;
- (void)recordTanscodeQueryFinished:(id)arg1;
- (void)record:(id)arg1 updateUploadedPercent:(double)arg2;
- (void)recordUploadDidBegan:(id)arg1;
- (void)recordUploadWillBegin:(id)arg1;
- (void)uploadSoundCheckCode:(_Bool)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)needBindPhone:(id)arg1;
- (void)checkCode;
- (void)soundEdit:(id)arg1;
- (void)deleteSoundItem:(id)arg1;
- (void)downloadSound:(id)arg1;
- (void)playerSound:(id)arg1;
- (void)cancelUploadRecord:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)cellNeedRecommendedToVerityWithIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)needShowOPViewFor:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)startQueryTranscodeStateFor:(id)arg1;
- (void)stopAllTranscodeQuery;
- (void)startAllTrancodeQuery;
- (void)reloadData;
- (void)saveServerSoundsData;
- (void)soundDataFailedSelector:(id)arg1;
- (void)soundDataFinishedSelector:(id)arg1;
- (void)doRequestSoundDataForPage:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)resetRecordSaveDelegateToSelf;
- (void)triggerPullToRefresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

