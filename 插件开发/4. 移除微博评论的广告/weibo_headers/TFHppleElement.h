//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TFHppleElement : NSObject
{
    NSDictionary *node;
    _Bool isXML;
    NSString *encoding;
    TFHppleElement *parent;
}

+ (id)hppleElementWithNode:(id)arg1 isXML:(_Bool)arg2 withEncoding:(id)arg3;
@property(nonatomic) TFHppleElement *parent; // @synthesize parent;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)searchWithXPathQuery:(id)arg1;
- (id)text;
- (id)firstTextChild;
- (id)firstChildWithClassName:(id)arg1;
- (id)childrenWithClassName:(id)arg1;
- (id)firstChildWithTagName:(id)arg1;
- (id)childrenWithTagName:(id)arg1;
- (_Bool)isTextNode;
- (_Bool)hasChildren;
- (id)description;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) TFHppleElement *firstChild;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, copy, nonatomic) NSString *tagName;
@property(readonly, copy, nonatomic) NSString *content;
@property(readonly, copy, nonatomic) NSString *raw;
- (id)initWithNode:(id)arg1 isXML:(_Bool)arg2 withEncoding:(id)arg3;

@end

