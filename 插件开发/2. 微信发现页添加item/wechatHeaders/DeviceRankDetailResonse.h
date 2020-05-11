//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface DeviceRankDetailResonse : MMObject <PBCoding>
{
    _Bool uiIsFollower;
    _Bool isLikedCover;
    unsigned int uiDayScore;
    unsigned int myranknum;
    NSString *nsCoverUrl;
    NSString *nsMotto;
    NSString *nsDayScoreTitle;
    NSArray *aryRankList;
    NSArray *aryScoreDescList;
    NSString *nsSource;
    NSArray *affectedUserList;
    NSString *shareUrl;
    NSString *shareTitle;
    NSArray *aryStepList;
    NSArray *aryFollowList;
    NSArray *aryButtonList;
    NSString *reportUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportUrl;
+ (void)PBArrayAdd_myranknum;
+ (void)PBArrayAdd_isLikedCover;
+ (void)PBArrayAdd_aryButtonList;
+ (void)PBArrayAdd_uiIsFollower;
+ (void)PBArrayAdd_aryFollowList;
+ (void)PBArrayAdd_aryStepList;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_affectedUserList;
+ (void)PBArrayAdd_nsSource;
+ (void)PBArrayAdd_aryScoreDescList;
+ (void)PBArrayAdd_aryRankList;
+ (void)PBArrayAdd_uiDayScore;
+ (void)PBArrayAdd_nsDayScoreTitle;
+ (void)PBArrayAdd_nsMotto;
+ (void)PBArrayAdd_nsCoverUrl;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl;
@property(nonatomic) unsigned int myranknum; // @synthesize myranknum;
@property(nonatomic) _Bool isLikedCover; // @synthesize isLikedCover;
@property(retain, nonatomic) NSArray *aryButtonList; // @synthesize aryButtonList;
@property(nonatomic) _Bool uiIsFollower; // @synthesize uiIsFollower;
@property(retain, nonatomic) NSArray *aryFollowList; // @synthesize aryFollowList;
@property(retain, nonatomic) NSArray *aryStepList; // @synthesize aryStepList;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(retain, nonatomic) NSArray *affectedUserList; // @synthesize affectedUserList;
@property(retain, nonatomic) NSString *nsSource; // @synthesize nsSource;
@property(retain, nonatomic) NSArray *aryScoreDescList; // @synthesize aryScoreDescList;
@property(retain, nonatomic) NSArray *aryRankList; // @synthesize aryRankList;
@property(nonatomic) unsigned int uiDayScore; // @synthesize uiDayScore;
@property(retain, nonatomic) NSString *nsDayScoreTitle; // @synthesize nsDayScoreTitle;
@property(retain, nonatomic) NSString *nsMotto; // @synthesize nsMotto;
@property(retain, nonatomic) NSString *nsCoverUrl; // @synthesize nsCoverUrl;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

