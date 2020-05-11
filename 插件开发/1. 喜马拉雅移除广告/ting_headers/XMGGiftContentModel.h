//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, NSURL;

@interface XMGGiftContentModel : XMModel
{
    _Bool _isDynamic;
    NSURL *_giftCoverPath;
    NSString *_giftName;
    long long _giftId;
    double _giftPrice;
    long long _quantity;
    long long _fromUid;
    long long _toUid;
    NSString *_toNickname;
}

@property(nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
@property(retain, nonatomic) NSString *toNickname; // @synthesize toNickname=_toNickname;
@property(nonatomic) long long toUid; // @synthesize toUid=_toUid;
@property(nonatomic) long long fromUid; // @synthesize fromUid=_fromUid;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double giftPrice; // @synthesize giftPrice=_giftPrice;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(retain, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(retain, nonatomic) NSURL *giftCoverPath; // @synthesize giftCoverPath=_giftCoverPath;
- (void).cxx_destruct;

@end

