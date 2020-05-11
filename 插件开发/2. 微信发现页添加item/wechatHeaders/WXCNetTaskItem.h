//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol WXCNetWorkDelegate;

@interface WXCNetTaskItem : NSObject
{
    int _taskId;
    NSString *_taskTag;
    NSData *_taskData;
    id <WXCNetWorkDelegate> _delegate;
    NSObject *_backfillData;
    unsigned long long _sendTime;
}

@property(nonatomic) unsigned long long sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSObject *backfillData; // @synthesize backfillData=_backfillData;
@property(nonatomic) __weak id <WXCNetWorkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *taskData; // @synthesize taskData=_taskData;
@property(copy, nonatomic) NSString *taskTag; // @synthesize taskTag=_taskTag;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

