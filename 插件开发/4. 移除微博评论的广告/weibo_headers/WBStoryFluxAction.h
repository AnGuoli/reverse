//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBStoryFluxAction : NSObject
{
    long long _type;
    id _data;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id data; // @synthesize data=_data;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 data:(id)arg2 identifier:(id)arg3;
- (id)initWithType:(long long)arg1 data:(id)arg2;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

