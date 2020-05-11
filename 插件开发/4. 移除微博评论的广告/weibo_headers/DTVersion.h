//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTVersion : NSObject
{
    unsigned long long _major;
    unsigned long long _minor;
    unsigned long long _maintenance;
    unsigned long long _build;
}

+ (_Bool)osVersionIsGreaterThen:(id)arg1;
+ (_Bool)osVersionIsLessThen:(id)arg1;
+ (id)osVersion;
+ (id)appBundleVersion;
+ (id)versionWithString:(id)arg1;
@property(readonly, nonatomic) unsigned long long build; // @synthesize build=_build;
@property(readonly, nonatomic) unsigned long long maintenance; // @synthesize maintenance=_maintenance;
@property(readonly, nonatomic) unsigned long long minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) unsigned long long major; // @synthesize major=_major;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isGreaterThenVersionString:(id)arg1;
- (_Bool)isLessThenVersionString:(id)arg1;
- (_Bool)isGreaterThenVersion:(id)arg1;
- (_Bool)isLessThenVersion:(id)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 maintenance:(unsigned long long)arg3;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 maintenance:(unsigned long long)arg3 build:(unsigned long long)arg4;

@end

