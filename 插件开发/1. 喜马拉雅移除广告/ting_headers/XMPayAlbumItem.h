//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAlbumItem.h"

@interface XMPayAlbumItem : XMAlbumItem
{
    long long _positionChange;
    long long _heat;
    long long _albumType;
}

@property(nonatomic) long long albumType; // @synthesize albumType=_albumType;
@property(nonatomic) long long heat; // @synthesize heat=_heat;
@property(nonatomic) long long positionChange; // @synthesize positionChange=_positionChange;
- (void)modelFromDict:(id)arg1;

@end

