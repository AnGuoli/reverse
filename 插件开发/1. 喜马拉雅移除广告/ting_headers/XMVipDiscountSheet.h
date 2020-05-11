//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

@class NSArray, XMCoupon;

@interface XMVipDiscountSheet : XMBaseAlert
{
    NSArray *_channels;
    XMCoupon *_coupon;
    long long _albumId;
    CDUnknownBlockType _sheetDidClick;
    long long _selectedIndex;
}

+ (id)buttonImage;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType sheetDidClick; // @synthesize sheetDidClick=_sheetDidClick;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) XMCoupon *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (id)sheetItems;
- (void)tap:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)updateSubviewsForView:(id)arg1 withSheetItem:(id)arg2;
- (id)vipChannel;
- (id)buyButtonTitle;
- (void)initUI;
- (void)dealloc;

@end

