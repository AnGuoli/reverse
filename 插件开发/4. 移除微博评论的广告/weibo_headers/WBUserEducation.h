//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBUserEducation : WBModelObject
{
    NSString *ID;
    NSString *schoolID;
    NSString *school;
    NSString *type;
    NSString *year;
    NSString *department;
    NSString *typeID;
}

+ (id)sortedObjectsWithJSONArray:(id)arg1;
+ (id)objectsWithJSONArray:(id)arg1;
@property(retain, nonatomic) NSString *typeID; // @synthesize typeID;
@property(retain, nonatomic) NSString *department; // @synthesize department;
@property(retain, nonatomic) NSString *year; // @synthesize year;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *school; // @synthesize school;
@property(retain, nonatomic) NSString *schoolID; // @synthesize schoolID;
@property(retain, nonatomic) NSString *ID; // @synthesize ID;
- (void).cxx_destruct;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (long long)typeCode;

@end

