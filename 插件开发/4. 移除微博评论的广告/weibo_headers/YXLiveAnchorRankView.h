//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface YXLiveAnchorRankView : UIView
{
    NSString *_rank;
    UILabel *_unitNumLabel;
    UILabel *_tenNumLabel;
    UILabel *_hundNumLabel;
    UILabel *_rankLabel;
}

@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UILabel *hundNumLabel; // @synthesize hundNumLabel=_hundNumLabel;
@property(retain, nonatomic) UILabel *tenNumLabel; // @synthesize tenNumLabel=_tenNumLabel;
@property(retain, nonatomic) UILabel *unitNumLabel; // @synthesize unitNumLabel=_unitNumLabel;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)updateRank:(id)arg1;
- (void)layout;
- (void)buildUI;
- (id)initWithRank:(id)arg1;

@end

