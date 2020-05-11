//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "XMLongPressResponder-Protocol.h"

@class NSString, UILabel, UILongPressGestureRecognizer, XMAlbumCoverImageView, XMImmersionSpecialAlbumItem, XMTableCellObject;
@protocol XMLongPressProtocol;

@interface XMCategoryImmersionSpecialCell : UICollectionViewCell <XMLongPressResponder>
{
    UILongPressGestureRecognizer *_longPress;
    XMAlbumCoverImageView *_albumView;
    long long _wordColor;
    UILabel *_nameLabel;
    XMImmersionSpecialAlbumItem *_immersionAlbumItem;
    id <XMLongPressProtocol> _longPressDelegate;
    XMTableCellObject *_cellObj;
}

@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(nonatomic) __weak id <XMLongPressProtocol> longPressDelegate; // @synthesize longPressDelegate=_longPressDelegate;
@property(retain, nonatomic) XMImmersionSpecialAlbumItem *immersionAlbumItem; // @synthesize immersionAlbumItem=_immersionAlbumItem;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) long long wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) XMAlbumCoverImageView *albumView; // @synthesize albumView=_albumView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
- (void).cxx_destruct;
- (void)p_longPress:(id)arg1;
- (void)setContentWithImmersionSpecialAlbum:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

