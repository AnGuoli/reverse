//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RNKSongMessage : NSObject
{
    NSString *_name;
    id _pbModel;
}

+ (id)messageWithName:(id)arg1 dict:(id)arg2;
+ (id)messageWithName:(id)arg1 pbModel:(id)arg2;
@property(retain, nonatomic) id pbModel; // @synthesize pbModel=_pbModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)serializePBModel;
- (id)initWithName:(id)arg1 dict:(id)arg2;
- (id)initWithName:(id)arg1 pbModel:(id)arg2;

@end

