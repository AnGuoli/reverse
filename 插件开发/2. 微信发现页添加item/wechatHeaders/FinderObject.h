//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderObjectDesc, NSMutableArray, NSString;

@interface FinderObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int commentClose; // @dynamic commentClose;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(nonatomic) unsigned int deletetime; // @dynamic deletetime;
@property(nonatomic) unsigned long long displayid; // @dynamic displayid;
@property(retain, nonatomic) NSString *displayidDiscarded; // @dynamic displayidDiscarded;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *likeList; // @dynamic likeList;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int objectStatus; // @dynamic objectStatus;
@property(nonatomic) unsigned int orgRecommendType; // @dynamic orgRecommendType;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) NSMutableArray *recommenderList; // @dynamic recommenderList;
@property(retain, nonatomic) FinderContact *refObjectContact; // @dynamic refObjectContact;
@property(nonatomic) unsigned long long refObjectFlag; // @dynamic refObjectFlag;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(nonatomic) unsigned int secondaryShowFlag; // @dynamic secondaryShowFlag;
@property(retain, nonatomic) NSString *sendShareFavWording; // @dynamic sendShareFavWording;
@property(retain, nonatomic) NSString *tipsWording; // @dynamic tipsWording;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

