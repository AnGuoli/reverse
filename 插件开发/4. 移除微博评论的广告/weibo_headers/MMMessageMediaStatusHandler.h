//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEventHandler.h"

@class NSMutableArray;

@interface MMMessageMediaStatusHandler : MMEventHandler
{
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)postHandling:(id)arg1;
- (_Bool)databaseHandling:(id)arg1;
- (_Bool)preHandling;
- (void)dealloc;

@end

