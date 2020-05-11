//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBLiveJSONModel : NSObject
{
    _Bool _treatBoolAsStringWhenModelToJSON;
}

+ (_Bool)strictMode;
+ (id)ignoredPropertyNames;
+ (id)modelContainerClassMapDictioanry;
+ (id)jsonToModelKeyMapDictionary;
+ (id)modelKeyMapper;
+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)modelWithJSONDictionary:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTreatBoolAsStringWhenModelToJSON:(_Bool)arg1;
- (id)toJSONDictionary;
- (void)updateWithJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;
- (id)valueForProperty:(id)arg1 withJSONValue:(id)arg2;
- (void)_setupPropertyMap;
- (void)_setupKeyMapper;

@end

