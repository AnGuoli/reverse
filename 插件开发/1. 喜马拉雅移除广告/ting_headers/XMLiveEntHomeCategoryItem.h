//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSegmentItem.h"

#import "NSCopying-Protocol.h"
#import "YYModel-Protocol.h"

@class NSString;

@interface XMLiveEntHomeCategoryItem : XMSegmentItem <YYModel, NSCopying>
{
    _Bool _status;
    long long _categoryId;
    long long _position;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

