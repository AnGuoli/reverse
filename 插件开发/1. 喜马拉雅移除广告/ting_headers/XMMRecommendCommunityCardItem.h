//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMCardItem.h"

@class NSArray, NSString, NSURL;

@interface XMMRecommendCommunityCardItem : XMMCardItem
{
    _Bool _hasMore;
    NSURL *_moreLink;
    NSString *_moreTip;
    NSArray *_recommendCommunityListArray;
}

@property(retain, nonatomic) NSArray *recommendCommunityListArray; // @synthesize recommendCommunityListArray=_recommendCommunityListArray;
@property(retain, nonatomic) NSString *moreTip; // @synthesize moreTip=_moreTip;
@property(retain, nonatomic) NSURL *moreLink; // @synthesize moreLink=_moreLink;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)layoutWithSize:(struct CGSize)arg1 config:(id)arg2;
- (void)didInitialize;

@end

