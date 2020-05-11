//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSDictionary, NSString, XMMAUIComponentPosition;

@interface XAAnimViewUpdateParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _loop;
    _Bool _autoPlay;
    NSString *_gesture;
    NSString *_hide;
    NSString *_sanId;
    NSString *_slaveId;
    NSString *_viewId;
    XMMAUIComponentPosition *_position;
    NSDictionary *_style;
    NSString *_path;
    NSString *_action;
    NSString *_parentId;
}

@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *sanId; // @synthesize sanId=_sanId;
@property(copy, nonatomic) NSString *hide; // @synthesize hide=_hide;
@property(copy, nonatomic) NSString *gesture; // @synthesize gesture=_gesture;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

