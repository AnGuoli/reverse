//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString;

@interface WBTBLiveShareInfo : WBNLBaseModel
{
    NSString *_nickname;
    NSString *_desc;
    NSString *_url;
    NSString *_thumbImage;
}

@property(copy, nonatomic) NSString *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;

@end

