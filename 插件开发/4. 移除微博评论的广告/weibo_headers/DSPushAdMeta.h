//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSBaseObject.h"

@class NSString;

@interface DSPushAdMeta : DSBaseObject
{
    NSString *_adid;
    NSString *_leftnum;
    NSString *_posid;
}

+ (id)objectWithJsonDataDictionary:(id)arg1;
@property(retain, nonatomic) NSString *posid; // @synthesize posid=_posid;
@property(retain, nonatomic) NSString *leftnum; // @synthesize leftnum=_leftnum;
@property(retain, nonatomic) NSString *adid; // @synthesize adid=_adid;
- (void).cxx_destruct;

@end

