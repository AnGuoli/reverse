//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString, XMMAUIComponentPosition;

@interface XACanvasInsertParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _hide;
    _Bool _disableScroll;
    _Bool _gesture;
    NSString *_canvasId;
    NSString *_slaveId;
    XMMAUIComponentPosition *_position;
}

@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(nonatomic) _Bool gesture; // @synthesize gesture=_gesture;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

