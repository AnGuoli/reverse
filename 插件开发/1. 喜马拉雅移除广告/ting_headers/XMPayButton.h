//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIFont, UILabel;

@interface XMPayButton : UIView
{
    _Bool _touchPointInside;
    long long _state;
    UIFont *_font;
    NSMutableArray *_titleArray;
    NSMutableArray *_titleColorArray;
    NSMutableArray *_backgroundColorArray;
    NSMutableArray *_indicatorArray;
    UILabel *_title;
    UIView *_currentIndicator;
    UIView *_indicatorContainer;
    SEL _selector;
    id _target;
}

@property(nonatomic) _Bool touchPointInside; // @synthesize touchPointInside=_touchPointInside;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) UIView *indicatorContainer; // @synthesize indicatorContainer=_indicatorContainer;
@property(retain, nonatomic) UIView *currentIndicator; // @synthesize currentIndicator=_currentIndicator;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *indicatorArray; // @synthesize indicatorArray=_indicatorArray;
@property(retain, nonatomic) NSMutableArray *backgroundColorArray; // @synthesize backgroundColorArray=_backgroundColorArray;
@property(retain, nonatomic) NSMutableArray *titleColorArray; // @synthesize titleColorArray=_titleColorArray;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)array:(id)arg1 withObject:(id)arg2 onState:(long long)arg3;
- (id)objectFromArray:(id)arg1 withState:(long long)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 withSelector:(SEL)arg2;
- (void)setIndicatorView:(id)arg1 forState:(long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(long long)arg2;
- (void)setTitle:(id)arg1 forState:(long long)arg2;
- (void)setIndicatorState:(long long)arg1;
- (void)indicatorStopAnimation;
- (void)indicatorAnimating;
- (void)layoutSubviews;
- (void)dealloc;

@end

