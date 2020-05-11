//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSArray, NSString;

@interface XAMapIncludePointsParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSArray *_points;
    NSArray *_padding;
    NSString *_slaveId;
    NSString *_mapId;
}

@property(copy, nonatomic) NSString *mapId; // @synthesize mapId=_mapId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(retain, nonatomic) NSArray *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

