//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class NSMutableArray, XMAlbumItem;

@interface XMSoundSortViewController : XMSubLevelViewController
{
    _Bool _didChangeList;
    _Bool _didShowTips;
    long long _sourceType;
    XMAlbumItem *_albumItem;
    NSMutableArray *_sounds;
    CDUnknownBlockType _sortFinished;
}

@property(copy, nonatomic) CDUnknownBlockType sortFinished; // @synthesize sortFinished=_sortFinished;
@property(retain, nonatomic) NSMutableArray *sounds; // @synthesize sounds=_sounds;
@property(nonatomic) __weak XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (long long)cellType;
- (void)onRightBtnClicked:(id)arg1;
- (void)onLeftBtnClicked:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadForSoundsMaybeChanged;
- (void)initRightButton;
- (void)initLeftButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

