//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMSubRankItem : XMModel
{
    long long _rankingListId;
    long long _categoryId;
    long long _rankClusterId;
    NSString *_displayName;
    NSString *_contentType;
    NSString *_rankingRule;
}

@property(copy, nonatomic) NSString *rankingRule; // @synthesize rankingRule=_rankingRule;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long rankClusterId; // @synthesize rankClusterId=_rankClusterId;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long rankingListId; // @synthesize rankingListId=_rankingListId;
- (void).cxx_destruct;

@end

