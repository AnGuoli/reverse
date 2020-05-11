//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WBQuestionValueView : UIView
{
    NSString *_questionValueText;
    UIImageView *_separateLineView;
    UIView *_descTextBackgroundView;
    UILabel *_descTextView;
}

@property(retain, nonatomic) UILabel *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIView *descTextBackgroundView; // @synthesize descTextBackgroundView=_descTextBackgroundView;
@property(retain, nonatomic) UIImageView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(copy, nonatomic) NSString *questionValueText; // @synthesize questionValueText=_questionValueText;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

