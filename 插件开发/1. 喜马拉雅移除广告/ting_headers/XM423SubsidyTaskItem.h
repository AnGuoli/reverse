//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XM423SubsidyTaskItem : XMModel
{
    _Bool _finish;
    _Bool _needShowAlert;
    long long _userId;
    long long _currentListeningTime;
    long long _requiredListenTimeInMinute;
    long long _taskId;
    long long _userTaskId;
    long long _taskType;
    NSString *_soundPatch;
}

@property(nonatomic) _Bool needShowAlert; // @synthesize needShowAlert=_needShowAlert;
@property(retain, nonatomic) NSString *soundPatch; // @synthesize soundPatch=_soundPatch;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) long long userTaskId; // @synthesize userTaskId=_userTaskId;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long requiredListenTimeInMinute; // @synthesize requiredListenTimeInMinute=_requiredListenTimeInMinute;
@property(nonatomic) long long currentListeningTime; // @synthesize currentListeningTime=_currentListeningTime;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

