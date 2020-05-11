//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, UILabel, XMPersonItem;

@interface XMUserPersonalView : UIView
{
    UIImageView *_zodiacIV;
    UILabel *_zodiacLB;
    UIImageView *_regionIV;
    UILabel *_regionLB;
    UIImageView *_genderIV;
    UILabel *_genderLB;
    NSDictionary *_zodiacDic;
    unsigned long long _type;
    XMPersonItem *_personItem;
}

+ (double)viewHeight;
@property(retain, nonatomic) XMPersonItem *personItem; // @synthesize personItem=_personItem;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *zodiacDic; // @synthesize zodiacDic=_zodiacDic;
@property(retain, nonatomic) UILabel *genderLB; // @synthesize genderLB=_genderLB;
@property(retain, nonatomic) UIImageView *genderIV; // @synthesize genderIV=_genderIV;
@property(retain, nonatomic) UILabel *regionLB; // @synthesize regionLB=_regionLB;
@property(retain, nonatomic) UIImageView *regionIV; // @synthesize regionIV=_regionIV;
@property(retain, nonatomic) UILabel *zodiacLB; // @synthesize zodiacLB=_zodiacLB;
@property(retain, nonatomic) UIImageView *zodiacIV; // @synthesize zodiacIV=_zodiacIV;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (void)setUserPersonalType:(unsigned long long)arg1;
- (void)customInit;
- (id)init;
- (void)dealloc;

@end

