//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMVCSearchBar;

@protocol XMVCSearchBarDelegate <NSObject>

@optional
- (void)vcSearchBarCancelDidClick:(XMVCSearchBar *)arg1;
- (void)vcSearchBarClearDidClick:(XMVCSearchBar *)arg1;
- (void)vcSearchBarMicroPhoneDidClick:(XMVCSearchBar *)arg1;
- (void)vcSearchBarShouldBeginEditing:(XMVCSearchBar *)arg1;
- (void)vcSearchBarSearchButtonClicked:(XMVCSearchBar *)arg1;
- (void)vcSearchBar:(XMVCSearchBar *)arg1 textDidChanged:(NSString *)arg2 keyBoardInput:(_Bool)arg3;
@end

