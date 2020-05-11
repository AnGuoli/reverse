//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSArray, NSString;

@interface YXAudienceLotteryInfoModel : YXModel
{
    NSString *_awardId;
    NSString *_awardName;
    long long _awardType;
    long long _countdown;
    long long _giftId;
    NSString *_giftName;
    NSArray *_taskInfo;
    long long _finish;
    long long _draw;
}

@property(nonatomic) long long draw; // @synthesize draw=_draw;
@property(nonatomic) long long finish; // @synthesize finish=_finish;
@property(retain, nonatomic) NSArray *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(nonatomic) long long awardType; // @synthesize awardType=_awardType;
@property(copy, nonatomic) NSString *awardName; // @synthesize awardName=_awardName;
@property(copy, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

