//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XMAnchorCenterAction : NSObject
{
    NSString *_actionIcon;
    NSString *_actionName;
    NSString *_actionSubtitle;
    NSString *_actionCloseSubtitle;
    NSString *_actionKey;
    NSDictionary *_dict;
    NSString *_linkUrl;
}

@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) NSString *actionKey; // @synthesize actionKey=_actionKey;
@property(retain, nonatomic) NSString *actionCloseSubtitle; // @synthesize actionCloseSubtitle=_actionCloseSubtitle;
@property(retain, nonatomic) NSString *actionSubtitle; // @synthesize actionSubtitle=_actionSubtitle;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *actionIcon; // @synthesize actionIcon=_actionIcon;
- (void).cxx_destruct;
- (void)updateFromConfigCenterKey:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

