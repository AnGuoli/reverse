//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMNewUserWelfareGiftModel : XMModel
{
    NSString *_albumIds;
    long long _collectCount;
    long long _giftId;
    NSString *_giftName;
    NSString *_giftSubTitle;
    NSArray *_albums;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(copy, nonatomic) NSString *giftSubTitle; // @synthesize giftSubTitle=_giftSubTitle;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(nonatomic) long long collectCount; // @synthesize collectCount=_collectCount;
@property(copy, nonatomic) NSString *albumIds; // @synthesize albumIds=_albumIds;
- (void).cxx_destruct;

@end

