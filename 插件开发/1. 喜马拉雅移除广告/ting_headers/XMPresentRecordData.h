//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray;

@interface XMPresentRecordData : XMModel
{
    _Bool _hasMore;
    int _pageNum;
    long long _totalCount;
    long long _pageSize;
    NSArray *_data;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;

@end

