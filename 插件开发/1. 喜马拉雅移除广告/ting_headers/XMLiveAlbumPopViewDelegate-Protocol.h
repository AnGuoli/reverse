//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPopSubviewDelegate-Protocol.h"

@class XMLiveAlbumItem, XMLiveAlbumPopView;

@protocol XMLiveAlbumPopViewDelegate <XMPopSubviewDelegate>

@optional
- (void)onLiveAlbumPopViewDidNotSave:(XMLiveAlbumPopView *)arg1;
- (void)onLiveAlbumPopView:(XMLiveAlbumPopView *)arg1 didSaveToAlbum:(XMLiveAlbumItem *)arg2;
- (void)onLiveAlbumPopViewAdd:(XMLiveAlbumPopView *)arg1;
@end

