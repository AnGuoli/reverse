//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RWAlertView;

@interface XMRWAlertView : UIView
{
    _Bool _backgroundTouchDismissEnable;
    _Bool _autoDismissEnable;
    RWAlertView *_alert;
}

@property(nonatomic) _Bool autoDismissEnable; // @synthesize autoDismissEnable=_autoDismissEnable;
@property(nonatomic) _Bool backgroundTouchDismissEnable; // @synthesize backgroundTouchDismissEnable=_backgroundTouchDismissEnable;
@property(retain, nonatomic) RWAlertView *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)dismiss;
- (void)didTapDismiss:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

