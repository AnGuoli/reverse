//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMOnlineMusicDetailTableViewCellDelegate-Protocol.h"
#import "XMRecordBGMusicTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UITableView, UIView, XMAccompanyPlayer, XMNetSoundItem, XMOnlineBGMCategory, XMWifiDownloadView;
@protocol XMRecordBGMusicDelegate;

@interface XMRecordBgMusicSelectViewController : XMBaseVC <UITableViewDataSource, UITableViewDelegate, XMRecordBGMusicTableViewCellDelegate, XMOnlineMusicDetailTableViewCellDelegate>
{
    long long _sections;
    _Bool _disableItunesMusic;
    _Bool _allowMultipleSelection;
    XMOnlineBGMCategory *_musicCategory;
    NSMutableArray *_selectedSongs;
    id <XMRecordBGMusicDelegate> _delegate;
    NSString *_sourceName;
    UITableView *_tableView;
    NSMutableArray *_defaultDataArray;
    NSMutableArray *_itunesDataArray;
    NSMutableArray *_wifiDataArray;
    NSMutableArray *_netDataArray;
    NSMutableArray *_downloadingDataArray;
    NSMutableArray *_localDataArray;
    NSMutableArray *_markedArray;
    XMNetSoundItem *_preListenSound;
    NSTimer *_bgPlayerTime;
    XMAccompanyPlayer *_bgPlayer;
    id _timeObserver;
    XMWifiDownloadView *_wifiDownloadView;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(retain, nonatomic) XMWifiDownloadView *wifiDownloadView; // @synthesize wifiDownloadView=_wifiDownloadView;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) XMAccompanyPlayer *bgPlayer; // @synthesize bgPlayer=_bgPlayer;
@property(retain, nonatomic) NSTimer *bgPlayerTime; // @synthesize bgPlayerTime=_bgPlayerTime;
@property(retain, nonatomic) XMNetSoundItem *preListenSound; // @synthesize preListenSound=_preListenSound;
@property(retain, nonatomic) NSMutableArray *markedArray; // @synthesize markedArray=_markedArray;
@property(retain, nonatomic) NSMutableArray *localDataArray; // @synthesize localDataArray=_localDataArray;
@property(retain, nonatomic) NSMutableArray *downloadingDataArray; // @synthesize downloadingDataArray=_downloadingDataArray;
@property(retain, nonatomic) NSMutableArray *netDataArray; // @synthesize netDataArray=_netDataArray;
@property(retain, nonatomic) NSMutableArray *wifiDataArray; // @synthesize wifiDataArray=_wifiDataArray;
@property(retain, nonatomic) NSMutableArray *itunesDataArray; // @synthesize itunesDataArray=_itunesDataArray;
@property(retain, nonatomic) NSMutableArray *defaultDataArray; // @synthesize defaultDataArray=_defaultDataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) _Bool disableItunesMusic; // @synthesize disableItunesMusic=_disableItunesMusic;
@property(nonatomic) __weak id <XMRecordBGMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedSongs; // @synthesize selectedSongs=_selectedSongs;
@property(retain, nonatomic) XMOnlineBGMCategory *musicCategory; // @synthesize musicCategory=_musicCategory;
- (void).cxx_destruct;
- (void)netSoundDownloadSuccess:(id)arg1;
- (void)netSoundDownloadFail:(id)arg1;
- (void)selectConfirm;
- (void)uploadFiles:(id)arg1;
- (void)deleteNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver;
- (void)addObserver;
- (void)playbackFinished:(id)arg1;
- (double)getCurrentPlayingTime;
- (_Bool)isCurrentlyPlayingItem:(id)arg1;
- (double)availableDuration;
- (void)stopPlay;
- (void)postAddStatistic;
- (_Bool)isSoundSelected:(id)arg1;
- (void)checkSound:(id)arg1;
- (void)addSelectedStatusRecord:(id)arg1 andWillSelected:(_Bool)arg2;
- (void)addPlayStatusRecord:(id)arg1 andWillPlay:(_Bool)arg2;
- (void)preListenSound:(id)arg1;
- (void)p_handleDeleteAllLocalSongs;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configMultiSelectCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadLocalData;
- (void)loadWifiSoundItems;
- (void)loadItunesSounds;
- (void)loadLocalNetSounds;
- (void)loadDownloadingNetSounds;
- (void)updateLocalData;
- (void)loadDefaultSounds;
- (void)onCancel;
- (void)onDownloadBGMusic;
- (void)onBack;
- (void)didReceiveMemoryWarning;
- (void)showMusicTooLargeAlert;
- (void)addRightNavBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMultipleSelection:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

