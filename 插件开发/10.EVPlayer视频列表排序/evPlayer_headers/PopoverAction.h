//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PopoverAction : NSObject
{
    UIImage *_image;
    NSString *_title;
    CDUnknownBlockType _handler;
}

+ (id)actionWithImage:(id)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

