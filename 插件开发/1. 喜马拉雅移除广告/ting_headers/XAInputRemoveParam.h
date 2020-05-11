//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString, XATextInputPlaceholderStyleParam, XATextInputStyleParam, XMMAUIComponentPosition;

@interface XAInputRemoveParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _password;
    _Bool _focus;
    _Bool _hide;
    _Bool _confirmHold;
    _Bool _fixed;
    _Bool _autoHeight;
    _Bool _showConfirmBar;
    NSString *_Id;
    NSString *_slaveId;
    NSString *_viewId;
    NSString *_type;
    NSString *_value;
    double _maxLength;
    XATextInputStyleParam *_style;
    XMMAUIComponentPosition *_position;
    double _cursorSpacing;
    long long _cursor;
    NSString *_placeholder;
    XATextInputPlaceholderStyleParam *_placeholderStyle;
    NSString *_confirmType;
    double _selectionStart;
    double *_selectionEnd;
    double *_adjustPosition;
    NSString *_cb;
}

@property(copy, nonatomic) NSString *cb; // @synthesize cb=_cb;
@property(nonatomic) _Bool showConfirmBar; // @synthesize showConfirmBar=_showConfirmBar;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(nonatomic) _Bool fixed; // @synthesize fixed=_fixed;
@property(nonatomic) double *adjustPosition; // @synthesize adjustPosition=_adjustPosition;
@property(nonatomic) double *selectionEnd; // @synthesize selectionEnd=_selectionEnd;
@property(nonatomic) double selectionStart; // @synthesize selectionStart=_selectionStart;
@property(copy, nonatomic) NSString *confirmType; // @synthesize confirmType=_confirmType;
@property(nonatomic) _Bool confirmHold; // @synthesize confirmHold=_confirmHold;
@property(retain, nonatomic) XATextInputPlaceholderStyleParam *placeholderStyle; // @synthesize placeholderStyle=_placeholderStyle;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(nonatomic) _Bool focus; // @synthesize focus=_focus;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) double cursorSpacing; // @synthesize cursorSpacing=_cursorSpacing;
@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(retain, nonatomic) XATextInputStyleParam *style; // @synthesize style=_style;
@property(nonatomic) _Bool password; // @synthesize password=_password;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

