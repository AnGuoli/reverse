//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMRecommendBaseModel : XMModel
{
    _Bool _inLinkRequest;
    NSArray *_item;
    NSString *_type;
    struct CGPoint _contentOffset;
}

@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) _Bool inLinkRequest; // @synthesize inLinkRequest=_inLinkRequest;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)removeItemObjectAtIndex:(unsigned long long)arg1;

@end

