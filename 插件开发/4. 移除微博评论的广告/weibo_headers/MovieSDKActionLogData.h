//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSString;

@interface MovieSDKActionLogData : MovieSDKDataBaseObject
{
    NSString *_uicode;
    NSString *_fid;
    NSString *_action_code;
    NSString *_ext_param;
}

@property(retain, nonatomic) NSString *ext_param; // @synthesize ext_param=_ext_param;
@property(retain, nonatomic) NSString *action_code; // @synthesize action_code=_action_code;
@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(retain, nonatomic) NSString *uicode; // @synthesize uicode=_uicode;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

