//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class MovieSDKCinemaShowTimeDetail, MovieSDKDataListInfo;

@interface MovieSDKCinemaShowTime : MovieSDKDataBaseObject
{
    MovieSDKCinemaShowTimeDetail *_detail;
    MovieSDKDataListInfo *_activities;
    MovieSDKDataListInfo *_shows;
}

@property(retain, nonatomic) MovieSDKDataListInfo *shows; // @synthesize shows=_shows;
@property(retain, nonatomic) MovieSDKDataListInfo *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) MovieSDKCinemaShowTimeDetail *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

