//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataAsyncableObject.h"

@class MovieSDKDataListInfo, NSString;

@interface MovieSDKProfileMovieListInfo : MovieSDKDataAsyncableObject
{
    NSString *_show_name;
    NSString *_link;
    NSString *_more_text;
    MovieSDKDataListInfo *_list;
}

@property(retain, nonatomic) MovieSDKDataListInfo *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *more_text; // @synthesize more_text=_more_text;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *show_name; // @synthesize show_name=_show_name;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

