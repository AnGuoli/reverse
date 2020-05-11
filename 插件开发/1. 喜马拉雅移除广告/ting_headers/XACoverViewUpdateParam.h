//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSDictionary, NSString, XMMAUIComponentPosition;

@interface XACoverViewUpdateParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_slaveId;
    NSString *_viewId;
    NSString *_parentId;
    NSString *_hide;
    NSString *_gesture;
    XMMAUIComponentPosition *_position;
    NSDictionary *_style;
    NSString *_text;
    NSString *_scrollTop;
    NSDictionary *_transition;
}

@property(retain, nonatomic) NSDictionary *transition; // @synthesize transition=_transition;
@property(copy, nonatomic) NSString *scrollTop; // @synthesize scrollTop=_scrollTop;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *gesture; // @synthesize gesture=_gesture;
@property(copy, nonatomic) NSString *hide; // @synthesize hide=_hide;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

