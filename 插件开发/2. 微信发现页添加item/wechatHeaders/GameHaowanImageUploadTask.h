//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameHaowanUploadTask.h"

#import "ICdnComMgrExt-Protocol.h"

@class NSMutableArray, NSString;

@interface GameHaowanImageUploadTask : GameHaowanUploadTask <ICdnComMgrExt>
{
    float _lastPercent;
    NSString *_fileKey;
    NSMutableArray *_resIds;
    unsigned long long _startUploadTime;
}

@property(nonatomic) unsigned long long startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(retain, nonatomic) NSMutableArray *resIds; // @synthesize resIds=_resIds;
@property(nonatomic) float lastPercent; // @synthesize lastPercent=_lastPercent;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
- (void).cxx_destruct;
- (void)trackEventStartUpload;
- (void)trackEventUploadFailed:(long long)arg1;
- (void)trackEventUploadSucceed;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)startNextImageUpload;
- (void)onStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

