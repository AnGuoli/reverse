//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMLiveIncomeRecordModel : NSObject
{
    _Bool _invisible;
    long long _rank;
    unsigned long long _uid;
    NSString *_avatarPath;
    NSString *_nickname;
    double _contribution;
}

- (void).cxx_destruct;
@property(nonatomic) double contribution; // @synthesize contribution=_contribution;
@property(nonatomic) _Bool invisible; // @synthesize invisible=_invisible;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *avatarPath; // @synthesize avatarPath=_avatarPath;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long rank; // @synthesize rank=_rank;

@end

