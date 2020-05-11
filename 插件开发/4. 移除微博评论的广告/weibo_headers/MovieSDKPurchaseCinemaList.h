//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class MovieSDKCinemaFilter, MovieSDKDataCity, MovieSDKDataListInfo, MovieSDKPurchaseHongBaoData, NSDictionary, NSString;

@interface MovieSDKPurchaseCinemaList : MovieSDKDataBaseObject
{
    MovieSDKDataCity *_city;
    MovieSDKDataListInfo *_date_cinema;
    MovieSDKCinemaFilter *_cinema_filter;
    NSDictionary *_cinema_dict;
    NSString *_film_id;
    MovieSDKPurchaseHongBaoData *_hongbaoData;
}

@property(retain, nonatomic) MovieSDKPurchaseHongBaoData *hongbaoData; // @synthesize hongbaoData=_hongbaoData;
@property(retain, nonatomic) NSString *film_id; // @synthesize film_id=_film_id;
@property(retain, nonatomic) NSDictionary *cinema_dict; // @synthesize cinema_dict=_cinema_dict;
@property(retain, nonatomic) MovieSDKCinemaFilter *cinema_filter; // @synthesize cinema_filter=_cinema_filter;
@property(retain, nonatomic) MovieSDKDataListInfo *date_cinema; // @synthesize date_cinema=_date_cinema;
@property(retain, nonatomic) MovieSDKDataCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

