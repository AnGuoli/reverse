//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YXBeautyManager : NSObject
{
    _Bool _isBackCamera;
    double _beautyReddenValue;
    double _beautySmoothValue;
    double _beautyFaceValue;
    double _beautyJAWValue;
    double _beautyWhiteValue;
    double _beautyEyeValue;
}

+ (double)degreeWithKey:(id)arg1;
+ (void)setDegree:(double)arg1 key:(id)arg2;
+ (void)resetValue;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool isBackCamera; // @synthesize isBackCamera=_isBackCamera;
@property(nonatomic) double beautyEyeValue; // @synthesize beautyEyeValue=_beautyEyeValue;
@property(nonatomic) double beautyWhiteValue; // @synthesize beautyWhiteValue=_beautyWhiteValue;
@property(nonatomic) double beautyJAWValue; // @synthesize beautyJAWValue=_beautyJAWValue;
@property(nonatomic) double beautyFaceValue; // @synthesize beautyFaceValue=_beautyFaceValue;
@property(nonatomic) double beautySmoothValue; // @synthesize beautySmoothValue=_beautySmoothValue;
@property(nonatomic) double beautyReddenValue; // @synthesize beautyReddenValue=_beautyReddenValue;
@property(readonly, nonatomic) _Bool isAllDefaultValue;
- (id)defaultConfig_back;
- (id)defaultConfig_front;
- (void)initValue;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

