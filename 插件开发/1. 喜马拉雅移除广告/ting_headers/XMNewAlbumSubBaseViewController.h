//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

@class NSDictionary, NSMutableArray, UIView, XMAlbumItem, XMNewAlbumBusinessSetsModel;
@protocol XMNewAlbumTableViewDidScrollProtocol;

@interface XMNewAlbumSubBaseViewController : XMBaseViewController
{
    _Bool _hasFirstLoadData;
    XMAlbumItem *_albumItem;
    XMNewAlbumBusinessSetsModel *_albumBusinessSetsItem;
    double _offsetY;
    double _lastOffsetY;
    double _currentOffsetY;
    id <XMNewAlbumTableViewDidScrollProtocol> _delegate;
    NSDictionary *_albumInfo;
    NSMutableArray *_refreshImages;
    UIView *_bottomView;
    UIView *_noMoreDataView;
}

@property(nonatomic) _Bool hasFirstLoadData; // @synthesize hasFirstLoadData=_hasFirstLoadData;
@property(retain, nonatomic) UIView *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSMutableArray *refreshImages; // @synthesize refreshImages=_refreshImages;
@property(retain, nonatomic) NSDictionary *albumInfo; // @synthesize albumInfo=_albumInfo;
@property(nonatomic) __weak id <XMNewAlbumTableViewDidScrollProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) XMNewAlbumBusinessSetsModel *albumBusinessSetsItem; // @synthesize albumBusinessSetsItem=_albumBusinessSetsItem;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (void)reloadData;
- (void)firstLoadData;
- (double)extraOffset;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumItem:(id)arg1;
- (void)dealloc;

@end

