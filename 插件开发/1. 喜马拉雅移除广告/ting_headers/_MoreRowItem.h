//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface _MoreRowItem : NSObject
{
    UIImage *_image;
    NSString *_imageStr;
    NSString *_detailStr;
    UIColor *_detailColor;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(copy, nonatomic) NSString *imageStr; // @synthesize imageStr=_imageStr;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)dealloc;

@end

