//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString, YXLiveCommentMessageModel, YXLiveCommentStyleModel, YXTextLayout;

@interface YXLiveCommentModel : NSObject
{
    _Bool _isShowAvator;
    _Bool _hadShownTaskCell;
    YXLiveCommentMessageModel *_message;
    YXLiveCommentStyleModel *_style;
    long long _type;
    NSString *_title;
    NSString *_scheme;
    NSString *_icon;
    NSMutableAttributedString *_text;
    YXTextLayout *_textLayout;
    double _textBoundingWidth;
    double _textBoundingHeight;
    double _createTime;
    NSString *_commonExposureID;
    NSString *_commonClickID;
}

@property(copy, nonatomic) NSString *commonClickID; // @synthesize commonClickID=_commonClickID;
@property(copy, nonatomic) NSString *commonExposureID; // @synthesize commonExposureID=_commonExposureID;
@property(nonatomic) _Bool hadShownTaskCell; // @synthesize hadShownTaskCell=_hadShownTaskCell;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isShowAvator; // @synthesize isShowAvator=_isShowAvator;
@property(nonatomic) double textBoundingHeight; // @synthesize textBoundingHeight=_textBoundingHeight;
@property(nonatomic) double textBoundingWidth; // @synthesize textBoundingWidth=_textBoundingWidth;
@property(retain, nonatomic) YXTextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) NSMutableAttributedString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) YXLiveCommentStyleModel *style; // @synthesize style=_style;
@property(retain, nonatomic) YXLiveCommentMessageModel *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

