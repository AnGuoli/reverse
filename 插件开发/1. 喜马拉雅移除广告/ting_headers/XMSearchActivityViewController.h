//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentBaseCtrl.h"

@class NSString, UIButton, UIImageView, UILabel, XMAVPlayerView, XMCommentInputBar, XMSearchDirectModel;

@interface XMSearchActivityViewController : XMCommentBaseCtrl
{
    _Bool _isLiked;
    NSString *_fromSource;
    NSString *_searchWord;
    NSString *_searchID;
    long long _totalCommentCount;
    long long _likeCount;
    CDUnknownBlockType _commentCountDidChangeBlock;
    XMSearchDirectModel *_model;
    XMAVPlayerView *_playerView;
    UIImageView *_playIcon;
    UIImageView *_loadingView;
    UIButton *_favButton;
    UIButton *_commentButton;
    UILabel *_favLabel;
    UILabel *_commentLabel;
    XMCommentInputBar *_inputBar;
}

@property(retain, nonatomic) XMCommentInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *favLabel; // @synthesize favLabel=_favLabel;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) XMAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) XMSearchDirectModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType commentCountDidChangeBlock; // @synthesize commentCountDidChangeBlock=_commentCountDidChangeBlock;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) long long totalCommentCount; // @synthesize totalCommentCount=_totalCommentCount;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
- (void).cxx_destruct;
- (void)setLabelCount;
- (void)favAction;
- (void)doubleTapAction;
- (void)commentAction:(_Bool)arg1;
- (void)didClickCommentButton;
- (void)requestDetail;
- (void)appDidEnterBackground;
- (void)startPlayLoading;
- (void)playerStatusChangedToPlay:(_Bool)arg1;
- (void)playerViewDidClick;
- (void)actionButtonDidClick;
- (void)backDidClick;
- (void)shareDidClick;
- (void)commentInputBarDidBeTapped:(id)arg1;
- (void)setupPlayView;
- (void)setupBackgroundView;
- (void)setLongViewCommentBar:(id)arg1;
- (void)setupLongBackgroundView;
- (void)setupBottomPannel;
- (void)setupNav;
- (void)setSubViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDirectModel:(id)arg1;
- (void)dealloc;

@end

