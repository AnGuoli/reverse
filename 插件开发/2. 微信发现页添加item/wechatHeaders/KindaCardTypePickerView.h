//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKCardTypePickerView-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class MMKCardTypePickerViewOnSelectCallback, MMKViewOnClickCallback, NSArray, NSString, WCBizPickerView, WCUITextField;

@interface KindaCardTypePickerView : KindaView <MMKCardTypePickerView, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, UITextFieldDelegate>
{
    WCBizPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSArray *m_options;
    MMKCardTypePickerViewOnSelectCallback *m_callback;
    MMKViewOnClickCallback *m_onClickCallback;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)select:(int)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (id)getView;
- (void)setHint:(id)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

