//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBMediaImageCompressSettings : NSObject
{
    unsigned long long _originalFileBytes;
    NSString *_originalFileMD5;
}

+ (void)fetchCompressSettingsForContentSource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *originalFileMD5; // @synthesize originalFileMD5=_originalFileMD5;
@property(nonatomic) unsigned long long originalFileBytes; // @synthesize originalFileBytes=_originalFileBytes;
- (void).cxx_destruct;
- (id)extraLogData;

@end

