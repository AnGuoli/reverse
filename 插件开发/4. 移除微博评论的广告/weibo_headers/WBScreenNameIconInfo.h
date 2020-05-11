//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBScreenNameIconInterface-Protocol.h"

@class NSDictionary, NSString;

@interface WBScreenNameIconInfo : WBModelObject <WBScreenNameIconInterface>
{
    NSDictionary *_logs;
    double _w_h_ratio;
    NSString *_iconUrl;
    NSString *_scheme;
    NSString *_localIconImageName;
    NSString *_iconPressedUrl;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSString *iconPressedUrl; // @synthesize iconPressedUrl=_iconPressedUrl;
@property(retain, nonatomic) NSString *localIconImageName; // @synthesize localIconImageName=_localIconImageName;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) double w_h_ratio; // @synthesize w_h_ratio=_w_h_ratio;
@property(retain, nonatomic) NSDictionary *logs; // @synthesize logs=_logs;
- (void).cxx_destruct;
- (id)finalImage;
- (id)finalLocalImageName;
- (id)finalImageUrl;
- (id)validUrlTypeImageURL;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryWithValues;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

