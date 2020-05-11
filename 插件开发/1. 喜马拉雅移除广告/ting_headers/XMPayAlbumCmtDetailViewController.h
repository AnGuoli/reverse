//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMActionSheetViewDelegate-Protocol.h"
#import "XMPayAlbumCommentCellDelegate-Protocol.h"
#import "XMPayCommentInputViewDelegate-Protocol.h"
#import "XMPayCommentReplyCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMActionSheetView, XMAlbumItem, XMPayCommentInputView, XMPayCommentItem, XMServerPostRequest, XMServerRequest;

@interface XMPayAlbumCmtDetailViewController : XMSubLevelViewController <XMPayCommentInputViewDelegate, XMPayAlbumCommentCellDelegate, XMPayCommentReplyCellDelegate, XMActionSheetViewDelegate>
{
    long long _pageId;
    long long _maxPageId;
    XMPayCommentItem *commentItem;
    XMAlbumItem *albumItem;
    NSMutableArray *dataArray;
    XMPayCommentInputView *inputView;
    XMActionSheetView *sheetView;
    NSString *postMessage;
    XMServerRequest *_dataRequest;
    XMServerPostRequest *_sendPostRequest;
    XMServerPostRequest *_deleteRequest;
    XMServerRequest *_detailRequest;
}

@property(retain, nonatomic) XMServerRequest *detailRequest; // @synthesize detailRequest=_detailRequest;
@property(retain, nonatomic) XMServerPostRequest *deleteRequest; // @synthesize deleteRequest=_deleteRequest;
@property(retain, nonatomic) XMServerPostRequest *sendPostRequest; // @synthesize sendPostRequest=_sendPostRequest;
@property(retain, nonatomic) XMServerRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSString *postMessage; // @synthesize postMessage;
@property(retain, nonatomic) XMActionSheetView *sheetView; // @synthesize sheetView;
@property(retain, nonatomic) XMPayCommentInputView *inputView; // @synthesize inputView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem;
@property(retain, nonatomic) XMPayCommentItem *commentItem; // @synthesize commentItem;
- (void).cxx_destruct;
- (void)openUserPageWithComment:(id)arg1;
- (void)onHeadButtonClick:(id)arg1;
- (void)onLikeWillClick:(id)arg1;
- (void)onHeadClick:(id)arg1;
- (void)onSendFailed:(id)arg1;
- (void)onSendFinished:(id)arg1;
- (void)onSendComment:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reportReply:(id)arg1;
- (void)deleteReply:(id)arg1;
- (void)onRequestDataFailed:(id)arg1;
- (void)onRequestDataFinished:(id)arg1;
- (void)requestCommentData:(long long)arg1;
- (void)onRequestDetailFailed:(id)arg1;
- (void)onRequestDetailFinished:(id)arg1;
- (void)requestDetailData;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)onDeleteFailed:(id)arg1;
- (void)onDeleteFinished:(id)arg1;
- (void)deleteComment;
- (void)reportAction;
- (void)actionSheetDismiss:(id)arg1;
- (void)more;
- (void)addRightButton;
- (void)customInitialize;
- (void)dealloc;
- (id)initWithCommentItem:(id)arg1 album:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

