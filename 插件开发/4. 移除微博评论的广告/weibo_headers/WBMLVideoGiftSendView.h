//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBMLVideoRepeatButton;
@protocol WBMLVideoGiftRepeatViewDelegate;

@interface WBMLVideoGiftSendView : UIView
{
    id <WBMLVideoGiftRepeatViewDelegate> _delegate;
    UIView *_backView;
    WBMLVideoRepeatButton *_normalButton;
    struct CGPoint _centerPoint;
}

@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(retain, nonatomic) WBMLVideoRepeatButton *normalButton; // @synthesize normalButton=_normalButton;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <WBMLVideoGiftRepeatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendNormalGift;
- (void)normalActionWithSender:(id)arg1;
- (void)dismiss;
- (void)showNormalButtonInView:(id)arg1 center:(struct CGPoint)arg2;
- (id)init;

@end

