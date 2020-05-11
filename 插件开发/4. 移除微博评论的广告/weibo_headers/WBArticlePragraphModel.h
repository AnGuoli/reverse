//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSNumber, NSString, WBArticleCardModel, WBArticlePragraphTableViewCellDrawingContext;

@interface WBArticlePragraphModel : WBModelObject
{
    id _primitivePragraphObjectData;
    _Bool _isPay;
    _Bool _isNewUIStyle;
    long long _pragraphModelType;
    NSNumber *_pragraphId;
    NSString *_pragraphRootNode;
    id _pragraphObject;
    long long _pragraphModelSubType;
    long long _placeholder;
    NSString *_cardID;
    WBArticleCardModel *_articleCardModel;
}

+ (id)rootNodeStringWithType:(long long)arg1;
+ (id)customParagraphWithType:(long long)arg1 param:(id)arg2;
+ (Class)drawingContextClass;
@property(retain, nonatomic) WBArticleCardModel *articleCardModel; // @synthesize articleCardModel=_articleCardModel;
@property(nonatomic) _Bool isNewUIStyle; // @synthesize isNewUIStyle=_isNewUIStyle;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(nonatomic) long long placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(nonatomic) long long pragraphModelSubType; // @synthesize pragraphModelSubType=_pragraphModelSubType;
@property(retain, nonatomic) id pragraphObject; // @synthesize pragraphObject=_pragraphObject;
@property(copy, nonatomic) NSString *pragraphRootNode; // @synthesize pragraphRootNode=_pragraphRootNode;
@property(retain, nonatomic) NSNumber *pragraphId; // @synthesize pragraphId=_pragraphId;
@property(nonatomic) long long pragraphModelType; // @synthesize pragraphModelType=_pragraphModelType;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (void)updatePragraphModelType;
- (id)initWithPragraphId:(id)arg1 pragraphRootNode:(id)arg2 primitivePragraphObjectData:(id)arg3 articleCardModel:(id)arg4;
@property(retain, nonatomic) WBArticlePragraphTableViewCellDrawingContext *cellDrawingContext; // @dynamic cellDrawingContext;
- (id)prepareDrawingContextWithUserInfo:(id)arg1;
- (id)prepareDrawingContext;
- (double)rowHeightOfDataObject:(id)arg1 withContentWidth:(unsigned long long)arg2 recycleScrollView:(id)arg3;
- (Class)modelCellClass;

@end

