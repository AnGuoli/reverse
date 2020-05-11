//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSDictionary, NSString;

@interface WBPageNewsCard : WBPageCard
{
    NSString *_title;
    NSArray *_pics;
    NSString *_source;
    NSString *_forward;
    NSString *_time;
    NSDictionary *_titleInfo;
}

+ (Class)tableViewCellClass;
+ (Class)viewClass;
@property(retain, nonatomic) NSDictionary *titleInfo; // @synthesize titleInfo=_titleInfo;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *forward; // @synthesize forward=_forward;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)primaryKey;
- (_Bool)updateWithDictionary:(id)arg1;

@end

