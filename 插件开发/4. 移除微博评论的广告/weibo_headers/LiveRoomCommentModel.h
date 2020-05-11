//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSArray, NSDictionary, NSString;

@interface LiveRoomCommentModel : TBLiveJSONModel
{
    NSString *_commentId;
    NSString *_content;
    NSString *_paginationContext;
    NSString *_publisherIcon;
    NSString *_publisherId;
    NSString *_publisherNick;
    NSString *_tbNick;
    NSString *_replayToId;
    NSString *_timestamp;
    NSDictionary *_renders;
    NSArray *_commodities;
}

@property(retain, nonatomic) NSArray *commodities; // @synthesize commodities=_commodities;
@property(retain, nonatomic) NSDictionary *renders; // @synthesize renders=_renders;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *replayToId; // @synthesize replayToId=_replayToId;
@property(copy, nonatomic) NSString *tbNick; // @synthesize tbNick=_tbNick;
@property(copy, nonatomic) NSString *publisherNick; // @synthesize publisherNick=_publisherNick;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(copy, nonatomic) NSString *publisherIcon; // @synthesize publisherIcon=_publisherIcon;
@property(copy, nonatomic) NSString *paginationContext; // @synthesize paginationContext=_paginationContext;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

