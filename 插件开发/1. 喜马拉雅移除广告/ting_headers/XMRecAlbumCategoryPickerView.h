//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView, UIToolbar;

@interface XMRecAlbumCategoryPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_pickView;
    UIToolbar *_comfirmToolbar;
    NSArray *_categories;
    CDUnknownBlockType _complete;
}

@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) UIToolbar *comfirmToolbar; // @synthesize comfirmToolbar=_comfirmToolbar;
@property(retain, nonatomic) UIPickerView *pickView; // @synthesize pickView=_pickView;
- (void).cxx_destruct;
- (void)setPickRow:(long long)arg1;
- (void)toolBarDoneClick;
- (void)updateloadWithCategories:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 categories:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

