//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSMutableArray, NSNumber;

@interface SDLCreateInteractionChoiceSet : SDLRPCRequest
{
}

@property(retain) NSMutableArray *choiceSet;
@property(retain) NSNumber *interactionChoiceSetID;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

