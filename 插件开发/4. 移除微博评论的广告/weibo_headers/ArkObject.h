//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QQApiObject;

@interface ArkObject : NSObject
{
    NSString *_arkData;
    QQApiObject *_qqApiObject;
}

+ (id)objectWithData:(id)arg1 qqApiObject:(id)arg2;
@property(nonatomic) QQApiObject *qqApiObject; // @synthesize qqApiObject=_qqApiObject;
@property(retain, nonatomic) NSString *arkData; // @synthesize arkData=_arkData;
- (void)dealloc;
- (id)initWithData:(id)arg1 qqApiObject:(id)arg2;

@end

