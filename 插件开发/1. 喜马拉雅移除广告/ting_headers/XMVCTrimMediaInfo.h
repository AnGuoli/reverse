//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMVCTrimMediaInfo : NSObject
{
    float _trimIn;
    float _trimOut;
    float _duration;
    NSString *_path;
    NSString *_name;
    id _content;
}

@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float trimOut; // @synthesize trimOut=_trimOut;
@property(nonatomic) float trimIn; // @synthesize trimIn=_trimIn;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;

@end

