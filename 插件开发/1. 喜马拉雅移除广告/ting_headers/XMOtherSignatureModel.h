//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface XMOtherSignatureModel : NSObject
{
    long long _trackId;
    long long _duration;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;

@end

