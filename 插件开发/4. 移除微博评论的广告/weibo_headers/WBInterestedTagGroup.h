//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface WBInterestedTagGroup : WBModelObject
{
    _Bool _checked;
    _Bool _isUnVisible;
    _Bool _isPressedMoreButton;
    _Bool _isGroupTag;
    NSString *_tagID;
    NSString *_parentTagID;
    NSString *_tagName;
    NSArray *_subTags;
    NSString *_color;
    NSString *_picURL;
    double _cellHeight;
}

@property(nonatomic) _Bool isGroupTag; // @synthesize isGroupTag=_isGroupTag;
@property(nonatomic) _Bool isPressedMoreButton; // @synthesize isPressedMoreButton=_isPressedMoreButton;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isUnVisible; // @synthesize isUnVisible=_isUnVisible;
@property(copy, nonatomic) NSString *picURL; // @synthesize picURL=_picURL;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *subTags; // @synthesize subTags=_subTags;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *parentTagID; // @synthesize parentTagID=_parentTagID;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

