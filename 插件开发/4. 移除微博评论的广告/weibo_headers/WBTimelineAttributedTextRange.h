//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBTimelineAttributedTextRange : NSObject
{
    unsigned long long _mode;
    unsigned long long _location;
    unsigned long long _length;
    NSString *_content;
    id _contentAttachment;
}

+ (id)rangeWithMode:(unsigned long long)arg1 andLocation:(unsigned long long)arg2;
@property(retain, nonatomic) id contentAttachment; // @synthesize contentAttachment=_contentAttachment;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

