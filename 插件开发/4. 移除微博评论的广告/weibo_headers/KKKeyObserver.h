//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface KKKeyObserver : NSObject
{
    NSMutableDictionary *_children;
    NSMutableArray *_callbacks;
}

- (void).cxx_destruct;
- (void)changeKeys:(id)arg1 idx:(int)arg2 callbacks:(id)arg3;
- (void)remove:(id)arg1 idx:(int)arg2 func:(CDUnknownBlockType)arg3 jsFunction:(id)arg4 context:(void *)arg5;
- (void)add:(id)arg1 idx:(int)arg2 cb:(id)arg3;

@end

