//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "XMBLTaskLoaderProtocol-Protocol.h"

@class NSString, XMBLTaskLoader;

@interface CALayer (XMBaseLayout) <XMBLTaskLoaderProtocol>
- (void)beginAddSubLayoutsAndHideUnused:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) XMBLTaskLoader *blTaskLoader;
- (id)blSubLayerNamed:(id)arg1 recursive:(_Bool)arg2;
- (void)blRemoveSublayerWithSearchName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

