//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WBResultSegment : NSObject
{
    int _iWidth;
    int _iHeight;
    int _iStride;
    NSData *_imageData;
}

@property(nonatomic) int iStride; // @synthesize iStride=_iStride;
@property(nonatomic) int iHeight; // @synthesize iHeight=_iHeight;
@property(nonatomic) int iWidth; // @synthesize iWidth=_iWidth;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;

@end

