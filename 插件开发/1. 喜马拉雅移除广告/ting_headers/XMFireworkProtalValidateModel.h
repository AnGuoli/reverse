//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMFireworkProtalValidateModel : NSObject
{
    NSString *_limitCount;
    NSString *_plans;
    NSString *_intervalMilliseconds;
    NSString *_resourceIntervals;
    NSString *_locations;
}

@property(retain, nonatomic) NSString *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSString *resourceIntervals; // @synthesize resourceIntervals=_resourceIntervals;
@property(retain, nonatomic) NSString *intervalMilliseconds; // @synthesize intervalMilliseconds=_intervalMilliseconds;
@property(retain, nonatomic) NSString *plans; // @synthesize plans=_plans;
@property(retain, nonatomic) NSString *limitCount; // @synthesize limitCount=_limitCount;
- (void).cxx_destruct;
- (_Bool)validate:(id)arg1 resultSignature:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

