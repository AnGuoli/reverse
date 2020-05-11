//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStickerModel.h"

@interface WBStaticDateStickerModel : WBStickerModel
{
    _Bool _initialize;
    long long _minWidth;
    double _defaultWidthRatio;
}

@property(nonatomic) _Bool initialize; // @synthesize initialize=_initialize;
@property(nonatomic) double defaultWidthRatio; // @synthesize defaultWidthRatio=_defaultWidthRatio;
@property(nonatomic) long long minWidth; // @synthesize minWidth=_minWidth;
- (id)generatedDateTextView:(id)arg1;
- (void)registNewFont;
- (id)representWithDictionary;
- (void)loadMarketData:(id)arg1;
- (void)removeDateStickerImage:(id)arg1;
- (_Bool)isGenerated:(id)arg1;
- (id)dateStickerPath:(id)arg1;
- (void)removeAllDateSticker;
- (void)initializesConfigurationInformation;
- (_Bool)isZipDownload;
- (_Bool)isDownload;
- (id)init;

@end

