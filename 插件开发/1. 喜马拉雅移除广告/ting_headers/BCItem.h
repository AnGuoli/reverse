//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface BCItem : NSObject
{
    unsigned short _majorValue;
    unsigned short _minorValue;
    NSString *_name;
    NSUUID *_uuid;
}

@property(nonatomic) unsigned short minorValue; // @synthesize minorValue=_minorValue;
@property(nonatomic) unsigned short majorValue; // @synthesize majorValue=_majorValue;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

