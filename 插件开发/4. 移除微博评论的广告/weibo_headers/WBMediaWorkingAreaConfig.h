//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBViewController;

@interface WBMediaWorkingAreaConfig : NSObject
{
    WBViewController *_controller;
}

@property(nonatomic) __weak WBViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (double)baseScoreForOption:(unsigned long long)arg1;
- (struct CGRect)workingAreaFrame;
- (id)initWithController:(id)arg1;

@end

