//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBNoteRewardAlertViewConfig : NSObject
{
    struct {
        double A;
        double B;
        double C;
        double D;
        double E;
        double F;
        double G;
    } _fontSize;
    CDStruct_0a2bcddc _inputItems;
    CDStruct_fa2e6727 _iconSize;
    CDStruct_5c2041a3 _space;
}

@property(nonatomic) CDStruct_0a2bcddc inputItems; // @synthesize inputItems=_inputItems;
@property(nonatomic) CDStruct_fa2e6727 iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) CDStruct_a6fa95e6 fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) CDStruct_5c2041a3 space; // @synthesize space=_space;
- (void)initValues;
- (id)init;

@end

