//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMVideoCropView;

@protocol XMVideoCropViewDelegate <NSObject>
- (void)didCropEnd:(XMVideoCropView *)arg1;
- (void)cropView:(XMVideoCropView *)arg1 didChangeLeftPosition:(CDStruct_1b6d18a9)arg2 rightPosition:(CDStruct_1b6d18a9)arg3;
@end

