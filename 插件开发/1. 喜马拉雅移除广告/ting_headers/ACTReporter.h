//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACTReporterPrivate;

@interface ACTReporter : NSObject
{
    ACTReporterPrivate *_reporter;
}

+ (id)SDKVersion;
@property(retain, nonatomic) ACTReporterPrivate *reporter; // @synthesize reporter=_reporter;
- (void).cxx_destruct;
- (_Bool)report;
- (id)initWithReporter:(id)arg1;
- (id)init;

@end

