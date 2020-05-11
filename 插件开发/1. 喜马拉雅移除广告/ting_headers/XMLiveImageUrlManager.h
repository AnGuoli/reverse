//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, UIImage, XMLiveSecondaryInternalCache;

@interface XMLiveImageUrlManager : NSObject
{
    NSMapTable *_thumnailToRequestMap;
    XMLiveSecondaryInternalCache *_avatarInternalCache;
}

+ (id)defaultRandomImageForUid:(long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveSecondaryInternalCache *avatarInternalCache; // @synthesize avatarInternalCache=_avatarInternalCache;
@property(retain, nonatomic) NSMapTable *thumnailToRequestMap; // @synthesize thumnailToRequestMap=_thumnailToRequestMap;
@property(readonly, nonatomic) UIImage *defaultImage;
- (void)loadThumnailForOriginUrl:(id)arg1 size:(struct CGSize)arg2 complation:(CDUnknownBlockType)arg3;
- (void)updateUid:(long long)arg1 withUrl:(id)arg2;
- (void)cancelLoadCallback:(id)arg1;
- (id)loadImageForUser:(long long)arg1 placeHolder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containCacheImageUrlForUid:(long long)arg1;
- (id)batchQueryImageURLForUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadImageURLForUser:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

