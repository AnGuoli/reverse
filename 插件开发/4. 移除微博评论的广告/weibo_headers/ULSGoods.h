//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ULSUser;

@interface ULSGoods : NSObject
{
    long long _ID;
    long long _goodsType;
    NSString *_name;
    long long _price;
    long long _discount;
    NSString *_discountDescription;
    long long _golds;
    long long _addGolds;
    NSString *_addGoldsDescription;
    NSString *_pic;
    NSString *_remark;
    ULSUser *_sender;
}

+ (id)parseWithRecordModelArray:(id)arg1;
+ (id)parseWithRecordDictArray:(id)arg1;
+ (id)parse:(id)arg1;
@property(retain, nonatomic) ULSUser *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *addGoldsDescription; // @synthesize addGoldsDescription=_addGoldsDescription;
@property(nonatomic) long long addGolds; // @synthesize addGolds=_addGolds;
@property(nonatomic) long long golds; // @synthesize golds=_golds;
@property(copy, nonatomic) NSString *discountDescription; // @synthesize discountDescription=_discountDescription;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long goodsType; // @synthesize goodsType=_goodsType;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end

