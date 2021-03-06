//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, XMAlbumItem, YYTextLayout;

@interface XMNewerAlbumCellModel : NSObject <XMTableCellModelProtocol>
{
    XMAlbumItem *_album;
    NSString *_tagImageName;
    NSString *_subTitle;
    YYTextLayout *_titleLayout;
    YYTextLayout *_introLayout;
}

+ (id)cellModelWithAlbum:(id)arg1;
@property(retain, nonatomic) YYTextLayout *introLayout; // @synthesize introLayout=_introLayout;
@property(retain, nonatomic) YYTextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, nonatomic) NSString *tagImageName; // @synthesize tagImageName=_tagImageName;
@property(readonly, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

