//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSArray;

@interface WBNLRankListModel : WBNLBaseModel
{
    NSArray *_list;
    long long _total_number;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) long long total_number; // @synthesize total_number=_total_number;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

