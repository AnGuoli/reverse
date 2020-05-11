//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBArticleCopyrighInfo : WBModelObject
{
    unsigned long long _copyrightFlag;
    NSString *_copyrightScheme;
    NSString *_copyrightText;
}

@property(copy, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property(copy, nonatomic) NSString *copyrightScheme; // @synthesize copyrightScheme=_copyrightScheme;
@property(nonatomic) unsigned long long copyrightFlag; // @synthesize copyrightFlag=_copyrightFlag;
- (void).cxx_destruct;
- (void)updateWithArticleCopyrightInfo:(id)arg1;
- (id)toJSONDictionary;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

