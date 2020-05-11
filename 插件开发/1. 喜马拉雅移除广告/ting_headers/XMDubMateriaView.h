//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSMutableArray, UIImageView, UILabel, XMDubShowMaterial;

@interface XMDubMateriaView : UIView
{
    UIView *_contentView;
    CAGradientLayer *_contentGL;
    NSMutableArray *_headMArr;
    UILabel *_introLB;
    UIImageView *_arrowIV;
    XMDubShowMaterial *_material;
}

@property(retain, nonatomic) XMDubShowMaterial *material; // @synthesize material=_material;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(retain, nonatomic) UILabel *introLB; // @synthesize introLB=_introLB;
@property(retain, nonatomic) NSMutableArray *headMArr; // @synthesize headMArr=_headMArr;
@property(retain, nonatomic) CAGradientLayer *contentGL; // @synthesize contentGL=_contentGL;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)uploadTextMessage;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

