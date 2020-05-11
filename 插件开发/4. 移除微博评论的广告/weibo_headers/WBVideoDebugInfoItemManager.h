//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBVideoDebugInfoItemManager : NSObject
{
    _Bool _debugInfoDisabled;
    NSArray *_allItemClasses;
    NSArray *_selectedItemClasses;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *selectedItemClasses; // @synthesize selectedItemClasses=_selectedItemClasses;
@property(nonatomic) _Bool debugInfoDisabled; // @synthesize debugInfoDisabled=_debugInfoDisabled;
- (void).cxx_destruct;
- (_Bool)_loadDebugInfoDisabledState;
- (void)selectItemClasses:(id)arg1;
- (id)_loadSavedSelectedItemClasses;
- (void)_saveSelectedItemClasses:(id)arg1;
- (id)defaultItemClasses;
@property(readonly, nonatomic) NSArray *currentItemClasses;
@property(readonly, nonatomic) NSArray *allItemClasses; // @synthesize allItemClasses=_allItemClasses;
- (id)init;
- (id)_defaultItemClasses;
- (id)_allItemClasses;

@end

