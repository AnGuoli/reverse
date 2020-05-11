//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileDetailLogicController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "IFavCdnDownloadMgrExt-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface FavFileDetailLogicController : FileDetailLogicController <IFavCdnDownloadMgrExt, FavForwardLogicDelegate, WCActionSheetDelegate, IFavoritesExt, WCFacadeExt>
{
    FavoritesItem *_favItem;
    FavoritesItemDataField *_favData;
}

@property(retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData=_favData;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getFavForawrdViewController;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnFileDelete;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(int)arg2 FinishLength:(int)arg3;
- (id)getMusicLocalFileDataUnit;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getDataSizeDiscription:(unsigned int)arg1;
- (_Bool)performCustomizeAction:(id)arg1;
- (void)customizeActionsForActionSheet:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)OnForwordWithViewController:(id)arg1;
- (_Bool)canAddToFavorites;
- (void)dealloc;
- (void)stopDownload;
- (id)getFileExt;
- (unsigned int)GetPreviewType;
- (id)GetFilePath;
- (id)GetFileName;
- (unsigned long long)GetFileSize;
- (void)startDownload;
- (void)onEnterTask:(id)arg1 FromFloatingView:(id)arg2 EnterTaskScene:(int)arg3;
- (_Bool)restoreDataFromMinimizeTaskData:(id)arg1;
- (id)getMinimizeKey;
- (id)getHandOffItem;
- (id)getMinimizeTaskData;
- (_Bool)isMinimizeEnable;
- (_Bool)isDownloading;
- (id)initWithTask:(id)arg1;
- (id)initWithFavItem:(id)arg1 fileData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

