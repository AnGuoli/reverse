//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCMessage.h"

@class NSNumber, NSString, SDLResult;

@interface SDLRPCResponse : SDLRPCMessage
{
}

@property(retain) NSString *info;
@property(retain) SDLResult *resultCode;
@property(retain) NSNumber *success;
@property(retain) NSNumber *correlationID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;

@end

