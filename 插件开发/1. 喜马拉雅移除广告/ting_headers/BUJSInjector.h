//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface BUJSInjector : NSObject
{
    NSMutableOrderedSet *_rules;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableOrderedSet *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;
- (void)injectScriptInWebView:(id)arg1;
- (void)removeAllScript;
- (void)removeScriptWithKey:(id)arg1;
- (void)addInjectRuleWithScript:(id)arg1 regex:(id)arg2 key:(id)arg3;
- (id)init;

@end

