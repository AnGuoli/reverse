//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBContactRecentPickerView;

@protocol WBContactRecentPickerViewDelegate <NSObject>
- (void)contactRecentPickerView:(WBContactRecentPickerView *)arg1 didPressUserTarget:(id)arg2;
- (void)didEndSearchInContactsView:(WBContactRecentPickerView *)arg1;
- (void)didBeginSearchInContactsView:(WBContactRecentPickerView *)arg1;

@optional
- (_Bool)hidesNavigationBarWhileSearching;
- (void)contactRecentPickerView:(WBContactRecentPickerView *)arg1 didPressSearchSelectButton:(id)arg2;
@end

