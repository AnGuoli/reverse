//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBWebViewConsoleInputView;

@protocol WBWebViewConsoleInputViewDelegate <NSObject>
- (void)consoleInputView:(WBWebViewConsoleInputView *)arg1 didCommitCommand:(NSString *)arg2;
- (void)consoleInputViewDidBeginEditing:(WBWebViewConsoleInputView *)arg1;
- (void)consoleInputViewHeightChanged:(WBWebViewConsoleInputView *)arg1;
@end

