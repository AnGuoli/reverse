//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray;

@interface XMUserWeKeListModel : XMModel
{
    NSArray *_list;
    long long _pageId;
    long long _pageSize;
    long long _maxPageId;
    long long _totalCount;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long maxPageId; // @synthesize maxPageId=_maxPageId;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

