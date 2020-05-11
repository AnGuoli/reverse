//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActivityItemSource-Protocol.h"
#import "WBVideoDebugConsoleViewControllerDelegate-Protocol.h"
#import "WBVideoDebugFilterViewControllerDelegate-Protocol.h"
#import "WBVideoDebugLogDetailViewControllerDelegate-Protocol.h"
#import "WBVideoDebugSettingsViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UIWindow, WBVideoDebugConsole, WBVideoDebugFilterViewController, WBVideoDebugFloatingConsoleViewController, WBVideoDebugFullscreenConsoleViewController;

@interface WBVideoDebugger : NSObject <WBVideoDebugConsoleViewControllerDelegate, WBVideoDebugFilterViewControllerDelegate, WBVideoDebugLogDetailViewControllerDelegate, WBVideoDebugSettingsViewControllerDelegate, UIActivityItemSource>
{
    _Bool _logEnabled;
    WBVideoDebugConsole *_console;
    long long _consolePresentationStyle;
    UIWindow *_floatingWindow;
    WBVideoDebugFullscreenConsoleViewController *_fullscreenController;
    WBVideoDebugFloatingConsoleViewController *_floatingController;
    WBVideoDebugFilterViewController *_sourceFilterViewController;
    WBVideoDebugFilterViewController *_categoryFilterViewController;
    WBVideoDebugFilterViewController *_levelFilterViewController;
    NSMutableArray *_presentingViewControllers;
    NSMutableArray *_logEnableCallBackBlocks;
    NSMutableSet *_currentSource;
    NSMutableArray *_modes;
}

+ (void)addConsoleModeProvider:(CDUnknownBlockType)arg1;
+ (id)sharedDebugger;
+ (void)addLogEnableCallBackForWBLiveKit;
+ (void)addLogEnableCallBackForWBVideoKit;
@property(retain, nonatomic) NSMutableArray *modes; // @synthesize modes=_modes;
@property(retain, nonatomic) NSMutableSet *currentSource; // @synthesize currentSource=_currentSource;
@property(retain, nonatomic) NSMutableArray *logEnableCallBackBlocks; // @synthesize logEnableCallBackBlocks=_logEnableCallBackBlocks;
@property(retain, nonatomic) NSMutableArray *presentingViewControllers; // @synthesize presentingViewControllers=_presentingViewControllers;
@property(retain, nonatomic) WBVideoDebugFilterViewController *levelFilterViewController; // @synthesize levelFilterViewController=_levelFilterViewController;
@property(retain, nonatomic) WBVideoDebugFilterViewController *categoryFilterViewController; // @synthesize categoryFilterViewController=_categoryFilterViewController;
@property(retain, nonatomic) WBVideoDebugFilterViewController *sourceFilterViewController; // @synthesize sourceFilterViewController=_sourceFilterViewController;
@property(retain, nonatomic) WBVideoDebugFloatingConsoleViewController *floatingController; // @synthesize floatingController=_floatingController;
@property(retain, nonatomic) WBVideoDebugFullscreenConsoleViewController *fullscreenController; // @synthesize fullscreenController=_fullscreenController;
@property(retain, nonatomic) UIWindow *floatingWindow; // @synthesize floatingWindow=_floatingWindow;
@property(nonatomic) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(nonatomic) long long consolePresentationStyle; // @synthesize consolePresentationStyle=_consolePresentationStyle;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)videoDebugSettingsViewControllerDidCancel:(id)arg1;
- (void)videoDebugLogDetailViewDidPressNextButton:(id)arg1;
- (void)videoDebugLogDetailViewDidPressPreviousButton:(id)arg1;
- (void)videoDebugLogDetailViewControllerDidCancel:(id)arg1;
- (id)itemRelativeToItem:(id)arg1 distance:(long long)arg2;
- (void)videoConsoleViewController:(id)arg1 didSelectLogItem:(id)arg2;
- (void)videoConsoleViewController:(id)arg1 didPerformActionWithType:(long long)arg2 sender:(id)arg3;
- (void)videoDebugFilterViewController:(id)arg1 didFinishWithSelectedOptions:(id)arg2 selectedIndexSet:(id)arg3;
- (void)videoDebugFilterViewControllerDidCancel:(id)arg1;
- (void)_setConsoleFilterLevels:(id)arg1;
- (void)_setConsoleFilterCategories:(id)arg1;
- (id)availableCategoryFilterOptionsForSources:(id)arg1;
- (id)availableCategoryFilterOptionsForSource:(id)arg1;
- (id)availableCategoryFilterOptionsForLive;
- (id)availableCategoryFilterOptionsForVideo;
- (id)availableCategoryFilterOptions;
- (id)availableSourceFilterOptions;
- (void)askForWarningAndErrorFilters;
- (void)askForModes;
- (void)_setConsoleMode:(id)arg1;
- (void)askForResetFilters;
- (void)share;
- (void)debugSettings;
- (void)showSettingsActions;
- (void)_presentViewControllerInFloatingWindow:(id)arg1;
- (void)_dissmissViewControllerInFloatingWindow:(id)arg1;
@property(readonly, nonatomic) WBVideoDebugConsole *console; // @synthesize console=_console;
- (void)addLogEnableCallBackBlock:(CDUnknownBlockType)arg1;
- (void)_didUpdateLogEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

