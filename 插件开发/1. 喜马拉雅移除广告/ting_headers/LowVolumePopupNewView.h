//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDPopupView.h"

@class IDButton, IDLabel;

@interface LowVolumePopupNewView : IDPopupView
{
    IDLabel *_labelLowVolumeMessage;
    IDButton *_buttonLowVolumePopupConfirm;
}

@property(retain) IDButton *buttonLowVolumePopupConfirm; // @synthesize buttonLowVolumePopupConfirm=_buttonLowVolumePopupConfirm;
@property(retain) IDLabel *labelLowVolumeMessage; // @synthesize labelLowVolumeMessage=_labelLowVolumeMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4 hmiProvider:(id)arg5;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end

