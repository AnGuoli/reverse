//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GDTCORClock, NSData, NSDictionary, NSString;
@protocol GDTCOREventDataObject;

@interface GDTCOREvent : NSObject <NSSecureCoding>
{
    NSString *_mappingID;
    long long _target;
    id <GDTCOREventDataObject> _dataObject;
    long long _qosTier;
    GDTCORClock *_clockSnapshot;
    NSDictionary *_customPrioritizationParams;
    NSData *_dataObjectTransportBytes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *dataObjectTransportBytes; // @synthesize dataObjectTransportBytes=_dataObjectTransportBytes;
@property(retain, nonatomic) NSDictionary *customPrioritizationParams; // @synthesize customPrioritizationParams=_customPrioritizationParams;
@property(retain, nonatomic) GDTCORClock *clockSnapshot; // @synthesize clockSnapshot=_clockSnapshot;
@property(nonatomic) long long qosTier; // @synthesize qosTier=_qosTier;
@property(retain, nonatomic) id <GDTCOREventDataObject> dataObject; // @synthesize dataObject=_dataObject;
@property(readonly, nonatomic) long long target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *mappingID; // @synthesize mappingID=_mappingID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)storedEventWithDataFuture:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (id)initWithMappingID:(id)arg1 target:(long long)arg2;

@end

