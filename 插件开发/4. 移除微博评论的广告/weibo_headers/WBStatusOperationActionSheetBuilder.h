//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface WBStatusOperationActionSheetBuilder : NSObject
{
    NSArray *_serverCustomizedOperationOrderArray;
    NSArray *_mappingArray;
    NSDictionary *_enumMappingDic;
    NSDictionary *_stringMappingDic;
}

+ (id)sharedInstance;
+ (id)getLocalOperationType;
+ (id)getServerCustomizedOperationOrderArray;
+ (id)getDataModelListOfStatus:(id)arg1 localAllowedOperations:(id)arg2 andAnalysisParameters:(id)arg3 inScenario:(long long)arg4 attachedVC:(id)arg5;
+ (id)getServerAllowedOperationsOfStatus:(id)arg1;
+ (id)getLocalAllowOperationTypsArrayByStatus:(id)arg1 attachedVC:(id)arg2;
+ (id)buildUnifiedActionSheetWithStatus:(id)arg1 localAllowedOperations:(id)arg2 andAnalysisParameters:(id)arg3 inScenario:(long long)arg4 userInfo:(id)arg5;
+ (id)buildActionSheetWithStatus:(id)arg1 andAnalysisParameters:(id)arg2 inScenario:(long long)arg3 withExistActionSheet:(id)arg4 userInfo:(id)arg5;
+ (id)updateLocalAllowOperations:(id)arg1 withStatus:(id)arg2;
@property(retain, nonatomic) NSDictionary *stringMappingDic; // @synthesize stringMappingDic=_stringMappingDic;
@property(retain, nonatomic) NSDictionary *enumMappingDic; // @synthesize enumMappingDic=_enumMappingDic;
@property(retain, nonatomic) NSArray *mappingArray; // @synthesize mappingArray=_mappingArray;
- (void).cxx_destruct;
- (unsigned long long)getEnumKeyByStringKey:(id)arg1;
- (id)getStringKeyByEnumKey:(unsigned long long)arg1;
- (Class)getDataModelClassByStringKey:(id)arg1;
- (Class)getDataModelClassByEnumKey:(unsigned long long)arg1;
- (id)init;
- (id)getMappingArray;
@property(retain, nonatomic) NSArray *serverCustomizedOperationOrderArray; // @dynamic serverCustomizedOperationOrderArray;

@end

