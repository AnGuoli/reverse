//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, WXHeaderComponent;

@interface WXSectionComponent : NSObject <NSCopying>
{
    WXHeaderComponent *_header;
    NSMutableArray *_rows;
}

@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) WXHeaderComponent *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

