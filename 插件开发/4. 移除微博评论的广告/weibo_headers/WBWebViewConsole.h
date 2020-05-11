//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WBWebViewConsoleUserPromptCompletionController;
@protocol WBWebViewConsoleHost;

@interface WBWebViewConsole : NSObject
{
    id <WBWebViewConsoleHost> _host;
    NSMutableArray *_consoleMessages;
    NSMutableArray *_consoleClearedMessages;
    WBWebViewConsoleUserPromptCompletionController *_completionController;
}

@property(retain, nonatomic) WBWebViewConsoleUserPromptCompletionController *completionController; // @synthesize completionController=_completionController;
@property(retain, nonatomic) NSMutableArray *consoleClearedMessages; // @synthesize consoleClearedMessages=_consoleClearedMessages;
@property(retain, nonatomic) NSMutableArray *consoleMessages; // @synthesize consoleMessages=_consoleMessages;
@property(nonatomic) __weak id <WBWebViewConsoleHost> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)addUserScriptToHost:(id)arg1;
- (void)storeCurrentSelectedElementWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSuggestionsForPrompt:(id)arg1 cursorIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postConsoleNotification:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)addMessage:(id)arg1;
@property(readonly, nonatomic) NSArray *clearedMessages;
@property(readonly, nonatomic) NSArray *messages;
- (void)reset;
- (void)softClearMessages;
- (void)clearMessages;
- (void)addMessage:(id)arg1 level:(long long)arg2 source:(long long)arg3 caller:(id)arg4;
- (void)addMessage:(id)arg1 type:(long long)arg2 level:(long long)arg3 source:(long long)arg4 url:(id)arg5 line:(long long)arg6 column:(long long)arg7;
- (void)addMessage:(id)arg1 type:(long long)arg2 level:(long long)arg3 source:(long long)arg4;
- (id)initWithHost:(id)arg1;
- (id)init;

@end

