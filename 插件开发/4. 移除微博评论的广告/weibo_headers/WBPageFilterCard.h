//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray;

@interface WBPageFilterCard : WBPageCard
{
    unsigned long long _defaultIndex;
    NSArray *_filterItems;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

