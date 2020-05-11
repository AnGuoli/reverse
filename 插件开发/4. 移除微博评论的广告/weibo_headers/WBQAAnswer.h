//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, WBUser;

@interface WBQAAnswer : WBModelObject <WBDatabaseModel>
{
    NSString *_objectId;
    WBUser *_questioner;
    NSString *_price;
    NSString *_watchPrice;
    NSString *_coverImageUrl;
    NSString *_questionContent;
    NSDictionary *_public_answer_conversion;
    NSString *_hint;
    NSString *_summary;
    NSMutableArray *_insertImages;
    NSMutableArray *_paragraph;
    unsigned long long _saveStrategy;
    NSString *_content;
    NSString *_answerOriginContent;
    NSDictionary *_userDict;
}

+ (long long)querySaveStrategyFromDBWithID:(id)arg1;
+ (id)loadAnswerFromDBWithID:(id)arg1;
+ (id)objectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *userDict; // @synthesize userDict=_userDict;
@property(copy, nonatomic) NSString *answerOriginContent; // @synthesize answerOriginContent=_answerOriginContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long saveStrategy; // @synthesize saveStrategy=_saveStrategy;
@property(retain, nonatomic) NSMutableArray *paragraph; // @synthesize paragraph=_paragraph;
@property(retain, nonatomic) NSMutableArray *insertImages; // @synthesize insertImages=_insertImages;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSDictionary *public_answer_conversion; // @synthesize public_answer_conversion=_public_answer_conversion;
@property(copy, nonatomic) NSString *questionContent; // @synthesize questionContent=_questionContent;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(copy, nonatomic) NSString *watchPrice; // @synthesize watchPrice=_watchPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) WBUser *questioner; // @synthesize questioner=_questioner;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (_Bool)isValidToPersist;
- (void)updateDB:(id)arg1;
- (void)insertIntoDB:(id)arg1;
- (_Bool)isExist:(id)arg1;
- (void)deleteFromDB:(id)arg1;
- (_Bool)saveToDB:(id)arg1;
- (void)loadFromRS:(id)arg1;
- (id)stringRepresentationWithObject:(id)arg1;
- (id)imagesWithrePresentation:(id)arg1;
- (id)paragraphWithPresentation:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

