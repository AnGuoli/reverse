//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView, WBXCustomActionSheet, WBXCustomActionSheetItem;

@interface WBXCustomActionSheetCancelButton : UIButton
{
    WBXCustomActionSheetItem *_actionItem;
    WBXCustomActionSheet *_sheet;
    UIView *_topSeperater;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) UIView *topSeperater; // @synthesize topSeperater=_topSeperater;
@property(nonatomic) __weak WBXCustomActionSheet *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) WBXCustomActionSheetItem *actionItem; // @synthesize actionItem=_actionItem;
- (void).cxx_destruct;
- (void)buttonClicked;

@end

