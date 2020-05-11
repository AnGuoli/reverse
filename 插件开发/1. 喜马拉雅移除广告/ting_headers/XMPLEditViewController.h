//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMActionSheetViewDelegate-Protocol.h"
#import "XMHearListDetailCellDelegate-Protocol.h"
#import "XMPLEditAddAlbumDelegate-Protocol.h"
#import "XMPlayListEditCellDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, UIButton, UIImage, XMActionSheetView, XMNRequest, XMTableViewDataSource, YYLabel;
@protocol XMPLEditViewControllerDelegate;

@interface XMPLEditViewController : XMBaseTabelVC <XMTableViewDelegateProtocol, XMActionSheetViewDelegate, XMPlayListEditCellDelegate, XMPLEditAddAlbumDelegate, XMHearListDetailCellDelegate>
{
    _Bool _isEdit;
    long long _pageId;
    long long _maxPageId;
    long long _totalCount;
    id <XMPLEditViewControllerDelegate> _delegate;
    XMTableViewDataSource *_tableDataSource;
    NSMutableArray *_dataArray;
    NSMutableArray *_sectionArray;
    XMActionSheetView *_sheetView;
    UIImage *_localImage;
    unsigned long long _imageId;
    MBProgressHUD *_hud;
    XMNRequest *_listRequest;
    XMNRequest *_detailRequest;
    XMNRequest *_createRequest;
    XMNRequest *_editRequest;
    long long _hearListId;
    unsigned long long _hearListType;
    NSString *_preListType;
    NSString *_preListName;
    NSString *_preListDescription;
    UIImage *_preListCoverImage;
    UIImage *_preListCoverImageOrignal;
    long long _preListCoverImageId;
    NSMutableArray *_preListActivityInfos;
    NSMutableArray *_addAlbumsArray;
    NSString *_vctitle;
    YYLabel *_titleTail;
    UIButton *_saveButton;
}

@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) YYLabel *titleTail; // @synthesize titleTail=_titleTail;
@property(retain, nonatomic) NSString *vctitle; // @synthesize vctitle=_vctitle;
@property(retain, nonatomic) NSMutableArray *addAlbumsArray; // @synthesize addAlbumsArray=_addAlbumsArray;
@property(retain, nonatomic) NSMutableArray *preListActivityInfos; // @synthesize preListActivityInfos=_preListActivityInfos;
@property(nonatomic) long long preListCoverImageId; // @synthesize preListCoverImageId=_preListCoverImageId;
@property(retain, nonatomic) UIImage *preListCoverImageOrignal; // @synthesize preListCoverImageOrignal=_preListCoverImageOrignal;
@property(retain, nonatomic) UIImage *preListCoverImage; // @synthesize preListCoverImage=_preListCoverImage;
@property(retain, nonatomic) NSString *preListDescription; // @synthesize preListDescription=_preListDescription;
@property(retain, nonatomic) NSString *preListName; // @synthesize preListName=_preListName;
@property(retain, nonatomic) NSString *preListType; // @synthesize preListType=_preListType;
@property(nonatomic) unsigned long long hearListType; // @synthesize hearListType=_hearListType;
@property(nonatomic) long long hearListId; // @synthesize hearListId=_hearListId;
@property(retain, nonatomic) XMNRequest *editRequest; // @synthesize editRequest=_editRequest;
@property(retain, nonatomic) XMNRequest *createRequest; // @synthesize createRequest=_createRequest;
@property(retain, nonatomic) XMNRequest *detailRequest; // @synthesize detailRequest=_detailRequest;
@property(retain, nonatomic) XMNRequest *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) unsigned long long imageId; // @synthesize imageId=_imageId;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(retain, nonatomic) XMActionSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) __weak id <XMPLEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeRecommendContent:(id)arg1 text:(id)arg2 cellObject:(id)arg3;
- (void)XMHearListDetailCellEditRecommend:(id)arg1;
- (void)updateAlbumSectionCount:(long long)arg1;
- (void)deleteItemInlist:(id)arg1;
- (void)XMHearListDetailCellAction:(id)arg1;
- (void)XMPLEditAddAlbums:(id)arg1;
- (void)reloadWithType:(unsigned long long)arg1;
- (void)reloadRows:(id)arg1;
- (void)playListEditAddAlbum:(id)arg1;
- (void)playListEditChooseTagActivity:(id)arg1;
- (void)playListEditInfoChanged:(id)arg1;
- (void)playListEditTitleChanged:(id)arg1;
- (void)playListEditPushSecondPage:(id)arg1;
- (void)playListEditCoverSelected:(id)arg1;
- (void)playListEditTypeSelected:(id)arg1;
- (void)_editPlayListInfo;
- (void)editPlayListInfo;
- (void)editNow;
- (void)_createPlayListInfo;
- (void)createNow;
- (void)uploadArticleGIFOrJPGImageData:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)uploadImage:(id)arg1 isCreate:(_Bool)arg2;
- (void)createPlayListInfo;
- (void)delaySave;
- (void)saveButtonDidClick;
- (void)updateRightButtonStatus;
- (void)addRightButton;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (_Bool)isCreate;
- (void)back;
- (void)initTableDataSource:(unsigned long long)arg1;
- (void)parseObjsWithResponseData:(id)arg1;
- (id)parseListObjsWithResponseData:(id)arg1;
- (void)addLists:(id)arg1 type:(unsigned long long)arg2;
- (void)removeLists:(unsigned long long)arg1;
- (void)fetchDefaultTracks:(long long)arg1;
- (void)loadInfo;
- (void)loadInfoMore;
- (void)fetchDetail;
- (void)loadMore;
- (void)setupTableViewFooter;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)showLink;
- (id)footerView;
- (void)viewDidLoad;
- (id)initWithEditStatus:(_Bool)arg1 listId:(long long)arg2 listType:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

