//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL;

@interface WBContact : WBModelObject <WBDatabaseModel>
{
    NSString *userID;
    NSString *screenName;
    NSString *profileImageURL;
    NSString *remark;
    NSString *extendedDescription;
    NSString *phoneName;
    NSString *phoneNumber;
    NSArray *phoneNumbers;
    int relationship;
    NSString *origin;
    unsigned long long verifiedType;
    NSString *originalVerifiedType;
    long long verifiedTypeExt;
    unsigned long long permission;
    double lastUsedTime;
    double lastMessageTime;
    NSString *sortName;
    NSString *sortSectionName;
    NSString *searchString;
    NSMutableDictionary *userInfo;
    _Bool extendedDescriptionIncluded;
    NSString *lastStatusContent;
    long long membershipType;
    long long membershipRank;
    NSString *_sortSectionNameWithRemark;
    NSString *_sortSectionFullNameWithRemark;
    NSString *_sortName;
    NSString *_sortSectionName;
    NSString *_sortNameWithRemark;
    NSString *_sortNameWithFullRemark;
    _Bool isPage;
    NSString *avatarHdURL;
    NSString *avatarLargeURL;
    long long meyouRelationship;
    long long onlineIndex;
    NSString *scheme;
    long long _contactType;
    NSString *_nicknameInGroup;
    NSString *_storyID;
    NSString *_liveID;
    NSString *_liveIcon;
}

+ (void)deleteAllContactsFromDB:(id)arg1;
+ (long long)membershipRankOfValue:(id)arg1;
+ (long long)membershipTypeOfValue:(id)arg1;
+ (int)transferServerRelationship:(long long)arg1;
+ (id)objectsWithArray:(id)arg1;
+ (id)dbTableName;
+ (id)contactWithOpenAPIDictionary:(id)arg1;
+ (id)contactWithUserID:(id)arg1 screenName:(id)arg2 profileImageURL:(id)arg3;
+ (id)contactWithUserID:(id)arg1;
+ (id)imageForUserRelationship:(int)arg1;
+ (void)verifiedFlagImagesByVerifiedType:(unsigned long long)arg1 state:(int)arg2 verifiedTypeExt:(long long)arg3 images:(CDUnknownBlockType)arg4;
+ (id)verifiedFlagImagesByVerifiedType:(unsigned long long)arg1 state:(int)arg2 verifiedTypeExt:(long long)arg3;
+ (id)imageFilenameWithVerifiedType:(unsigned long long)arg1 state:(int)arg2 verifiedTypeExt:(long long)arg3;
@property(copy, nonatomic) NSString *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(copy, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(retain, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
@property(retain, nonatomic) NSString *nicknameInGroup; // @synthesize nicknameInGroup=_nicknameInGroup;
@property(nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(nonatomic) _Bool isPage; // @synthesize isPage;
@property(retain, nonatomic) NSString *lastStatusContent; // @synthesize lastStatusContent;
@property(nonatomic) long long membershipRank; // @synthesize membershipRank;
@property(nonatomic) long long membershipType; // @synthesize membershipType;
@property(nonatomic) long long onlineIndex; // @synthesize onlineIndex;
@property(nonatomic) double lastMessageTime; // @synthesize lastMessageTime;
@property(nonatomic) double lastUsedTime; // @synthesize lastUsedTime;
@property(nonatomic) unsigned long long permission; // @synthesize permission;
@property(nonatomic) long long verifiedTypeExt; // @synthesize verifiedTypeExt;
@property(retain, nonatomic) NSString *originalVerifiedType; // @synthesize originalVerifiedType;
@property(nonatomic) unsigned long long verifiedType; // @synthesize verifiedType;
@property(nonatomic) long long meyouRelationship; // @synthesize meyouRelationship;
@property(retain, nonatomic) NSString *origin; // @synthesize origin;
@property(nonatomic) int relationship; // @synthesize relationship;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) NSString *phoneName; // @synthesize phoneName;
@property(retain, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *avatarLargeURL; // @synthesize avatarLargeURL;
@property(retain, nonatomic) NSString *avatarHdURL; // @synthesize avatarHdURL;
@property(retain, nonatomic) NSString *profileImageURL; // @synthesize profileImageURL;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void).cxx_destruct;
- (void)fromDic:(id)arg1;
- (void)fromContactResultSet:(id)arg1;
- (void)applyOperation:(unsigned long long)arg1;
- (void)saveLastStatusContentToDB:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)saveToDB:(id)arg1 checksLastMessage:(_Bool)arg2;
- (void)saveToDB:(id)arg1;
- (_Bool)mergeFromDB:(id)arg1 checksLastMessage:(_Bool)arg2;
- (_Bool)mergeFromDB:(id)arg1;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (void)deleteFromDB:(id)arg1;
- (void)updatelastStatusContentToDB:(id)arg1;
- (void)updateDB:(id)arg1;
- (void)insertIntoDB:(id)arg1;
- (_Bool)isValidToPersist;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
- (id)availableImageURLs;
- (id)largeImageURL;
@property(nonatomic) long long liveState;
- (void)setStoryState:(long long)arg1;
- (long long)storyState;
- (id)sortName;
- (id)sortNameWithFullRemark;
- (_Bool)JudgeString:(id)arg1;
- (id)sortSectionNameWithFullRemark;
- (id)sortNameWithRemark;
- (id)sortSectionNameWithRemark;
- (id)sortSectionName;
@property(readonly, nonatomic) _Bool canSendText;
@property(readonly, nonatomic) __weak NSURL *phoneCallURL;
@property(readonly, nonatomic) _Bool canMakeCall;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool canSendMessage;
@property(readonly, nonatomic) _Bool isSpecialFocus;
@property(readonly, nonatomic) _Bool isBlocked;
@property(readonly, nonatomic) _Bool isFriend;
@property(readonly, nonatomic) _Bool isFollowing;
@property(readonly, nonatomic) _Bool isFollower;
@property(readonly, nonatomic) _Bool isCurrentUser;
- (id)searchString;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)toJSONDictionary;
- (id)init;
- (id)generateLargeProfileImageUrl;
- (id)relationshipImage;
- (id)jsbridge_dictionaryRepersentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

