//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIPickerView;

@protocol XMMAPickerViewImpl <NSObject>
- (_Bool)isValidForRow:(long long)arg1 inComponent:(long long)arg2 inPickerView:(UIPickerView *)arg3;
- (void)didSelect:(long long)arg1 component:(long long)arg2 inPickerView:(UIPickerView *)arg3;
- (NSString *)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (long long)numberOfRowInComponent:(long long)arg1;
- (long long)numberOfComponent;
- (NSString *)currentValue:(UIPickerView *)arg1;
- (void)setupInitialValue:(UIPickerView *)arg1;
@end

