//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WBVideoDataChecksumValidateGroup : NSObject
{
    NSString *_url;
    NSMutableArray *_validateItems;
}

@property(retain, nonatomic) NSMutableArray *validateItems; // @synthesize validateItems=_validateItems;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (struct _NSRange)resolveRange;

@end

