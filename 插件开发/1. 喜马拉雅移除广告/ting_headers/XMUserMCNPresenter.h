//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMUserMCNAlbumsCellDelegate-Protocol.h"
#import "XMUserMCNMoreAlbumsCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMNRequest, XMTableCellObject, XMUserBlinkPresenter, XMUserMCNAlbumsModel, XMUserViewController;

@interface XMUserMCNPresenter : NSObject <XMUserMCNAlbumsCellDelegate, XMUserMCNMoreAlbumsCellDelegate>
{
    XMUserViewController *_viewController;
    XMUserBlinkPresenter *_blinkPresenter;
    CDUnknownBlockType _shouldReloadBlock;
    XMUserMCNAlbumsModel *_otherModel;
    XMNRequest *_request;
    long long _pageId;
    long long _pageSize;
    long long _totalPages;
    NSMutableArray *_datas;
    NSMutableArray *_cellObjects;
    XMTableCellObject *_moreCellObject;
}

@property(retain, nonatomic) XMTableCellObject *moreCellObject; // @synthesize moreCellObject=_moreCellObject;
@property(retain, nonatomic) NSMutableArray *cellObjects; // @synthesize cellObjects=_cellObjects;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(nonatomic) long long totalPages; // @synthesize totalPages=_totalPages;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) XMUserMCNAlbumsModel *otherModel; // @synthesize otherModel=_otherModel;
@property(copy, nonatomic) CDUnknownBlockType shouldReloadBlock; // @synthesize shouldReloadBlock=_shouldReloadBlock;
@property(nonatomic) __weak XMUserBlinkPresenter *blinkPresenter; // @synthesize blinkPresenter=_blinkPresenter;
@property(nonatomic) __weak XMUserViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)mcnMoreAlbums:(id)arg1;
- (void)mcnAlbums:(id)arg1 didClickMoreWithModel:(id)arg2;
- (void)mcnAlbums:(id)arg1 didClick:(long long)arg2 item:(id)arg3;
- (void)initializeWithDic:(id)arg1;
- (void)shouldReload;
- (void)refresh;
- (void)loadMore;
- (double)cellHeightWithIndexPath:(id)arg1;
- (id)getCategoryCellWithIndexPath:(id)arg1;
- (void)p_handleWithPageId:(long long)arg1 responseObject:(id)arg2;
- (void)p_getDataWithPageId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) long long dataCount;
@property(readonly, nonatomic) _Bool hasData;
- (id)homepagePerson;
- (id)personItem;
- (id)tableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

