//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTLoadAdRequestBaseData.h"

@class NSString;

@interface GDTLoadNativeExpressRequestData : GDTLoadAdRequestBaseData
{
    int _template_count;
    unsigned long long _actual_width;
    unsigned long long _actual_height;
    NSString *_nativeJsVer;
}

@property(nonatomic) int template_count; // @synthesize template_count=_template_count;
@property(copy, nonatomic) NSString *nativeJsVer; // @synthesize nativeJsVer=_nativeJsVer;
@property(nonatomic) unsigned long long actual_height; // @synthesize actual_height=_actual_height;
@property(nonatomic) unsigned long long actual_width; // @synthesize actual_width=_actual_width;
- (void).cxx_destruct;
- (id)toMap;
- (id)init;

@end

