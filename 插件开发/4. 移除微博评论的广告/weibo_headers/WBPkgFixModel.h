//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBPkgFixModel : NSObject
{
    NSString *_patchID;
    NSString *_module;
    NSString *_contentURL;
    NSString *_MD5;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)objectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *patchID; // @synthesize patchID=_patchID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)isValidString:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

