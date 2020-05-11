//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString, WCAppMsgShareInfo, WCFinderShareToMomentsItem, WCFinderTopicShareItem, WCNoteInfo;

@interface WCContentItem : NSObject <NSCoding>
{
    NSString *title;
    NSString *desc;
    NSString *titlePattern;
    NSString *descPattern;
    NSString *linkUrl;
    NSString *linkUrl2;
    int type;
    int flag;
    NSString *username;
    NSString *nickname;
    unsigned int createtime;
    NSMutableArray *mediaList;
    WCNoteInfo *noteInfo;
    WCAppMsgShareInfo *appMsgShareInfo;
    int subType;
    NSString *_emojiMd5;
    WCFinderShareToMomentsItem *_finderShareToMomentsItem;
    WCFinderTopicShareItem *_finderTopicShareItem;
}

@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem; // @synthesize finderTopicShareItem=_finderTopicShareItem;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem; // @synthesize finderShareToMomentsItem=_finderShareToMomentsItem;
@property(retain, nonatomic) NSString *emojiMd5; // @synthesize emojiMd5=_emojiMd5;
@property(retain, nonatomic) WCAppMsgShareInfo *appMsgShareInfo; // @synthesize appMsgShareInfo;
@property(retain, nonatomic) WCNoteInfo *noteInfo; // @synthesize noteInfo;
@property(nonatomic) int subType; // @synthesize subType;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) int flag; // @synthesize flag;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *linkUrl2; // @synthesize linkUrl2;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

