//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBArticleSentinel;

@interface WBArticleStatisticManager : NSObject
{
    NSMutableDictionary *_statisticItemDictionary;
    WBArticleSentinel *_articlePageOpenDepth;
}

+ (void)addTaobaoCartLog:(id)arg1 page:(id)arg2 dict:(id)arg3;
+ (id)shareManager;
@property(retain, nonatomic) WBArticleSentinel *articlePageOpenDepth; // @synthesize articlePageOpenDepth=_articlePageOpenDepth;
- (void).cxx_destruct;
- (void)articlePublishRestultStatistic:(id)arg1;
- (Class)_findArticleStatisticContextByAnalysisType:(id)arg1;
- (id)followButtonExtraActionParamsWithArticle:(id)arg1 moduleId:(id)arg2 category:(id)arg3;
- (id)cachedArticleStatisticContextByAnalysisType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

