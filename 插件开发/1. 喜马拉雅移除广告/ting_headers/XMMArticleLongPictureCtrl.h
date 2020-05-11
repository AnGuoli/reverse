//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

#import "XMMNodeHandlerDelegate-Protocol.h"

@class CDZButton, NSString, UIImageView, UILabel, UIView, XMMMoment, XMMNodeHandler, XMMSelectableNodeListView, XMWebImageView;

@interface XMMArticleLongPictureCtrl : XMChatBaseScrollVC <XMMNodeHandlerDelegate>
{
    _Bool _isSnapshoting;
    XMMMoment *_moment;
    UIView *_userHolderView;
    XMWebImageView *_userHeaderView;
    UILabel *_userNameLabel;
    XMMSelectableNodeListView *_nodeListView;
    XMMNodeHandler *_nodeHandler;
    UIView *_topHolderView;
    UILabel *_topTipLabel;
    UILabel *_topNameLabel;
    UILabel *_topTimeLabel;
    UIView *_bottomHolderView;
    UILabel *_bottomLabel0;
    UILabel *_bottomLabel1;
    UIImageView *_QRImageView;
    UIView *_shareHolderView;
    CDZButton *_friendButton;
    CDZButton *_weiXinButton;
    CDZButton *_saveButton;
    UIView *_questionHolderView;
    XMWebImageView *_questionHeaderView;
    UILabel *_questionNameLabel;
    UILabel *_questionLabel;
}

@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *questionNameLabel; // @synthesize questionNameLabel=_questionNameLabel;
@property(retain, nonatomic) XMWebImageView *questionHeaderView; // @synthesize questionHeaderView=_questionHeaderView;
@property(retain, nonatomic) UIView *questionHolderView; // @synthesize questionHolderView=_questionHolderView;
@property(retain, nonatomic) CDZButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) CDZButton *weiXinButton; // @synthesize weiXinButton=_weiXinButton;
@property(retain, nonatomic) CDZButton *friendButton; // @synthesize friendButton=_friendButton;
@property(retain, nonatomic) UIView *shareHolderView; // @synthesize shareHolderView=_shareHolderView;
@property(retain, nonatomic) UIImageView *QRImageView; // @synthesize QRImageView=_QRImageView;
@property(retain, nonatomic) UILabel *bottomLabel1; // @synthesize bottomLabel1=_bottomLabel1;
@property(retain, nonatomic) UILabel *bottomLabel0; // @synthesize bottomLabel0=_bottomLabel0;
@property(retain, nonatomic) UIView *bottomHolderView; // @synthesize bottomHolderView=_bottomHolderView;
@property(retain, nonatomic) UILabel *topTimeLabel; // @synthesize topTimeLabel=_topTimeLabel;
@property(retain, nonatomic) UILabel *topNameLabel; // @synthesize topNameLabel=_topNameLabel;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) UIView *topHolderView; // @synthesize topHolderView=_topHolderView;
@property(retain, nonatomic) XMMNodeHandler *nodeHandler; // @synthesize nodeHandler=_nodeHandler;
@property(retain, nonatomic) XMMSelectableNodeListView *nodeListView; // @synthesize nodeListView=_nodeListView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) XMWebImageView *userHeaderView; // @synthesize userHeaderView=_userHeaderView;
@property(retain, nonatomic) UIView *userHolderView; // @synthesize userHolderView=_userHolderView;
@property(retain, nonatomic) XMMMoment *moment; // @synthesize moment=_moment;
- (void).cxx_destruct;
- (void)layoutBottomHolder;
- (void)layoutShareHolder;
- (void)layoutUserHolder;
- (void)layoutQuestionHolder;
- (void)layoutTopHolder;
- (void)viewDidLayoutSubviews;
- (void)configData;
- (id)generateContentViewImage;
- (void)clickSaveButton:(id)arg1;
- (void)clickWeiXinButton:(id)arg1;
- (void)clickFriendButton:(id)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

