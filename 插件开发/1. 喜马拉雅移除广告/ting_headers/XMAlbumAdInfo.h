//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAdItem.h"

@class NSString, UIView;
@protocol XMViewSupportRealExposureProtocol;

@interface XMAlbumAdInfo : XMAdItem
{
    long long _order;
    long long _promoteAlbumId;
    long long _promoteTrackId;
    long long _promoteId;
    long long _categoryId;
    long long _subcategoryId;
    long long _keywordId;
    long long _showPlace;
    long long _num;
    UIView<XMViewSupportRealExposureProtocol> *_virtualAdView;
    NSString *_promoteType;
}

+ (id)albumInfoTest;
+ (id)albumInfoFromDic:(id)arg1;
+ (void)albumAdInfoTrackPlayDidStart:(id)arg1;
+ (void)albumAdViewCheckVisibilityForScrollingWithScrollView:(id)arg1 withModels:(id)arg2;
+ (void)albumAdViewCheckVisibilityForScrollingWithScrollView:(id)arg1 withAlbumAdInfos:(id)arg2;
+ (void)albumAdViewCheckVisibilityForViewDidAppearWithAlbumAdInfos:(id)arg1;
+ (void)tryReportClickButNotOpenUrlWithModel:(id)arg1;
+ (_Bool)tryOpenAdWithModel:(id)arg1;
+ (id)albumAdInfoFromModel:(id)arg1;
+ (void)getAdInfoFrom:(id)arg1 to:(id)arg2;
+ (id)moduleKeyFromModule:(id)arg1;
+ (id)createModuleKeyWithModule:(id)arg1;
+ (void)reportAdDidShowFromModels:(id)arg1;
+ (void)reportAdDidShowWithAdInfoMap:(id)arg1;
+ (void)reportAdDidShowWithAdInfos:(id)arg1;
+ (void)overrideDataFromAdInfo:(id)arg1 toModels:(id)arg2;
+ (id)albumInfosFromModels:(id)arg1;
+ (id)albumInfosFromDic:(id)arg1 andModel:(id)arg2 andStartShowPlace:(long long)arg3;
+ (id)albumInfosFromList:(id)arg1 andModels:(id)arg2 andStartShowPlace:(long long)arg3;
@property(copy, nonatomic) NSString *promoteType; // @synthesize promoteType=_promoteType;
@property(retain, nonatomic) UIView<XMViewSupportRealExposureProtocol> *virtualAdView; // @synthesize virtualAdView=_virtualAdView;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(nonatomic) long long showPlace; // @synthesize showPlace=_showPlace;
@property(nonatomic) long long keywordId; // @synthesize keywordId=_keywordId;
@property(nonatomic) long long subcategoryId; // @synthesize subcategoryId=_subcategoryId;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long promoteId; // @synthesize promoteId=_promoteId;
@property(nonatomic) long long promoteTrackId; // @synthesize promoteTrackId=_promoteTrackId;
@property(nonatomic) long long promoteAlbumId; // @synthesize promoteAlbumId=_promoteAlbumId;
@property(nonatomic) long long order; // @synthesize order=_order;
- (void).cxx_destruct;
@property(nonatomic) long long albumId;

@end

