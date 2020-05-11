//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KKPageDocument-Protocol.h"

@class KKViewContext, NSMutableDictionary;

@interface KKPageDocument : NSObject <KKPageDocument>
{
    NSMutableDictionary *_elements;
    KKViewContext *_viewContext;
}

@property(retain, nonatomic) KKViewContext *viewContext; // @synthesize viewContext=_viewContext;
- (void).cxx_destruct;
- (void)setElement:(id)arg1 forElementId:(id)arg2;
- (id)elementById:(id)arg1;
- (void)off:(id)arg1 name:(id)arg2;
- (void)on:(id)arg1 name:(id)arg2 fn:(id)arg3;
- (void)emit:(id)arg1 name:(id)arg2 data:(id)arg3;
- (void)set:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)after:(id)arg1 pid:(id)arg2;
- (void)before:(id)arg1 pid:(id)arg2;
- (void)remove:(id)arg1;
- (void)add:(id)arg1 pid:(id)arg2;
- (void)recycle:(id)arg1;
- (void)create:(id)arg1 elementId:(id)arg2;
- (void)recycle;

@end

