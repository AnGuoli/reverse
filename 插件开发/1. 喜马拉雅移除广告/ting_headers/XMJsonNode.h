//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface XMJsonNode : NSObject
{
    NSString *_key;
    NSArray *_array;
    NSDictionary *_dictionary;
    NSArray *_dicKeys;
    unsigned long long _currentIndex;
}

+ (id)searchRuls:(id)arg1 containsSearchKey:(id)arg2;
+ (id)valusFromJsonDic:(id)arg1 usingSearchConfigurations:(id)arg2;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *dicKeys; // @synthesize dicKeys=_dicKeys;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

