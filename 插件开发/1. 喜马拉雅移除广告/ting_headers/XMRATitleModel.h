//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMNowPlayingCellModel.h"

@class XMAlbumItem, XMSoundItem;

@interface XMRATitleModel : XMNowPlayingCellModel
{
    _Bool _isShowMore;
    _Bool _isShow;
    XMAlbumItem *_album;
    XMSoundItem *_sound;
    CDUnknownBlockType _showMore;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isShowMore; // @synthesize isShowMore=_isShowMore;
@property(copy, nonatomic) CDUnknownBlockType showMore; // @synthesize showMore=_showMore;
@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;

@end

