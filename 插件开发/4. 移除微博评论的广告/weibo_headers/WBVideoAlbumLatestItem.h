//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBVideoAlbumLatestItemCover;

@interface WBVideoAlbumLatestItem : WBModelObject
{
    NSString *_mid;
    WBVideoAlbumLatestItemCover *_cover;
}

@property(retain, nonatomic) WBVideoAlbumLatestItemCover *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;

@end

