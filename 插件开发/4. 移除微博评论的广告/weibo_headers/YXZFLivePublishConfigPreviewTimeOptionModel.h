//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

#import "YXZFLivePublishConfigPreviewTimeItemViewTitleProtocol-Protocol.h"

@class NSString;

@interface YXZFLivePublishConfigPreviewTimeOptionModel : YXModel <YXZFLivePublishConfigPreviewTimeItemViewTitleProtocol>
{
    long long _duration;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)content;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

