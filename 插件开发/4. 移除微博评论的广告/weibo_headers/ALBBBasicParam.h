//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ALBBBasicParam : NSObject
{
    NSMutableDictionary *_extraParam;
    NSString *_tag;
    NSString *_backURL;
    NSString *_sign;
    NSString *_time;
}

@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *backURL; // @synthesize backURL=_backURL;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (id)type;
- (id)e;

@end

