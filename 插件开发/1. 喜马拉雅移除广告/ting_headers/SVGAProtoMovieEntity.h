//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SVGAProtoMovieParams;

@interface SVGAProtoMovieEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audiosArray; // @dynamic audiosArray;
@property(readonly, nonatomic) unsigned long long audiosArray_Count; // @dynamic audiosArray_Count;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(retain, nonatomic) NSMutableDictionary *images; // @dynamic images;
@property(readonly, nonatomic) unsigned long long images_Count; // @dynamic images_Count;
@property(retain, nonatomic) SVGAProtoMovieParams *params; // @dynamic params;
@property(retain, nonatomic) NSMutableArray *spritesArray; // @dynamic spritesArray;
@property(readonly, nonatomic) unsigned long long spritesArray_Count; // @dynamic spritesArray_Count;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

