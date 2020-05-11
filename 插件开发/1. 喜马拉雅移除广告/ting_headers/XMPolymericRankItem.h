//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSMutableArray, NSString, NSURL;

@interface XMPolymericRankItem : NSObject <XMTableCellModelProtocol>
{
    long long _rankClusterId;
    NSString *_totalTitle;
    NSString *_title;
    NSString *_subtitle;
    NSString *_coverPath;
    NSURL *_headBanner;
    NSMutableArray *_rankList;
}

@property(retain, nonatomic) NSMutableArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) NSURL *headBanner; // @synthesize headBanner=_headBanner;
@property(copy, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *totalTitle; // @synthesize totalTitle=_totalTitle;
@property(nonatomic) long long rankClusterId; // @synthesize rankClusterId=_rankClusterId;
- (void).cxx_destruct;
- (void)updatePolymericRankItemFromDict:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

