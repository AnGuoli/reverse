//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface MMBizFileMatchNode : NSObject <NSCopying>
{
    int m_bizType;
    int m_fileTypeInUse;
    int m_wechatFileClass;
    int m_pathPrefixType;
    int m_storeTimeType;
    unsigned long long m_matchType;
    NSString *m_text;
    NSMutableArray *m_arrBizMatchNode;
    NSDictionary *m_dicTextBizMatchNode;
    NSMutableArray *m_arrRegexBizMatchNode;
}

+ (id)nodeWithText:(id)arg1;
@property(nonatomic) int m_storeTimeType; // @synthesize m_storeTimeType;
@property(nonatomic) int m_pathPrefixType; // @synthesize m_pathPrefixType;
@property(retain, nonatomic) NSMutableArray *m_arrRegexBizMatchNode; // @synthesize m_arrRegexBizMatchNode;
@property(retain, nonatomic) NSDictionary *m_dicTextBizMatchNode; // @synthesize m_dicTextBizMatchNode;
@property(nonatomic) int m_wechatFileClass; // @synthesize m_wechatFileClass;
@property(nonatomic) int m_fileTypeInUse; // @synthesize m_fileTypeInUse;
@property(nonatomic) int m_bizType; // @synthesize m_bizType;
@property(retain, nonatomic) NSMutableArray *m_arrBizMatchNode; // @synthesize m_arrBizMatchNode;
@property(retain, nonatomic) NSString *m_text; // @synthesize m_text;
@property(nonatomic) unsigned long long m_matchType; // @synthesize m_matchType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isMatchWithName:(id)arg1;
- (_Bool)isBizRuleConflictWith:(id)arg1;
- (_Bool)isMarkBizFileNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

