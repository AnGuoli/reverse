//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMVipInterestCategory : XMModel
{
    long long _categoryId;
    NSString *_categoryType;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (_Bool)isTopLevelCategory;

@end

