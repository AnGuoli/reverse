//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSDictionary, NSString, WBLikeListTag;

@interface WBPageMultiUserSevenCard : WBPageCard
{
    _Bool _showTopPadding;
    int _showType;
    NSArray *_users;
    long long _type;
    NSArray *_items;
    WBLikeListTag *_profileTag;
    NSArray *_searchHistorys;
    long long _dataFrom;
    NSDictionary *_arrowStruct;
    NSString *_userID;
    NSString *_itemName;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSDictionary *arrowStruct; // @synthesize arrowStruct=_arrowStruct;
@property(nonatomic) _Bool showTopPadding; // @synthesize showTopPadding=_showTopPadding;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) long long dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSArray *searchHistorys; // @synthesize searchHistorys=_searchHistorys;
@property(retain, nonatomic) WBLikeListTag *profileTag; // @synthesize profileTag=_profileTag;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contentsArrayWithArray:(id)arg1;
- (id)AddPlaylistShowTypeWithDic:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
@property(nonatomic) double followCardHeight;
@property(retain, nonatomic) WBPageCard *copyfollowCards;
@property(retain, nonatomic) WBPageCard *followCards;

@end

