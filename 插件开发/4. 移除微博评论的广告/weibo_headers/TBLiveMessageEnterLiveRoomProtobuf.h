//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSDictionary, NSString;

@interface TBLiveMessageEnterLiveRoomProtobuf : TBLiveJSONModel
{
    NSString *_userid;
    NSString *_nick;
    NSDictionary *_identify;
}

@property(retain, nonatomic) NSDictionary *identify; // @synthesize identify=_identify;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;

@end

