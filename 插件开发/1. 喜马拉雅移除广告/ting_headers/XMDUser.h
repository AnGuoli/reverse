//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDUser : XMModel
{
    unsigned long long _dUid;
    NSString *_dToken;
    double _dXibiCount;
    double _dXibeanCount;
}

+ (id)initWithDeviceStr:(id)arg1;
@property(nonatomic) double dXibeanCount; // @synthesize dXibeanCount=_dXibeanCount;
@property(nonatomic) double dXibiCount; // @synthesize dXibiCount=_dXibiCount;
@property(copy, nonatomic) NSString *dToken; // @synthesize dToken=_dToken;
@property(nonatomic) unsigned long long dUid; // @synthesize dUid=_dUid;
- (void).cxx_destruct;
- (id)deviceTokenStr;

@end

