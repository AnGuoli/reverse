//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface MGLogManager : NSObject
{
    NSString *_logBasePath;
    NSFileManager *_fileManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSString *logBasePath; // @synthesize logBasePath=_logBasePath;
- (void).cxx_destruct;
- (void)addLog:(id)arg1 fileName:(id)arg2;
- (id)init;

@end

