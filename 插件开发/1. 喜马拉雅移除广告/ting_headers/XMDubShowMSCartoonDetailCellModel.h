//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowMSCartoonDetailCellModel : XMModel
{
    _Bool _hasDubbed;
    unsigned long long _chapterId;
    NSString *_name;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(nonatomic) _Bool hasDubbed; // @synthesize hasDubbed=_hasDubbed;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long chapterId; // @synthesize chapterId=_chapterId;
- (void).cxx_destruct;

@end

