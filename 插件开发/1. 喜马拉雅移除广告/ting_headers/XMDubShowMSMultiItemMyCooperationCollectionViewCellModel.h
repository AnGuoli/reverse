//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowMSMultiItemMyCooperationCollectionViewCellModel : XMModel
{
    unsigned long long _uid;
    long long _templateId;
    NSString *_currentRoleName;
    NSString *_nickName;
    long long _trackId;
    unsigned long long _cooperateCount;
    NSString *_logo;
    NSString *_name;
    NSString *_leftRoleName;
    NSString *_cooperateNickName;
    NSString *_surfaceUrl;
    NSString *_cooperateLogo;
    long long _materialId;
}

@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(copy, nonatomic) NSString *cooperateLogo; // @synthesize cooperateLogo=_cooperateLogo;
@property(copy, nonatomic) NSString *surfaceUrl; // @synthesize surfaceUrl=_surfaceUrl;
@property(copy, nonatomic) NSString *cooperateNickName; // @synthesize cooperateNickName=_cooperateNickName;
@property(copy, nonatomic) NSString *leftRoleName; // @synthesize leftRoleName=_leftRoleName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) unsigned long long cooperateCount; // @synthesize cooperateCount=_cooperateCount;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *currentRoleName; // @synthesize currentRoleName=_currentRoleName;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

