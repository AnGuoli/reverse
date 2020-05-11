//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"

@class NSArray, NSMutableSet, NSString, UIImageView, WBTableView, WBTimeRecordItem, WBTimeRecorderDebugDataItem;
@protocol WBMediaAutoPlayProviderDataModel;

@interface WBTableViewCell : UITableViewCell <WBMediaAutoPlaySourceViewProvider>
{
    WBTableView *owner;
    _Bool reused;
    _Bool _accessibilityIsFocused;
    UIImageView *accessoryCustomView_;
    _Bool _accessibilityDisablesContentProvider;
    _Bool _supportRecordTime;
    NSMutableSet *_reuseObservers;
}

+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2 identifier:(id)arg3 userInfo:(id)arg4;
+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2 identifier:(id)arg3 userInfo:(id)arg4 needDefaultSkin:(_Bool)arg5;
+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2 identifier:(id)arg3;
+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2 identifier:(id)arg3 needDefaultSkin:(_Bool)arg4;
+ (id)reusableCellOfTableView:(id)arg1 identifier:(id)arg2;
+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2 userInfo:(id)arg3;
+ (id)reusableCellOfTableView:(id)arg1 style:(long long)arg2;
+ (id)reusableCellOfTableView:(id)arg1 userInfo:(id)arg2;
+ (id)reusableCellOfTableView:(id)arg1;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
+ (id)contextOfDataObject:(id)arg1 tableView:(id)arg2;
+ (double)rowHeightOfDataObject:(id)arg1;
+ (id)reusableCellOfMediaTableViewProxy:(id)arg1 style:(long long)arg2 identifier:(id)arg3 needDefaultSkin:(_Bool)arg4;
+ (id)reusableCellOfMediaTableViewProxy:(id)arg1 userInfo:(id)arg2;
+ (id)reusableCellOfMediaTableViewProxy:(id)arg1;
+ (double)rowHeightOfDataObject:(id)arg1 mediaTableViewProxy:(id)arg2;
@property(retain, nonatomic) NSMutableSet *reuseObservers; // @synthesize reuseObservers=_reuseObservers;
@property(nonatomic) _Bool supportRecordTime; // @synthesize supportRecordTime=_supportRecordTime;
@property(nonatomic) _Bool accessibilityDisablesContentProvider; // @synthesize accessibilityDisablesContentProvider=_accessibilityDisablesContentProvider;
@property(readonly, nonatomic) _Bool reused; // @synthesize reused;
@property(readonly, nonatomic) __weak WBTableView *owner; // @synthesize owner;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeReuseObserver:(id)arg1;
- (void)addReuseObserver:(id)arg1;
- (void)prepareForReuse;
- (void)resetUIElements;
- (_Bool)useDefaultBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)tableUserInfo;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setReused:(_Bool)arg1;
- (void)_setOwner:(id)arg1;
- (_Bool)usesCustomSelectedBackgroundView;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImageView *accessoryCustomView; // @synthesize accessoryCustomView=accessoryCustomView_;
@property(retain, nonatomic) WBTimeRecorderDebugDataItem *debugItem; // @dynamic debugItem;
@property(retain, nonatomic) WBTimeRecordItem *recordItem;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityContentProvider;
- (id)accessibilityContentProviderForView:(id)arg1;
- (_Bool)accessibilityElementIsFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (id)viewWrappers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAutoPlayContainedSourceViewProviders;
@property(readonly) Class superclass;

@end

