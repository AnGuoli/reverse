//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBFeedItemViewModelInterface-Protocol.h"

@class NSArray, NSDictionary, NSString, WBTimelineTrendItem;

@interface WBTrendItemViewModel : NSObject <WBFeedItemViewModelInterface>
{
    NSArray *_trendCardViewModels;
    WBTimelineTrendItem *_trendItem;
    double _contentHeightInternal;
    unsigned long long _caculatedVersion;
    double _contentWidthInternal;
}

+ (id)viewModelWithModel:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3;
+ (id)viewModelWithModel:(id)arg1 contentWidth:(double)arg2;
+ (id)viewModelWithModel:(id)arg1;
@property(nonatomic) double contentWidthInternal; // @synthesize contentWidthInternal=_contentWidthInternal;
@property(nonatomic) unsigned long long caculatedVersion; // @synthesize caculatedVersion=_caculatedVersion;
@property(nonatomic) double contentHeightInternal; // @synthesize contentHeightInternal=_contentHeightInternal;
@property(nonatomic) __weak WBTimelineTrendItem *trendItem; // @synthesize trendItem=_trendItem;
@property(retain, nonatomic) NSArray *trendCardViewModels; // @synthesize trendCardViewModels=_trendCardViewModels;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hideBorder;
@property(readonly, nonatomic) NSString *trendTitle;
- (_Bool)hasHeaderTitle;
@property(readonly, nonatomic) NSArray *menuModels;
@property(readonly, nonatomic) NSDictionary *moreInfos;
@property(nonatomic) _Bool hidePadding;
- (_Bool)isCaculatedValid;
- (void)setNeedCaculated;
- (void)updateViewModel;
- (id)reusableCellOfTableView:(id)arg1;
- (void)saveToDBCard:(id)arg1 ByTrendID:(id)arg2;
- (void)requestMoreTrendCardsWithMaxCardCount:(long long)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
- (id)pageTrendCardViewModelsForPageCards:(id)arg1;
- (void)generateTrendCardViewModels;
- (Class)tableViewCellClass;
- (double)cellHeight;
- (double)contentHeight;
- (_Bool)shouldShowTitleBackgroundView;
- (id)bindedModel;
- (void)caculateItemHeightWithWidth:(double)arg1;
- (id)initWithTrendItem:(id)arg1 contentWidth:(double)arg2;

@end

