//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MetaData : NSObject
{
    int _mv_type;
    int _movie_version;
    NSString *_course_name;
    NSString *_busi_id;
    NSString *_file_describe;
    long long _duration;
    long long _filesize;
    NSString *_time_create;
    NSString *_time_last_modi;
}

@property(copy, nonatomic) NSString *time_last_modi; // @synthesize time_last_modi=_time_last_modi;
@property(copy, nonatomic) NSString *time_create; // @synthesize time_create=_time_create;
@property(nonatomic) long long filesize; // @synthesize filesize=_filesize;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *file_describe; // @synthesize file_describe=_file_describe;
@property(copy, nonatomic) NSString *busi_id; // @synthesize busi_id=_busi_id;
@property(copy, nonatomic) NSString *course_name; // @synthesize course_name=_course_name;
@property(nonatomic) int movie_version; // @synthesize movie_version=_movie_version;
@property(nonatomic) int mv_type; // @synthesize mv_type=_mv_type;
- (void).cxx_destruct;

@end

